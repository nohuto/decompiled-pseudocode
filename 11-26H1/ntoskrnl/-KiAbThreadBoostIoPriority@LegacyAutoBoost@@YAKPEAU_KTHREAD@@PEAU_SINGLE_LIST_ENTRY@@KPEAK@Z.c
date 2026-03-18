/*
 * XREFs of ?KiAbThreadBoostIoPriority@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@KPEAK@Z @ 0x1404D6F48
 * Callers:
 *     ?KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SINGLE_LIST_ENTRY@@22PEAK@Z @ 0x14026E664 (-KiAbSetMinimumThreadPriority@LegacyAutoBoost@@YAKPEAU_KLOCK_ENTRY@@PEAU_AB_PRIORITY@1@PEAU_SING.c)
 * Callees:
 *     PsBoostThreadIoQoS @ 0x140205500 (PsBoostThreadIoQoS.c)
 *     ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023BA30 (-KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z.c)
 *     ?KiAbThreadInsertList@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z @ 0x14026F7A0 (-KiAbThreadInsertList@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z.c)
 *     PsBoostThreadIo @ 0x1402BA700 (PsBoostThreadIo.c)
 */

__int64 __fastcall LegacyAutoBoost::KiAbThreadBoostIoPriority(
        LegacyAutoBoost *this,
        struct _KTHREAD *a2,
        struct _SINGLE_LIST_ENTRY *a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  int v6; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KPRCB *v10; // rdx
  unsigned int v11; // ecx
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  v6 = (int)a3;
  if ( (_DWORD)a3 )
  {
    PsBoostThreadIoQoS(this, 0LL, (unsigned int)a3, a4);
    v9 = 864LL;
  }
  else
  {
    PsBoostThreadIo(this, 0LL, (__int64)a3, a4);
    v9 = 860LL;
  }
  _InterlockedOr(v13, 0);
  if ( *(_DWORD *)((char *)this + v9) )
  {
    v11 = 1;
    goto LABEL_12;
  }
  if ( !a2 )
  {
    v11 = 1;
    LODWORD(a4->Next) |= (v6 != 0) + 1;
LABEL_12:
    _InterlockedAdd((volatile signed __int32 *)((char *)this + v9), 1u);
    return v11;
  }
  if ( v6 )
    _InterlockedDecrement((volatile signed __int32 *)this + 377);
  else
    PsBoostThreadIo(this, 1LL, v8, (struct _SINGLE_LIST_ENTRY *)v9);
  if ( (unsigned int)LegacyAutoBoost::KiAbThreadInsertList(
                       this,
                       a2,
                       (struct _SINGLE_LIST_ENTRY *)this + 102,
                       (struct _SINGLE_LIST_ENTRY *)v9) )
    AutoBoost::KiAbpQueueAutoBoostDpc((AutoBoost *)&a2[-31].WaitBlockFill11[80], v10);
  return 0;
}
