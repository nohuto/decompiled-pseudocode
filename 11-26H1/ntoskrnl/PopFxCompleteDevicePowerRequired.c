/*
 * XREFs of PopFxCompleteDevicePowerRequired @ 0x1403BCB54
 * Callers:
 *     PopFxProcessWork @ 0x1403B8BD0 (PopFxProcessWork.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1403BDBD0 (PopFxDeliverDevicePowerRequired.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x1404D4680 (PopFxHandleReportDevicePoweredOn.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     PopPluginDevicePower @ 0x1403BCABC (PopPluginDevicePower.c)
 *     PopDiagTraceFxDevicePowered @ 0x1403BCD0C (PopDiagTraceFxDevicePowered.c)
 */

char __fastcall PopFxCompleteDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // bl
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rdx

  v2 = 0;
  v5 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
  if ( v5 < 0 )
    PopFxBugCheck(0x613uLL, BugCheckParameter2, 0LL, 1uLL);
  if ( v5 )
  {
    if ( a2 )
    {
      v11 = *(_QWORD *)(BugCheckParameter2 + 48);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 80);
        if ( v12 )
        {
          v13 = 3LL
              * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 896), 1u)
               % *(_DWORD *)(v12 + 880));
          v14 = *(_QWORD *)(v12 + 888);
          *(_QWORD *)(v14 + 8 * v13) = MEMORY[0xFFFFF78000000008];
          *(_WORD *)(v14 + 8 * v13 + 8) = 16;
          *(_WORD *)(v14 + 8 * v13 + 10) = KeGetCurrentPrcb()->Number;
          *(_WORD *)(v14 + 8 * v13 + 12) = KeGetCurrentThread()[1].CycleTime;
          *(_WORD *)(v14 + 8 * v13 + 14) = KeGetCurrentThread()[1].CurrentRunTime;
          *(_QWORD *)(v14 + 8 * v13 + 16) = 0LL;
        }
      }
    }
  }
  else
  {
    PopDiagTraceFxDevicePowered(*(_QWORD *)(BugCheckParameter2 + 48));
    if ( !a2 )
    {
      v6 = *(_QWORD *)(BugCheckParameter2 + 48);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 80);
        if ( v7 )
        {
          v8 = 3LL
             * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 896), 1u) % *(_DWORD *)(v7 + 880));
          v9 = *(_QWORD *)(v7 + 888);
          *(_QWORD *)(v9 + 8 * v8) = MEMORY[0xFFFFF78000000008];
          *(_WORD *)(v9 + 8 * v8 + 8) = 16;
          *(_WORD *)(v9 + 8 * v8 + 10) = KeGetCurrentPrcb()->Number;
          *(_WORD *)(v9 + 8 * v8 + 12) = KeGetCurrentThread()[1].CycleTime;
          *(_WORD *)(v9 + 8 * v8 + 14) = KeGetCurrentThread()[1].CurrentRunTime;
          *(_QWORD *)(v9 + 8 * v8 + 16) = 1LL;
        }
      }
    }
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFBFFF);
    return PopPluginDevicePower(BugCheckParameter2, 1, a2);
  }
  return v2;
}
