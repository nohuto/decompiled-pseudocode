/*
 * XREFs of ?SetRemarshalingFlags@CPointLightMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239D90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPositionedLightMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239EE0 (-SetRemarshalingFlags@CPositionedLightMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CPointLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CPointLightMarshaler *this)
{
  _DWORD *v1; // rax
  int *v2; // r8
  int *v3; // rdx
  int *v4; // rdi
  __int64 v5; // r8
  char v6; // bl
  __int64 v7; // r8
  __m128i si128; // [rsp+20h] [rbp-18h]

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 34) != 1.0 )
    *v1 |= 0x200u;
  if ( *((float *)this + 35) != 1.0 )
    *v1 |= 0x400u;
  v2 = (int *)((char *)this + 16);
  if ( *((float *)this + 36) == 0.0 )
    v2 = (int *)((char *)this + 16);
  else
    *v1 |= 0x800u;
  if ( *((float *)this + 37) == 0.0 )
  {
    v3 = v2;
  }
  else
  {
    v3 = (int *)((char *)this + 16);
    *v2 = *v1 | 0x1000;
  }
  if ( *((float *)this + 38) == 0.0 )
    v3 = v2;
  else
    *v2 |= 0x2000u;
  if ( *((float *)this + 42) == 0.0 )
  {
    v4 = v3;
  }
  else
  {
    v4 = (int *)((char *)this + 16);
    *v3 = *v2 | 0x8000;
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v5 = *((_QWORD *)this + 15) - si128.m128i_i64[0];
  if ( !v5 )
    v5 = *((_QWORD *)this + 16) - si128.m128i_i64[1];
  v6 = 0;
  if ( v5 )
    *v3 |= 0x100u;
  else
    v4 = v3;
  v7 = *(_QWORD *)((char *)this + 156);
  if ( !v7 )
    v7 = *((unsigned int *)this + 41) - 1120403456LL;
  if ( v7 )
    *v4 = *v3 | 0x4000;
  if ( DirectComposition::CPositionedLightMarshaler::SetRemarshalingFlags(this) || (*v4 & 0xFF00) != 0 )
    return 1;
  return v6;
}
