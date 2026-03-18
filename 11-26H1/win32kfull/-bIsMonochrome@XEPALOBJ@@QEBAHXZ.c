/*
 * XREFs of ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x14019CB48
 * Callers:
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1400702E0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiMonoBitmap @ 0x14025EFD0 (NtGdiMonoBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::bIsMonochrome(XEPALOBJ *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *(_QWORD *)this;
  v2 = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 24) & 0x2000) != 0;
  return v2;
}
