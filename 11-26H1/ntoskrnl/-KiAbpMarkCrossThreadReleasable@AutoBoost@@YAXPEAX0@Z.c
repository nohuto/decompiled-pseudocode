/*
 * XREFs of ?KiAbpMarkCrossThreadReleasable@AutoBoost@@YAXPEAX0@Z @ 0x1404FE3F0
 * Callers:
 *     ExpAcquireFastResourceSharedSlow @ 0x1402763B0 (ExpAcquireFastResourceSharedSlow.c)
 *     KeAbMarkCrossThreadReleasable @ 0x14052C0B0 (KeAbMarkCrossThreadReleasable.c)
 * Callees:
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403789A0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall AutoBoost::KiAbpMarkCrossThreadReleasable(
        unsigned __int64 this,
        struct _KTHREAD *a2,
        void *a3,
        struct AutoBoost::_AB_BOOST_CONTEXT *a4)
{
  struct _KTHREAD *v4; // rdi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD v9[3]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+3Ch] [rbp-Ch]
  struct _SINGLE_LIST_ENTRY v12; // [rsp+50h] [rbp+8h] BYREF

  v12.Next = (struct _SINGLE_LIST_ENTRY *)this;
  v4 = a2;
  if ( ((unsigned __int8)a2 & 3) == 3 )
  {
    this = (unsigned __int64)(unsigned __int8)a2 >> 4;
    v4 = (struct _KTHREAD *)(*((_QWORD *)KeGetCurrentThread()->AutoBoostThreadState
                             + (((unsigned __int64)(unsigned __int8)a2 >> 2) & 3))
                           + 48 * this
                           + 16);
  }
  if ( (v4->QuantumTarget & 2) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(this) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(this, 2LL);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v9[0] = &v12;
    v12.Next = 0LL;
    v9[1] = 0LL;
    v9[2] = &CurrentPrcb->AbSelfIoBoostsList;
    v11 = 0;
    v10 = 5;
    AutoBoost::KiAbpProcessEntry((KSPIN_LOCK *)KeGetCurrentThread(), v4, (struct AutoBoost::_AB_THREAD_ENTRY *)v9, a4);
    LOBYTE(v7) = CurrentIrql;
    KiProcessDeferredReadyList(CurrentPrcb, &v12, v7, v8);
  }
  BYTE1(v4->QuantumTarget) |= 0x10u;
}
