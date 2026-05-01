/*
 * XREFs of ?ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z @ 0x180692864
 * Callers:
 *     ?CreatePlaceholderPidl@@YAJPEBGPEAPEAUIShellItem@@@Z @ 0x18068DE48 (-CreatePlaceholderPidl@@YAJPEBGPEAPEAUIShellItem@@@Z.c)
 *     ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x180696C64 (-SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z.c)
 *     _CacheAppIDInIDList @ 0x1806988D4 (_CacheAppIDInIDList.c)
 *     _CacheAppOrderInIDList @ 0x1806989CC (_CacheAppOrderInIDList.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AAC98 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z @ 0x180692800 (-ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z.c)
 */

struct _ITEMIDLIST *__fastcall ILAppendHiddenStringW(ITEMIDLIST *a1, int a2, WCHAR *a3)
{
  struct _ITEMIDLIST *v6; // rdi
  int v7; // r13d
  char v8; // bp
  unsigned int v9; // eax
  HLOCAL v10; // rax
  const struct _HIDDENITEMID *v11; // rbx

  v6 = 0LL;
  v7 = lstrlenW(a3);
  v8 = 0;
  v9 = 2 * v7 + 12;
  if ( v9 > 0xFFFF )
    goto LABEL_6;
  v10 = LocalAlloc(0x40u, (unsigned __int16)v9);
  v11 = (const struct _HIDDENITEMID *)v10;
  if ( !v10 )
    goto LABEL_6;
  *(_WORD *)v10 = 2 * v7 + 12;
  *((_DWORD *)v10 + 1) = a2;
  *((_WORD *)v10 + 4) = 2;
  if ( (int)StringCchCopyW((char *)v10 + 10, v7 + 1, (char *)a3) >= 0 )
  {
    v8 = 1;
    v6 = ILAppendHiddenID(a1, v11);
  }
  LocalFree(v11);
  if ( !v8 )
LABEL_6:
    ILFree(a1);
  return v6;
}
