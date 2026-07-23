/*
 * XREFs of RtlDispatchException @ 0x180036C00
 * Callers:
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 *     RtlRaiseNoncontinuableException @ 0x1801272E0 (RtlRaiseNoncontinuableException.c)
 *     KiUserExceptionDispatcher @ 0x180162EC0 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlpCopyContext @ 0x180034DC0 (RtlpCopyContext.c)
 *     RtlVirtualUnwind2 @ 0x180035390 (RtlVirtualUnwind2.c)
 *     RtlLookupFunctionEntry @ 0x180035420 (RtlLookupFunctionEntry.c)
 *     RtlpCallVectoredHandlers @ 0x180037510 (RtlpCallVectoredHandlers.c)
 *     RtlInitializeExtendedContext2 @ 0x1800B1A60 (RtlInitializeExtendedContext2.c)
 *     RtlpSanitizeContext @ 0x1800B1F10 (RtlpSanitizeContext.c)
 *     RtlpValidateContextFlags2 @ 0x1800B1FF0 (RtlpValidateContextFlags2.c)
 *     RtlpGetEntireXStateAreaLength2 @ 0x1800B20C4 (RtlpGetEntireXStateAreaLength2.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x1800B2120 (RtlpRemoveArchDisallowedXStateFeatures.c)
 *     RtlpGetStackLimits @ 0x1800CAF10 (RtlpGetStackLimits.c)
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAX27@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x18014B9DC (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180163510 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x1801635A0 (RtlpExecuteHandlerForException.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

BOOLEAN __cdecl RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  PCONTEXT v2; // r12
  unsigned int v4; // edi
  unsigned int v5; // r8d
  int v6; // ett
  signed __int32 v7; // r9d
  __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // rdx
  _OWORD *v11; // rcx
  _OWORD *p_P1Home; // rax
  __int64 v13; // r8
  __int128 v14; // xmm0
  unsigned int v16; // esi
  ULONG64 v17; // r14
  ULONG v18; // r15d
  PCONTEXT_EX v19; // r12
  char v20; // r11
  int v21; // eax
  int v22; // edi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  void *v25; // rsp
  void *v26; // rsp
  DWORD64 Rip; // r14
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // rax
  PRUNTIME_FUNCTION v29; // r15
  unsigned __int64 v30; // rdi
  _CONTEXT_EX *v31; // rcx
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r8
  _BYTE *v35; // r9
  int v36; // eax
  PUNWIND_HISTORY_TABLE v37; // rdx
  __int64 v38; // rdi
  unsigned int v39; // r9d
  int v40; // ett
  signed __int32 v41; // r10d
  __int64 v42; // rdi
  _OWORD *v43; // rax
  char *v44; // rcx
  __int64 v45; // rdx
  __int128 v46; // xmm0
  __int128 v47; // xmm0
  int v48; // eax
  PCONTEXT_EX v49; // rdx
  PRUNTIME_FUNCTION v50; // rax
  bool v51; // cc
  _BYTE *v52; // r8
  unsigned int v53; // edx
  __int64 v54; // rdx
  char v55; // [rsp+70h] [rbp+0h] BYREF
  PCONTEXT_EX v56; // [rsp+78h] [rbp+8h] BYREF
  PUNWIND_HISTORY_TABLE v57; // [rsp+80h] [rbp+10h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+88h] [rbp+18h] BYREF
  PCONTEXT v59; // [rsp+90h] [rbp+20h] BYREF
  _BYTE *v60; // [rsp+98h] [rbp+28h] BYREF
  unsigned __int64 ImageBase; // [rsp+A0h] [rbp+30h] BYREF
  unsigned __int64 v62; // [rsp+A8h] [rbp+38h] BYREF
  unsigned __int64 v63; // [rsp+B0h] [rbp+40h] BYREF
  PCONTEXT v64; // [rsp+B8h] [rbp+48h] BYREF
  ULONG64 ControlPc; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int64 v66; // [rsp+C8h] [rbp+58h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v67; // [rsp+D0h] [rbp+60h]
  _CONTEXT_EX *v68; // [rsp+D8h] [rbp+68h]
  char *v69; // [rsp+E8h] [rbp+78h]
  struct _CONTEXT *v70; // [rsp+F0h] [rbp+80h]
  _BYTE *v71; // [rsp+F8h] [rbp+88h]
  struct _UNWIND_HISTORY_TABLE *v72; // [rsp+100h] [rbp+90h]
  unsigned __int64 v73; // [rsp+108h] [rbp+98h]
  _QWORD v74[4]; // [rsp+110h] [rbp+A0h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+130h] [rbp+C0h] BYREF

  v2 = ContextRecord;
  v64 = ContextRecord;
  v4 = 0;
  memset_thunk_772440563353939046(&ControlPc, 0, 0x50uLL);
  v55 = 0;
  v56 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v62 = 0LL;
  ImageBase = 0LL;
  v63 = 0LL;
  memset_thunk_772440563353939046(&HistoryTable, 0, 0xD8uLL);
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800000) != 0 )
  {
    v55 = 1;
    if ( RtlpExceptionLog2 )
    {
      v5 = RtlpExceptionLogCount;
      v6 = RtlpExceptionLogCount;
      v7 = _InterlockedCompareExchange(
             &RtlpExceptionLogCount,
             (RtlpExceptionLogCount + 1) % 0x32u,
             RtlpExceptionLogCount);
      if ( v6 != v7 )
      {
        do
        {
          v5 = v7;
          v7 = _InterlockedCompareExchange(&RtlpExceptionLogCount, (v7 + 1) % 0x32u, v7);
        }
        while ( v7 != v5 );
      }
      v8 = 1424LL * v5;
      v9 = RtlpExceptionLog2 + v8 == 0;
      v10 = RtlpExceptionLog2 + v8;
      *(_QWORD *)(v10 + 1400) = NtCurrentTeb()->ClientId.UniqueThread;
      if ( !v9 )
      {
        *(_DWORD *)(v10 + 1392) = 1;
        v11 = (_OWORD *)(v10 + 160);
        p_P1Home = &v2->P1Home;
        v13 = 9LL;
        *(_OWORD *)v10 = *(_OWORD *)&ExceptionRecord->ExceptionCode;
        *(_OWORD *)(v10 + 16) = *(_OWORD *)&ExceptionRecord->ExceptionAddress;
        *(_OWORD *)(v10 + 32) = *(_OWORD *)ExceptionRecord->ExceptionInformation;
        *(_OWORD *)(v10 + 48) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[2];
        *(_OWORD *)(v10 + 64) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[4];
        *(_OWORD *)(v10 + 80) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[6];
        *(_OWORD *)(v10 + 96) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[8];
        *(_OWORD *)(v10 + 112) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[10];
        *(_OWORD *)(v10 + 128) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[12];
        *(_QWORD *)(v10 + 144) = ExceptionRecord->ExceptionInformation[14];
        do
        {
          v11 += 8;
          v14 = *p_P1Home;
          p_P1Home += 8;
          *(v11 - 8) = v14;
          *(v11 - 7) = *(p_P1Home - 7);
          *(v11 - 6) = *(p_P1Home - 6);
          *(v11 - 5) = *(p_P1Home - 5);
          *(v11 - 4) = *(p_P1Home - 4);
          *(v11 - 3) = *(p_P1Home - 3);
          *(v11 - 2) = *(p_P1Home - 2);
          *(v11 - 1) = *(p_P1Home - 1);
          --v13;
        }
        while ( v13 );
        *v11 = *p_P1Home;
        v11[1] = p_P1Home[1];
        v11[2] = p_P1Home[2];
        v11[3] = p_P1Home[3];
        v11[4] = p_P1Home[4];
        *(_DWORD *)(v10 + 208) &= 0x10001Fu;
      }
    }
  }
  if ( !(unsigned __int8)RtlpCallVectoredHandlers(ExceptionRecord, v2, 0LL) )
  {
    v16 = ExceptionRecord->ExceptionFlags & 0x81;
    if ( !(unsigned __int8)RtlpGetStackLimits(&v63, &v62) )
    {
      ExceptionRecord->ExceptionFlags = v16 | 8;
      goto LABEL_11;
    }
    RtlpSanitizeContext(v2);
    if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) == 1 )
    {
      v17 = 2048LL;
      v18 = 1048651;
    }
    else
    {
      v17 = 0LL;
      v18 = 1048587;
    }
    LODWORD(v57) = 0;
    v19 = (PCONTEXT_EX)v17;
    if ( (int)RtlpValidateContextFlags2(v18, &v57, 2147353560LL) >= 0 )
    {
      v20 = (char)v57;
      v21 = 1264;
      if ( ((unsigned __int8)v57 & 2) != 0 )
      {
        if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
        {
          ContextEx = (PCONTEXT_EX)(v17 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL));
          RtlpRemoveArchDisallowedXStateFeatures(v18, &ContextEx);
          v19 = ContextEx;
        }
        v21 = RtlpGetEntireXStateAreaLength2(v19, 2147353560LL) + 800;
      }
      v22 = v21 + 32;
      if ( (v20 & 4) == 0 )
        v22 = v21;
      v4 = v22 + 15;
    }
    v23 = v4 + 15LL;
    if ( v23 <= v4 )
      v23 = 0xFFFFFFFFFFFFFF0LL;
    v24 = v23 & 0xFFFFFFFFFFFFFFF0uLL;
    v25 = alloca(v24);
    v26 = alloca(v24);
    RtlInitializeExtendedContext2((PCONTEXT)&v55, v18, &ContextEx, v17);
    v2 = v64;
    RtlpCopyContext((__int64)&v55, (__int64)v64);
    Rip = v2->Rip;
    p_HistoryTable = &HistoryTable;
    v57 = &HistoryTable;
    ContextEx = 0LL;
    HistoryTable.HighAddress = 0LL;
    HistoryTable.Once = 1;
    HistoryTable.LowAddress = -1LL;
    while ( 1 )
    {
      v29 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
      v30 = ImageBase;
      if ( (int)RtlVirtualUnwind2(
                  1,
                  ImageBase,
                  Rip,
                  (int)v29,
                  (__int64)&v55,
                  0LL,
                  (__int64)&v60,
                  (__int64)&v56,
                  0LL,
                  0LL,
                  0LL,
                  (__int64)&v59,
                  0) < 0 )
        goto LABEL_52;
      v31 = v56;
      if ( ((unsigned __int8)v56 & 7) != 0
        || (v32 = v63, (unsigned __int64)v56 < v63)
        || (v33 = v62, (unsigned __int64)v56 >= v62) )
      {
        v16 |= 8u;
LABEL_52:
        LOBYTE(v4) = 0;
        ExceptionRecord->ExceptionFlags = v16;
        goto LABEL_11;
      }
      v34 = (unsigned __int64)v59;
      if ( v59 )
        break;
LABEL_47:
      Rip = HistoryTable.Entry[2].ImageBase;
      if ( (v73 & 7) != 0 || v73 >= v33 || v73 < v32 )
        goto LABEL_52;
      p_HistoryTable = v57;
    }
    v35 = v60;
    v36 = 0;
    while ( 1 )
    {
      v37 = v57;
      v66 = v30;
      v38 = 0LL;
      ExceptionRecord->ExceptionFlags = v16;
      ControlPc = Rip;
      v67 = v29;
      v68 = v31;
      v69 = &v55;
      v70 = (struct _CONTEXT *)v34;
      v71 = v35;
      v72 = v37;
      LODWORD(v73) = v36;
      if ( v55 && RtlpExceptionLog2 )
      {
        v39 = RtlpExceptionLogCount;
        v40 = RtlpExceptionLogCount;
        v41 = _InterlockedCompareExchange(
                &RtlpExceptionLogCount,
                (RtlpExceptionLogCount + 1) % 0x32u,
                RtlpExceptionLogCount);
        if ( v40 != v41 )
        {
          do
          {
            v39 = v41;
            v41 = _InterlockedCompareExchange(&RtlpExceptionLogCount, (v41 + 1) % 0x32u, v41);
          }
          while ( v41 != v39 );
        }
        v42 = 1424LL * v39;
        v9 = RtlpExceptionLog2 + v42 == 0;
        v38 = RtlpExceptionLog2 + v42;
        *(_QWORD *)(v38 + 1400) = NtCurrentTeb()->ClientId.UniqueThread;
        if ( !v9 )
        {
          *(_DWORD *)(v38 + 1392) = 2;
          v43 = (_OWORD *)(v38 + 160);
          *(_DWORD *)(v38 + 1396) = -1;
          v44 = &v55;
          v45 = 9LL;
          *(_OWORD *)v38 = *(_OWORD *)&ExceptionRecord->ExceptionCode;
          *(_OWORD *)(v38 + 16) = *(_OWORD *)&ExceptionRecord->ExceptionAddress;
          *(_OWORD *)(v38 + 32) = *(_OWORD *)ExceptionRecord->ExceptionInformation;
          *(_OWORD *)(v38 + 48) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[2];
          *(_OWORD *)(v38 + 64) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[4];
          *(_OWORD *)(v38 + 80) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[6];
          *(_OWORD *)(v38 + 96) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[8];
          *(_OWORD *)(v38 + 112) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[10];
          *(_OWORD *)(v38 + 128) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[12];
          *(_QWORD *)(v38 + 144) = ExceptionRecord->ExceptionInformation[14];
          do
          {
            v43 += 8;
            v46 = *(_OWORD *)v44;
            v44 += 128;
            *(v43 - 8) = v46;
            *(v43 - 7) = *((_OWORD *)v44 - 7);
            *(v43 - 6) = *((_OWORD *)v44 - 6);
            *(v43 - 5) = *((_OWORD *)v44 - 5);
            *(v43 - 4) = *((_OWORD *)v44 - 4);
            *(v43 - 3) = *((_OWORD *)v44 - 3);
            *(v43 - 2) = *((_OWORD *)v44 - 2);
            *(v43 - 1) = *((_OWORD *)v44 - 1);
            --v45;
          }
          while ( v45 );
          *v43 = *(_OWORD *)v44;
          v43[1] = *((_OWORD *)v44 + 1);
          v43[2] = *((_OWORD *)v44 + 2);
          v43[3] = *((_OWORD *)v44 + 3);
          v47 = *((_OWORD *)v44 + 4);
          *(_QWORD *)(v38 + 1408) = Rip;
          *(_QWORD *)(v38 + 1416) = v34;
          v43[4] = v47;
          *(_DWORD *)(v38 + 208) &= 0x10001Fu;
        }
        v31 = v56;
      }
      v48 = RtlpExecuteHandlerForException(ExceptionRecord, v31, v2, &ControlPc);
      if ( v38 )
        *(_DWORD *)(v38 + 1396) = v48;
      v49 = ContextEx;
      v16 |= ExceptionRecord->ExceptionFlags & 1;
      if ( ContextEx == v56 )
      {
        v16 &= ~0x10u;
        v49 = 0LL;
        ContextEx = 0LL;
      }
      if ( v48 == 1 )
      {
        v33 = v62;
        v32 = v63;
        goto LABEL_47;
      }
      if ( !v48 )
        break;
      if ( v48 == 2 )
      {
        v16 |= 0x10u;
        v32 = v63;
        v51 = v68 <= v49;
        v33 = v62;
        if ( !v51 )
          ContextEx = v68;
        goto LABEL_47;
      }
      if ( v48 != 3 )
        RtlRaiseStatus(-1073741786);
      v30 = v66;
      Rip = ControlPc;
      v29 = v67;
      ImageBase = v66;
      RtlpCopyContext((__int64)&v55, (__int64)v69);
      v64 = 0LL;
      v74[0] = 0LL;
      v74[1] = 0LL;
      RtlpSanitizeContext(&v55);
      v74[2] = 0LL;
      RtlpxVirtualUnwind<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT *>(
        1,
        v30,
        Rip,
        (_DWORD)v29,
        (__int64)&v55,
        0LL,
        (__int64)&v60,
        (__int64)&v56,
        (__int64)&v64,
        (__int64)v74,
        0,
        0LL);
      v31 = v68;
      v59 = v64;
      v56 = v68;
      if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 12) & 3) == 1 )
      {
        v50 = RtlLookupFunctionEntry(Rip, &ImageBase, v57);
        v29 = v50;
        if ( v50 != v67 )
          goto LABEL_62;
        v30 = ImageBase;
        v53 = 0;
        while ( 1 )
        {
          v52 = (_BYTE *)(ImageBase + v50->UnwindInfoAddress);
          if ( (*v52 & 0x20) == 0 )
            break;
          ++v53;
          v50 = (PRUNTIME_FUNCTION)&v52[2 * (v52[2] & 1) + 4 + 2 * (unsigned __int8)v52[2]];
          if ( v53 > 0x20 )
            RtlRaiseStatus(-1073741569);
        }
        if ( (*v52 & 0x10) != 0 )
        {
          v54 = (unsigned __int8)v52[2] + (v52[2] & 1u);
          v35 = &v52[2 * (unsigned int)(v54 + 2) + 4];
          v60 = v35;
          v34 = ImageBase + *(unsigned int *)&v52[2 * v54 + 4];
          v59 = (PCONTEXT)v34;
        }
        else
        {
          v34 = (unsigned __int64)v59;
          v35 = v60;
        }
        if ( (struct _CONTEXT *)v34 != v70 || v35 != v71 )
LABEL_62:
          __fastfail(0x27u);
        v31 = v56;
        v57 = v72;
        v36 = v73;
      }
      else
      {
        v34 = (unsigned __int64)v70;
        v35 = v71;
        v57 = v72;
        v36 = v73;
        v59 = v70;
        v60 = v71;
      }
    }
    if ( (v16 & 1) != 0 )
      RtlRaiseStatus(-1073741787);
  }
  LOBYTE(v4) = 1;
LABEL_11:
  RtlpCallVectoredHandlers(ExceptionRecord, v2, 1LL);
  return v4;
}
