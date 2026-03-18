/*
 * XREFs of AcpiPccCommandComplete @ 0x14006492C
 * Callers:
 *     ACPIPccProcessSci @ 0x14005226C (ACPIPccProcessSci.c)
 *     AcpiPccPlatformInterruptServiceRoutineDpc @ 0x140064D20 (AcpiPccPlatformInterruptServiceRoutineDpc.c)
 *     AcpiPccWatchdog @ 0x140065110 (AcpiPccWatchdog.c)
 * Callees:
 *     AcpiPccUnlockSubspace @ 0x140040AA8 (AcpiPccUnlockSubspace.c)
 *     AcpiPccLockSubspace @ 0x14004B9A0 (AcpiPccLockSubspace.c)
 *     AcpiPccUpdateSciRefCount @ 0x14004D418 (AcpiPccUpdateSciRefCount.c)
 *     AcpiDiagTracePccCommandComplete @ 0x14004DA4C (AcpiDiagTracePccCommandComplete.c)
 *     AcpiPccIsCommandCompleteSet @ 0x1400653E4 (AcpiPccIsCommandCompleteSet.c)
 *     AcpiPccReadErrorStatus @ 0x140065568 (AcpiPccReadErrorStatus.c)
 *     AcpiPccUpdateCommandCompleteStatus @ 0x140065688 (AcpiPccUpdateCommandCompleteStatus.c)
 */

char __fastcall AcpiPccCommandComplete(__int64 a1, char a2)
{
  KIRQL v2; // r12
  int v4; // edx
  char v5; // r14
  int v6; // r15d
  char v7; // r13
  char v8; // bl
  char v9; // r9
  int v10; // esi
  LARGE_INTEGER PerformanceCounter; // rbx
  int v13; // eax
  char IsCommandCompleteSet; // bl
  __int64 ErrorStatus; // rax
  unsigned __int8 v16; // cl
  _QWORD *v17; // rbp
  int v18; // ecx
  void *v19; // rdx
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // eax
  int v25; // [rsp+80h] [rbp+8h] BYREF
  char v26; // [rsp+88h] [rbp+10h]
  int v27; // [rsp+90h] [rbp+18h]

  v26 = a2;
  v2 = 0;
  LOBYTE(v25) = 0;
  v4 = *(_DWORD *)(a1 + 4);
  v5 = 0;
  v6 = _InterlockedExchange((volatile __int32 *)(a1 + 560), 0);
  v7 = 0;
  v27 = v4;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( !v6 )
    return AcpiDiagTracePccCommandComplete(v27, v5, v6, v9, v8, v7, v10);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( a2 )
  {
    AcpiPccLockSubspace(a1, (KIRQL *)&v25);
    v2 = v25;
  }
  v13 = *(_DWORD *)(a1 + 8) >> 1;
  LOBYTE(v13) = v13 & 0xF;
  *(LARGE_INTEGER *)(a1 + 416) = PerformanceCounter;
  v25 = v13;
  AcpiPccUpdateSciRefCount(a1, 0);
  KeCancelTimer2(a1 + 568);
  IsCommandCompleteSet = AcpiPccIsCommandCompleteSet(a1);
  ErrorStatus = AcpiPccReadErrorStatus(a1);
  v16 = *(_BYTE *)a1;
  v7 = ErrorStatus;
  if ( *(_BYTE *)a1 == 0xFF )
  {
    v5 = *(_BYTE *)(*(_QWORD *)(a1 + 56) + 12LL);
  }
  else if ( v16 < 3u )
  {
    v5 = *(_BYTE *)(*(_QWORD *)(a1 + 56) + 4LL);
  }
  else if ( (unsigned __int8)(v16 - 3) <= 1u )
  {
    v5 = *(_BYTE *)(*(_QWORD *)(a1 + 56) + 12LL);
  }
  if ( IsCommandCompleteSet )
  {
    if ( ErrorStatus )
      v10 = -1073741435;
  }
  else
  {
    v10 = -1073741643;
  }
  if ( *(_BYTE *)a1 != 3 )
    AcpiPccUpdateCommandCompleteStatus(a1);
  v17 = 0LL;
  v18 = *(_DWORD *)(a1 + 8) & 0x1E;
  if ( v18 == 12 )
  {
    v19 = (void *)v10;
  }
  else
  {
    if ( v18 != 20 )
    {
      v20 = (_QWORD *)(a1 + 360);
      v21 = *(_QWORD **)(a1 + 360);
      if ( v21 == (_QWORD *)(a1 + 360) )
      {
        v23 = *(_DWORD *)(a1 + 8) & 0xFFFFFFE1 | 6;
      }
      else
      {
        if ( (_QWORD *)v21[1] != v20 || (v22 = *v21, *(_QWORD **)(*v21 + 8LL) != v21) )
          __fastfail(3u);
        *v20 = v22;
        v17 = v21;
        *(_QWORD *)(v22 + 8) = v20;
        v23 = *(_DWORD *)(a1 + 8) & 0xFFFFFFE1 | 0xA;
      }
      *(_DWORD *)(a1 + 8) = v23;
      goto LABEL_28;
    }
    v19 = 0LL;
  }
  KeInsertQueueDpc((PRKDPC)(a1 + 712), v19, 0LL);
LABEL_28:
  v8 = (*(_DWORD *)(a1 + 8) >> 1) & 0xF;
  if ( v26 )
    AcpiPccUnlockSubspace(a1, v2);
  if ( v17 )
  {
    *((_DWORD *)v17 + 10) = 0;
    KeSetEvent((PRKEVENT)(v17 + 2), 0, 0);
  }
  v9 = v25;
  return AcpiDiagTracePccCommandComplete(v27, v5, v6, v9, v8, v7, v10);
}
