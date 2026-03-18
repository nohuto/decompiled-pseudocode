/*
 * XREFs of ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1401BD9F8
 * Callers:
 *     NtDCompositionGetConnectionBatch @ 0x1400A4A90 (NtDCompositionGetConnectionBatch.c)
 * Callees:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1400A50D0 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A901C (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z @ 0x1401077B4 (-GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z.c)
 *     ?AppendRetrievingBatches@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1401362DC (-AppendRetrievingBatches@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::GetBatches(
        DirectComposition::CConnection *this,
        const struct UCE_RDP_HEADER **a2)
{
  unsigned int Batches; // edi
  struct DirectComposition::CBatch *QuadPart; // rdi
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  DirectComposition::CCriticalSection::AcquireShared(*((PERESOURCE *)this + 2));
  if ( *((_DWORD *)this + 37) )
  {
    Interval.QuadPart = 0LL;
    if ( (int)DirectComposition::CConnection::GetReadyBatches(this, 0LL, (struct DirectComposition::CBatch **)&Interval) >= 0 )
    {
      QuadPart = (struct DirectComposition::CBatch *)Interval.QuadPart;
      if ( Interval.QuadPart )
      {
        while ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 1, 2) != 2 )
        {
          Interval.QuadPart = 0LL;
          KeDelayExecutionThread(1, 0, &Interval);
        }
        DirectComposition::CConnection::AppendRetrievingBatches(this, QuadPart);
      }
    }
    if ( *((_DWORD *)this + 36) == 1 || _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 1, 2) == 2 )
      Batches = DirectComposition::CConnection::RetrieveBatches(this, 0LL, a2);
    else
      Batches = -1073740024;
  }
  else
  {
    Batches = -1073741300;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
  return Batches;
}
