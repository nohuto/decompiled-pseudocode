/*
 * XREFs of RtlDispatchException @ 0x1403D8F00
 * Callers:
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 *     RtlRaiseNoncontinuableException @ 0x140537610 (RtlRaiseNoncontinuableException.c)
 *     RtlRaiseException @ 0x14061C280 (RtlRaiseException.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402634E0 (KeQueryCurrentStackInformationEx.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     RtlpCopyContext @ 0x1402CB010 (RtlpCopyContext.c)
 *     RtlVirtualUnwind2 @ 0x1402CB250 (RtlVirtualUnwind2.c)
 *     RtlLookupFunctionEntry @ 0x1402CB300 (RtlLookupFunctionEntry.c)
 *     RtlpGetStackLimitsEx @ 0x1403D9530 (RtlpGetStackLimitsEx.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D9690 (RtlInitializeExtendedContext2.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1405256A0 (RtlpLookupPrimaryFunctionEntry.c)
 *     RtlpLogExceptionDispatch @ 0x140528534 (RtlpLogExceptionDispatch.c)
 *     RtlVirtualUnwind @ 0x14052DE90 (RtlVirtualUnwind.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x140736220 (RtlpExecuteHandlerForException.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

BOOLEAN __cdecl RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  unsigned int v4; // edi
  ULONG_PTR Rsp; // rcx
  ULONG v6; // edx
  char v7; // cl
  int v8; // ebx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // rsp
  unsigned __int64 Rip; // r12
  _UNWIND_HISTORY_TABLE *p_HistoryTable; // rax
  ULONG_PTR v14; // r13
  _CONTEXT_EX *v15; // rax
  unsigned __int64 v16; // rbx
  ULONG_PTR v17; // rcx
  char v18; // al
  int v19; // edx
  PEXCEPTION_ROUTINE v20; // r9
  __int64 v21; // rbx
  bool v22; // zf
  int v23; // eax
  ULONG_PTR v24; // r8
  BOOLEAN result; // al
  char v26; // al
  char v27; // dl
  PRUNTIME_FUNCTION v28; // r9
  DWORD64 v29; // r10
  _CONTEXT_EX *v30; // rax
  char v31; // dl
  unsigned __int32 WaitBlockList_high; // r10d
  int v33; // ett
  signed __int32 v34; // r11d
  char v35; // al
  char StackLimits; // al
  PUNWIND_HISTORY_TABLE v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rbx
  __int128 *v40; // rax
  __int128 *v41; // rcx
  __int64 v42; // rdx
  __int128 v43; // xmm0
  __int128 v44; // xmm0
  _BYTE v45[4]; // [rsp+70h] [rbp+0h] BYREF
  int v46; // [rsp+74h] [rbp+4h] BYREF
  char v47; // [rsp+78h] [rbp+8h]
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp+10h] BYREF
  ULONG_PTR v49; // [rsp+88h] [rbp+18h] BYREF
  char *v50; // [rsp+90h] [rbp+20h] BYREF
  unsigned __int64 ImageBase; // [rsp+98h] [rbp+28h] BYREF
  PUNWIND_HISTORY_TABLE v52; // [rsp+A0h] [rbp+30h]
  PEXCEPTION_ROUTINE v53; // [rsp+A8h] [rbp+38h] BYREF
  int v54; // [rsp+B0h] [rbp+40h]
  PVOID HandlerData; // [rsp+B8h] [rbp+48h] BYREF
  ULONG_PTR v56; // [rsp+C0h] [rbp+50h]
  PCONTEXT_EX ContextEx; // [rsp+C8h] [rbp+58h] BYREF
  DWORD64 ControlPc; // [rsp+D0h] [rbp+60h] BYREF
  unsigned __int64 v59; // [rsp+D8h] [rbp+68h]
  PCONTEXT_EX v60; // [rsp+E0h] [rbp+70h]
  ULONG_PTR v61; // [rsp+E8h] [rbp+78h]
  _BYTE *v62; // [rsp+F8h] [rbp+88h]
  EXCEPTION_DISPOSITION (__cdecl *v63)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+100h] [rbp+90h]
  ULONG_PTR v64; // [rsp+108h] [rbp+98h]
  _UNWIND_HISTORY_TABLE *v65; // [rsp+110h] [rbp+A0h]
  int v66; // [rsp+118h] [rbp+A8h]
  _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+120h] [rbp+B0h] BYREF

  memset_0(&ControlPc, 0, 0x50uLL);
  v47 = 0;
  BugCheckParameter1 = 0LL;
  v53 = 0LL;
  HandlerData = 0LL;
  v49 = 0LL;
  ImageBase = 0LL;
  v50 = 0LL;
  v46 = 0;
  memset_0(HistoryTable.Entry, 0, sizeof(HistoryTable.Entry));
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v47 = 1;
    RtlpLogExceptionDispatch(ExceptionRecord, ContextRecord);
  }
  v4 = ExceptionRecord->ExceptionFlags & 0x81;
  KeQueryCurrentStackInformationEx(ContextRecord->Rsp, &v46, &v50, &v49);
  Rsp = ContextRecord->Rsp;
  v46 = v46 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimitsEx(Rsp, (ULONG_PTR)ExceptionRecord) )
  {
LABEL_40:
    v4 |= 8u;
    goto LABEL_41;
  }
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v6 = 1048715;
    v7 = 5;
  }
  else
  {
    v6 = 1048587;
    v7 = 1;
  }
  v8 = 1296;
  if ( (v7 & 4) == 0 )
    v8 = 1264;
  v9 = (unsigned int)(v8 + 15);
  v10 = v9 + 15;
  if ( v9 + 15 <= v9 )
    v10 = 0xFFFFFFFFFFFFFF0LL;
  v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2((PCONTEXT)v45, v6, &ContextEx, 0LL);
  RtlpCopyContext((__int64)v45, (__int64)ContextRecord);
  Rip = ContextRecord->Rip;
  p_HistoryTable = &HistoryTable;
  v52 = &HistoryTable;
  v56 = 0LL;
  HistoryTable.Count = 0;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
LABEL_11:
  v14 = v49;
  while ( 1 )
  {
    v15 = (_CONTEXT_EX *)RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v16 = ImageBase;
    ContextEx = v15;
    if ( (int)RtlVirtualUnwind2(
                1,
                ImageBase,
                Rip,
                (int)v15,
                (__int64)v45,
                0LL,
                (__int64)&HandlerData,
                (__int64)&BugCheckParameter1,
                0LL,
                0LL,
                0LL,
                (__int64)&v53,
                0) < 0 )
      goto LABEL_41;
    v17 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 >= v14 || BugCheckParameter1 < (unsigned __int64)v50 )
    {
      v35 = v46;
      if ( (_BYTE)v46 == 1 )
      {
        StackLimits = RtlpGetStackLimitsEx(BugCheckParameter1, (ULONG_PTR)ExceptionRecord);
        v17 = BugCheckParameter1;
        v14 = v49;
        LOBYTE(v46) = 2;
        if ( StackLimits )
          goto LABEL_16;
        v35 = v46;
      }
      if ( !v35 )
        goto LABEL_40;
    }
LABEL_16:
    if ( v53 )
      break;
LABEL_17:
    Rip = HistoryTable.Entry[3].ImageBase;
    if ( (v64 & 7) == 0 && v64 >= (unsigned __int64)v50 )
    {
      p_HistoryTable = v52;
      if ( v64 < v14 )
        continue;
    }
    if ( (_BYTE)v46 == 1 )
    {
      v18 = RtlpGetStackLimitsEx(v64, (ULONG_PTR)ExceptionRecord);
      LOBYTE(v46) = 0;
      if ( v18 )
      {
        p_HistoryTable = v52;
        goto LABEL_11;
      }
    }
LABEL_41:
    result = 0;
    ExceptionRecord->ExceptionFlags = v4;
    return result;
  }
  v19 = 0;
  v54 = 0;
  while ( 1 )
  {
    v20 = v53;
    v60 = ContextEx;
    v59 = v16;
    v21 = 0LL;
    v22 = RtlpExceptionLog2 == 0;
    v64 = (ULONG_PTR)HandlerData;
    v65 = v52;
    ExceptionRecord->ExceptionFlags = v4;
    v45[0] = 0;
    ControlPc = Rip;
    v61 = v17;
    v62 = v45;
    v63 = v20;
    v66 = v19;
    if ( !v22 && v47 )
    {
      WaitBlockList_high = HIDWORD(NormalizationListLock.WaitBlockList);
      v33 = HIDWORD(NormalizationListLock.WaitBlockList);
      v34 = _InterlockedCompareExchange(
              (_DWORD *)&NormalizationListLock.WaitBlockList + 1,
              (HIDWORD(NormalizationListLock.WaitBlockList) + 1) % 0x32u,
              SHIDWORD(NormalizationListLock.WaitBlockList));
      if ( v33 != v34 )
      {
        do
        {
          WaitBlockList_high = v34;
          v34 = _InterlockedCompareExchange((_DWORD *)&NormalizationListLock.WaitBlockList + 1, (v34 + 1) % 0x32u, v34);
        }
        while ( v34 != WaitBlockList_high );
      }
      v39 = 1424LL * WaitBlockList_high;
      v22 = RtlpExceptionLog2 + v39 == 0;
      v21 = RtlpExceptionLog2 + v39;
      *(_QWORD *)(v21 + 1400) = KeGetCurrentThread();
      if ( !v22 )
      {
        *(_DWORD *)(v21 + 1392) = 2;
        v40 = (__int128 *)(v21 + 160);
        *(_DWORD *)(v21 + 1396) = -1;
        v41 = (__int128 *)v45;
        v42 = 9LL;
        *(_OWORD *)v21 = *(_OWORD *)&ExceptionRecord->ExceptionCode;
        *(_OWORD *)(v21 + 16) = *(_OWORD *)&ExceptionRecord->ExceptionAddress;
        *(_OWORD *)(v21 + 32) = *(_OWORD *)ExceptionRecord->ExceptionInformation;
        *(_OWORD *)(v21 + 48) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[2];
        *(_OWORD *)(v21 + 64) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[4];
        *(_OWORD *)(v21 + 80) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[6];
        *(_OWORD *)(v21 + 96) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[8];
        *(_OWORD *)(v21 + 112) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[10];
        *(_OWORD *)(v21 + 128) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[12];
        *(_QWORD *)(v21 + 144) = ExceptionRecord->ExceptionInformation[14];
        do
        {
          v40 += 8;
          v43 = *v41;
          v41 += 8;
          *(v40 - 8) = v43;
          *(v40 - 7) = *(v41 - 7);
          *(v40 - 6) = *(v41 - 6);
          *(v40 - 5) = *(v41 - 5);
          *(v40 - 4) = *(v41 - 4);
          *(v40 - 3) = *(v41 - 3);
          *(v40 - 2) = *(v41 - 2);
          *(v40 - 1) = *(v41 - 1);
          --v42;
        }
        while ( v42 );
        *v40 = *v41;
        v40[1] = v41[1];
        v40[2] = v41[2];
        v40[3] = v41[3];
        v44 = v41[4];
        *(_QWORD *)(v21 + 1408) = Rip;
        *(_QWORD *)(v21 + 1416) = v20;
        v40[4] = v44;
        *(_DWORD *)(v21 + 208) &= 0x10001Fu;
      }
      v17 = BugCheckParameter1;
    }
    v23 = RtlpExecuteHandlerForException(ExceptionRecord, v17, ContextRecord, &ControlPc);
    if ( v21 )
      *(_DWORD *)(v21 + 1396) = v23;
    v24 = v56;
    v4 |= ExceptionRecord->ExceptionFlags & 1;
    v17 = BugCheckParameter1;
    if ( v56 == BugCheckParameter1 )
    {
      v4 &= ~0x10u;
      v24 = 0LL;
      v56 = 0LL;
    }
    if ( !v23 )
      break;
    if ( v23 == 1 )
      goto LABEL_33;
    if ( v23 == 2 )
    {
      v4 |= 0x10u;
      v31 = 1;
      if ( (_BYTE)v46 && ((v61 & 7) != 0 || v61 < (unsigned __int64)v50 || v61 >= v14) )
        v31 = 0;
      if ( v61 > v24 || !v31 )
        v56 = v61;
LABEL_33:
      v26 = v45[0];
      v16 = ImageBase;
LABEL_34:
      v27 = v46;
      goto LABEL_35;
    }
    if ( v23 != 3 )
      RtlRaiseStatus(-1073741786);
    Rip = ControlPc;
    ImageBase = v59;
    RtlpCopyContext((__int64)v45, (__int64)v62);
    v53 = RtlVirtualUnwind(1u, v29, Rip, v28, (PCONTEXT)v45, &HandlerData, &BugCheckParameter1, 0LL);
    BugCheckParameter1 = v61;
    v30 = (_CONTEXT_EX *)RtlLookupFunctionEntry(Rip, &ImageBase, v52);
    ContextEx = v30;
    if ( v30 != v60 )
      goto LABEL_45;
    v16 = ImageBase;
    v37 = (PUNWIND_HISTORY_TABLE)(v16
                                + *(unsigned int *)(RtlpLookupPrimaryFunctionEntry((struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)v30)
                                                  + 8));
    v52 = v37;
    if ( v16 < 0x7FFFFFFF0000LL )
    {
      ProbeForRead(v37, 1uLL, 4u);
      v37 = v52;
    }
    if ( (v37->Count & 0x10) != 0 )
    {
      v38 = BYTE2(v37->Count) + (BYTE2(v37->Count) & 1u);
      HandlerData = &v37->LocalHint + 2 * (unsigned int)(v38 + 2);
      v53 = (PEXCEPTION_ROUTINE)(v16 + *(unsigned int *)(&v37->LocalHint + 2 * v38));
    }
    if ( v53 != v63 || HandlerData != (PVOID)v64 )
LABEL_45:
      __fastfail(0x27u);
    v17 = BugCheckParameter1;
    v52 = v65;
    v54 = v66;
    v26 = 1;
    v45[0] = 1;
    if ( (BugCheckParameter1 & 7) == 0 && BugCheckParameter1 < v14 && BugCheckParameter1 >= (unsigned __int64)v50 )
      goto LABEL_34;
    v27 = v46;
    if ( (_BYTE)v46 == 1 )
    {
      RtlpGetStackLimitsEx(BugCheckParameter1, (ULONG_PTR)ExceptionRecord);
      v17 = BugCheckParameter1;
      v14 = v49;
LABEL_36:
      v26 = v45[0];
      LOBYTE(v46) = 0;
      goto LABEL_37;
    }
LABEL_35:
    if ( v27 == 2 )
      goto LABEL_36;
LABEL_37:
    v19 = v54;
    if ( !v26 )
      goto LABEL_17;
  }
  if ( (v4 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  return 1;
}
