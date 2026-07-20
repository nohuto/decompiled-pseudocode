/*
 * XREFs of SmpStartCsr @ 0x1400032A0
 * Callers:
 *     SmpCreateInitialSession @ 0x140018CD0 (SmpCreateInitialSession.c)
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmpReleaseControlBlock @ 0x140003C60 (SmpReleaseControlBlock.c)
 *     SmpAllocateControlBlock @ 0x140003E10 (SmpAllocateControlBlock.c)
 *     SmpParseCommandLine @ 0x140004280 (SmpParseCommandLine.c)
 *     RtlStringCbPrintfW @ 0x140004B90 (RtlStringCbPrintfW.c)
 *     SmpInsertControlBlock @ 0x140004C24 (SmpInsertControlBlock.c)
 *     SmscpLoadSubSystem @ 0x140004C90 (SmscpLoadSubSystem.c)
 *     SmpExecuteImage @ 0x140005010 (SmpExecuteImage.c)
 *     SmpInternalLogFailure @ 0x140005424 (SmpInternalLogFailure.c)
 *     SmpDereferenceKnownSubSys @ 0x140005F60 (SmpDereferenceKnownSubSys.c)
 *     SmpStopCsr @ 0x140007420 (SmpStopCsr.c)
 *     SmpDestroyControlBlock @ 0x1400075E8 (SmpDestroyControlBlock.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     SmpInvokeAutoChk @ 0x1400158B8 (SmpInvokeAutoChk.c)
 *     SmpLoadSubSystem @ 0x1400169E8 (SmpLoadSubSystem.c)
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 __fastcall SmpStartCsr(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 ControlBlock; // rax
  _BYTE *v6; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rdi
  WCHAR *Heap; // rax
  int v10; // eax
  int v11; // r9d
  int v12; // r14d
  NTSTATUS v13; // edi
  int v14; // eax
  __int64 v15; // rdx
  __int64 result; // rax
  _QWORD *v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // eax
  __int64 v20; // r8
  __int128 *v21; // rcx
  char v22; // al
  __int128 *v23; // rax
  _OWORD *v24; // rdx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  int SubSystem; // eax
  __int128 *v38; // rcx
  __int64 v39; // r8
  char v40; // al
  __int128 *v41; // rax
  _OWORD *v42; // rdx
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  int v55; // r13d
  __int64 v56; // r14
  unsigned int v57; // r9d
  unsigned int v58; // edx
  __int64 v59; // r8
  __int64 v60; // rdx
  void *v61; // rcx
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  __int64 EventInformation; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int ProcessInformation; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING Source; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Object[2]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE ProcessHandle[2]; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle[2]; // [rsp+A0h] [rbp-60h]
  __int128 v70; // [rsp+B0h] [rbp-50h]
  __int128 v71; // [rsp+C0h] [rbp-40h]
  __int128 v72; // [rsp+D0h] [rbp-30h]
  __int128 v73; // [rsp+E0h] [rbp-20h]
  __int64 v74; // [rsp+F0h] [rbp-10h]
  __int128 v75; // [rsp+100h] [rbp+0h]
  __int128 v76; // [rsp+110h] [rbp+10h] BYREF
  __int128 v77; // [rsp+120h] [rbp+20h]
  __int128 v78; // [rsp+130h] [rbp+30h]
  __int128 v79; // [rsp+140h] [rbp+40h]
  __int128 v80; // [rsp+150h] [rbp+50h]
  __int128 v81; // [rsp+160h] [rbp+60h]
  __int128 v82; // [rsp+170h] [rbp+70h]
  __int128 v83; // [rsp+180h] [rbp+80h]
  __int128 v84; // [rsp+190h] [rbp+90h]
  __int128 v85; // [rsp+1A0h] [rbp+A0h]
  __int128 v86; // [rsp+1B0h] [rbp+B0h]
  __int128 v87; // [rsp+1C0h] [rbp+C0h]
  __int128 v88; // [rsp+1D0h] [rbp+D0h]
  __int128 v89; // [rsp+1E0h] [rbp+E0h]
  wchar_t pszDest[20]; // [rsp+260h] [rbp+160h] BYREF

  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v74 = 0LL;
  v2 = *(unsigned int *)(a1 + 48);
  v3 = 0LL;
  v4 = 0LL;
  *(_OWORD *)Object = 0LL;
  ProcessInformation = 0;
  *(_OWORD *)ProcessHandle = 0LL;
  *(_OWORD *)Handle = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  if ( (unsigned int)v2 < SmpNumberInitialSessions )
  {
    v55 = 0;
    v56 = SmpCoreProcessIds + 40 * v2;
    RtlAcquireSRWLockShared(v56 + 8);
    if ( !*(_DWORD *)(v56 + 4) )
    {
      do
        RtlSleepConditionVariableSRW(v56 + 16, v56 + 8, 0LL, 1LL);
      while ( !*(_DWORD *)(v56 + 4) );
      v55 = 0;
    }
    if ( *(_QWORD *)(v56 + 32) )
    {
      v3 = *(_QWORD *)(v56 + 24);
      if ( v3 )
        _InterlockedIncrement((volatile signed __int32 *)v3);
      v4 = *(_QWORD *)(v56 + 32);
    }
    else
    {
      v55 = -1073741823;
    }
    RtlReleaseSRWLockShared(v56 + 8);
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(SmpCoreProcessIds + 40LL * *(unsigned int *)(a1 + 48));
    if ( v55 >= 0 )
    {
      memset_0(&v76, 0, 0x148uLL);
      if ( v3 && *(_DWORD *)(v3 + 24) == 2 )
      {
        *(_QWORD *)(a1 + 320) = *(_QWORD *)(v3 + 48);
      }
      else
      {
        v55 = -1073741823;
        if ( !v3 )
        {
LABEL_66:
          LODWORD(v79) = *(_DWORD *)(a1 + 48);
          DWORD2(v78) = 6;
          SmpStopCsr(&v76, 0LL, 0LL);
          return (unsigned int)v55;
        }
      }
      SmpDereferenceKnownSubSys((PVOID)v3);
      if ( v55 >= 0 )
      {
        *(_QWORD *)(a1 + 312) = v4;
        return 0LL;
      }
      goto LABEL_66;
    }
  }
  NtWaitForSingleObject(SmpSessionCreateBlockEvent, 0, 0LL);
  Destination.Length = *(_WORD *)(a1 + 52);
  Destination.MaximumLength = Destination.Length;
  Destination.Buffer = (PWSTR)(a1 + 56);
  ControlBlock = SmpAllocateControlBlock();
  v6 = (_BYTE *)ControlBlock;
  if ( ControlBlock )
  {
    v7 = *(_QWORD *)(ControlBlock + 24);
    Source = Destination;
    v8 = SmpHelperCmd.Length + 40LL + (unsigned __int16)_mm_cvtsi128_si32((__m128i)Destination);
    if ( v8 > 0xFFFF )
    {
      v13 = -1073741811;
    }
    else
    {
      Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag + 0x80000, v8);
      if ( Heap )
      {
        *(_QWORD *)&Destination.Length = 0LL;
        Destination.MaximumLength = v8;
        Destination.Buffer = Heap;
        RtlAppendUnicodeStringToString(&Destination, &SmpHelperCmd);
        RtlStringCbPrintfW(pszDest, 0x28uLL, L" %08x %08x ", (unsigned int)v7, (_DWORD)SmpSharedSection);
        RtlAppendUnicodeToString(&Destination, pszDest);
        RtlAppendUnicodeStringToString(&Destination, &Source);
        LODWORD(EventInformation) = 5152;
        UnicodeString = 0LL;
        v75 = 0LL;
        Source = 0LL;
        v10 = SmpParseCommandLine(&Destination, &EventInformation, &UnicodeString, 0LL);
        v12 = v10;
        v13 = v10;
        if ( v10 < 0 )
        {
          v57 = v10;
          v58 = 10119;
LABEL_47:
          SmpLogFailureString((__int64)"SmpExecuteCommand", v58, (__int64)Destination.Buffer, v57);
          RtlFreeUnicodeString(&Destination);
          v59 = (unsigned int)v12;
          v60 = 491LL;
LABEL_48:
          SmpLogFailure("SmpStartCsr", v60, v59);
          goto LABEL_12;
        }
        if ( (EventInformation & 4) != 0 )
        {
          if ( SmpSoftBoot && !SmpBugcheckRecovery )
          {
LABEL_9:
            v13 = v12;
            RtlFreeUnicodeString(&UnicodeString);
            RtlFreeUnicodeString(&Source);
            if ( v12 >= 0 )
            {
              RtlFreeUnicodeString(&Destination);
              v14 = NtQueryInformationProcess(ProcessHandle[1], ProcessSessionInformation, &ProcessInformation, 4u, 0LL);
              v13 = v14;
              if ( v14 < 0 )
              {
                NtTerminateProcess(ProcessHandle[1], v14);
                NtClose(ProcessHandle[1]);
                NtClose(Handle[0]);
LABEL_12:
                SmpReleaseControlBlock(v6);
                return (unsigned int)v13;
              }
              v17 = (_QWORD *)*((_QWORD *)v6 + 2);
              *v17 = *((_QWORD *)v6 + 4);
              v17[1] = *((_QWORD *)v6 + 5);
              *((HANDLE *)v6 + 6) = ProcessHandle[1];
              *((HANDLE *)v6 + 7) = Handle[1];
              *((_DWORD *)v6 + 2) = ProcessInformation;
              v18 = ProcessInformation;
              v19 = _InterlockedIncrement(&dword_1400312A8);
              if ( v19 <= SmpNumberInitialSessions )
              {
                v15 = 5LL * (v19 - 1);
                *(_DWORD *)(SmpCoreProcessIds + 40LL * (v19 - 1)) = ProcessInformation;
              }
              else
              {
                _InterlockedDecrement(&dword_1400312A8);
              }
              *((_OWORD *)v6 + 4) = *(_OWORD *)a1;
              *((_OWORD *)v6 + 5) = *(_OWORD *)(a1 + 16);
              *((_QWORD *)v6 + 12) = *(_QWORD *)(a1 + 32);
              *((_QWORD *)v6 + 13) = v6 + 104;
              *((_QWORD *)v6 + 14) = 0LL;
              *((_QWORD *)v6 + 15) = 0LL;
              ++*((_DWORD *)v6 + 1);
              RtlAcquireSRWLockExclusive(&SmpControlLock, v15, v18);
              if ( (unsigned int)SmpInsertControlBlock(SmpControlBlockRoot, v6) )
                SmpControlBlockRoot = (PRTL_SPLAY_LINKS)(v6 + 104);
              RtlReleaseSRWLockExclusive(&SmpControlLock);
              v13 = NtResumeThread(Handle[0], 0LL);
              NtClose(Handle[0]);
              if ( v13 < 0 )
              {
                if ( (*v6 & 1) == 0 )
                  _InterlockedOr((volatile signed __int32 *)v6, 1u);
                SmpDestroyControlBlock(v6);
                goto LABEL_12;
              }
              Object[0] = *((HANDLE *)v6 + 6);
              Object[1] = *((HANDLE *)v6 + 4);
              v13 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL);
              if ( v13 < 0 )
              {
                memset_0(&v76, 0, 0xE0uLL);
                LODWORD(v88) = v13;
                DWORD2(v89) = 595;
                v20 = 64LL;
                v21 = &v76;
                do
                {
                  if ( v20 == -2147483582 )
                    break;
                  v22 = *((_BYTE *)v21 + "SmpStartCsr" - (char *)&v76);
                  if ( !v22 )
                    break;
                  *(_BYTE *)v21 = v22;
                  v21 = (__int128 *)((char *)v21 + 1);
                  --v20;
                }
                while ( v20 );
                v23 = (__int128 *)((char *)v21 - 1);
                if ( v20 )
                  v23 = v21;
                *(_BYTE *)v23 = 0;
                v24 = (_OWORD *)((char *)&SmpBlackboxBuffer + 224 * (_InterlockedIncrement(&dword_14002FE94) % 16));
                v25 = v77;
                *(_OWORD *)((char *)v24 + 8) = v76;
                v26 = v78;
                *(_OWORD *)((char *)v24 + 24) = v25;
                v27 = v79;
                *(_OWORD *)((char *)v24 + 40) = v26;
                v28 = v80;
                *(_OWORD *)((char *)v24 + 56) = v27;
                v29 = v81;
                *(_OWORD *)((char *)v24 + 72) = v28;
                v30 = v82;
                *(_OWORD *)((char *)v24 + 88) = v29;
                v31 = v84;
                *(_OWORD *)((char *)v24 + 104) = v30;
                v24 = (_OWORD *)((char *)v24 + 136);
                *(v24 - 1) = v83;
                v32 = v85;
                *v24 = v31;
                v33 = v86;
                v24[1] = v32;
                v34 = v87;
                v24[2] = v33;
                v35 = v88;
                v24[3] = v34;
                v36 = v89;
                v24[4] = v35;
                v24[5] = v36;
                if ( (*v6 & 1) != 0 )
                  goto LABEL_26;
                _m_prefetchw(v6);
                if ( (_InterlockedOr((volatile signed __int32 *)v6, 1u) & 1) != 0 )
                  goto LABEL_26;
                goto LABEL_59;
              }
              if ( !v13 )
              {
                v61 = (void *)*((_QWORD *)v6 + 4);
                EventInformation = 0LL;
                NtQueryEvent(v61, EventBasicInformation, &EventInformation, 8u, 0LL);
                if ( !HIDWORD(EventInformation) )
                {
                  if ( (*v6 & 1) == 0 )
                    _InterlockedOr((volatile signed __int32 *)v6, 1u);
                  v13 = -1073741823;
                  goto LABEL_59;
                }
                v13 = NtClearEvent(*((HANDLE *)v6 + 4));
                if ( v13 < 0 )
                {
LABEL_59:
                  SmpDestroyControlBlock(v6);
                  v60 = 646LL;
LABEL_60:
                  v59 = (unsigned int)v13;
                  goto LABEL_48;
                }
              }
LABEL_26:
              SmpReleaseControlBlock(v6);
              return 259LL;
            }
            goto LABEL_75;
          }
          SubSystem = SmpInvokeAutoChk(&UnicodeString);
        }
        else if ( (EventInformation & 8) != 0 )
        {
          if ( SmpPrimarySmss )
            SubSystem = SmpLoadSubSystem(
                          (unsigned int)&UnicodeString,
                          0,
                          (unsigned int)&Destination,
                          0,
                          (unsigned int)&Source,
                          EventInformation);
          else
            SubSystem = SmscpLoadSubSystem(
                          (unsigned int)&UnicodeString,
                          0,
                          (unsigned int)&Destination,
                          0,
                          EventInformation);
        }
        else
        {
          if ( (EventInformation & 0x10) != 0 )
          {
            v13 = -1073741772;
            v12 = -1073741772;
            SmpLogFailureString((__int64)"SmpExecuteCommand", 0x27ADu, (__int64)UnicodeString.Buffer, 0xC0000034);
            RtlFreeUnicodeString(&UnicodeString);
            RtlFreeUnicodeString(&Source);
LABEL_75:
            v57 = v12;
            v58 = 10185;
            goto LABEL_47;
          }
          SubSystem = SmpExecuteImage(
                        (unsigned int)&UnicodeString,
                        0,
                        (unsigned int)&Destination,
                        v11,
                        0LL,
                        EventInformation,
                        (__int64)ProcessHandle);
        }
        v12 = SubSystem;
        goto LABEL_9;
      }
      memset_0(&v76, 0, 0xE0uLL);
      v13 = -1073741801;
      SmpInternalLogFailure("SmpAllocateInitialCommandBuffer", 285LL, 3221225495LL, &v76);
    }
    v60 = 471LL;
    goto LABEL_60;
  }
  memset_0(&v76, 0, 0xE0uLL);
  LODWORD(v88) = -1073741670;
  DWORD2(v89) = 460;
  v38 = &v76;
  v39 = 64LL;
  do
  {
    if ( v39 == -2147483582 )
      break;
    v40 = *((_BYTE *)v38 + "SmpStartCsr" - (char *)&v76);
    if ( !v40 )
      break;
    *(_BYTE *)v38 = v40;
    v38 = (__int128 *)((char *)v38 + 1);
    --v39;
  }
  while ( v39 );
  v41 = (__int128 *)((char *)v38 - 1);
  if ( v39 )
    v41 = v38;
  *(_BYTE *)v41 = 0;
  v42 = (_OWORD *)((char *)&SmpBlackboxBuffer + 224 * (_InterlockedIncrement(&dword_14002FE94) % 16));
  v43 = v77;
  *(_OWORD *)((char *)v42 + 8) = v76;
  v44 = v78;
  *(_OWORD *)((char *)v42 + 24) = v43;
  v45 = v79;
  *(_OWORD *)((char *)v42 + 40) = v44;
  v46 = v80;
  *(_OWORD *)((char *)v42 + 56) = v45;
  v47 = v81;
  *(_OWORD *)((char *)v42 + 72) = v46;
  v48 = v82;
  *(_OWORD *)((char *)v42 + 88) = v47;
  v49 = v84;
  *(_OWORD *)((char *)v42 + 104) = v48;
  v42 = (_OWORD *)((char *)v42 + 136);
  *(v42 - 1) = v83;
  v50 = v85;
  *v42 = v49;
  v51 = v86;
  v42[1] = v50;
  v52 = v87;
  v42[2] = v51;
  v53 = v88;
  v42[3] = v52;
  v54 = v89;
  result = 3221225626LL;
  v42[4] = v53;
  v42[5] = v54;
  return result;
}
