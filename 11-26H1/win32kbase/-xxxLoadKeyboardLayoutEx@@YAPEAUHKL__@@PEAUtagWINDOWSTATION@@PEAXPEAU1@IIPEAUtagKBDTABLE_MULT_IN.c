/*
 * XREFs of ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011BC8C
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x14011B590 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     _HMPheFromObject @ 0x1400488F0 (_HMPheFromObject.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HKLtoPKL @ 0x1400870A0 (HKLtoPKL.c)
 *     xxxInternalActivateKeyboardLayout @ 0x140087130 (xxxInternalActivateKeyboardLayout.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400874A8 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     HMAssignmentLock @ 0x14009B8F0 (HMAssignmentLock.c)
 *     DestroyKF @ 0x140118D3C (DestroyKF.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x14011B534 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ?GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z @ 0x14011C484 (-GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z.c)
 *     IsEditionResetIMELayoutSupported @ 0x14011C4B4 (IsEditionResetIMELayoutSupported.c)
 *     EditionResetIMELayout @ 0x14011C4EC (EditionResetIMELayout.c)
 *     SetGlobalKeyboardTableInfo @ 0x14011C544 (SetGlobalKeyboardTableInfo.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x14011C5F8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ?LoadKeyboardLayoutW@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z @ 0x14011CA48 (-LoadKeyboardLayoutW@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z.c)
 *     xxxWindowEvent @ 0x14011CB00 (xxxWindowEvent.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x14011DC94 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     HMAllocObjectEx @ 0x14011DE20 (HMAllocObjectEx.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$00@@QEAA@XZ @ 0x14016B7DC (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$00@@QEAA@XZ.c)
 *     xxxFreeKeyboardLayouts @ 0x140186BE0 (xxxFreeKeyboardLayouts.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagKL@@$0A@$00@@QEAAPEAUtagKL@@XZ @ 0x140189FA0 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagKL@@$0A@$00@@QEAAPEAUtagKL@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1401BBA70 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ApiSetEditionInitSystemCharsetInfoForLayout @ 0x1401BE99C (ApiSetEditionInitSystemCharsetInfoForLayout.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1401BEEF8 (ApiSetEditionNotifyShellLanguageHook.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1402199E0 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 *     ApiSetEditionFreeIMEKeyboardLayouts @ 0x1402275B4 (ApiSetEditionFreeIMEKeyboardLayouts.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

HKL __fastcall xxxLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        void *a2,
        signed __int64 a3,
        unsigned int a4,
        unsigned int a5,
        wchar_t *a6,
        const unsigned __int16 *a7,
        signed int a8,
        unsigned int a9)
{
  __int64 v11; // rbx
  struct tagTHREADINFO *v12; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // r12
  int v17; // esi
  int v18; // edx
  struct tagKL *KbdLayoutListHead; // r8
  __int64 v20; // rdi
  unsigned int v21; // ebx
  unsigned int v22; // r13d
  const unsigned __int16 *v24; // r9
  __int64 v25; // rdx
  char **KeyboardLayoutFile; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  int v30; // edx
  int v31; // r8d
  __int64 v32; // rax
  const WCHAR *v33; // rdx
  __int64 v34; // r13
  int v35; // r8d
  void *v36; // rax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  _WORD *v41; // rcx
  __int64 v42; // rax
  __int16 v43; // dx
  _WORD *v44; // rax
  struct tagKL *v45; // rax
  int v46; // r8d
  __int64 v47; // rcx
  __int64 v48; // rax
  char v49; // r15
  ULONG_PTR v50; // rdx
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  __int64 UserSessionState; // rax
  int v55; // r8d
  struct tagTHREADINFO *v56; // rax
  __int64 v57; // rax
  HANDLE v58; // rbx
  __int64 v59; // rax
  unsigned int v60; // ebx
  struct tagKBDFILE *v61; // rax
  int v62; // r8d
  __int64 v63; // rcx
  __int64 v64; // rbx
  int inited; // [rsp+44h] [rbp-8Dh]
  void *v66; // [rsp+50h] [rbp-81h] BYREF
  void *v67; // [rsp+58h] [rbp-79h]
  ULONG_PTR v68; // [rsp+60h] [rbp-71h] BYREF
  __int64 v69; // [rsp+68h] [rbp-69h]
  unsigned int v70; // [rsp+70h] [rbp-61h]
  unsigned int v71; // [rsp+74h] [rbp-5Dh]
  PVOID Buffer; // [rsp+78h] [rbp-59h] BYREF
  PCWSTR SourceString; // [rsp+80h] [rbp-51h]
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-49h] BYREF
  __int64 v75; // [rsp+90h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-39h] BYREF
  __int128 v77; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v78; // [rsp+B8h] [rbp-19h]

  v70 = a5;
  v11 = 0LL;
  SourceString = a7;
  v71 = a4;
  v68 = a3;
  v66 = a2;
  Buffer = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  DestinationString = 0LL;
  if ( !a8 || a1 && (*((_DWORD *)a1 + 8) & 4) != 0 )
    return 0LL;
  v12 = PtiCurrent((__int64)a1, (__int64)a2);
  v16 = (__int64)v12;
  if ( a3 )
  {
    v11 = HKLtoPKL((__int64)v12, a3);
    if ( !v11 )
      return 0LL;
  }
  if ( a8 != (_DWORD)a3 )
  {
    v17 = a9;
    if ( (a9 & 0x40000000) != 0 )
    {
      v58 = *(HANDLE *)(W32GetUserSessionState(v14, v13, v15) + 63536);
      if ( PsGetThreadProcessId(*(PETHREAD *)v16) != v58 )
      {
        UserSetLastError(1004);
        return 0LL;
      }
      if ( !a1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2056LL);
      ApiSetEditionFreeIMEKeyboardLayouts(a1);
      xxxFreeKeyboardLayouts(a1);
    }
    KbdLayoutListHead = GetKbdLayoutListHead(a1);
    v20 = (__int64)KbdLayoutListHead;
    if ( !KbdLayoutListHead )
    {
      v21 = a8;
LABEL_9:
      v22 = 0;
      if ( (int)IsEditionResetIMELayoutSupported() >= 0 && !(unsigned int)EditionResetIMELayout(v21, a9, &Buffer) )
        return 0LL;
      inited = ApiSetEditionInitSystemCharsetInfoForLayout(SourceString, &v77);
      KeyboardLayoutFile = (char **)LoadKeyboardLayoutFile(v66, v71, v70, v24, a6 + 290, 0, 0);
      if ( KeyboardLayoutFile )
      {
        LOBYTE(v27) = 13;
        v29 = HMAllocObjectEx(0, 0, v27, 160, 0);
        v20 = v29;
        if ( v29 )
        {
          v67 = KeyboardLayoutFile;
          v66 = (void *)(v29 + 56);
          HMAssignmentLock((__int64 **)&v66, 1, v31);
          v32 = *(unsigned int *)a6;
          if ( (_DWORD)v32 )
          {
            v59 = Win32AllocPoolZInitImpl(256LL, 8 * v32, 0x746B7355u);
            *(_QWORD *)(v20 + 96) = v59;
            if ( v59 )
            {
              v60 = 0;
              if ( *(_DWORD *)a6 )
              {
                do
                {
                  if ( *(_QWORD *)&a6[8 * v60 + 324] )
                  {
                    a6[36 * v60 + 33] = 0;
                    v61 = LoadKeyboardLayoutFile(
                            *(void **)&a6[8 * v60 + 324],
                            *(_DWORD *)&a6[8 * v60 + 328],
                            *(_DWORD *)&a6[8 * v60 + 330],
                            (const unsigned __int16 *)(2LL * v60),
                            &a6[36 * v60 + 2],
                            *(_DWORD *)&a6[36 * v60 + 34],
                            *(_DWORD *)&a6[36 * v60 + 36]);
                    if ( !v61 )
                      break;
                    v63 = *(_QWORD *)(v20 + 96);
                    v67 = v61;
                    v66 = (void *)(v63 + 8LL * v22);
                    HMAssignmentLock((__int64 **)&v66, 0, v62);
                    ++v22;
                  }
                  ++v60;
                }
                while ( v60 < *(_DWORD *)a6 );
                v17 = a9;
              }
              *(_DWORD *)(v20 + 88) = v22;
            }
          }
          v33 = SourceString;
          *(_QWORD *)(v20 + 40) = a8;
          *(_QWORD *)(v20 + 16) = v20;
          *(_QWORD *)(v20 + 24) = v20;
          *(_DWORD *)(v20 + 32) = 0;
          *(_WORD *)(v20 + 74) = 0;
          RtlInitUnicodeString(&DestinationString, v33);
          v34 = 16LL;
          RtlUnicodeStringToInteger(&DestinationString, 0x10u, (PULONG)(v20 + 112));
          if ( (*((_DWORD *)a6 + 194) & 1) != 0 )
            *(_DWORD *)(v20 + 32) |= 0x80000000;
          v36 = *(void **)(v20 + 56);
          v66 = (void *)(v20 + 48);
          v67 = v36;
          HMAssignmentLock((__int64 **)&v66, 1, v35);
          v37 = *(_QWORD *)(v20 + 48);
          v38 = *((_DWORD *)a6 + 195);
          v39 = v37;
          if ( !v38 )
            v38 = *(_DWORD *)(*(_QWORD *)(v37 + 32) + 96LL);
          *(_DWORD *)(v20 + 104) = v38;
          v40 = *((_DWORD *)a6 + 196);
          if ( !v40 )
          {
            v39 = v37;
            v40 = *(_DWORD *)(*(_QWORD *)(v37 + 32) + 100LL);
          }
          *(_DWORD *)(v20 + 108) = v40;
          *(_DWORD *)(v20 + 116) = *((_DWORD *)a6 + 195);
          *(_DWORD *)(v20 + 120) = *((_DWORD *)a6 + 196);
          *(_DWORD *)(*(_QWORD *)(v39 + 32) + 80LL) |= ((unsigned int)v17 >> 15) & 7;
          *(_QWORD *)(v20 + 80) = Buffer;
          if ( inited )
          {
            *(_WORD *)(v20 + 72) = WORD2(v77);
            *(_DWORD *)(v20 + 64) = HIDWORD(v78);
            *(_DWORD *)(v20 + 68) = v77;
          }
          else
          {
            *(_WORD *)(v20 + 72) = 0;
            *(_QWORD *)(v20 + 64) = 1LL;
          }
          v41 = (_WORD *)(v20 + 124);
          v42 = *(_QWORD *)(v16 + 456) - (v20 + 124);
          do
          {
            v43 = *(_WORD *)((char *)v41 + v42 + 976);
            if ( !v43 )
              break;
            *v41++ = v43;
            --v34;
          }
          while ( v34 );
          v44 = v41 - 1;
          if ( v34 )
            v44 = v41;
          *v44 = 0;
          v45 = GetKbdLayoutListHead(a1);
          if ( v45 )
          {
            *(_QWORD *)(v20 + 16) = v45;
            *(_QWORD *)(v20 + 24) = *((_QWORD *)v45 + 3);
            *(_QWORD *)(*((_QWORD *)v45 + 3) + 16LL) = v20;
            *((_QWORD *)v45 + 3) = v20;
          }
          else
          {
            LockKbdLayoutListHead(a1, (struct tagKL *)v20, v46);
          }
          InputTraceLogging::Keyboard::LoadKeyboardLayoutW((struct tagKL *const)v20);
          v49 = 0;
          goto LABEL_41;
        }
        DestroyKF(KeyboardLayoutFile, v30, v31);
      }
      if ( Buffer )
        GreDeleteFastMutex((char *)Buffer, v25, v27, v28);
      return 0LL;
    }
    v21 = a8;
    while ( 1 )
    {
      if ( *(_QWORD *)(v20 + 40) == a8 )
      {
        v47 = *(unsigned int *)(v20 + 32);
        if ( (int)v47 >= 0 || (*((_DWORD *)a6 + 194) & 1) != 0 )
          break;
      }
      v20 = *(_QWORD *)(v20 + 16);
      if ( (struct tagKL *)v20 == KbdLayoutListHead )
        goto LABEL_9;
    }
    if ( (v47 & 0x20000000) != 0 )
    {
      v48 = HMPheFromObject((_DWORD *)v20, v18, (int)KbdLayoutListHead);
      *(_BYTE *)(v48 + 25) &= ~1u;
      *(_DWORD *)(v20 + 32) &= ~0x20000000u;
      InputTraceLogging::Keyboard::LoadKeyboardLayoutW((struct tagKL *const)v20);
    }
    else if ( (a9 & 0x40000000) == 0 )
    {
      v17 = a9 & 0xFFFFFF7F;
    }
    v49 = 1;
LABEL_41:
    BugCheckParameter3 = *(_QWORD *)(v16 + 448);
    *(_QWORD *)(v16 + 448) = &BugCheckParameter3;
    v75 = v20;
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    v50 = v68;
    if ( v68 )
    {
      v64 = HKLtoPKL(v16, v68);
      if ( v64 )
      {
        v68 = *(_QWORD *)(v16 + 448);
        *(_QWORD *)(v16 + 448) = &v68;
        v69 = v64;
        _InterlockedIncrement((volatile signed __int32 *)(v64 + 8));
        xxxSetPKLinThreads((struct tagKL *)v20, (struct tagKL *)v64);
        xxxInternalUnloadKeyboardLayout(a1, (struct tagKL *)v64, 0x80000000);
        Win32HMThreadLockBase<tagKL,0,1>::ManualUnlock<void>((ULONG_PTR)&v68);
        Win32HMThreadLockBase<tagKL,0,1>::~Win32HMThreadLockBase<tagKL,0,1>((ULONG_PTR)&v68);
      }
    }
    if ( (v17 & 8) != 0 )
      ReorderKeyboardLayouts(a1, (struct tagKL *)v20);
    if ( !v49 )
      xxxWindowEvent(0x80000000, 0, 0, 0, 0);
    if ( (v17 & 0x80u) == 0 )
      ApiSetEditionNotifyShellLanguageHook(v16, 0LL, 0LL);
    if ( (v17 & 1) != 0 )
      xxxInternalActivateKeyboardLayout((__int64)a1, v20, v17, 0LL);
    if ( (v17 & 0x40000000) != 0 )
    {
      SetGlobalKeyboardTableInfo(v20);
      UserSessionState = W32GetUserSessionState(v52, v51, v53);
      v69 = v20;
      v68 = UserSessionState + 14264;
      HMAssignmentLock((__int64 **)&v68, 0, v55);
      xxxSetPKLinThreads((struct tagKL *)v20, 0LL);
    }
    if ( v17 < 0 && !*(_QWORD *)(W32GetUserSessionState(v47, v50, (_DWORD)KbdLayoutListHead) + 14264) )
      SetGlobalKeyboardTableInfo(v20);
    v56 = PtiCurrent(v47, v50);
    v57 = Win32HM_UnlockFromThread<0>((ULONG_PTR)v56, &BugCheckParameter3);
    v75 = 0LL;
    BugCheckParameter3 = -1LL;
    if ( v57 )
      return *(HKL *)(v57 + 40);
    return 0LL;
  }
  return *(HKL *)(v11 + 40);
}
