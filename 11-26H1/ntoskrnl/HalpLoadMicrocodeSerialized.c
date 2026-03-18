/*
 * XREFs of HalpLoadMicrocodeSerialized @ 0x140785120
 * Callers:
 *     HalpLoadMicrocode @ 0x140784E40 (HalpLoadMicrocode.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     HalpMcUpdateMicrocode @ 0x140510840 (HalpMcUpdateMicrocode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void HalpLoadMicrocodeSerialized()
{
  ULONG ActiveProcessorCount; // eax
  char v1; // di
  __int64 v2; // rbx
  __int64 v3; // rsi
  unsigned int v4; // ecx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v1 = 0;
  if ( ActiveProcessorCount )
  {
    v2 = 0LL;
    v3 = ActiveProcessorCount;
    do
    {
      v4 = *(_DWORD *)(v2 + *(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112]);
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v4 >> 6);
      Affinity.Mask = 1LL << v4;
      if ( v1 )
      {
        KeSetSystemGroupAffinityThread(&Affinity, 0LL);
      }
      else
      {
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        v1 = 1;
      }
      HalpMcUpdateMicrocode();
      v2 += 4LL;
      --v3;
    }
    while ( v3 );
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
}
