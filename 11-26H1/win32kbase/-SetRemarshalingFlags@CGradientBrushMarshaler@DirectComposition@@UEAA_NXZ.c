/*
 * XREFs of ?SetRemarshalingFlags@CGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402394C0
 * Callers:
 *     ?SetRemarshalingFlags@CLinearGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239A90 (-SetRemarshalingFlags@CLinearGradientBrushMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CRadialGradientBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239F30 (-SetRemarshalingFlags@CRadialGradientBrushMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGradientBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CGradientBrushMarshaler *this)
{
  char v1; // dl
  _DWORD *v2; // rax
  int *v3; // r8
  bool v4; // zf

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 7) )
    *v2 |= 0x40u;
  if ( *((_DWORD *)this + 16) )
    *v2 |= 0x80u;
  v3 = (int *)((char *)this + 16);
  if ( *((_DWORD *)this + 17) == 1 )
    v3 = (int *)((char *)this + 16);
  else
    *v2 |= 0x100u;
  if ( *((_DWORD *)this + 18) != 2 )
    *v3 = *v2 | 0x200;
  v4 = (*v3 & 0x3C0) == 0;
  *((_QWORD *)this + 12) = 0LL;
  if ( !v4 || *((_QWORD *)this + 11) )
    return 1;
  return v1;
}
