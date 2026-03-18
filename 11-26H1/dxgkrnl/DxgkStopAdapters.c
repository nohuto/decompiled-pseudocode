/*
 * XREFs of DxgkStopAdapters @ 0x1401E0C3C
 * Callers:
 *     DpiKsrCallback @ 0x140252220 (DpiKsrCallback.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiKsrSetBootGraphicsInformation @ 0x1402529D8 (DpiKsrSetBootGraphicsInformation.c)
 *     DpiKsrStopAdapter @ 0x140252AB0 (DpiKsrStopAdapter.c)
 */

_QWORD *DxgkStopAdapters()
{
  _QWORD **v0; // rdi
  _QWORD *i; // rbx
  _QWORD *result; // rax
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  v0 = (_QWORD **)((char *)DXGGLOBAL::GetGlobal() + 808);
  for ( i = *v0; ; i = (_QWORD *)*i )
  {
    result = 0LL;
    if ( i != v0 )
      result = i;
    if ( !result )
      break;
    v3 = i;
    if ( i == v0 )
      v3 = 0LL;
    v4 = v3[27];
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 64);
      if ( v5 )
      {
        if ( *(_DWORD *)(v5 + 16) == 1953656900
          && *(_DWORD *)(v5 + 20) == 2
          && !*(_BYTE *)(v5 + 5144)
          && (unsigned int)DpiKsrStopAdapter(v4, 0LL) != -1073741637
          && (unsigned int)(dword_1401691D0 - 1) <= 1 )
        {
          DpiKsrSetBootGraphicsInformation();
        }
      }
    }
  }
  return result;
}
