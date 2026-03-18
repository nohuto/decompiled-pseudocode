/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET2@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_TARGET2@@I@Z @ 0x1401CD8B4
 * Callers:
 *     ?DxgkDDisplayEnumInternal@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@D@Z @ 0x1401CDF60 (-DxgkDDisplayEnumInternal@@YAJPEAU_D3DKMT_DDISPLAY_ENUM2@@D@Z.c)
 *     ?DxgkDDisplayEnumCoreTranslate@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1403C2704 (-DxgkDDisplayEnumCoreTranslate@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_TARGET2,1>::AllocateElements(
        __int64 *a1,
        unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 1 )
  {
    v5 = a1 + 1;
    *a1 = (__int64)v5;
    if ( a2 )
      memset(v5, 0, 1096LL * a2);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 0x448 )
      return 0LL;
    *a1 = ExAllocatePool2(256LL, 1096LL * a2, 1265072196LL);
  }
  result = *a1;
  *((_DWORD *)a1 + 276) = a2;
  return result;
}
