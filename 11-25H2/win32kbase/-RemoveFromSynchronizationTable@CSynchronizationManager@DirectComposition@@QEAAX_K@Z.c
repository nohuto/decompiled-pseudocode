/*
 * XREFs of ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@QEAAX_K@Z @ 0x14005009C
 * Callers:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x140023FC4 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ??_GCSyncData@DirectComposition@@QEAAPEAXI@Z @ 0x140144C68 (--_GCSyncData@DirectComposition@@QEAAPEAXI@Z.c)
 */

void __fastcall DirectComposition::CSynchronizationManager::RemoveFromSynchronizationTable(
        PERESOURCE *this,
        __int64 a2)
{
  struct _RTL_GENERIC_TABLE *v4; // rsi
  _QWORD *v5; // rax
  struct _ERESOURCE *v6; // rbx
  unsigned int v7; // edx
  __int64 v8; // rcx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  DirectComposition::CCriticalSection::AcquireExclusive(*this);
  v4 = (struct _RTL_GENERIC_TABLE *)this[1];
  Buffer[0] = a2;
  Buffer[1] = 0LL;
  v5 = RtlLookupElementGenericTable(v4, Buffer);
  if ( v5 )
  {
    v6 = (struct _ERESOURCE *)v5[1];
    RtlDeleteElementGenericTable(v4, v5);
    if ( v6 )
    {
      v6->SystemResourcesList.Flink = 0LL;
      HIDWORD(v6->OwnerTable) = 0;
      v8 = *((unsigned int *)this + 5);
      if ( (unsigned int)(v8 + 1) > 0x40 )
      {
        DirectComposition::CSyncData::`scalar deleting destructor'(v6, v7);
      }
      else
      {
        this[v8 + 3] = v6;
        ++*((_DWORD *)this + 5);
      }
    }
  }
  ExReleaseResourceLite(*this);
  KeLeaveCriticalRegion();
}
