/*
 * XREFs of Amd64InitializeUncoreProfiling @ 0x1405A6A20
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     Amd64InitializeCacheStatus @ 0x1405A6754 (Amd64InitializeCacheStatus.c)
 *     Amd64InitializeDataFabricStatus @ 0x1405A68F8 (Amd64InitializeDataFabricStatus.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void Amd64InitializeUncoreProfiling()
{
  ULONG ActiveProcessorCount; // eax
  char v6; // bl
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-40h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-20h] BYREF

  _RAX = 0x80000000LL;
  __asm { cpuid }
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (unsigned int)_RAX >= 0x8000001E && (dword_140F87970 & 6) != 0 )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    v6 = 0;
    if ( ActiveProcessorCount )
    {
      v7 = 0LL;
      v8 = ActiveProcessorCount;
      do
      {
        v9 = *(volatile LONG *)((char *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v7);
        Affinity.Reserved[1] = 0;
        Affinity.Reserved[2] = 0;
        *(_DWORD *)&Affinity.Group = (unsigned __int16)(v9 >> 6);
        Affinity.Mask = 1LL << v9;
        if ( v6 )
        {
          KeSetSystemGroupAffinityThread(&Affinity, 0LL);
        }
        else
        {
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
          v6 = 1;
        }
        if ( (dword_140F87970 & 2) != 0 )
          Amd64InitializeDataFabricStatus(v11, v10);
        if ( (dword_140F87970 & 4) != 0 )
          Amd64InitializeCacheStatus(v11, v10, v12, v13);
        v7 += 4LL;
        --v8;
      }
      while ( v8 );
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
  }
}
