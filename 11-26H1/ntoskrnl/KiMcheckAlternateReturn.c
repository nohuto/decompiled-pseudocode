/*
 * XREFs of KiMcheckAlternateReturn @ 0x1405FF7C0
 * Callers:
 *     KxMcheckAlternateReturn @ 0x14073D400 (KxMcheckAlternateReturn.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     WheapGetErrorSource @ 0x1403E13D0 (WheapGetErrorSource.c)
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     WheaGetErrPacketFromErrRecord @ 0x140591444 (WheaGetErrPacketFromErrRecord.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405FF658 (KiAltContextWorkQueueAddItem.c)
 *     WheaRecoveryBugCheck @ 0x1406D8C30 (WheaRecoveryBugCheck.c)
 *     WheaGetCurrentProcessName @ 0x1406D9DD0 (WheaGetCurrentProcessName.c)
 *     WheaProcessWaitingETWEvents @ 0x1406DB340 (WheaProcessWaitingETWEvents.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     WheaAttemptPhysicalPageOffline @ 0x14084E3B0 (WheaAttemptPhysicalPageOffline.c)
 *     WheaTerminateProcess @ 0x14084E8F0 (WheaTerminateProcess.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall KiMcheckAlternateReturn(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v2; // rbx
  char v3; // al
  __int64 v4; // rsi
  int v5; // edi
  unsigned int *v6; // r13
  unsigned int *v7; // r15
  unsigned int v8; // r12d
  unsigned int v9; // eax
  __int64 v10; // r15
  _OWORD *v11; // r13
  __int64 Pool2; // rax
  int v13; // r8d
  int v14; // r9d
  char v15; // r12
  void *v16; // r15
  char v17; // r15
  unsigned __int8 v18; // dl
  __int64 v19; // rdi
  volatile signed __int32 *v20; // r12
  unsigned int v21; // r15d
  int v22; // eax
  PWHEA_ERROR_PACKET ErrPacketFromErrRecord; // rax
  __int64 *ErrorSource; // rax
  __int64 v25; // rdx
  char v27; // [rsp+38h] [rbp-29h]
  unsigned int v28; // [rsp+3Ch] [rbp-25h] BYREF
  _DWORD *v29; // [rsp+40h] [rbp-21h] BYREF
  __int64 CurrentIrql; // [rsp+48h] [rbp-19h]
  __int128 Src; // [rsp+50h] [rbp-11h] BYREF
  __int128 v32; // [rsp+60h] [rbp-1h]
  __int128 v33; // [rsp+70h] [rbp+Fh]
  char v34; // [rsp+80h] [rbp+1Fh]

  v1 = *(_QWORD *)(a1 + 8);
  v34 = 0;
  v2 = 0LL;
  v3 = *(_BYTE *)a1 & 0x10;
  v29 = (_DWORD *)a1;
  v27 = v3;
  v4 = 0LL;
  Src = 0LL;
  v5 = -1073741637;
  v32 = 0LL;
  v33 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v6 = (unsigned int *)(v1 + 128);
  v7 = (unsigned int *)(v1 + 128);
  v8 = 0;
  v9 = *(unsigned __int16 *)(v1 + 10);
  v28 = v9;
  while ( 1 )
  {
    if ( v8 >= v9 )
    {
      v11 = v29;
      v17 = 0;
      goto LABEL_34;
    }
    if ( !memcmp(v7 + 4, &XPF_MCA_SECTION_GUID, 0x10uLL) )
      break;
    v9 = v28;
    v7 += 18;
    ++v8;
  }
  v10 = *v7;
  while ( (unsigned int)v2 < v28 )
  {
    if ( !memcmp(v6 + 4, &RECOVERY_INFO_SECTION_GUID, 0x10uLL) )
    {
      v4 = v1 + *v6;
      break;
    }
    v6 += 18;
    LODWORD(v2) = v2 + 1;
  }
  v11 = v29;
  v2 = *(_QWORD *)(v10 + v1 + 48);
  if ( (*v29 & 4) == 0 )
  {
    v17 = 0;
    goto LABEL_34;
  }
  if ( v4 )
    *(_QWORD *)(v4 + 1) |= 8uLL;
  if ( !(_BYTE)CurrentIrql && KeGetCurrentThread()->WaitBlock[3].SpareLong )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v15 = v27;
    v16 = (void *)Pool2;
    if ( Pool2 )
    {
      LOBYTE(v14) = v27;
      LOBYTE(v13) = 1;
      v5 = WheaAttemptPhysicalPageOffline(v2 >> 12, 0, v13, v14, Pool2);
      ExFreePoolWithTag(v16, 0x61656857u);
    }
    else
    {
      v5 = -1073741670;
    }
    v17 = 1;
    goto LABEL_35;
  }
  v17 = 0;
  if ( !KiAltReturnInitialized )
  {
LABEL_34:
    v15 = v27;
    goto LABEL_35;
  }
  v18 = 0;
  while ( _InterlockedCompareExchange(&dword_140E66A10[12 * v18], 1, 0) )
  {
    if ( ++v18 >= 0x10u )
    {
      v5 = -1073741670;
      goto LABEL_34;
    }
  }
  v19 = 6LL * v18;
  *(_OWORD *)((char *)&KiAltContextWrapper + 48 * v18 + 24) = *v11;
  v20 = (volatile signed __int32 *)((char *)&KiAltContextWrapper + 48 * v18);
  _InterlockedAdd(v20 + 4, 1u);
  KiAltContextWorkQueueAddItem((PLIST_ENTRY)v20);
  v21 = 0;
  while ( *((int *)&KiAltContextWrapper + 2 * v19 + 4) > 1 )
  {
    KeStallExecutionProcessor(0x32u);
    v21 += 50;
    if ( v21 >= 0x1E8480 )
    {
      *((_DWORD *)&KiAltContextWrapper + 2 * v19 + 10) = 258;
      break;
    }
  }
  v5 = *((_DWORD *)&KiAltContextWrapper + 2 * v19 + 10);
  v17 = 0;
  _InterlockedExchange(v20 + 4, 0);
  v15 = v27;
  if ( !v5 && (unsigned __int8)CurrentIrql >= 2u )
    v5 = -1073741595;
LABEL_35:
  *(_QWORD *)&Src = 0x1674C6857LL;
  LODWORD(v33) = *(_DWORD *)v11;
  *((_QWORD *)&Src + 1) = 49LL;
  *(_QWORD *)&v32 = 0x800000354C4E524BuLL;
  *((_QWORD *)&v32 + 1) = 0x1100000002LL;
  *(_QWORD *)((char *)&v33 + 4) = v2;
  HIDWORD(v33) = v5;
  v34 = v15;
  LOBYTE(v22) = WheaLogInternalEvent(&Src);
  if ( v4 )
  {
    *(_BYTE *)(v4 + 13) = CurrentIrql;
    v28 = 20;
    v29 = (_DWORD *)(v4 + 19);
    LOBYTE(v22) = WheaGetCurrentProcessName(&v29, &v28);
  }
  if ( v5 == 259 )
  {
    v22 = *(_DWORD *)v11;
    if ( (*(_DWORD *)v11 & 8) != 0 && !v15 )
    {
      if ( v4 )
        *(_QWORD *)(v4 + 1) |= 2uLL;
      LOBYTE(v22) = WheaTerminateProcess();
    }
  }
  *(_DWORD *)(v1 + 104) &= ~0x80u;
  if ( !v5 )
    goto LABEL_60;
  if ( v15 )
    goto LABEL_47;
  if ( v5 == 259 )
    goto LABEL_60;
  if ( !v17 )
  {
LABEL_47:
    ErrPacketFromErrRecord = WheaGetErrPacketFromErrRecord((PWHEA_ERROR_RECORD)v1);
    if ( ErrPacketFromErrRecord )
    {
      ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, ErrPacketFromErrRecord->ErrorSourceId);
      v25 = (unsigned __int64)(ErrorSource + 12) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64);
    }
    else
    {
      v25 = 0LL;
    }
    if ( v4 )
    {
      *(_BYTE *)(v4 + 14) = 0;
      switch ( v5 )
      {
        case 258:
          *(_DWORD *)(v4 + 15) = 2;
          break;
        case -1073741670:
          *(_DWORD *)(v4 + 15) = 11;
          break;
        case 259:
          *(_DWORD *)(v4 + 15) = 1;
          break;
        default:
          *(_DWORD *)(v4 + 15) = 16 - (v5 != -1073741595);
          break;
      }
    }
    *(_DWORD *)(v1 + 104) &= ~1u;
    *(_DWORD *)(v1 + 12) = 1;
    LOBYTE(v22) = WheaRecoveryBugCheck(v1, v25, 0LL);
  }
  if ( v5 >= 0 )
LABEL_60:
    LOBYTE(v22) = WheaProcessWaitingETWEvents();
  return v22;
}
