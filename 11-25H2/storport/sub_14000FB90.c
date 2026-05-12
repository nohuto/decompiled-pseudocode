/*
 * XREFs of sub_14000FB90 @ 0x14000FB90
 * Callers:
 *     sub_140004890 @ 0x140004890 (sub_140004890.c)
 *     sub_1400067A0 @ 0x1400067A0 (sub_1400067A0.c)
 *     sub_1400078A0 @ 0x1400078A0 (sub_1400078A0.c)
 *     sub_140007BD8 @ 0x140007BD8 (sub_140007BD8.c)
 *     sub_14000DC80 @ 0x14000DC80 (sub_14000DC80.c)
 *     sub_14000EF0C @ 0x14000EF0C (sub_14000EF0C.c)
 *     StorPortPauseDevice @ 0x14000F1B0 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x14000F620 (StorPortResumeDevice.c)
 *     sub_14000F84C @ 0x14000F84C (sub_14000F84C.c)
 *     sub_140010540 @ 0x140010540 (sub_140010540.c)
 *     sub_140010CA0 @ 0x140010CA0 (sub_140010CA0.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_140030B40 @ 0x140030B40 (sub_140030B40.c)
 *     StorPortDeviceBusy @ 0x14003FFF0 (StorPortDeviceBusy.c)
 *     StorPortBusy @ 0x140042460 (StorPortBusy.c)
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 *     sub_140054A1C @ 0x140054A1C (sub_140054A1C.c)
 *     StorPortReady @ 0x140056290 (StorPortReady.c)
 *     sub_140058FB8 @ 0x140058FB8 (sub_140058FB8.c)
 *     sub_140065DF0 @ 0x140065DF0 (sub_140065DF0.c)
 *     sub_140066768 @ 0x140066768 (sub_140066768.c)
 *     sub_14006D7C4 @ 0x14006D7C4 (sub_14006D7C4.c)
 *     StorPortCompleteRequest @ 0x1400739A0 (StorPortCompleteRequest.c)
 *     StorPortDeviceReady @ 0x140073B60 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1400745D0 (StorPortPause.c)
 *     StorPortResume @ 0x140074C10 (StorPortResume.c)
 *     sub_140075474 @ 0x140075474 (sub_140075474.c)
 *     sub_14008BB38 @ 0x14008BB38 (sub_14008BB38.c)
 *     sub_14009DB74 @ 0x14009DB74 (sub_14009DB74.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14000FB90(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned int v8; // r10d
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx

  if ( a1 )
  {
    if ( *(_DWORD *)a1 != 1314275652 )
    {
      v8 = *(_DWORD *)(a1 + 4932);
      if ( v8 )
      {
        v9 = *(_QWORD *)(a1 + 4936);
        if ( v9 )
        {
          v10 = a7;
          v11 = v9 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(a1 + 4928)) % v8);
          *(_DWORD *)v11 = a2;
          if ( !a7 )
            v10 = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v11 + 40) = v10;
          *(_QWORD *)(v11 + 24) = a5;
          *(_QWORD *)(v11 + 32) = a6;
          *(_QWORD *)(v11 + 8) = a3;
          *(_QWORD *)(v11 + 16) = a4;
        }
      }
    }
  }
}
