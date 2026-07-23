/*
 * XREFs of RtlpFcCreateAndAddFeatureFromUpdate @ 0x14077DC68
 * Callers:
 *     RtlpFcUpdateFeatureConfiguration @ 0x140B1BA58 (RtlpFcUpdateFeatureConfiguration.c)
 * Callees:
 *     RtlpFcUpdateFeature @ 0x140778270 (RtlpFcUpdateFeature.c)
 *     RtlpFcIsUpdateModifyingOrAddingFeature @ 0x14077DCCC (RtlpFcIsUpdateModifyingOrAddingFeature.c)
 *     RtlpFcDoesFeatureHaveUniqueState @ 0x14077FC68 (RtlpFcDoesFeatureHaveUniqueState.c)
 */

__int64 __fastcall RtlpFcCreateAndAddFeatureFromUpdate(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _DWORD *v4; // r9
  _DWORD **v5; // r11
  _DWORD *v6; // rcx
  _QWORD *v7; // r11
  __int64 v8; // rcx
  _DWORD *v9; // r10
  _QWORD *v10; // r11

  result = RtlpFcIsUpdateModifyingOrAddingFeature(a1, a2, a3, a1);
  if ( (_BYTE)result )
  {
    v6 = *v5;
    *(_OWORD *)v6 = 0LL;
    *v6 = *v4;
    v6[1] = (v6[1] ^ (v4[1] ^ v6[1]) & 0xF) & 0xFFFFFF7F;
    RtlpFcUpdateFeature(v6, (__int64)v4);
    result = RtlpFcDoesFeatureHaveUniqueState(*v7);
    if ( (_BYTE)result )
    {
      ++*v9;
      result = v8 + 16;
      *v10 = v8 + 16;
    }
  }
  return result;
}
