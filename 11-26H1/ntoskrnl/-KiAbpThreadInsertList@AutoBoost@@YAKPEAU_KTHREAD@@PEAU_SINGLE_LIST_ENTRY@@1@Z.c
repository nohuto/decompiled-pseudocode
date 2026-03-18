/*
 * XREFs of ?KiAbpThreadInsertList@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z @ 0x140430D9C
 * Callers:
 *     PsBoostThreadIoQoS @ 0x140205500 (PsBoostThreadIoQoS.c)
 *     ?KiAbpProcessBaseIoPriorityChangeInternal@AutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x140238390 (-KiAbpProcessBaseIoPriorityChangeInternal@AutoBoost@@YAXPEAU_KTHREAD@@K@Z.c)
 *     PsBoostThreadIoEx @ 0x1402468A0 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIo @ 0x1402BA700 (PsBoostThreadIo.c)
 *     ?KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEAU_AB_BOOST_CONTEXT@1@PEAT_AB_IO_BOOST@1@@Z @ 0x1403754D0 (-KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEA.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall AutoBoost::KiAbpThreadInsertList(
        AutoBoost *this,
        struct _KTHREAD *a2,
        struct _SINGLE_LIST_ENTRY *a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  unsigned int v4; // esi
  unsigned int v6; // edi

  v4 = 0;
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)this + 16, 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *((_QWORD *)this + 8) );
  }
  if ( a3->Next == (struct _SINGLE_LIST_ENTRY *)1 )
  {
    v4 = 1;
    a3->Next = *(struct _SINGLE_LIST_ENTRY **)&a2->Header.Lock;
    *(_QWORD *)&a2->Header.Lock = a3;
  }
  *((_QWORD *)this + 8) = 0LL;
  if ( v4 )
    _InterlockedAdd16((volatile signed __int16 *)this + 434, 1u);
  return v4;
}
