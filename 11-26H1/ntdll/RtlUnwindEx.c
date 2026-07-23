/*
 * XREFs of RtlUnwindEx @ 0x180033EB0
 * Callers:
 *     RtlUnwind @ 0x1800B18E0 (RtlUnwind.c)
 *     __C_specific_handler @ 0x1801275F0 (__C_specific_handler.c)
 *     KiUserCallbackDispatcherHandler @ 0x180162DE0 (KiUserCallbackDispatcherHandler.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlpCopyContext @ 0x180034DC0 (RtlpCopyContext.c)
 *     RtlVirtualUnwind2 @ 0x180035390 (RtlVirtualUnwind2.c)
 *     RtlLookupFunctionEntry @ 0x180035420 (RtlLookupFunctionEntry.c)
 *     RtlpxLookupFunctionTable @ 0x180035820 (RtlpxLookupFunctionTable.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlGuardIsValidStackPointer @ 0x180078190 (RtlGuardIsValidStackPointer.c)
 *     RtlGuardCheckExceptionHandler @ 0x180078420 (RtlGuardCheckExceptionHandler.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x1800787C8 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800788B0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x180078C70 (LdrControlFlowGuardEnforced.c)
 *     RtlGetExtendedContextLength3 @ 0x1800B17C0 (RtlGetExtendedContextLength3.c)
 *     RtlInitializeExtendedContext2 @ 0x1800B1A60 (RtlInitializeExtendedContext2.c)
 *     RtlpSanitizeContext @ 0x1800B1F10 (RtlpSanitizeContext.c)
 *     RtlpValidateContextFlags2 @ 0x1800B1FF0 (RtlpValidateContextFlags2.c)
 *     RtlpGetEntireXStateAreaLength2 @ 0x1800B20C4 (RtlpGetEntireXStateAreaLength2.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x1800B2120 (RtlpRemoveArchDisallowedXStateFeatures.c)
 *     RtlpLocateXStateChunk @ 0x1800C9350 (RtlpLocateXStateChunk.c)
 *     RtlpSaveX87State @ 0x1800C9960 (RtlpSaveX87State.c)
 *     RtlpGetStackLimits @ 0x1800CAF10 (RtlpGetStackLimits.c)
 *     RtlCaptureContext2 @ 0x180126BF0 (RtlCaptureContext2.c)
 *     RtlRestoreContext @ 0x180126D00 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x1801272D0 (RtlpGuardSynchronizeRestorePc.c)
 *     LdrpValidateUserCallTarget @ 0x180127470 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x1801274C0 (LdrpValidateUserCallTargetES.c)
 *     RtlFailFast2 @ 0x1801275C0 (RtlFailFast2.c)
 *     bsearch @ 0x180129D50 (bsearch.c)
 *     bsearch_s @ 0x180129E70 (bsearch_s.c)
 *     ??$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@@@YAJK_K0VCDirectFnEnt@@PEAU_CONTEXT@@PEAEPEAPEAXPEA_KPEAP6A?AW4_EXCEPTION_DISPOSITION@@PEAU_EXCEPTION_RECORD@@PEAX27@ZPEAU_AMD64_UNWIND_PARAMS@@KPEAK@Z @ 0x18014B9DC (--$RtlpxVirtualUnwind@VCDirectFnEnt@@VCDirectUnwindInfo@@VCDirectMemoryAccessors@@PEAU_CONTEXT@@.c)
 *     ZwRaiseException @ 0x180161CD0 (ZwRaiseException.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180163510 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x180163620 (RtlpExecuteHandlerForUnwind.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
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
  ULONG64 v9; // rdi
  unsigned int v10; // ebx
  ULONG v11; // r14d
  PCONTEXT_EX v12; // r15
  char v13; // r11
  int v14; // eax
  int v15; // ebx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  PCONTEXT v20; // rdi
  struct _CONTEXT *v21; // r12
  PCONTEXT v22; // rbx
  struct _UNWIND_HISTORY_TABLE *v23; // rcx
  PRUNTIME_FUNCTION v24; // r14
  unsigned __int64 v25; // r15
  int v26; // eax
  _CONTEXT_EX *v27; // r13
  PRUNTIME_FUNCTION v28; // rbx
  int v29; // r8d
  unsigned __int64 v30; // r13
  NTSTATUS v31; // eax
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
  PCONTEXT v50; // rax
  int v51; // et0
  PCONTEXT v52; // rax
  struct _EXCEPTION_RECORD *v53; // r14
  int ExceptionCode; // eax
  ULONG_PTR CfgBitMap; // rdx
  unsigned __int64 v56; // rbx
  void *v57; // rsi
  int v58; // ebx
  __int64 Config; // rax
  rsize_t v60; // r8
  unsigned __int64 v61; // rbx
  int v62; // eax
  int v63; // r12d
  _QWORD *v64; // rax
  __int64 v65; // rbx
  unsigned int Key; // [rsp+70h] [rbp+0h] BYREF
  unsigned __int64 v67; // [rsp+78h] [rbp+8h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+80h] [rbp+10h] BYREF
  PUNWIND_HISTORY_TABLE v69; // [rsp+88h] [rbp+18h] BYREF
  PRUNTIME_FUNCTION v70; // [rsp+90h] [rbp+20h] BYREF
  PUNWIND_HISTORY_TABLE v71; // [rsp+98h] [rbp+28h] BYREF
  __int64 v72; // [rsp+A0h] [rbp+30h] BYREF
  struct _CONTEXT *v73; // [rsp+A8h] [rbp+38h]
  unsigned __int64 v74; // [rsp+B0h] [rbp+40h] BYREF
  PCONTEXT v75; // [rsp+B8h] [rbp+48h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+C0h] [rbp+50h]
  unsigned __int64 ImageBase; // [rsp+C8h] [rbp+58h] BYREF
  unsigned int *v78; // [rsp+D0h] [rbp+60h]
  PVOID BaseOfImage[2]; // [rsp+D8h] [rbp+68h] BYREF
  __int64 v80; // [rsp+E8h] [rbp+78h]
  PVOID v81; // [rsp+F0h] [rbp+80h]
  PVOID v82; // [rsp+F8h] [rbp+88h]
  _CONTEXT_EX *v83; // [rsp+100h] [rbp+90h] BYREF
  unsigned __int64 v84; // [rsp+108h] [rbp+98h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v85; // [rsp+110h] [rbp+A0h]
  void *v86; // [rsp+118h] [rbp+A8h]
  PVOID v87; // [rsp+120h] [rbp+B0h]
  PCONTEXT v88; // [rsp+128h] [rbp+B8h]
  struct _UNWIND_HISTORY_TABLE *v89; // [rsp+130h] [rbp+C0h]
  __int64 v90; // [rsp+138h] [rbp+C8h]
  struct _UNWIND_HISTORY_TABLE *v91; // [rsp+140h] [rbp+D0h]
  int v92; // [rsp+148h] [rbp+D8h]
  int v93; // [rsp+150h] [rbp+E0h] BYREF
  __int64 v94; // [rsp+158h] [rbp+E8h]
  DWORD64 Rip; // [rsp+160h] [rbp+F0h]
  int v96; // [rsp+168h] [rbp+F8h]

  p_Key = ContextRecord;
  ExceptionRecorda = ExceptionRecord;
  v82 = TargetIp;
  v75 = ContextRecord;
  v69 = HistoryTable;
  v81 = ReturnValue;
  memset_thunk_772440563353939046(&v83, 0, 0x50uLL);
  memset_thunk_772440563353939046(&v93, 0, 0x98uLL);
  v9 = 0LL;
  v10 = 0;
  v71 = 0LL;
  Key = 0;
  v72 = 0LL;
  v70 = 0LL;
  ImageBase = 0LL;
  v74 = 0LL;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v74, &v70) )
LABEL_2:
    RtlRaiseStatus(-1073741784);
  RtlpSanitizeContext(ContextRecord);
  v11 = 1048587;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) == 1 )
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
    v75 = (PCONTEXT)&Key;
    RtlInitializeExtendedContext2((PCONTEXT)&Key, 0x10004Bu, &ContextEx, 0x800uLL);
  }
LABEL_4:
  Key = 0;
  v12 = (PCONTEXT_EX)v9;
  if ( (int)RtlpValidateContextFlags2(v11, &Key, 2147353560LL) >= 0 )
  {
    v13 = Key;
    v14 = 1264;
    if ( (Key & 2) != 0 )
    {
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        ContextEx = (PCONTEXT_EX)(v9 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL));
        RtlpRemoveArchDisallowedXStateFeatures(v11, &ContextEx);
        v12 = ContextEx;
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
  v78 = &Key;
  RtlInitializeExtendedContext2((PCONTEXT)&Key, v11, &ContextEx, v9);
  v20 = p_Key;
  v73 = (struct _CONTEXT *)&Key;
  v21 = (struct _CONTEXT *)&Key;
  v22 = v75;
  RtlCaptureContext2(v75);
  v23 = v69;
  if ( v69 )
    v69->Search = 1;
  if ( !ExceptionRecord )
  {
    v93 = -1073741785;
    v94 = 0LL;
    Rip = v22->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v93;
    v96 = 0;
  }
  v24 = v70;
  v25 = v74;
  v26 = 2;
  v67 = 0LL;
  if ( !TargetFrame )
    v26 = 6;
  Key = v26;
  while ( 1 )
  {
    v27 = (_CONTEXT_EX *)v20->Rip;
    ContextEx = v27;
    v70 = RtlLookupFunctionEntry((ULONG64)v27, &ImageBase, v23);
    v28 = v70;
    RtlpCopyContext(v21, v20);
    v29 = (int)v27;
    v30 = ImageBase;
    v31 = RtlVirtualUnwind2(
            2,
            ImageBase,
            v29,
            (_DWORD)v28,
            (__int64)v21,
            0LL,
            (__int64)&v72,
            (__int64)&v67,
            0LL,
            0LL,
            0LL,
            (__int64)&v71,
            0);
    if ( v31 < 0 )
      RtlRaiseStatus(v31);
    v42 = (PVOID)v67;
    if ( (v67 & 7) != 0
      || v67 >= (unsigned __int64)v24
      || v67 < v25
      || TargetFrame && (unsigned __int64)TargetFrame < v67 )
    {
      goto LABEL_2;
    }
    if ( v71 )
    {
      v43 = 0;
      v44 = Key;
      v87 = v82;
      do
      {
        if ( TargetFrame == v42 )
        {
          v44 |= 0x20u;
          Key = v44;
        }
        v45 = ExceptionRecorda;
        v46 = (DWORD64)v81;
        ExceptionRecorda->ExceptionFlags = v44;
        v20->Rax = v46;
        v83 = ContextEx;
        v89 = v71;
        v90 = v72;
        v85 = v28;
        v91 = v69;
        v84 = v30;
        v86 = (void *)v67;
        v88 = v20;
        v92 = v43;
        v47 = v20->ContextFlags & 0x100040;
        v48 = RtlpExecuteHandlerForUnwind(v45, v67, v20, &v83);
        if ( v47 != 1048640 && (v20->ContextFlags & 0x100040) == 0x100040 )
          v20->ContextFlags &= ~0x40u;
        v44 = Key & 0xFFFFFF9F;
        Key &= 0xFFFFFF9F;
        v49 = v48 - 1;
        if ( v49 )
        {
          if ( v49 != 2 )
            RtlRaiseStatus(-1073741786);
          v63 = (int)v83;
          v30 = v84;
          v28 = v85;
          ContextEx = v83;
          ImageBase = v84;
          v70 = v85;
          RtlpCopyContext(v75, v88);
          v20 = v75;
          v73 = (struct _CONTEXT *)v78;
          RtlpCopyContext(v78, v75);
          v69 = 0LL;
          BaseOfImage[0] = 0LL;
          BaseOfImage[1] = 0LL;
          RtlpSanitizeContext(v78);
          v80 = 0LL;
          RtlpxVirtualUnwind<CDirectFnEnt,CDirectUnwindInfo,CDirectMemoryAccessors,_CONTEXT *>(
            2,
            v30,
            v63,
            (_DWORD)v28,
            (__int64)v78,
            0LL,
            (__int64)&v72,
            (__int64)&v67,
            (__int64)&v69,
            (__int64)BaseOfImage,
            0,
            0LL);
          v71 = v69;
          if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 12) & 3) == 1 )
          {
            if ( v69 != v89 || (v42 = (PVOID)v67, (void *)v67 != v86) || v72 != v90 )
              __fastfail(0x27u);
          }
          else
          {
            v42 = v86;
            v71 = v89;
            v72 = v90;
            v67 = (unsigned __int64)v86;
          }
          v44 = Key | 0x40;
          v43 = v92;
          Key |= 0x40u;
          v69 = v91;
        }
        else
        {
          if ( (PVOID)v67 != TargetFrame )
          {
            v50 = v20;
            v20 = v73;
            v73 = v50;
          }
          v51 = _mm_getcsr();
          LODWORD(v74) = v51;
          v20->MxCsr = v51;
          v20->FltSave.MxCsr = v51;
          if ( v20->FltSave.ControlWord != 639 || (v20->FltSave.StatusWord & 0xB880) != 0 || v20->FltSave.TagWord )
          {
            RtlpSaveX87State(v20);
            v44 = Key;
          }
          v28 = v70;
          v42 = (PVOID)v67;
        }
      }
      while ( (v44 & 0x40) != 0 );
      v21 = v73;
    }
    else if ( (PVOID)v67 != TargetFrame )
    {
      v52 = v20;
      v20 = v21;
      v21 = v52;
      v73 = v52;
    }
    if ( ((unsigned __int8)v42 & 7) != 0 || v42 >= v24 || (unsigned __int64)v42 < v25 )
      break;
    if ( v42 == TargetFrame )
      goto LABEL_102;
    v23 = v69;
  }
  if ( v42 == TargetFrame )
  {
LABEL_102:
    v53 = ExceptionRecorda;
    v20->Rax = (DWORD64)v81;
    if ( v53->ExceptionCode != -2147483607 )
    {
      v20->Rip = (DWORD64)v82;
      if ( v53->ExceptionCode != -2147483610 )
        v53->ExceptionCode = -1073741785;
    }
    RtlpGuardSynchronizeRestorePc(&v20->Rip);
    ExceptionCode = v53->ExceptionCode;
    if ( v53->ExceptionCode == -2147483610 )
    {
      CfgBitMap = LdrSystemDllInitBlock.CfgBitMap;
      v56 = v53->ExceptionInformation[0];
      if ( !LdrSystemDllInitBlock.CfgBitMap || (LdrSystemDllInitBlock.Flags & 1) != 0 )
      {
LABEL_110:
        if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
        {
          v57 = *(void **)(v56 + 80);
          Key = 0;
          if ( CfgBitMap )
          {
            if ( (LdrSystemDllInitBlock.Flags & 1) == 0 )
            {
              v80 = 0LL;
              *(_OWORD *)BaseOfImage = 0LL;
              if ( (unsigned __int64)v57 < *((_QWORD *)&xmmword_1801DF450 + 1)
                || (unsigned __int64)v57 >= *((_QWORD *)&xmmword_1801DF450 + 1)
                                          + (unsigned __int64)(unsigned int)qword_1801DF460 )
              {
                RtlpxLookupFunctionTable(v57);
              }
              else
              {
                *(_OWORD *)BaseOfImage = xmmword_1801DF450;
              }
              v58 = (int)BaseOfImage[1];
              if ( BaseOfImage[1] )
              {
                Config = LdrImageDirectoryEntryToLoadConfigEx(BaseOfImage[1]);
                if ( Config )
                {
                  if ( *(_DWORD *)Config >= 0xC0u && (*(_DWORD *)(Config + 144) & 0x10000) != 0 )
                  {
                    Key = (_DWORD)v57 - v58;
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
                v64 = bsearch(
                        &unk_180178558,
                        RtlpProtectedPolicies,
                        (unsigned int)RtlpProtectedPoliciesActiveCount,
                        0x18uLL,
                        RtlpCompareProtectedPolicyEntry);
                if ( !v64 )
                {
                  RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
                  goto LABEL_150;
                }
                v65 = v64[2];
                RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
                if ( !v65 )
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
        CfgBitMap = LdrSystemDllInitBlock.CfgBitMap;
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
        LOBYTE(v62) = LdrControlFlowGuardEnforced();
        if ( v62 )
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
      if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
        RtlGuardCheckExceptionHandler((PVOID)v20->Rip);
      goto LABEL_134;
    }
    if ( LdrSystemDllInitBlock.CfgBitMap
      && (LdrSystemDllInitBlock.Flags & 1) == 0
      && !(unsigned int)RtlGuardIsValidStackPointer(v20->Rsp) )
    {
      goto LABEL_140;
    }
LABEL_134:
    RtlRestoreContext(v20, v53);
    return;
  }
  if ( ContextEx == (PCONTEXT_EX)v20->Rip )
    RtlRaiseStatus(-1073741569);
  ZwRaiseException(ExceptionRecorda, v20, 0);
}
