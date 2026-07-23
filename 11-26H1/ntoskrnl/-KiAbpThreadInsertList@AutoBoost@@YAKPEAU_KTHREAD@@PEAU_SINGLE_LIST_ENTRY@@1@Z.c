/*
 * XREFs of ?KiAbpThreadInsertList@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z @ 0x14041DDCC
 * Callers:
 *     PsBoostThreadIoQoS @ 0x1402055E0 (PsBoostThreadIoQoS.c)
 *     ?KiAbpProcessBaseIoPriorityChangeInternal@AutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x140239CF0 (-KiAbpProcessBaseIoPriorityChangeInternal@AutoBoost@@YAXPEAU_KTHREAD@@K@Z.c)
 *     PsBoostThreadIoEx @ 0x140248200 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIo @ 0x1403053C0 (PsBoostThreadIo.c)
 *     ?KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEAU_AB_BOOST_CONTEXT@1@PEAT_AB_IO_BOOST@1@@Z @ 0x140377280 (-KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEA.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
