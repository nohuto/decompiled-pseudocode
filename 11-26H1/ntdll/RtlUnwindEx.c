/*
 * XREFs of RtlUnwindEx @ 0x180049930
 * Callers:
 *     RtlUnwind @ 0x1800B43C0 (RtlUnwind.c)
 *     __C_specific_handler @ 0x180127880 (__C_specific_handler.c)
 *     KiUserCallbackDispatcherHandler @ 0x180162EE0 (KiUserCallbackDispatcherHandler.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlpCopyContext @ 0x18004A840 (RtlpCopyContext.c)
 *     RtlVirtualUnwind2 @ 0x18004AE10 (RtlVirtualUnwind2.c)
 *     RtlLookupFunctionEntry @ 0x18004AEA0 (RtlLookupFunctionEntry.c)
 *     RtlpxLookupFunctionTable @ 0x18004B2A0 (RtlpxLookupFunctionTable.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlGuardIsValidStackPointer @ 0x180080DF0 (RtlGuardIsValidStackPointer.c)
 *     RtlGuardCheckExceptionHandler @ 0x180081080 (RtlGuardCheckExceptionHandler.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x180081428 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180081510 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x1800818D0 (LdrControlFlowGuardEnforced.c)
 *     RtlGetExtendedContextLength3 @ 0x1800B42A0 (RtlGetExtendedContextLength3.c)
 *     RtlInitializeExtendedContext2 @ 0x1800B4540 (RtlInitializeExtendedContext2.c)
 *     RtlpSanitizeContext @ 0x1800B49F0 (RtlpSanitizeContext.c)
 *     RtlpValidateContextFlags2 @ 0x1800B4AD0 (RtlpValidateContextFlags2.c)
 *     RtlpGetEntireXStateAreaLength2 @ 0x1800B4BA4 (RtlpGetEntireXStateAreaLength2.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x1800B4C00 (RtlpRemoveArchDisallowedXStateFeatures.c)
 *     RtlpLocateXStateChunk @ 0x1800CBBE0 (RtlpLocateXStateChunk.c)
 *     RtlpSaveX87State @ 0x1800CC1F0 (RtlpSaveX87State.c)
 *     RtlpGetStackLimits @ 0x1800CD7A0 (RtlpGetStackLimits.c)
 *     RtlCaptureContext2 @ 0x180126E80 (RtlCaptureContext2.c)
 *     RtlRestoreContext @ 0x180126F90 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x180127560 (RtlpGuardSynchronizeRestorePc.c)
 *     LdrpValidateUserCallTarget @ 0x180127700 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x180127750 (LdrpValidateUserCallTargetES.c)
 *     RtlFailFast2 @ 0x180127850 (RtlFailFast2.c)
 *     bsearch @ 0x180129FE0 (bsearch.c)
 *     bsearch_s @ 0x18012A100 (bsearch_s.c)
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAX27@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x18014BB2C (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 *     ZwRaiseException @ 0x180161DD0 (ZwRaiseException.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180163610 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x180163720 (RtlpExecuteHandlerForUnwind.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  PCONTEXT p_Key; // r12
  __int64 v9; // rdi
  unsigned int v10; // ebx
  unsigned int v11; // r14d
  unsigned __int64 v12; // r15
  char v13; // r11
  int v14; // eax
  int v15; // ebx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  struct _CONTEXT *v20; // rdi
  struct _CONTEXT *v21; // r12
  PCONTEXT v22; // rbx
  struct _UNWIND_HISTORY_TABLE *v23; // rcx
  PRUNTIME_FUNCTION v24; // r14
  unsigned __int64 v25; // r15
  int v26; // eax
  ULONG64 v27; // r13
  PRUNTIME_FUNCTION v28; // rbx
  int v29; // r8d
  unsigned __int64 v30; // r13
  int v31; // eax
  __int64 XStateChunk; // rax
  char v33; // r10
  __int64 v34; // r11
  __int64 v35; // rdx
  unsigned int v36; // ecx
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  void *v40; // rsp
  void *v41; // rsp
  PVOID v42; // rcx
  int v43; // r12d
  unsigned int v44; // r8d
  struct _EXCEPTION_RECORD *v45; // rcx
  DWORD64 v46; // rax
  int v47; // ebx
  int v48; // edx
  int v49; // edx
  struct _CONTEXT *v50; // rax
  int v51; // et0
  struct _CONTEXT *v52; // rax
  struct _EXCEPTION_RECORD *v53; // r14
  int ExceptionCode; // eax
  __int64 v55; // rdx
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // rsi
  int v58; // ebx
  __int64 Config; // rax
  rsize_t v60; // r8
  unsigned __int64 v61; // rbx
  int v62; // r12d
  _QWORD *v63; // rax
  __int64 v64; // rbx
  unsigned int Key; // [rsp+70h] [rbp+0h] BYREF
  unsigned __int64 v66; // [rsp+78h] [rbp+8h] BYREF
  unsigned __int64 v67; // [rsp+80h] [rbp+10h] BYREF
  PUNWIND_HISTORY_TABLE v68; // [rsp+88h] [rbp+18h] BYREF
  PRUNTIME_FUNCTION v69; // [rsp+90h] [rbp+20h] BYREF
  PUNWIND_HISTORY_TABLE v70; // [rsp+98h] [rbp+28h] BYREF
  __int64 v71; // [rsp+A0h] [rbp+30h] BYREF
  struct _CONTEXT *v72; // [rsp+A8h] [rbp+38h]
  unsigned __int64 v73; // [rsp+B0h] [rbp+40h] BYREF
  PCONTEXT v74; // [rsp+B8h] [rbp+48h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+C0h] [rbp+50h]
  unsigned __int64 ImageBase; // [rsp+C8h] [rbp+58h] BYREF
  unsigned int *v77; // [rsp+D0h] [rbp+60h]
  __int128 v78; // [rsp+D8h] [rbp+68h] BYREF
  __int64 v79; // [rsp+E8h] [rbp+78h]
  PVOID v80; // [rsp+F0h] [rbp+80h]
  PVOID v81; // [rsp+F8h] [rbp+88h]
  unsigned __int64 v82; // [rsp+100h] [rbp+90h] BYREF
  unsigned __int64 v83; // [rsp+108h] [rbp+98h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v84; // [rsp+110h] [rbp+A0h]
  void *v85; // [rsp+118h] [rbp+A8h]
  PVOID v86; // [rsp+120h] [rbp+B0h]
  struct _CONTEXT *v87; // [rsp+128h] [rbp+B8h]
  struct _UNWIND_HISTORY_TABLE *v88; // [rsp+130h] [rbp+C0h]
  __int64 v89; // [rsp+138h] [rbp+C8h]
  struct _UNWIND_HISTORY_TABLE *v90; // [rsp+140h] [rbp+D0h]
  int v91; // [rsp+148h] [rbp+D8h]
  int v92; // [rsp+150h] [rbp+E0h] BYREF
  __int64 v93; // [rsp+158h] [rbp+E8h]
  DWORD64 Rip; // [rsp+160h] [rbp+F0h]
  int v95; // [rsp+168h] [rbp+F8h]

  p_Key = ContextRecord;
  ExceptionRecorda = ExceptionRecord;
  v81 = TargetIp;
  v74 = ContextRecord;
  v68 = HistoryTable;
  v80 = ReturnValue;
  memset_thunk_772440563353939046(&v82, 0, 0x50uLL);
  memset_thunk_772440563353939046(&v92, 0, 0x98uLL);
  v9 = 0LL;
  v10 = 0;
  v70 = 0LL;
  Key = 0;
  v71 = 0LL;
  v69 = 0LL;
  ImageBase = 0LL;
  v73 = 0LL;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v73, &v69) )
LABEL_2:
    RtlRaiseStatus(3221225512LL);
  RtlpSanitizeContext(ContextRecord);
  v11 = 1048587;
  if ( (((unsigned __int64)qword_1801E3508 >> 60) & 3) == 1 )
  {
    v11 = 1048651;
    v9 = 2048LL;
    if ( (ContextRecord->ContextFlags & 0x100040) != 0x100040 )
      goto LABEL_67;
    if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x800LL) == 0 )
      goto LABEL_67;
    if ( (MEMORY[0x7FFE03EC] & 0xFFFFFFF8) != 0 )
      goto LABEL_67;
    XStateChunk = RtlpLocateXStateChunk(&ContextRecord[1]);
    v34 = XStateChunk;
    if ( !XStateChunk )
      goto LABEL_67;
    if ( (v33 & 2) != 0 )
    {
      v35 = *(_QWORD *)(XStateChunk + 8);
      if ( (v35 & 0x800) == 0 )
        goto LABEL_67;
      v36 = 576;
      if ( (v35 & 4) != 0 )
        v36 = MEMORY[0x7FFE060C] + 576;
      if ( (v35 & 8) != 0 )
      {
        if ( (MEMORY[0x7FFE05F8] & 8) != 0 )
          v36 = (v36 + 63) & 0xFFFFFFC0;
        v36 += MEMORY[0x7FFE0610];
      }
      if ( (v35 & 0x10) != 0 )
      {
        if ( (MEMORY[0x7FFE05F8] & 0x10) != 0 )
          v36 = (v36 + 63) & 0xFFFFFFC0;
        v36 += MEMORY[0x7FFE0614];
      }
      if ( (v35 & 0x20) != 0 )
      {
        if ( (MEMORY[0x7FFE05F8] & 0x20) != 0 )
          v36 = (v36 + 63) & 0xFFFFFFC0;
        v36 += MEMORY[0x7FFE0618];
      }
      if ( (v35 & 0x40) != 0 )
      {
        if ( (MEMORY[0x7FFE05F8] & 0x40) != 0 )
          v36 = (v36 + 63) & 0xFFFFFFC0;
        v36 += MEMORY[0x7FFE061C];
      }
      if ( (v35 & 0x80u) != 0LL )
      {
        if ( MEMORY[0x7FFE05F8] < 0 )
          v36 = (v36 + 63) & 0xFFFFFFC0;
        v36 += MEMORY[0x7FFE0620];
      }
      if ( (v35 & 0x100) != 0 )
      {
        if ( (MEMORY[0x7FFE05F8] & 0x100) != 0 )
          v36 = (v36 + 63) & 0xFFFFFFC0;
        v36 += MEMORY[0x7FFE0624];
      }
      if ( (v35 & 0x200) != 0 )
      {
        if ( (MEMORY[0x7FFE05F8] & 0x200) != 0 )
          v36 = (v36 + 63) & 0xFFFFFFC0;
        v36 += MEMORY[0x7FFE0628];
      }
      if ( (v35 & 0x400) != 0 )
      {
        if ( (MEMORY[0x7FFE05F8] & 0x400) != 0 )
          v36 = (v36 + 63) & 0xFFFFFFC0;
        v36 += MEMORY[0x7FFE062C];
      }
      if ( (MEMORY[0x7FFE05F8] & 0x800) != 0 )
        v36 = (v36 + 63) & 0xFFFFFFC0;
      v37 = v36;
    }
    else
    {
      v37 = MEMORY[0x7FFE0448];
    }
    if ( v34 + v37 != 512 )
      goto LABEL_4;
LABEL_67:
    RtlGetExtendedContextLength3(1048651LL, &Key, 2048LL, 2147353560LL);
    v10 = Key;
    v38 = Key + 15LL;
    if ( v38 <= Key )
      v38 = 0xFFFFFFFFFFFFFF0LL;
    v39 = v38 & 0xFFFFFFFFFFFFFFF0uLL;
    v40 = alloca(v39);
    v41 = alloca(v39);
    p_Key = (PCONTEXT)&Key;
    v74 = (PCONTEXT)&Key;
    RtlInitializeExtendedContext2(&Key, 1048651LL, &v67, 2048LL);
  }
LABEL_4:
  Key = 0;
  v12 = v9;
  if ( (int)RtlpValidateContextFlags2(v11, &Key, 2147353560LL) >= 0 )
  {
    v13 = Key;
    v14 = 1264;
    if ( (Key & 2) != 0 )
    {
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v67 = v9 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL);
        RtlpRemoveArchDisallowedXStateFeatures(v11, &v67);
        v12 = v67;
      }
      v14 = RtlpGetEntireXStateAreaLength2(v12, 2147353560LL) + 800;
    }
    v15 = v14 + 32;
    if ( (v13 & 4) == 0 )
      v15 = v14;
    v10 = v15 + 15;
  }
  v16 = v10 + 15LL;
  if ( v16 <= v10 )
    v16 = 0xFFFFFFFFFFFFFF0LL;
  v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
  v18 = alloca(v17);
  v19 = alloca(v17);
  v77 = &Key;
  RtlInitializeExtendedContext2(&Key, v11, &v67, v9);
  v20 = p_Key;
  v72 = (struct _CONTEXT *)&Key;
  v21 = (struct _CONTEXT *)&Key;
  v22 = v74;
  RtlCaptureContext2(v74);
  v23 = v68;
  if ( v68 )
    v68->Search = 1;
  if ( !ExceptionRecord )
  {
    v92 = -1073741785;
    v93 = 0LL;
    Rip = v22->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v92;
    v95 = 0;
  }
  v24 = v69;
  v25 = v73;
  v26 = 2;
  v66 = 0LL;
  if ( !TargetFrame )
    v26 = 6;
  Key = v26;
  while ( 1 )
  {
    v27 = v20->Rip;
    v67 = v27;
    v69 = RtlLookupFunctionEntry(v27, &ImageBase, v23);
    v28 = v69;
    RtlpCopyContext(v21, v20);
    v29 = v27;
    v30 = ImageBase;
    v31 = RtlVirtualUnwind2(
            2,
            ImageBase,
            v29,
            (_DWORD)v28,
            (__int64)v21,
            0LL,
            (__int64)&v71,
            (__int64)&v66,
            0LL,
            0LL,
            0LL,
            (__int64)&v70,
            0);
    if ( v31 < 0 )
      RtlRaiseStatus((unsigned int)v31);
    v42 = (PVOID)v66;
    if ( (v66 & 7) != 0
      || v66 >= (unsigned __int64)v24
      || v66 < v25
      || TargetFrame && (unsigned __int64)TargetFrame < v66 )
    {
      goto LABEL_2;
    }
    if ( v70 )
    {
      v43 = 0;
      v44 = Key;
      v86 = v81;
      do
      {
        if ( TargetFrame == v42 )
        {
          v44 |= 0x20u;
          Key = v44;
        }
        v45 = ExceptionRecorda;
        v46 = (DWORD64)v80;
        ExceptionRecorda->ExceptionFlags = v44;
        v20->Rax = v46;
        v82 = v67;
        v88 = v70;
        v89 = v71;
        v84 = v28;
        v90 = v68;
        v83 = v30;
        v85 = (void *)v66;
        v87 = v20;
        v91 = v43;
        v47 = v20->ContextFlags & 0x100040;
        v48 = RtlpExecuteHandlerForUnwind(v45, v66, v20, &v82);
        if ( v47 != 1048640 && (v20->ContextFlags & 0x100040) == 0x100040 )
          v20->ContextFlags &= ~0x40u;
        v44 = Key & 0xFFFFFF9F;
        Key &= 0xFFFFFF9F;
        v49 = v48 - 1;
        if ( v49 )
        {
          if ( v49 != 2 )
            RtlRaiseStatus(3221225510LL);
          v62 = v82;
          v30 = v83;
          v28 = v84;
          v67 = v82;
          ImageBase = v83;
          v69 = v84;
          RtlpCopyContext(v74, v87);
          v20 = v74;
          v72 = (struct _CONTEXT *)v77;
          RtlpCopyContext(v77, v74);
          v68 = 0LL;
          v78 = 0uLL;
          RtlpSanitizeContext(v77);
          v79 = 0LL;
          RtlpxVirtualUnwind<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT *>(
            2,
            v30,
            v62,
            (_DWORD)v28,
            (__int64)v77,
            0LL,
            (__int64)&v71,
            (__int64)&v66,
            (__int64)&v68,
            (__int64)&v78,
            0,
            0LL);
          v70 = v68;
          if ( (((unsigned __int64)qword_1801E3508 >> 12) & 3) == 1 )
          {
            if ( v68 != v88 || (v42 = (PVOID)v66, (void *)v66 != v85) || v71 != v89 )
              __fastfail(0x27u);
          }
          else
          {
            v42 = v85;
            v70 = v88;
            v71 = v89;
            v66 = (unsigned __int64)v85;
          }
          v44 = Key | 0x40;
          v43 = v91;
          Key |= 0x40u;
          v68 = v90;
        }
        else
        {
          if ( (PVOID)v66 != TargetFrame )
          {
            v50 = v20;
            v20 = v72;
            v72 = v50;
          }
          v51 = _mm_getcsr();
          LODWORD(v73) = v51;
          v20->MxCsr = v51;
          v20->FltSave.MxCsr = v51;
          if ( v20->FltSave.ControlWord != 639 || (v20->FltSave.StatusWord & 0xB880) != 0 || v20->FltSave.TagWord )
          {
            RtlpSaveX87State(v20);
            v44 = Key;
          }
          v28 = v69;
          v42 = (PVOID)v66;
        }
      }
      while ( (v44 & 0x40) != 0 );
      v21 = v72;
    }
    else if ( (PVOID)v66 != TargetFrame )
    {
      v52 = v20;
      v20 = v21;
      v21 = v52;
      v72 = v52;
    }
    if ( ((unsigned __int8)v42 & 7) != 0 || v42 >= v24 || (unsigned __int64)v42 < v25 )
      break;
    if ( v42 == TargetFrame )
      goto LABEL_102;
    v23 = v68;
  }
  if ( v42 == TargetFrame )
  {
LABEL_102:
    v53 = ExceptionRecorda;
    v20->Rax = (DWORD64)v80;
    if ( v53->ExceptionCode != -2147483607 )
    {
      v20->Rip = (DWORD64)v81;
      if ( v53->ExceptionCode != -2147483610 )
        v53->ExceptionCode = -1073741785;
    }
    RtlpGuardSynchronizeRestorePc(&v20->Rip);
    ExceptionCode = v53->ExceptionCode;
    if ( v53->ExceptionCode == -2147483610 )
    {
      v55 = qword_1801E3518;
      v56 = v53->ExceptionInformation[0];
      if ( !qword_1801E3518 || (dword_1801E34FC & 1) != 0 )
      {
LABEL_110:
        if ( (((unsigned __int64)qword_1801E3508 >> 60) & 3) != 1 )
        {
          v57 = *(_QWORD *)(v56 + 80);
          Key = 0;
          if ( v55 )
          {
            if ( (dword_1801E34FC & 1) == 0 )
            {
              v79 = 0LL;
              v78 = 0LL;
              if ( v57 < *((_QWORD *)&xmmword_1801E0450 + 1)
                || v57 >= *((_QWORD *)&xmmword_1801E0450 + 1) + (unsigned __int64)(unsigned int)qword_1801E0460 )
              {
                RtlpxLookupFunctionTable(v57, &v78);
              }
              else
              {
                v78 = xmmword_1801E0450;
              }
              v58 = DWORD2(v78);
              if ( *((_QWORD *)&v78 + 1) )
              {
                Config = LdrImageDirectoryEntryToLoadConfigEx(*((_QWORD *)&v78 + 1));
                if ( Config )
                {
                  if ( *(_DWORD *)Config >= 0xC0u && (*(_DWORD *)(Config + 144) & 0x10000) != 0 )
                  {
                    Key = v57 - v58;
                    v60 = *(_QWORD *)(Config + 184);
                    if ( !v60
                      || !bsearch_s(
                            &Key,
                            *(const void **)(Config + 176),
                            v60,
                            (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
                            RtlpTargetCompare,
                            0LL) )
                    {
                      goto LABEL_150;
                    }
                  }
                }
              }
              else
              {
                if ( !RtlpProtectedPolicies )
                  goto LABEL_150;
                RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock);
                v63 = bsearch(
                        &unk_180179A38,
                        RtlpProtectedPolicies,
                        (unsigned int)RtlpProtectedPoliciesActiveCount,
                        0x18uLL,
                        RtlpCompareProtectedPolicyEntry);
                if ( !v63 )
                {
                  RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
                  goto LABEL_150;
                }
                v64 = v63[2];
                RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
                if ( !v64 )
LABEL_150:
                  RtlFailFast2(38LL, v57);
              }
            }
          }
        }
        goto LABEL_134;
      }
      if ( (unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v56 + 16)) )
      {
        v55 = qword_1801E3518;
        goto LABEL_110;
      }
LABEL_140:
      __fastfail(0xDu);
    }
    if ( ExceptionCode == -2147483607 )
    {
      if ( v53->NumberParameters )
      {
        v61 = v53->ExceptionInformation[0];
        if ( (unsigned int)LdrControlFlowGuardEnforced() )
        {
          if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
            LdrpValidateUserCallTargetES(v61);
          else
            LdrpValidateUserCallTarget(v61);
        }
      }
    }
    else if ( ExceptionCode == -1073741785 )
    {
      if ( (((unsigned __int64)qword_1801E3508 >> 60) & 3) != 1 )
        RtlGuardCheckExceptionHandler(v20->Rip, 0LL, 0LL);
      goto LABEL_134;
    }
    if ( qword_1801E3518 && (dword_1801E34FC & 1) == 0 && !(unsigned int)RtlGuardIsValidStackPointer(v20->Rsp) )
      goto LABEL_140;
LABEL_134:
    RtlRestoreContext(v20, v53);
    return;
  }
  if ( v67 == v20->Rip )
    RtlRaiseStatus(3221225727LL);
  ZwRaiseException(ExceptionRecorda, v20, 0LL);
}
