/*
 * XREFs of ?SetIntegerProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140195080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::SetIntegerProperty(
        _DWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  __int64 result; // rax
  int v6; // r8d
  int v7; // r8d

  result = 0LL;
  *a5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return 3221225485LL;
      a1[20] = a4;
    }
    else
    {
      a1[19] = a4;
    }
  }
  else
  {
    a1[18] = a4;
  }
  a1[4] &= ~0x80u;
  *a5 = 1;
  return result;
}
