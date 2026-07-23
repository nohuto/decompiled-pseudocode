/*
 * XREFs of PopRecordPowerWatchdogBlackboxInformation @ 0x140616474
 * Callers:
 *     PopRecordPoBlackboxInformation @ 0x1407E8D2C (PopRecordPoBlackboxInformation.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void PopRecordPowerWatchdogBlackboxInformation()
{
  KIRQL v0; // al
  __int64 v1; // r8
  int v2; // edi
  void *v3; // rbx
  KIRQL v4; // bp
  bool v5; // zf
  int v6; // edx
  __int64 v7; // rsi
  _DWORD *Pool2; // rax
  _DWORD *v9; // r14
  __int64 i; // rdi
  __int128 InputBuffer; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h]
  LARGE_INTEGER PerformanceCounter; // [rsp+70h] [rbp+8h] BYREF

  InputBuffer = 0LL;
  v12 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  v1 = PopWatchdogList;
  v2 = 0;
  v3 = 0LL;
  v4 = v0;
  if ( (__int64 *)PopWatchdogList == &PopWatchdogList )
    goto LABEL_13;
  do
  {
    v5 = *(_BYTE *)(v1 + 208) == 0;
    v6 = v2 + 1;
    v1 = *(_QWORD *)v1;
    if ( v5 )
      v6 = v2;
    v2 = v6;
  }
  while ( (__int64 *)v1 != &PopWatchdogList );
  if ( !v6 )
  {
LABEL_13:
    v7 = 0LL;
  }
  else
  {
    v7 = 80LL * (unsigned int)(v6 - 1) + 96;
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    v3 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 1;
      v9 = Pool2 + 4;
      Pool2[1] = v7;
      Pool2[2] = v2;
      for ( i = PopWatchdogList; (__int64 *)i != &PopWatchdogList; i = *(_QWORD *)i )
      {
        if ( *(_BYTE *)(i + 208) )
        {
          *v9 = *(_DWORD *)(i + 16);
          *((_QWORD *)v9 + 9) = *(_QWORD *)(i + 288);
          v9[1] = (unsigned __int64)(*(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter) - *(_QWORD *)(i + 296))
                / 0x2710;
          v9[2] = *(_DWORD *)(i + 216);
          v9[3] = *(_DWORD *)(i + 224);
          *((_QWORD *)v9 + 2) = *(_QWORD *)(i + 232);
          *((_QWORD *)v9 + 3) = *(_QWORD *)(i + 240);
          *((_QWORD *)v9 + 4) = *(_QWORD *)(i + 248);
          *((_QWORD *)v9 + 5) = *(_QWORD *)(i + 256);
          *((_QWORD *)v9 + 8) = i + 216;
          *((_QWORD *)v9 + 6) = *(_QWORD *)(i + 272);
          *((_QWORD *)v9 + 7) = *(_QWORD *)(i + 280);
          v9 += 20;
        }
      }
    }
  }
  KeReleaseSpinLock(&PopWatchdogLock, v4);
  if ( v7 )
  {
    DWORD2(v12) = 8;
    *(_QWORD *)&InputBuffer = v3;
    *((_QWORD *)&InputBuffer + 1) = (unsigned int)v7;
    NtPowerInformation(UpdateBlackBoxRecorder, &InputBuffer, 0x20u, 0LL, 0);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x42424F50u);
}
