/*
 * XREFs of CmpKeyEnumStackVerifyResumeContext @ 0x140B1C084
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x140944A98 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1408C12C0 (CmpGetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpKeyEnumStackVerifyResumeContext(__int64 a1)
{
  __int16 v1; // r11
  unsigned int v2; // r8d
  __int64 v3; // r10
  __int16 i; // dx
  __int64 KcbAtLayerHeight; // rax
  __int16 v6; // dx
  __int64 v7; // r9

  v1 = *(_WORD *)(a1 + 2);
  v2 = 0;
  v3 = a1;
  for ( i = 0; i <= v1; i = v6 + 1 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v3, i);
    if ( KcbAtLayerHeight != *(_QWORD *)(v7 + 24LL * v6 + 16)
      || *(_QWORD *)(KcbAtLayerHeight + 304) != *(_QWORD *)(v7 + 24LL * v6 + 8) )
    {
      return (unsigned int)-1073741735;
    }
  }
  return v2;
}
