/*
 * XREFs of ?SetRemarshalingFlags@CSurfaceBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023A9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSurfaceBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CSurfaceBrushMarshaler *this)
{
  _DWORD *v1; // rax
  int *v2; // rdx
  int *v3; // r8
  int v4; // eax
  int *v5; // rdx
  int v6; // eax
  int *v7; // r8
  __m128i si128; // xmm0
  __int64 v9; // r9

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_BYTE *)this + 56) )
    *v1 |= 0x40u;
  if ( *((_QWORD *)this + 10) )
    *v1 |= 0x100u;
  v2 = (int *)((char *)this + 16);
  if ( *((float *)this + 26) == 0.5 )
    v2 = (int *)((char *)this + 16);
  else
    *v1 |= 0x400u;
  if ( *((float *)this + 27) == 0.5 )
  {
    v3 = v2;
  }
  else
  {
    v3 = (int *)((char *)this + 16);
    *v2 = *v1 | 0x800;
  }
  if ( *((_DWORD *)this + 28) == 2 )
    v3 = v2;
  else
    *v2 |= 0x1000u;
  if ( *((_DWORD *)this + 29) == 1 )
  {
    v5 = v3;
  }
  else
  {
    v4 = *v2;
    v5 = (int *)((char *)this + 16);
    *v3 = v4 | 0x2000;
  }
  if ( *((_QWORD *)this + 15) )
    *v3 |= 0x4000u;
  else
    v5 = v3;
  if ( *((_BYTE *)this + 128) )
  {
    v6 = *v3;
    v7 = (int *)((char *)this + 16);
    *v5 = v6 | 0x8000;
  }
  else
  {
    v7 = v5;
  }
  if ( *((_BYTE *)this + 129) )
    *v5 |= 0x10000u;
  else
    v7 = v5;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v9 = *(_QWORD *)((char *)this + 60) - si128.m128i_i64[0];
  if ( !v9 )
    v9 = *(_QWORD *)((char *)this + 68) - si128.m128i_i64[1];
  if ( v9 )
    *v7 = *v5 | 0x80;
  *v7 |= 0x200u;
  return 1;
}
