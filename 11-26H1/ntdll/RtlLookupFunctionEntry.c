/*
 * XREFs of RtlLookupFunctionEntry @ 0x18004AEA0
 * Callers:
 *     RtlRaiseException @ 0x180040C10 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x18004C680 (RtlDispatchException.c)
 *     RtlInitializeHistoryTable @ 0x1800E554C (RtlInitializeHistoryTable.c)
 *     InitSpecialMachineFrames @ 0x1800F9010 (InitSpecialMachineFrames.c)
 *     ??$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA?AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x18011D2F8 (--$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA-AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UN.c)
 *     _invalid_parameter @ 0x180126898 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x1801269E0 (__report_gsfailure.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x18004B2A0 (RtlpxLookupFunctionTable.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x1800D7C50 (RtlpLookupDynamicFunctionEntry.c)
 */

PRUNTIME_FUNCTION __stdcall RtlLookupFunctionEntry(
        ULONG64 ControlPc,
        PULONG64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  __int64 v6; // r8
  PRUNTIME_FUNCTION FunctionEntry; // rsi
  unsigned int v8; // r9d
  ULONG64 v9; // rbx
  ULONG64 v10; // rdx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v11; // rax
  int v12; // r10d
  int k; // r11d
  int v14; // r9d
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v15; // rcx
  __int64 v16; // rdx
  PRUNTIME_FUNCTION result; // rax
  DWORD j; // edx
  DWORD64 v19; // r8
  __int64 UnwindInfoAddress; // rax
  __int64 Count; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  BYTE GlobalHint; // cl
  unsigned int i; // r9d
  unsigned int *v26; // r8
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  __int128 v29; // [rsp+20h] [rbp-28h] BYREF
  __int64 v30; // [rsp+30h] [rbp-18h]

  if ( !HistoryTable )
    goto LABEL_2;
  if ( !HistoryTable->Once
    || (HistoryTable->Once = 0,
        v28 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_1801E0365 + 6],
        (result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_1801E0365 + 8]) == 0LL)
    || ControlPc < v28 + result->BeginAddress
    || ControlPc >= v28 + result->EndAddress )
  {
    if ( HistoryTable->Search )
    {
      if ( ControlPc >= qword_1801E0368 && ControlPc < qword_1801E0370 )
      {
        GlobalHint = HistoryTable->GlobalHint;
        for ( i = GlobalHint; i < RtlpUnwindHistoryTable[0]; ++i )
        {
          v26 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * i + 8];
          v27 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * i + 6];
          if ( ControlPc >= v27 + *v26 && ControlPc < v27 + v26[1] )
          {
            result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * i + 8];
            HistoryTable->GlobalHint = GlobalHint + 1;
            *ImageBase = v27;
            return result;
          }
        }
      }
      if ( ControlPc >= HistoryTable->LowAddress && ControlPc < HistoryTable->HighAddress )
      {
        for ( j = HistoryTable->LocalHint; j < HistoryTable->Count; ++j )
        {
          v19 = HistoryTable->Entry[j].ImageBase;
          FunctionEntry = HistoryTable->Entry[j].FunctionEntry;
          if ( ControlPc >= v19 + FunctionEntry->BeginAddress && ControlPc < v19 + FunctionEntry->EndAddress )
          {
            ++HistoryTable->LocalHint;
            *ImageBase = v19;
            if ( FunctionEntry )
            {
              UnwindInfoAddress = FunctionEntry->UnwindInfoAddress;
              if ( (UnwindInfoAddress & 1) != 0 )
                return (PRUNTIME_FUNCTION)(v19 + UnwindInfoAddress - 1);
            }
            return FunctionEntry;
          }
        }
      }
    }
LABEL_2:
    v30 = 0LL;
    v29 = 0LL;
    if ( ControlPc < *((_QWORD *)&xmmword_1801E0450 + 1)
      || ControlPc >= *((_QWORD *)&xmmword_1801E0450 + 1) + (unsigned __int64)(unsigned int)qword_1801E0460 )
    {
      v6 = RtlpxLookupFunctionTable(ControlPc, &v29);
    }
    else
    {
      v6 = xmmword_1801E0450;
      v29 = xmmword_1801E0450;
      v30 = qword_1801E0460;
    }
    FunctionEntry = 0LL;
    if ( v6 )
    {
      *ImageBase = *((_QWORD *)&v29 + 1);
      v8 = HIDWORD(v30) / 0xC;
      if ( HIDWORD(v30) / 0xC )
      {
        v9 = ControlPc - *ImageBase;
        v10 = *(unsigned int *)(v6 + 12LL * (v8 - 1));
        v11 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v6 + 12LL * (v8 - 1));
        if ( v9 < v10 )
        {
          v12 = v8 - 2;
          for ( k = 0; v12 >= k; LODWORD(v10) = *(_DWORD *)(v6 + 12LL * v14) )
          {
            v14 = (k + v12) >> 1;
            v11 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v6 + 12LL * v14);
            if ( v9 < v11->BeginAddress )
            {
              v12 = v14 - 1;
            }
            else
            {
              LODWORD(v10) = *(_DWORD *)(v6 + 12LL * v14);
              if ( v9 < v11[1].BeginAddress )
                break;
              k = v14 + 1;
            }
          }
        }
        if ( v9 < (unsigned int)v10 || v9 >= v11->EndAddress )
          v11 = 0LL;
      }
      else
      {
        v11 = 0LL;
      }
    }
    else
    {
      v11 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlpLookupDynamicFunctionEntry(ControlPc, ImageBase);
    }
    if ( !v11 )
      goto LABEL_16;
    if ( !HistoryTable )
      goto LABEL_16;
    if ( HistoryTable->Search )
      goto LABEL_16;
    Count = HistoryTable->Count;
    if ( (unsigned int)Count >= 0xC )
      goto LABEL_16;
    HistoryTable->Count = Count + 1;
    HistoryTable->Entry[Count].ImageBase = *ImageBase;
    HistoryTable->Entry[(unsigned int)Count].FunctionEntry = v11;
    v22 = *ImageBase + v11->BeginAddress;
    v23 = *ImageBase + v11->EndAddress;
    if ( v22 < HistoryTable->LowAddress )
      HistoryTable->LowAddress = v22;
    if ( v23 > HistoryTable->HighAddress )
    {
      HistoryTable->HighAddress = v23;
      v15 = v11;
    }
    else
    {
LABEL_16:
      v15 = v11;
      if ( !v11 )
        return FunctionEntry;
    }
    v16 = v11->UnwindInfoAddress;
    if ( (v16 & 1) != 0 )
      return (PRUNTIME_FUNCTION)(v16 + *ImageBase - 1);
    return v15;
  }
  *ImageBase = v28;
  return result;
}
