/*
 * XREFs of ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x140116E20
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401A5920 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vGet_sizlWindow(DC *this, struct tagSIZE *a2)
{
  __int64 v2; // rax
  BOOL v3; // r8d

  v2 = *((_QWORD *)this + 62);
  v3 = 0;
  if ( v2 )
    v3 = (*(_DWORD *)(v2 + 116) & 0x800) != 0;
  *a2 = *(struct tagSIZE *)((char *)this + (v3 ? 0x14 : 0) + 512);
}
