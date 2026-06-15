/*
 * XREFs of ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180126A34
 * Callers:
 *     ?HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1801252EC (-HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180082D78 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x180124D84 (-DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z.c)
 *     ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x180125184 (-GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x180125248 (-GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x18012848C (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::RevokeApplicationResources(PTP_TIMER *this, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  struct Sarm::CStreamResource *i; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  double v10; // xmm0_8
  char v11; // bl
  __int64 v12; // rdi
  struct Sarm::CStreamResource *FirstStream; // rax
  int v14; // eax
  int v15; // [rsp+2Ch] [rbp-44h]
  _QWORD v16[2]; // [rsp+30h] [rbp-40h] BYREF
  int v17; // [rsp+40h] [rbp-30h]
  int v18; // [rsp+44h] [rbp-2Ch]
  _QWORD *v19; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  LARGE_INTEGER PerformanceCount; // [rsp+A0h] [rbp+30h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  for ( i = Sarm::CSpatialAudioResourceManager::GetFirstStream((Sarm::CSpatialAudioResourceManager *)this, a2);
        i;
        i = Sarm::CSpatialAudioResourceManager::GetNextStream((Sarm::CSpatialAudioResourceManager *)this) )
  {
    v7 = *(__int64 **)(*((_QWORD *)i + 1) + 16LL);
    v8 = *v7;
    if ( v2 > *v7 )
      v8 = v2;
    v2 = v8;
    v9 = v7[1];
    if ( v3 > v9 )
      v9 = v3;
    v3 = v9;
  }
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
    v10 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
        + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
  else
    v10 = (double)(int)g_u64QPCFrequency;
  v11 = 0;
  v12 = v2 - (unsigned int)(int)((double)(int)PerformanceCount.LowPart * -10000000.0 / v10);
  FirstStream = Sarm::CSpatialAudioResourceManager::GetFirstStream((Sarm::CSpatialAudioResourceManager *)this, a2);
  if ( FirstStream )
  {
    do
    {
      if ( *((_DWORD *)FirstStream + 20) )
      {
        v14 = Sarm::CStreamResource::SetDynamicObjects(FirstStream, 0, v12);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            848LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            (const char *)(unsigned int)v14);
        v11 = 1;
      }
      FirstStream = Sarm::CSpatialAudioResourceManager::GetNextStream((Sarm::CSpatialAudioResourceManager *)this);
    }
    while ( FirstStream );
    if ( v11 )
    {
      CWorkFifo::DelayWorkUntil(this + 38, v12 + v3);
      v16[1] = this;
      v16[0] = off_180178298;
      v18 = v15;
      v19 = v16;
      v17 = a2;
      CWorkFifo::ScheduleWorkItem(this + 38, (__int64)v16);
    }
  }
}
