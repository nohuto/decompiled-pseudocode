/*
 * XREFs of ?SetClearColor@CGlassColorizationResources@@QEAAXXZ @ 0x18000F508
 * Callers:
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18000E520 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGlassColorizationResources::SetClearColor(CGlassColorizationResources *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
}
