/*
 * XREFs of ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1402B1274
 * Callers:
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402B0A14 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1402B0B58 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1403ABAFC (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000BB9C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqqqqqttttttttq_EtwWriteTransfer @ 0x140055FC0 (McTemplateK0pqqqqqttttttttq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1402B1A40 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402B1AD4 (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402B1F10 (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1402B27C4 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402B2CF4 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1402BE088 (-HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int128 v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int CurrentProcessSessionId; // eax
  OUTPUTDUPL_MGR *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  unsigned int v25; // eax
  int v26; // ecx
  __int64 v27; // rcx
  int v28; // r15d
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // r14
  int v32; // r14d
  int v33; // eax
  unsigned int v34; // eax
  unsigned int updated; // ebx
  int v36; // r12d
  OUTPUTDUPL_MGR *v37; // r13
  int v38; // edx
  OUTPUTDUPL_MGR *v39; // rcx
  DXGDIAGNOSTICS *v40; // rcx
  unsigned int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rdx
  int *v51; // [rsp+20h] [rbp-F0h]
  int v52; // [rsp+28h] [rbp-E8h]
  int *v53; // [rsp+28h] [rbp-E8h]
  __int64 v54; // [rsp+30h] [rbp-E0h]
  __int64 v55; // [rsp+38h] [rbp-D8h]
  __int64 v56; // [rsp+40h] [rbp-D0h]
  unsigned int v57; // [rsp+68h] [rbp-A8h]
  int v58; // [rsp+90h] [rbp-80h] BYREF
  int v59; // [rsp+94h] [rbp-7Ch] BYREF
  int v60; // [rsp+98h] [rbp-78h]
  __int64 v61; // [rsp+A0h] [rbp-70h] BYREF
  _OWORD v62[5]; // [rsp+B0h] [rbp-60h] BYREF
  _DWORD v63[2]; // [rsp+100h] [rbp-10h] BYREF
  __int64 v64; // [rsp+108h] [rbp-8h]
  __int128 v65; // [rsp+110h] [rbp+0h]
  unsigned int CurrentThreadId; // [rsp+120h] [rbp+10h]
  __int64 v67; // [rsp+124h] [rbp+14h]
  int v68; // [rsp+12Ch] [rbp+1Ch]
  int v69; // [rsp+130h] [rbp+20h]
  int v70; // [rsp+134h] [rbp+24h]

  if ( (*(_DWORD *)a2 == 0) != (*((_QWORD *)a2 + 1) != 0LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1389;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pUpdate->Type == OUTPUTDUPL_UPDATE_TYPE_PRESENT) == (pUpdate->pContext != NULL)",
      1389LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  memset(v62, 0, sizeof(v62));
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    v67 = 0LL;
    v68 = 0;
    v65 = 0LL;
    v63[0] = 15;
    v6 = MEMORY[0xFFFFF78000000320];
    v64 = v6 * KeQueryTimeIncrement();
    CurrentProcess = PsGetCurrentProcess(v7);
    v9 = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
    LODWORD(v67) = v67 & 0x7FFFFFFF;
    v65 = v9;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10, v12, v13);
    LODWORD(v67) = v67 & 0x80000000 | CurrentProcessSessionId & 0x7FFFFFFF;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    v70 = *((_DWORD *)this + 4);
    v63[1] = 56;
    v69 = 5;
    if ( bTracingEnabled )
      OUTPUTDUPL_MGR::LogEtw(v15, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v63);
    LODWORD(v62[0]) = 15;
    v16 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)&v62[0] + 1) = v16 * KeQueryTimeIncrement();
    v18 = PsGetCurrentProcess(v17);
    v19 = *(_OWORD *)PsGetProcessImageFileName(v18);
    DWORD1(v62[2]) &= ~0x80000000;
    v62[1] = v19;
    v24 = PsGetCurrentProcessSessionId(v21, v20, v22, v23);
    DWORD1(v62[2]) = DWORD1(v62[2]) & 0x80000000 | v24 & 0x7FFFFFFF;
    v25 = (unsigned int)PsGetCurrentThreadId();
    v26 = *((_DWORD *)this + 77);
    LODWORD(v62[2]) = v25;
    DWORD1(v62[3]) = *((_DWORD *)this + 4);
    DWORD2(v62[3]) = *((_DWORD *)this + 73);
    DWORD2(v62[4]) = *((_DWORD *)this + 71);
    DWORD1(v62[0]) = 80;
    HIDWORD(v62[4]) = HIDWORD(v62[4]) & 0xFFFFFFEF | (16 * (v26 & 1));
    LODWORD(v62[3]) = 6;
  }
  if ( !*(_DWORD *)a2
    && !*((_DWORD *)this + 77)
    && *((_DWORD *)this + 78)
    && (unsigned int)DXGDXGIKEYEDMUTEX::HasConsumerGPUWorkFinished(
                       *((DXGDXGIKEYEDMUTEX **)this + *((unsigned int *)this + 11) + 6),
                       *((struct DXGCONTEXT **)a2 + 1)) )
  {
    *((_DWORD *)this + 78) = 0;
  }
  v27 = *((unsigned int *)this + 11);
  v28 = 0;
  v52 = *((_DWORD *)a2 + 4);
  v29 = *((_QWORD *)a2 + 1);
  v61 = 0LL;
  v30 = DXGDXGIKEYEDMUTEX::AcquireCPU(*((_QWORD *)this + v27 + 6), v4, v5, &v61, v29, v52);
  v31 = v30;
  if ( v30 != 258 )
  {
    if ( v30 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1439;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"GetCurrentKeyedMutex()->Acquire failed with something other than STATUS_TIMEOUT. Status = 0x%I64x",
        v31,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v31;
    }
    v28 = 1;
  }
  v32 = 0;
  v33 = *((_DWORD *)this + 78) & 1 | (16 * (*((_DWORD *)this + 77) & 1));
  v59 = 0;
  v34 = v28 | (16 * v33);
  v58 = 0;
  v60 = 0;
  switch ( v34 )
  {
    case 0u:
      goto LABEL_41;
    case 1u:
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                  this,
                  a2,
                  *((struct DXGDXGIKEYEDMUTEX **)this + *((unsigned int *)this + 11) + 6),
                  *((struct _PRODUCER_INFO **)this + 33),
                  &v58,
                  &v59);
      DWORD1(v62[4]) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 8LL) + 4LL);
      if ( *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1518;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pAccumulatedFrameInfo->PresentUpdateStatus == PRODUCER_INFO_PRESENT_UPDATE_NONE",
          1518LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v32 = v58;
      goto LABEL_16;
    case 0x10u:
      if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1541;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pCurrentFrameInfo->PresentUpdateStatus != PRODUCER_INFO_PRESENT_UPDATE_READY",
          1541LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
LABEL_41:
      v46 = *((_QWORD *)this + 33);
      if ( *(_DWORD *)(v46 + 16) == 1 )
      {
        v49 = *((_QWORD *)this + 34);
        v50 = *(_QWORD *)(v46 + 8);
        v60 = 1;
        *(_QWORD *)(v46 + 8) = *(_QWORD *)(v49 + 8);
        *(_QWORD *)(*((_QWORD *)this + 34) + 8LL) = v50;
        *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) = 1;
        *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) = 0;
      }
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                  this,
                  a2,
                  0LL,
                  *((struct _PRODUCER_INFO **)this + 34),
                  0LL,
                  &v59);
      *((_DWORD *)this + 71) = 1;
      v43 = *((_QWORD *)this + 34);
      goto LABEL_38;
  }
  if ( v34 != 17 )
  {
    if ( v34 - 272 > 1 )
    {
      v48 = v34;
      WdLogSingleEntry1(1LL);
      WdLogGlobalForLineNumber = 1583;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Unexpected state combination 0x%I64x",
        v48,
        0LL,
        0LL,
        0LL,
        0LL);
      updated = -1073741595;
      goto LABEL_16;
    }
    goto LABEL_41;
  }
  v42 = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(this, a2, 0LL, *((struct _PRODUCER_INFO **)this + 33), &v58, &v59);
  v32 = v58;
  updated = v42;
  if ( v58 && !*(_DWORD *)a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1531;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!bNewUpdateReady || (pUpdate->Type != OUTPUTDUPL_UPDATE_TYPE_PRESENT)",
      1531LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v43 = *((_QWORD *)this + 33);
LABEL_38:
  DWORD1(v62[4]) = *(_DWORD *)(*(_QWORD *)(v43 + 8) + 4LL);
LABEL_16:
  v36 = 0;
  if ( v28 )
  {
    if ( !v32 || *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 1 )
    {
      v47 = *((_QWORD *)this + *((unsigned int *)this + 11) + 6);
      DXGDXGIKEYEDMUTEX::Release(v47, *(_QWORD *)(v47 + 136), 0LL, *((unsigned int *)a2 + 4));
    }
    else
    {
      DXGDXGIKEYEDMUTEX::Release(
        *((_QWORD *)this + *((unsigned int *)this + 11) + 6),
        1LL,
        *((_QWORD *)a2 + 1),
        *((unsigned int *)a2 + 4));
      v36 = 1;
    }
  }
  v37 = (OUTPUTDUPL_MGR *)*((_QWORD *)this + 37);
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(v37) )
  {
    v38 = *((_DWORD *)this + 78);
    HIDWORD(v62[3]) = updated;
    LODWORD(v62[4]) = v28;
    v39 = (OUTPUTDUPL_MGR *)(((HIDWORD(v62[4]) & 0xFFFFFE3F | ((v59 & 1 | (2 * (v32 & 1 | (2 * v60)))) << 6)) ^ (*(_DWORD *)(*((_QWORD *)this + 33) + 16LL) ^ (HIDWORD(v62[4]) & 0xFFFFFE3F | ((v59 & 1 | (2 * (v32 & 1 | (2 * v60)))) << 6))) & 3) & 0xFFFFFDD3);
    HIDWORD(v62[4]) = (unsigned int)v39 | (4
                                         * (*(_DWORD *)(*((_QWORD *)this + 34) + 16LL) & 3 | (8 * ((16 * v36) | v38 & 1))));
    if ( bTracingEnabled )
      OUTPUTDUPL_MGR::LogEtw(v39, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v62);
    v40 = (DXGDIAGNOSTICS *)*((_QWORD *)v37 + 10);
    if ( v40 )
      DXGDIAGNOSTICS::WriteDiagnosticEntry(v40, (struct _DXGK_DIAG_HEADER *)v62);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v44 = *((_QWORD *)this + 34);
    v45 = *((_QWORD *)this + 33);
    v57 = *((_DWORD *)this + 71);
    LODWORD(v56) = *(_DWORD *)(v44 + 16);
    LODWORD(v55) = v57;
    LODWORD(v54) = *(_DWORD *)(v45 + 16);
    LODWORD(v53) = *(_DWORD *)a2;
    LODWORD(v51) = *((_DWORD *)this + 11);
    McTemplateK0pqqqqqttttttttq_EtwWriteTransfer(
      v44,
      v45,
      v57,
      this,
      v51,
      v53,
      v54,
      v55,
      v56,
      v28,
      *((_DWORD *)this + 77),
      *((_DWORD *)this + 78),
      v32,
      v57,
      v60,
      v36,
      v59,
      updated);
  }
  return updated;
}
