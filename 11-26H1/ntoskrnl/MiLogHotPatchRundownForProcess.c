/*
 * XREFs of MiLogHotPatchRundownForProcess @ 0x14070101C
 * Callers:
 *     MiLogHotPatchRundown @ 0x140878A8C (MiLogHotPatchRundown.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     MiFillLogProcessInfo @ 0x14046E5B0 (MiFillLogProcessInfo.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     VslQueryActiveSecurePatches @ 0x1405C6160 (VslQueryActiveSecurePatches.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiGetProcessHotPatchContext @ 0x140876358 (MiGetProcessHotPatchContext.c)
 *     PsGetProcessMachine @ 0x140A96400 (PsGetProcessMachine.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiLogHotPatchRundownForProcess(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // r12
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  __int64 v8; // rsi
  const CHAR *v9; // r8
  void *FirstArgument; // r15
  __int64 v11; // r9
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // edx
  int v16; // r10d
  __int64 v17; // r8
  _QWORD *ProcessHotPatchContext; // r15
  struct _KLOCK_ENTRIES *v19; // r9
  _BYTE *v20; // rsi
  signed __int64 v21; // r9
  __int64 v22; // rdx
  _QWORD *v23; // rsi
  int v24; // ecx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  bool v28; // zf
  int v29; // [rsp+20h] [rbp-E0h]
  int v30; // [rsp+28h] [rbp-D8h]
  unsigned int v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+44h] [rbp-BCh] BYREF
  int v33; // [rsp+48h] [rbp-B8h] BYREF
  int v34; // [rsp+4Ch] [rbp-B4h] BYREF
  int v35; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+54h] [rbp-ACh] BYREF
  int v37; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  const CHAR *v39; // [rsp+68h] [rbp-98h] BYREF
  int v40[2]; // [rsp+78h] [rbp-88h]
  __int64 v41; // [rsp+80h] [rbp-80h]
  _OWORD v42[3]; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43[2]; // [rsp+C0h] [rbp-40h] BYREF
  PVOID *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  _BYTE v46[16]; // [rsp+F0h] [rbp-10h] BYREF
  int *v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  int *v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+118h] [rbp+18h]
  int *v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+128h] [rbp+28h]
  int *v53; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+138h] [rbp+38h]
  int *v55; // [rsp+140h] [rbp+40h]
  __int64 v56; // [rsp+148h] [rbp+48h]
  int *v57; // [rsp+150h] [rbp+50h]
  __int64 v58; // [rsp+158h] [rbp+58h]
  __int64 v59; // [rsp+160h] [rbp+60h]
  int v60; // [rsp+168h] [rbp+68h] BYREF
  int v61; // [rsp+16Ch] [rbp+6Ch]
  PVOID *p_P; // [rsp+170h] [rbp+70h]
  __int64 v63; // [rsp+178h] [rbp+78h]
  unsigned int *v64; // [rsp+180h] [rbp+80h]
  __int64 v65; // [rsp+188h] [rbp+88h]

  v41 = a2;
  v2 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 488);
  v4 = 0LL;
  v5 = a2;
  v31 = 0;
  memset(v42, 0, sizeof(v42));
  v39 = 0LL;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488)) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v42);
    v6 = *(_QWORD *)(BugCheckParameter1 + 368);
    if ( (v6 & 1) != 0 )
    {
      P = 0LL;
      if ( (int)VslQueryActiveSecurePatches(v6 & 0xFFFFFFFFFFFFFFFCuLL, (struct _MDL **)&P, &v31) >= 0 && v31 )
      {
        v7 = P;
        v8 = 0LL;
        v9 = (const CHAR *)v31;
        v39 = (const CHAR *)v31;
        do
        {
          FirstArgument = stru_140E366D8.FirstArgument;
          if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 32LL) )
          {
            v32 = *(_DWORD *)(BugCheckParameter1 + 464);
            v45 = 4LL;
            v44 = (PVOID *)&v32;
            tlgCreate1Sz_char((__int64)v46, (const CHAR *)(BugCheckParameter1 + 824));
            v12 = *(_DWORD *)(v4 + v11);
            v47 = &v33;
            v34 = *(_DWORD *)(v4 + v11 + 4);
            v49 = &v34;
            v35 = *(_DWORD *)(v4 + v11 + 12);
            v51 = &v35;
            v36 = *(_DWORD *)(v4 + v11 + 16);
            v53 = &v36;
            v37 = *(_DWORD *)(v4 + v11 + 24);
            v55 = &v37;
            v33 = v12;
            v48 = 4LL;
            v50 = 4LL;
            v52 = 4LL;
            v54 = 4LL;
            v56 = 4LL;
            v13 = v7[1];
            v14 = *(_QWORD *)(v13 + v8 + 8);
            v15 = *(unsigned __int16 *)(v13 + v8);
            v57 = &v60;
            LODWORD(P) = *(_DWORD *)(v4 + v11 + 8);
            v59 = v14;
            p_P = &P;
            v58 = 2LL;
            v60 = v15;
            v61 = v16;
            v63 = 4LL;
            LOWORD(v31) = PsGetProcessMachine(BugCheckParameter1);
            v65 = 2LL;
            v64 = &v31;
            tlgWriteEx_EtwWriteEx(
              (__int64)FirstArgument,
              (unsigned __int8 *)&word_14005960A,
              v17,
              1u,
              v29,
              v30,
              0xDu,
              v43);
            v9 = v39;
          }
          v4 += 28LL;
          v8 += 16LL;
          v39 = --v9;
        }
        while ( v9 );
        ExFreePoolWithTag(v7, 0);
      }
    }
    else
    {
      ProcessHotPatchContext = (_QWORD *)MiGetProcessHotPatchContext(BugCheckParameter1, 0LL);
      if ( ProcessHotPatchContext )
      {
        MiFillLogProcessInfo(BugCheckParameter1 + 1024, &P, &v39);
        --*(_WORD *)(v5 + 486);
        v20 = (_BYTE *)KeAbPreAcquire((__int64)(ProcessHotPatchContext + 2), 0LL, 0LL, v19);
        if ( _InterlockedCompareExchange64(ProcessHotPatchContext + 2, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(
            ProcessHotPatchContext + 2,
            0,
            (LegacyAutoBoost *)v20,
            (struct _KTHREAD *)(ProcessHotPatchContext + 2));
        v21 = 0LL;
        if ( v20 )
        {
          v22 = 1LL;
          if ( (KiAbpGlobalState & 1) != 0 )
          {
            LOBYTE(v22) = 2;
            AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v20 + 33), (volatile unsigned __int8 *)v22, 1);
          }
          else
          {
            v20[10] = 1;
          }
        }
        v23 = (_QWORD *)*ProcessHotPatchContext;
        if ( (_QWORD *)*ProcessHotPatchContext != ProcessHotPatchContext )
        {
          do
          {
            *(_QWORD *)v40 = stru_140E366D8.FirstArgument;
            if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
              && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 32LL) )
            {
              LODWORD(P) = *(_DWORD *)(BugCheckParameter1 + 464);
              v44 = &P;
              v45 = 4LL;
              tlgCreate1Sz_char((__int64)v46, v39);
              v24 = *((_DWORD *)v23 + 8);
              v47 = &v37;
              v36 = *((_DWORD *)v23 + 9);
              v49 = &v36;
              v35 = *((_DWORD *)v23 + 14);
              v51 = &v35;
              v34 = *((_DWORD *)v23 + 15);
              v53 = &v34;
              v33 = *((_DWORD *)v23 + 16);
              v55 = &v33;
              v57 = &v60;
              v59 = v23[6];
              v60 = *((unsigned __int16 *)v23 + 20);
              v32 = *((_DWORD *)v23 + 4);
              v37 = v24;
              p_P = (PVOID *)&v32;
              v48 = 4LL;
              v50 = 4LL;
              v52 = 4LL;
              v54 = 4LL;
              v56 = 4LL;
              v58 = 2LL;
              v61 = 0;
              v63 = 4LL;
              LOWORD(v31) = PsGetProcessMachine(BugCheckParameter1);
              v65 = 2LL;
              v64 = &v31;
              tlgWriteEx_EtwWriteEx(*(__int64 *)v40, (unsigned __int8 *)&byte_140059541, v25, 1u, v29, v30, 0xDu, v43);
            }
            v23 = (_QWORD *)*v23;
          }
          while ( v23 != ProcessHotPatchContext );
          v5 = v41;
          v21 = 0LL;
        }
        if ( _InterlockedCompareExchange64(ProcessHotPatchContext + 2, v21, 17LL) != 17 )
          ExfReleasePushLockShared(ProcessHotPatchContext + 2);
        KeAbPostRelease((unsigned __int64)(ProcessHotPatchContext + 2));
        v28 = (*(_WORD *)(v5 + 486))++ == 0xFFFF;
        if ( v28 && *(_QWORD *)(v5 + 152) != v5 + 152 )
          KiCheckForKernelApcDelivery(v27, v26);
      }
    }
    KiUnstackDetachProcess((__int64)v42, 0);
    ExReleaseRundownProtection_0(v2);
  }
}
