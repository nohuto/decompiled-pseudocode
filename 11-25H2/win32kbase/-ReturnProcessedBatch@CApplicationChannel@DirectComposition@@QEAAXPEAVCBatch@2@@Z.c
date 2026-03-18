/*
 * XREFs of ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x140058AF0
 * Callers:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x140058A20 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z @ 0x1400C779C (-SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1400D0590 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     Feature_EffectHash__private_IsEnabledDeviceUsageNoInline @ 0x1402267A0 (Feature_EffectHash__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReturnProcessedBatch(
        union _SLIST_HEADER *this,
        struct DirectComposition::CBatch *a2)
{
  ULONGLONG Region; // rdi
  unsigned int v5; // ebx
  ULONGLONG Alignment; // rcx
  bool v7; // zf
  struct _SLIST_HEADER::$81D0B81343CD6A575F52E6033C50E59F v8; // [rsp+20h] [rbp-18h]
  struct _SLIST_HEADER::$81D0B81343CD6A575F52E6033C50E59F v9; // [rsp+20h] [rbp-18h]

  DirectComposition::CBatch::SetSynchronizationObject(a2, 0LL);
  if ( *((_DWORD *)a2 + 5) == 6 )
  {
    Region = this[2].Region;
    v5 = *((_DWORD *)&this[1].HeaderX64 + 3);
    DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(Region + 80));
    DirectComposition::CLinearObjectTableBase::ReleaseHandle(
      (DirectComposition::CLinearObjectTableBase *)(Region + 24),
      v5);
    ExReleaseResourceLite(*(PERESOURCE *)(Region + 80));
    KeLeaveCriticalRegion();
    GreDeleteFastMutex((char *)a2);
    (*(void (__fastcall **)(union _SLIST_HEADER *, __int64))(this->Alignment + 32))(this, 1LL);
    return;
  }
  LODWORD(this[26].Alignment) = *((_DWORD *)a2 + 4);
  if ( (unsigned int)Feature_EffectHash__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (*((_BYTE *)a2 + 32) & 1) == 0 )
    {
      *(_QWORD *)&v8 = *((unsigned int *)a2 + 4);
      *((_QWORD *)&v8 + 1) = *((_QWORD *)a2 + 6);
      *(struct _SLIST_HEADER::$81D0B81343CD6A575F52E6033C50E59F *)((char *)&this[(*((_DWORD *)a2 + 4) & 0x7F) + 36].HeaderX64
                                                                 + 8) = v8;
      Alignment = this[24].Alignment;
      if ( Alignment )
      {
        v7 = this[24].Region == 0;
        goto LABEL_10;
      }
    }
  }
  else
  {
    *(_QWORD *)&v9 = *((unsigned int *)a2 + 4);
    *((_QWORD *)&v9 + 1) = *((_QWORD *)a2 + 6);
    *(struct _SLIST_HEADER::$81D0B81343CD6A575F52E6033C50E59F *)((char *)&this[(*((_DWORD *)a2 + 4) & 0x7F) + 36].HeaderX64
                                                               + 8) = v9;
    Alignment = this[24].Alignment;
    if ( Alignment && !this[24].Region )
    {
      v7 = (*((_BYTE *)a2 + 32) & 1) == 0;
LABEL_10:
      if ( v7 )
        KeSetEvent(*(PRKEVENT *)(Alignment + 8), 1, 0);
    }
  }
  if ( (*((_BYTE *)a2 + 32) & 8) != 0 )
    *((_BYTE *)&this[16].HeaderX64 + 10) = 0;
  ExpInterlockedPushEntrySList(this + 13, (PSLIST_ENTRY)a2);
  KeSetEvent(*(PRKEVENT *)(this[15].Alignment + 8), 1, 0);
}
