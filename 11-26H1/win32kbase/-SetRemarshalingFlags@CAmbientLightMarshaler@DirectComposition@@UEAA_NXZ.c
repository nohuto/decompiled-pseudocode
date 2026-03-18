/*
 * XREFs of ?SetRemarshalingFlags@CAmbientLightMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402388F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CLightMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239A50 (-SetRemarshalingFlags@CLightMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CAmbientLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CAmbientLightMarshaler *this)
{
  _DWORD *v1; // rbx
  __int64 v3; // rcx
  char v4; // di
  __m128i si128; // [rsp+20h] [rbp-18h]

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 32) != 1.0 )
    *v1 |= 0x100u;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v3 = *((_QWORD *)this + 14) - si128.m128i_i64[0];
  if ( !v3 )
    v3 = *((_QWORD *)this + 15) - si128.m128i_i64[1];
  v4 = 0;
  if ( v3 )
    *v1 |= 0x80u;
  if ( DirectComposition::CLightMarshaler::SetRemarshalingFlags(this) || (*v1 & 0x180) != 0 )
    return 1;
  return v4;
}
