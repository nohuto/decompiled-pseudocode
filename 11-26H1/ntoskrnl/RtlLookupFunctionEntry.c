/*
 * XREFs of RtlLookupFunctionEntry @ 0x1402CB300
 * Callers:
 *     RtlUnwindEx @ 0x1402CA550 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x1403D8F00 (RtlDispatchException.c)
 *     RtlRaiseException @ 0x14061C280 (RtlRaiseException.c)
 *     ??$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA?AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x1406241DC (--$RtlpxSameFunction@VCDirectFnEnt@@VCDirectUnwindInfo@@@@YA-AVCDirectFnEnt@@V0@_K1PEBU_AMD64_UN.c)
 *     ??$RtlpxSameFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA?AVCUmaFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARAMS@@@Z @ 0x14062429C (--$RtlpxSameFunction@VCUmaFnEnt@@VCUmaUnwindInfo@@@@YA-AVCUmaFnEnt@@V0@_K1PEBU_AMD64_UNWIND_PARA.c)
 *     MmWriteSystemImageTracepoint @ 0x140701C34 (MmWriteSystemImageTracepoint.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x1407BF1B4 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 *     KiInitDynamicTraceSupport @ 0x140CD1ED0 (KiInitDynamicTraceSupport.c)
 *     RtlpInitMachineFrameEntries @ 0x140CE0414 (RtlpInitMachineFrameEntries.c)
 *     RtlInitializeHistoryTable @ 0x140CE0468 (RtlInitializeHistoryTable.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402CBA80 (RtlpxLookupFunctionTable.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

PRUNTIME_FUNCTION __cdecl RtlLookupFunctionEntry(
        DWORD64 ControlPc,
        PDWORD64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int128 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v12; // rbx
  int v13; // r10d
  int k; // r11d
  int v15; // edx
  unsigned __int64 v16; // rsi
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v17; // rax
  unsigned int UnwindInfoAddress; // eax
  PRUNTIME_FUNCTION result; // rax
  BYTE GlobalHint; // dl
  unsigned int i; // ecx
  unsigned int *v22; // r9
  unsigned __int64 v23; // r8
  __int64 Count; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  DWORD j; // edx
  ULONG_PTR v28; // rbx
  PRUNTIME_FUNCTION FunctionEntry; // rbp
  unsigned int ULongFromUser; // eax
  unsigned __int64 v31; // rdx
  __int128 v32; // [rsp+20h] [rbp-28h] BYREF
  __int64 v33; // [rsp+30h] [rbp-18h]

  if ( !HistoryTable )
    goto LABEL_2;
  if ( !HistoryTable->Once
    || (HistoryTable->Once = 0,
        v31 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_141201955 + 6],
        (result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_141201955 + 8]) == 0LL)
    || ControlPc < v31 + result->BeginAddress
    || ControlPc >= v31 + result->EndAddress )
  {
    if ( HistoryTable->Search )
    {
      if ( ControlPc < qword_141201960 && ControlPc >= qword_141201958 )
      {
        GlobalHint = HistoryTable->GlobalHint;
        for ( i = GlobalHint; i < RtlpUnwindHistoryTable[0]; ++i )
        {
          v22 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * i + 8];
          v23 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * i + 6];
          if ( ControlPc >= v23 + *v22 && ControlPc < v23 + v22[1] )
          {
            result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * i + 8];
            HistoryTable->GlobalHint = GlobalHint + 1;
            *ImageBase = v23;
            return result;
          }
        }
      }
      if ( ControlPc >= HistoryTable->LowAddress && ControlPc < HistoryTable->HighAddress )
      {
        for ( j = HistoryTable->LocalHint; j < HistoryTable->Count; ++j )
        {
          v28 = HistoryTable->Entry[j].ImageBase;
          FunctionEntry = HistoryTable->Entry[j].FunctionEntry;
          if ( ControlPc >= v28 + FunctionEntry->BeginAddress && ControlPc < v28 + FunctionEntry->EndAddress )
          {
            ++HistoryTable->LocalHint;
            *ImageBase = v28;
            if ( !FunctionEntry )
              return 0LL;
            if ( v28 < 0x7FFFFFFF0000LL )
              ULongFromUser = RtlReadULongFromUser(&FunctionEntry->8);
            else
              ULongFromUser = FunctionEntry->UnwindInfoAddress;
            if ( (ULongFromUser & 1) != 0 )
            {
              FunctionEntry = (PRUNTIME_FUNCTION)(v28 + ULongFromUser - 1LL);
              if ( v28 < 0x7FFFFFFF0000LL )
                ProbeForRead((volatile void *)(v28 + ULongFromUser - 1LL), 1uLL, 4u);
            }
            return FunctionEntry;
          }
        }
      }
    }
LABEL_2:
    v33 = 0LL;
    v32 = 0LL;
    if ( ControlPc < *((_QWORD *)&xmmword_141200030 + 1)
      || ControlPc >= *((_QWORD *)&xmmword_141200030 + 1) + (unsigned __int64)(unsigned int)qword_141200040 )
    {
      v6 = RtlpxLookupFunctionTable(ControlPc, &v32);
    }
    else
    {
      v6 = xmmword_141200030;
      v32 = xmmword_141200030;
      v33 = qword_141200040;
    }
    if ( v6 )
    {
      v7 = *((_QWORD *)&v32 + 1);
      v8 = HIDWORD(v33) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      *ImageBase = *((_QWORD *)&v32 + 1);
      v9 = *((_QWORD *)&v8 + 1) >> 3;
      if ( !(_DWORD)v9 )
        goto LABEL_21;
      v10 = ControlPc - v7;
      v11 = *(unsigned int *)(v6 + 12LL * (unsigned int)(v9 - 1));
      v12 = (_IMAGE_RUNTIME_FUNCTION_ENTRY *)(v6 + 12LL * (unsigned int)(v9 - 1));
      if ( v10 < v11 )
      {
        v13 = v9 - 2;
        for ( k = 0; v13 >= k; LODWORD(v11) = *(_DWORD *)(v6 + 12LL * v15) )
        {
          v15 = (k + v13) >> 1;
          v12 = (_IMAGE_RUNTIME_FUNCTION_ENTRY *)(v6 + 12LL * v15);
          if ( v10 < v12->BeginAddress )
          {
            v13 = v15 - 1;
          }
          else
          {
            LODWORD(v11) = *(_DWORD *)(v6 + 12LL * v15);
            if ( v10 < v12[1].BeginAddress )
              break;
            k = v15 + 1;
          }
        }
      }
      if ( v10 < (unsigned int)v11 || v10 >= v12->EndAddress )
LABEL_21:
        v12 = 0LL;
      if ( v12 )
      {
        if ( HistoryTable )
        {
          if ( !HistoryTable->Search )
          {
            Count = HistoryTable->Count;
            if ( (unsigned int)Count < 0xC )
            {
              HistoryTable->Count = Count + 1;
              HistoryTable->Entry[Count].ImageBase = *ImageBase;
              HistoryTable->Entry[(unsigned int)Count].FunctionEntry = v12;
              v25 = *ImageBase + v12->BeginAddress;
              v26 = *ImageBase + v12->EndAddress;
              if ( v25 < HistoryTable->LowAddress )
                HistoryTable->LowAddress = v25;
              if ( v26 > HistoryTable->HighAddress )
              {
                HistoryTable->HighAddress = v26;
                v17 = v12;
                v16 = *ImageBase;
                goto LABEL_17;
              }
            }
          }
        }
      }
      v16 = *ImageBase;
      v17 = v12;
      if ( v12 )
      {
LABEL_17:
        if ( v16 < 0x7FFFFFFF0000LL )
          UnwindInfoAddress = RtlReadULongFromUser(&v17->8);
        else
          UnwindInfoAddress = v17->UnwindInfoAddress;
        if ( (UnwindInfoAddress & 1) != 0 )
        {
          v12 = (_IMAGE_RUNTIME_FUNCTION_ENTRY *)(v16 + UnwindInfoAddress - 1LL);
          if ( v16 < 0x7FFFFFFF0000LL )
            ProbeForRead((volatile void *)(v16 + UnwindInfoAddress - 1LL), 1uLL, 4u);
        }
        return v12;
      }
    }
    return 0LL;
  }
  *ImageBase = v31;
  return result;
}
