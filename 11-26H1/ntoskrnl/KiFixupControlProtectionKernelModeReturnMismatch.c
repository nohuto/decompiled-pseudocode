/*
 * XREFs of KiFixupControlProtectionKernelModeReturnMismatch @ 0x1405FD498
 * Callers:
 *     KiProcessControlProtectionFromKernelMode @ 0x14052ACCC (KiProcessControlProtectionFromKernelMode.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KiDecrementKernelShadowStack @ 0x14072D110 (KiDecrementKernelShadowStack.c)
 */

__int64 __fastcall KiFixupControlProtectionKernelModeReturnMismatch(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  unsigned __int64 v8; // rbp
  unsigned int v10; // r14d
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  bool v21; // [rsp+50h] [rbp+8h]

  _RBX = a4;
  _R12 = a3;
  v8 = (-(__int64)(a5 != 0) & 0x10) + 8;
  __asm { rdsspq  rdi }
  if ( (unsigned __int64)_RDI - v8 < a1 || (unsigned __int64)(a2 - (_QWORD)_RDI + 24) >= 0x80 )
    return 2147483653LL;
  v21 = KeDisableInterrupts();
  v10 = 0;
  do
  {
    KiDecrementKernelShadowStack();
    ++v10;
  }
  while ( v10 < v8 >> 3 );
  while ( (unsigned __int64)_RDI < a2 + 24 )
  {
    _RAX = *_RDI;
    _RCX = (char *)_RDI++ - v8;
    __asm { wrssq   qword ptr [rcx], rax }
  }
  _RSI = a2 - v8;
  if ( !_RBX )
    _RBX = _RSI + 24;
  if ( a5 )
  {
    _RAX = _RBX + 24;
    __asm { wrssq   qword ptr [rbx], rax }
    _RAX = 16LL;
    __asm
    {
      wrssq   qword ptr [rbx+8], r12
      wrssq   qword ptr [rbx+10h], rax
    }
  }
  else
  {
    __asm { wrssq   qword ptr [rbx], r12 }
  }
  __asm { wrssq   qword ptr [rsi], rbx }
  if ( v21 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v18 = *SchedulerAssist;
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange(SchedulerAssist, v18 & 0xFFDFFFFF, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return 0LL;
}
