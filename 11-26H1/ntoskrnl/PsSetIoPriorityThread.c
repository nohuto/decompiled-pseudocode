/*
 * XREFs of PsSetIoPriorityThread @ 0x140239BF4
 * Callers:
 *     IoSetIoPriorityHintIntoThread @ 0x1402398B0 (IoSetIoPriorityHintIntoThread.c)
 *     IoApplyPriorityInfoThread @ 0x140239AF0 (IoApplyPriorityInfoThread.c)
 *     CcApplyLowIoPriorityToThread @ 0x140387538 (CcApplyLowIoPriorityToThread.c)
 *     CmpSetIoPriorityThread @ 0x1404E52E8 (CmpSetIoPriorityThread.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     EtwTracePriority @ 0x140202938 (EtwTracePriority.c)
 *     ?KeAbProcessBaseIoPriorityChangeInternal@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x1402395C8 (-KeAbProcessBaseIoPriorityChangeInternal@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z.c)
 *     ?KiAbpProcessBaseIoPriorityChangeInternal@AutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x140239CF0 (-KiAbpProcessBaseIoPriorityChangeInternal@AutoBoost@@YAXPEAU_KTHREAD@@K@Z.c)
 */

__int64 __fastcall PsSetIoPriorityThread(LegacyAutoBoost *this, int a2, __int64 a3, struct _SINGLE_LIST_ENTRY *a4)
{
  signed __int32 v6; // eax
  unsigned __int32 v7; // edi
  signed __int32 v8; // ebx
  __int64 v9; // r8
  unsigned int v10; // esi
  unsigned int v11; // edi
  unsigned int v12; // ebx

  v6 = *((_DWORD *)this + 360);
  do
  {
    v7 = v6;
    v8 = v6;
    v9 = (a2 << 9) | v6 & 0xFFFFF1FF;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)this + 360, v9, v6);
  }
  while ( v6 != v8 );
  v10 = 0;
  v11 = (v7 >> 9) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority((__int64)this, 0x534u, v11, a2, 0LL);
  if ( a2 != v11 )
  {
    v12 = v8 & 0xE00;
    if ( (KiAbpGlobalState & 1) == 0 )
    {
      if ( a2 < 2 )
      {
        if ( v12 < 0x400 )
          return v11;
      }
      else
      {
        if ( v12 >= 0x400 )
          return v11;
        v10 = 1;
      }
      LegacyAutoBoost::KeAbProcessBaseIoPriorityChangeInternal(this, (struct _KTHREAD *)v10, v9, a4);
      return v11;
    }
    if ( a2 < 2 )
    {
      if ( v12 >= 0x400 )
        goto LABEL_11;
    }
    else if ( v12 < 0x400 )
    {
      v10 = 1;
LABEL_11:
      AutoBoost::KiAbpProcessBaseIoPriorityChangeInternal(this, (struct _KTHREAD *)v10, v9);
    }
  }
  return v11;
}
