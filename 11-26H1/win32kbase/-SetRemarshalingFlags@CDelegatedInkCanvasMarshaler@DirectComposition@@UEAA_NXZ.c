/*
 * XREFs of ?SetRemarshalingFlags@CDelegatedInkCanvasMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402390B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CDelegatedInkCanvasMarshaler::SetRemarshalingFlags(
        DirectComposition::CDelegatedInkCanvasMarshaler *this)
{
  _DWORD *v1; // rdx
  __int64 v3; // rcx
  __m128i si128; // [rsp+0h] [rbp-18h]

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 9) )
    *v1 |= 0x80u;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v3 = *((_QWORD *)this + 7) - si128.m128i_i64[0];
  if ( !v3 )
    v3 = *((_QWORD *)this + 8) - si128.m128i_i64[1];
  if ( v3 )
    *v1 |= 0x40u;
  return (*v1 & 0xC0) != 0;
}
