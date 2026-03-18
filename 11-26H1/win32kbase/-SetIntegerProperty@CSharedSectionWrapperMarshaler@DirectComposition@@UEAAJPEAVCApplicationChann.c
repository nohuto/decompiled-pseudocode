/*
 * XREFs of ?SetIntegerProperty@CSharedSectionWrapperMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140247970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSharedSectionWrapperMarshaler::SetIntegerProperty(
        _DWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  __int64 result; // rax
  int v6; // r8d

  result = 0LL;
  *a5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    if ( v6 != 1 )
      return 3221225485LL;
    a1[17] = a4;
  }
  else
  {
    a1[16] = a4;
  }
  a1[4] &= ~0x40u;
  *a5 = 1;
  return result;
}
