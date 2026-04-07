/*
 * XREFs of ?SetClearColor@CGlassColorizationResources@@QEAAXXZ @ 0x180020554
 * Callers:
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001F4A0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGlassColorizationResources::SetClearColor(CGlassColorizationResources *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
}
