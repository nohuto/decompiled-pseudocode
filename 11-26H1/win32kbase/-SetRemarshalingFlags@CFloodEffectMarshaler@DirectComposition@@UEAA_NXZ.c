/*
 * XREFs of ?SetRemarshalingFlags@CFloodEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239360
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402392A0 (-SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CFloodEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CFloodEffectMarshaler *this)
{
  __int64 v1; // rdx
  char v2; // di
  _DWORD *v3; // rbx
  __m128i si128; // [rsp+20h] [rbp-18h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v1 = *((_QWORD *)this + 32) - si128.m128i_i64[0];
  if ( !v1 )
    v1 = *((_QWORD *)this + 33) - si128.m128i_i64[1];
  v2 = 0;
  v3 = (_DWORD *)((char *)this + 16);
  if ( v1 )
    *v3 |= 0x400u;
  if ( DirectComposition::CFilterEffectMarshaler::SetRemarshalingFlags(this) || (*v3 & 0x400) != 0 )
    return 1;
  return v2;
}
