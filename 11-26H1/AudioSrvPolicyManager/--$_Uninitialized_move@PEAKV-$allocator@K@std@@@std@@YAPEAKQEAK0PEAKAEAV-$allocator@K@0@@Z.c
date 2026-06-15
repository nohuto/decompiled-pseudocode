/*
 * XREFs of ??$_Uninitialized_move@PEAKV?$allocator@K@std@@@std@@YAPEAKQEAK0PEAKAEAV?$allocator@K@0@@Z @ 0x180027C38
 * Callers:
 *     ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z @ 0x180006BA0 (--$_Emplace_reallocate@AEAK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@@std@@YAPEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@00@Z @ 0x180027C78 (--$_Copy_memmove@PEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@@std@@YAPEAPEAUIAudioAppVolumePoli.c)
 */

__int64 __fastcall std::_Uninitialized_move<unsigned long *>(void *a1, __int64 a2, __int64 a3)
{
  std::_Copy_memmove<IAudioAppVolumePolicyChange * *,IAudioAppVolumePolicyChange * *>(a1);
  return a3 + 4 * ((a2 - (__int64)a1) >> 2);
}
