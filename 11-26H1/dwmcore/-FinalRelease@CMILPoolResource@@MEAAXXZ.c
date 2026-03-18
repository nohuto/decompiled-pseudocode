/*
 * XREFs of ?FinalRelease@CMILPoolResource@@MEAAXXZ @ 0x1801B8CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMILPoolResource::FinalRelease(CMILPoolResource *this)
{
  void (__fastcall ***v2)(_QWORD, CMILPoolResource *); // rcx

  v2 = (void (__fastcall ***)(_QWORD, CMILPoolResource *))*((_QWORD *)this + 5);
  if ( v2 )
    (**v2)(v2, this);
}
