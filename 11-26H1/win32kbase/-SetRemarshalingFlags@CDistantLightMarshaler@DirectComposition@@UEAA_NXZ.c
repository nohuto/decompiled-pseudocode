/*
 * XREFs of ?SetRemarshalingFlags@CDistantLightMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239130
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPositionedLightMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239EE0 (-SetRemarshalingFlags@CPositionedLightMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CDistantLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CDistantLightMarshaler *this)
{
  _DWORD *v1; // rbx
  __int64 v2; // rdx
  char v3; // di
  __int64 v4; // rdx
  __m128i si128; // [rsp+20h] [rbp-18h]

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 37) != 1.0 )
    *v1 |= 0x400u;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v2 = *((_QWORD *)this + 15) - si128.m128i_i64[0];
  if ( !v2 )
    v2 = *((_QWORD *)this + 16) - si128.m128i_i64[1];
  v3 = 0;
  if ( v2 )
    *v1 |= 0x100u;
  v4 = *((_QWORD *)this + 17);
  if ( !v4 )
    v4 = *((unsigned int *)this + 36) - 3212836864LL;
  if ( v4 )
    *v1 |= 0x200u;
  if ( DirectComposition::CPositionedLightMarshaler::SetRemarshalingFlags(this) || (*v1 & 0x700) != 0 )
    return 1;
  return v3;
}
