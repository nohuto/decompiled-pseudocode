/*
 * XREFs of ?SetColor@CGlassColorizationResources@@QEAAXK@Z @ 0x18002056C
 * Callers:
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001F4A0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGlassColorizationResources::SetColor(CGlassColorizationResources *this, unsigned int a2)
{
  float v2[6]; // [rsp+0h] [rbp-18h]

  v2[0] = (float)(unsigned __int8)a2 / 255.0;
  v2[1] = (float)BYTE1(a2) / 255.0;
  v2[2] = (float)BYTE2(a2) / 255.0;
  *((_DWORD *)this + 8) = 1065353216;
  v2[3] = (float)HIBYTE(a2) / 255.0;
  *((_OWORD *)this + 1) = *(_OWORD *)v2;
  *((_DWORD *)this + 7) = 1065353216;
}
