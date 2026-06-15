/*
 * XREFs of std::_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_::_Do_call @ 0x1801271B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180124EFC (-DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x180125184 (-GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x180125248 (-GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ @ 0x180127BBC (-CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // esi
  Sarm::CStreamResource *i; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 64));
  for ( i = Sarm::CSpatialAudioResourceManager::GetFirstStream((Sarm::CSpatialAudioResourceManager *)v1, v2);
        i;
        i = Sarm::CSpatialAudioResourceManager::GetNextStream((Sarm::CSpatialAudioResourceManager *)v1) )
  {
    Sarm::CStreamResource::CompleteRevocation(i);
  }
  Sarm::CSpatialAudioResourceManager::DistributeAvailableObjectsToOtherApps(
    (Sarm::CSpatialAudioResourceManager *)v1,
    v2);
  if ( v1 != -64 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 64));
}
