/*
 * XREFs of ?SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x140240DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1401C1270 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CKeyframeAnimationMarshaler *this)
{
  float v2; // xmm0_4
  unsigned int v3; // eax
  char v4; // bl

  v2 = *((float *)this + 71);
  v3 = *((_DWORD *)this + 4) & 0xFFF60FFF;
  *((_DWORD *)this + 4) = v3;
  if ( v2 != 1.0 )
  {
    v3 &= ~0x20000u;
    *((_DWORD *)this + 4) = v3;
  }
  v4 = 0;
  if ( *((_DWORD *)this + 67) )
    *((_DWORD *)this + 4) = v3 & 0xFFFBFFFF;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 68) = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_QWORD *)this + 17) && *((_QWORD *)this + 30)
    || *((_QWORD *)this + 20)
    || *((_DWORD *)this + 67) )
  {
    return 1;
  }
  return v4;
}
