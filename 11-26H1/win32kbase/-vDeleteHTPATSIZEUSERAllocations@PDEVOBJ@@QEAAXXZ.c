/*
 * XREFs of ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1400C6384
 * Callers:
 *     vUnreferencePdevWorker @ 0x1400C5E70 (vUnreferencePdevWorker.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x1401ED754 (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     ?EngTryFreeUserMem@@YA_NPEAX@Z @ 0x140034444 (-EngTryFreeUserMem@@YA_NPEAX@Z.c)
 */

void __fastcall PDEVOBJ::vDeleteHTPATSIZEUSERAllocations(PDEVOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 CurrentProcessWin32Process; // rax

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v2 + 40) & 0x400000) != 0 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(v2 + 1776) + 56LL);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( v3 == CurrentProcessWin32Process )
    {
      EngTryFreeUserMem(*(void **)(*(_QWORD *)this + 2400LL));
      EngTryFreeUserMem(*(void **)(*(_QWORD *)this + 2408LL));
      EngTryFreeUserMem(*(void **)(*(_QWORD *)this + 2416LL));
    }
  }
}
