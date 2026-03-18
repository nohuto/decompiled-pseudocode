/*
 * XREFs of ?Synchronize@CSynchronizationManager@DirectComposition@@QEAAJPEAVCBatch@2@@Z @ 0x1400A67C4
 * Callers:
 *     NtDCompositionSynchronize @ 0x1400A65B0 (NtDCompositionSynchronize.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?RecycleSyncData@CSynchronizationManager@DirectComposition@@IEAAXPEAVCSyncData@2@@Z @ 0x1400A6944 (-RecycleSyncData@CSynchronizationManager@DirectComposition@@IEAAXPEAVCSyncData@2@@Z.c)
 *     DirectComposition::Memory::AllocateAndClear_1 @ 0x140110AA4 (DirectComposition--Memory--AllocateAndClear_1.c)
 */

__int64 __fastcall DirectComposition::CSynchronizationManager::Synchronize(
        DirectComposition::CSynchronizationManager *this,
        struct DirectComposition::CBatch *a2)
{
  unsigned int v2; // ebx
  signed __int32 v5; // ebp
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdi
  struct _RTL_GENERIC_TABLE *v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( *((_QWORD *)a2 + 5) )
    return (unsigned int)-1073741790;
  do
    v5 = _InterlockedIncrement((volatile signed __int32 *)this + 4);
  while ( !v5 );
  DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)this);
  v6 = *((_DWORD *)this + 5);
  if ( v6 )
  {
    v7 = (unsigned int)(v6 - 1);
    *((_DWORD *)this + 5) = v7;
    v8 = *((_QWORD *)this + v7 + 3);
    *((_QWORD *)this + v7 + 3) = 0LL;
    if ( v8 )
      goto LABEL_5;
  }
  v11 = DirectComposition::Memory::AllocateAndClear_1(0x50uLL);
  v8 = v11;
  if ( v11 )
  {
    v12 = v11 + 28;
    *(_OWORD *)v12 = 0LL;
    *(_OWORD *)(v12 + 16) = 0LL;
    *(_QWORD *)(v12 + 32) = 0LL;
    *(_QWORD *)(v8 + 72) = v12;
    *(_DWORD *)(v8 + 24) = 5;
LABEL_5:
    *(_QWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 8) = v5;
    *(_QWORD *)v8 = a2;
    v9 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 1);
    Buffer[0] = v5;
    Buffer[1] = v8;
    if ( RtlInsertElementGenericTable(v9, Buffer, 0x10u, 0LL) )
    {
      *((_QWORD *)a2 + 5) = v8;
    }
    else
    {
      v2 = -1073741801;
      DirectComposition::CSynchronizationManager::RecycleSyncData(this, (struct DirectComposition::CSyncData *)v8);
    }
    goto LABEL_7;
  }
  v2 = -1073741801;
LABEL_7:
  ExReleaseResourceLite(*(PERESOURCE *)this);
  KeLeaveCriticalRegion();
  return v2;
}
