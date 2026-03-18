/*
 * XREFs of ?SetRemarshalingFlags@CEffectBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402391E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CEffectBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CEffectBrushMarshaler *this)
{
  char result; // al
  int *v2; // rdx
  int v3; // r8d

  result = 0;
  v2 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 7) )
    *v2 |= 0x40u;
  v3 = *v2;
  if ( *((_DWORD *)this + 16) != -1 )
  {
    v3 |= 0x80u;
    *v2 = v3;
  }
  if ( *((_QWORD *)this + 9) )
  {
    *v2 |= 0x100u;
    v3 = *v2;
  }
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  if ( (v3 & 0x1C0) != 0 || *((_QWORD *)this + 11) || *((_QWORD *)this + 14) )
    return 1;
  return result;
}
