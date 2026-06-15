/*
 * XREFs of ?OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z @ 0x180082D10
 * Callers:
 *     <none>
 * Callees:
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180082D78 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?LogVolumePolicyChange@CSpatialAudioResourceManagerTraceLogger@@QEAAXKPEBG@Z @ 0x1800B0CD4 (-LogVolumePolicyChange@CSpatialAudioResourceManagerTraceLogger@@QEAAXKPEBG@Z.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnVolumePolicyChange(
        Sarm::CSpatialAudioResourceManager *this,
        unsigned int a2,
        const unsigned __int16 *a3)
{
  int v6; // [rsp+2Ch] [rbp-4Ch]
  _QWORD v7[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v8; // [rsp+40h] [rbp-38h]
  int v9; // [rsp+44h] [rbp-34h]
  _QWORD *v10; // [rsp+68h] [rbp-10h]

  CSpatialAudioResourceManagerTraceLogger::LogVolumePolicyChange(this, a2, a3);
  v8 = a2;
  v7[0] = off_1801734D0;
  v7[1] = (char *)this - 8;
  v9 = v6;
  v10 = v7;
  return CWorkFifo::ScheduleWorkItem((Sarm::CSpatialAudioResourceManager *)((char *)this + 296));
}
