/*
 * XREFs of ?SetRemarshalingFlags@CSpotLightMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023A7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPositionedLightMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239EE0 (-SetRemarshalingFlags@CPositionedLightMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CSpotLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CSpotLightMarshaler *this)
{
  _DWORD *v1; // rax
  int *v2; // rdx
  int *v3; // r9
  int *v4; // r8
  int *v5; // rdx
  __int64 v6; // r9
  char v7; // bl
  int *v8; // rdi
  __m128i si128; // xmm1
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 30) != 1.0 )
    *v1 |= 0x100u;
  if ( *((float *)this + 34) != 0.52359879 )
    *v1 |= 0x400u;
  v2 = (int *)((char *)this + 16);
  if ( *((float *)this + 39) == 1.0 )
    v2 = (int *)((char *)this + 16);
  else
    *v1 |= 0x1000u;
  if ( *((float *)this + 40) == 0.0 )
  {
    v3 = v2;
  }
  else
  {
    v3 = (int *)((char *)this + 16);
    *v2 = *v1 | 0x2000;
  }
  if ( *((float *)this + 41) == 0.0 )
    v3 = v2;
  else
    *v2 |= 0x4000u;
  if ( *((float *)this + 42) == 0.0 )
  {
    v4 = v3;
  }
  else
  {
    v4 = (int *)((char *)this + 16);
    *v3 = *v2 | 0x8000;
  }
  if ( *((float *)this + 46) == 1.5707964 )
    v4 = v3;
  else
    *v3 |= 0x20000u;
  if ( *((float *)this + 51) == 1.0 )
  {
    v5 = v4;
  }
  else
  {
    v5 = (int *)((char *)this + 16);
    *v4 = *v3 | 0x80000;
  }
  if ( *((float *)this + 52) == 0.0 )
    v5 = v4;
  else
    *v4 |= 0x100000u;
  v6 = *(_QWORD *)((char *)this + 124);
  if ( !v6 )
    v6 = *((unsigned int *)this + 33) - 3212836864LL;
  v7 = 0;
  if ( v6 )
  {
    v8 = (int *)((char *)this + 16);
    *v5 = *v4 | 0x200;
  }
  else
  {
    v8 = v5;
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v10 = *(_QWORD *)((char *)this + 140) - si128.m128i_i64[0];
  if ( !v10 )
    v10 = *(_QWORD *)((char *)this + 148) - si128.m128i_i64[1];
  if ( v10 )
    *v5 |= 0x800u;
  else
    v8 = v5;
  v11 = *(_QWORD *)((char *)this + 172);
  if ( !v11 )
    v11 = *((unsigned int *)this + 45) - 1120403456LL;
  if ( v11 )
    *v8 = *v5 | 0x10000;
  v12 = *(_QWORD *)((char *)this + 188) - si128.m128i_i64[0];
  if ( !v12 )
    v12 = *(_QWORD *)((char *)this + 196) - si128.m128i_i64[1];
  if ( v12 )
    *v8 |= 0x40000u;
  if ( DirectComposition::CPositionedLightMarshaler::SetRemarshalingFlags(this) || (*v8 & 0x1FFF00) != 0 )
    return 1;
  return v7;
}
