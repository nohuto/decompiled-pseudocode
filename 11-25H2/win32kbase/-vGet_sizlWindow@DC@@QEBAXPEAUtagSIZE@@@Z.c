/*
 * XREFs of ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1400D8020
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x140159390 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vGet_sizlWindow(DC *this, struct tagSIZE *a2)
{
  __int64 v2; // rax
  struct tagSIZE v3; // rax

  v2 = *((_QWORD *)this + 62);
  if ( v2 && (*(_DWORD *)(v2 + 116) & 0x800) != 0 )
    v3 = *(struct tagSIZE *)((char *)this + 532);
  else
    v3 = (struct tagSIZE)*((_QWORD *)this + 64);
  *a2 = v3;
}
