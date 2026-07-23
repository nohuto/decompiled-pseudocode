/*
 * XREFs of HalpInterruptEnablePerformanceEvents @ 0x1404360DC
 * Callers:
 *     EmonPreOverflowHandler @ 0x1404360C0 (EmonPreOverflowHandler.c)
 *     HalpInterruptInitSystem @ 0x140BF1450 (HalpInterruptInitSystem.c)
 *     HalpPostSleepMP @ 0x140BF2EF0 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x140BF40F0 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x14032FC8C (HalpInterruptSetLineStateInternal.c)
 *     HalpGetProcessorStateByNtIndex @ 0x140432C88 (HalpGetProcessorStateByNtIndex.c)
 *     HalpInterruptGsiToLine @ 0x14043349C (HalpInterruptGsiToLine.c)
 *     HalpInterruptFindLines @ 0x1404336FC (HalpInterruptFindLines.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetLineState @ 0x140435168 (HalpInterruptSetLineState.c)
 *     HalpInterruptGetPriority @ 0x140436214 (HalpInterruptGetPriority.c)
 */

void __fastcall HalpInterruptEnablePerformanceEvents(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // esi
  bool v6; // zf
  unsigned __int8 v7; // di
  int v8; // eax
  __int64 ProcessorStateByNtIndex; // rbx
  __int64 v10; // rcx
  int v11; // edx
  char v12; // bl
  unsigned __int8 v13; // di
  __int128 v14; // [rsp+40h] [rbp-19h] BYREF
  __int64 v15; // [rsp+50h] [rbp-9h]
  __int128 v16; // [rsp+58h] [rbp-1h] BYREF
  __int128 v17; // [rsp+68h] [rbp+Fh]
  __int128 v18; // [rsp+78h] [rbp+1Fh]
  __int64 v19; // [rsp+88h] [rbp+2Fh]
  __int64 v20; // [rsp+C0h] [rbp+67h] BYREF
  int v21; // [rsp+C8h] [rbp+6Fh] BYREF
  int v22; // [rsp+CCh] [rbp+73h]

  v3 = HalpInterruptController;
  v4 = 0;
  v20 = 0LL;
  v16 = 0LL;
  v6 = *(_DWORD *)(HalpInterruptController + 240) == 2;
  v17 = 0LL;
  v19 = 0LL;
  v7 = 0;
  v18 = 0LL;
  if ( v6 )
  {
    LODWORD(v20) = *(_DWORD *)(HalpInterruptController + 256);
    HIDWORD(v20) = -3;
    if ( !HalpInterruptPerfLinesFound )
    {
      if ( !HalpInterruptFindLines((unsigned int *)&v20) )
        return;
      HalpInterruptPerfLinesFound = 1;
    }
    LODWORD(v16) = 1;
    *((_QWORD *)&v16 + 1) = 0x1000000001LL;
    *(_QWORD *)&v17 = 0x1FFFFFFFFLL;
    DWORD2(v17) = 3;
    LODWORD(v19) = 254;
    HIDWORD(v19) = HalpInterruptGetPriority(v3, 254LL, a3);
    if ( !a1 )
      v7 = HalpAcquireHighLevelLock((PKSPIN_LOCK)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink);
    HalpInterruptSetLineStateInternal(v3, (__int64)&v20, (__int64)&v16);
    if ( !a1 )
      HalpReleaseHighLevelLock((KSPIN_LOCK *)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink, v7);
  }
  v8 = *(_DWORD *)(v3 + 240);
  if ( v8 == 3 || ((v8 - 4) & 0xFFFFFFFD) == 0 )
  {
    ProcessorStateByNtIndex = HalpGetProcessorStateByNtIndex(KeGetPcr()->Prcb.Number);
    v21 = -1;
    v22 = 1;
    v15 = 0LL;
    v14 = 0LL;
    v10 = *(unsigned int *)(ProcessorStateByNtIndex + 40);
    LODWORD(v14) = 6;
    DWORD2(v14) = v11;
    if ( (_DWORD)v10 )
    {
      if ( (int)HalpInterruptGsiToLine(v10, &v20) >= 0 )
      {
        v12 = *(_BYTE *)(ProcessorStateByNtIndex + 14);
        v13 = HalpAcquireHighLevelLock((PKSPIN_LOCK)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink);
        LOBYTE(v4) = v12 != 0;
        HalpInterruptSetLineState(&v20, 0xFEu, 15, v4, 1, (__int64)&v14, (__int64)&v21);
        HalpReleaseHighLevelLock((KSPIN_LOCK *)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink, v13);
      }
    }
  }
}
