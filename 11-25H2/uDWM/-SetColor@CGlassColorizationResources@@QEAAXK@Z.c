/*
 * XREFs of ?SetColor@CGlassColorizationResources@@QEAAXK@Z @ 0x180071B58
 * Callers:
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18000E520 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGlassColorizationResources::SetColor(CGlassColorizationResources *this, int a2)
{
  float v2; // xmm0_4

  *((float *)this + 4) = flt_1800F9280[(unsigned __int8)a2] / 255.0;
  *((float *)this + 5) = flt_1800F9280[(unsigned __int64)(unsigned __int16)a2 >> 8] / 255.0;
  v2 = flt_1800F9280[BYTE2(a2)] / 255.0;
  *((_DWORD *)this + 7) = 1065353216;
  *((_DWORD *)this + 8) = 1065353216;
  *((float *)this + 6) = v2;
}
