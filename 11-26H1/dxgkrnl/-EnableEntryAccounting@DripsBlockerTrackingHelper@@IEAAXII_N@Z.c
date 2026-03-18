/*
 * XREFs of ?EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z @ 0x1402F80A8
 * Callers:
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1401D500C (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 *     ?EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x14037ED20 (-EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1403B4760 (-FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ.c)
 * Callees:
 *     ?AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z @ 0x1402F987C (-AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::EnableEntryAccounting(
        DripsBlockerTrackingHelper *this,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdi

  v5 = 4720LL * a2;
  v6 = a3;
  v7 = 72LL * a3;
  if ( a4 )
  {
    v9 = v7 + v5;
    if ( !*((_BYTE *)this + v9 + 112) && !*((_BYTE *)this + 302104) )
    {
      *(LARGE_INTEGER *)((char *)this + v9 + 120) = KeQueryPerformanceCounter(0LL);
      *((_BYTE *)this + v9 + 112) = 1;
    }
  }
  else
  {
    v8 = v7 + v5;
    if ( *((_BYTE *)this + v7 + v5 + 112) == 1 )
    {
      DripsBlockerTrackingHelper::AddActiveTime(this, a2, a3);
      *((_BYTE *)this + v8 + 112) = 0;
      *(_DWORD *)((char *)this + 72 * v6 + v5 + 144) = 0;
    }
  }
}
