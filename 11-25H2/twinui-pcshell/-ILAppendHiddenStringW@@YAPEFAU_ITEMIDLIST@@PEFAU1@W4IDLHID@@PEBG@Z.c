/*
 * XREFs of ?ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z @ 0x18066BFA4
 * Callers:
 *     ?CreatePlaceholderPidl@@YAJPEBGPEAPEAUIShellItem@@@Z @ 0x180667738 (-CreatePlaceholderPidl@@YAJPEBGPEAPEAUIShellItem@@@Z.c)
 *     ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x18066FFA0 (-SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z.c)
 *     _CacheAppIDInIDList @ 0x180671C30 (_CacheAppIDInIDList.c)
 *     _CacheAppOrderInIDList @ 0x180671D20 (_CacheAppOrderInIDList.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18009BEE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z @ 0x18066BF40 (-ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z.c)
 */

struct _ITEMIDLIST *__fastcall ILAppendHiddenStringW(ITEMIDLIST *a1, int a2, WCHAR *a3)
{
  struct _ITEMIDLIST *v6; // rdi
  int v7; // eax
  char v8; // bp
  int v9; // r13d
  unsigned int v10; // r14d
  HLOCAL v11; // rax
  const struct _HIDDENITEMID *v12; // rbx

  v6 = 0LL;
  v7 = lstrlenW(a3);
  v8 = 0;
  v9 = v7;
  v10 = 2 * v7 + 12;
  if ( v10 > 0xFFFF )
    goto LABEL_6;
  v11 = LocalAlloc(0x40u, (unsigned __int16)(2 * v7 + 12));
  v12 = (const struct _HIDDENITEMID *)v11;
  if ( !v11 )
    goto LABEL_6;
  *(_WORD *)v11 = v10;
  *((_DWORD *)v11 + 1) = a2;
  *((_WORD *)v11 + 4) = 2;
  if ( (int)StringCchCopyW((char *)v11 + 10, v9 + 1, (char *)a3) >= 0 )
  {
    v8 = 1;
    v6 = ILAppendHiddenID(a1, v12);
  }
  LocalFree(v12);
  if ( !v8 )
LABEL_6:
    ILFree(a1);
  return v6;
}
