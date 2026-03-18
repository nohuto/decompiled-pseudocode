/*
 * XREFs of ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011CA28
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x14011C890 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     HMAllocObjectEx @ 0x14003E880 (HMAllocObjectEx.c)
 *     _HMPheFromObject @ 0x14003F320 (_HMPheFromObject.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ @ 0x14009EA20 (--1-$Win32HMThreadLockBase@UtagMONITOR@@$0A@$00@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagKL@@$0A@$00@@QEAAPEAUtagKL@@XZ @ 0x14009EC84 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagKL@@$0A@$00@@QEAAPEAUtagKL@@XZ.c)
 *     HKLtoPKL @ 0x14009F540 (HKLtoPKL.c)
 *     xxxInternalActivateKeyboardLayout @ 0x14009F5D0 (xxxInternalActivateKeyboardLayout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1400F3E98 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     SetGlobalKeyboardTableInfo @ 0x1400F4394 (SetGlobalKeyboardTableInfo.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1400F44B8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     HMAssignmentLock @ 0x1400F4780 (HMAssignmentLock.c)
 *     DestroyKF @ 0x1400F6304 (DestroyKF.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x14010D3A8 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     ?GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z @ 0x140110498 (-GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14011DBB8 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     xxxWindowEvent @ 0x1401455A4 (xxxWindowEvent.c)
 *     xxxFreeKeyboardLayouts @ 0x14014C3BC (xxxFreeKeyboardLayouts.c)
 *     EditionResetIMELayout @ 0x140155494 (EditionResetIMELayout.c)
 *     ?LoadKeyboardLayoutW@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z @ 0x140156C60 (-LoadKeyboardLayoutW@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@@Z.c)
 *     IsEditionResetIMELayoutSupported @ 0x14015D5DC (IsEditionResetIMELayoutSupported.c)
 *     ApiSetEditionFreeIMEKeyboardLayouts @ 0x140195308 (ApiSetEditionFreeIMEKeyboardLayouts.c)
 *     ApiSetEditionInitSystemCharsetInfoForLayout @ 0x140195984 (ApiSetEditionInitSystemCharsetInfoForLayout.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x140196168 (ApiSetEditionNotifyShellLanguageHook.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x140212CFC (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x140212EE0 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        wchar_t *a6,
        const unsigned __int16 *a7,
        signed int a8,
        unsigned int a9)
{
  __int64 v11; // rbx
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r12
  int v17; // esi
  HANDLE v18; // rbx
  __int64 v19; // rdx
  struct tagKL *KbdLayoutListHead; // r8
  __int64 v21; // rdi
  unsigned int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rax
  char v25; // r15
  int inited; // r13d
  const unsigned __int16 *v27; // r9
  struct tagKBDFILE *KeyboardLayoutFile; // rbx
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // ebx
  unsigned int v32; // r13d
  struct tagKBDFILE *v33; // rax
  __int64 v34; // rcx
  const WCHAR *v35; // rdx
  const WCHAR *v36; // rax
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  __int64 v40; // rdx
  struct tagKL *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 UserSessionState; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rbx
  int v50; // [rsp+44h] [rbp-ADh]
  PVOID Buffer; // [rsp+58h] [rbp-99h] BYREF
  __int64 v53[2]; // [rsp+60h] [rbp-91h] BYREF
  PCWSTR SourceString[2]; // [rsp+70h] [rbp-81h] BYREF
  _QWORD v55[2]; // [rsp+80h] [rbp-71h] BYREF
  __int64 v56; // [rsp+90h] [rbp-61h] BYREF
  __int64 v57; // [rsp+98h] [rbp-59h]
  void *v58[2]; // [rsp+A0h] [rbp-51h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-41h] BYREF
  __int128 v60; // [rsp+C0h] [rbp-31h] BYREF
  __int128 v61; // [rsp+D0h] [rbp-21h]

  v11 = 0LL;
  SourceString[0] = a7;
  v53[0] = a3;
  v58[0] = a2;
  Buffer = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  DestinationString = 0LL;
  if ( !a8 || a1 && (*((_DWORD *)a1 + 16) & 4) != 0 )
    return 0LL;
  v12 = PtiCurrent();
  v15 = (__int64)v12;
  if ( a3 )
  {
    v11 = HKLtoPKL((__int64)v12, a3);
    if ( !v11 )
      return 0LL;
  }
  if ( a8 == (_DWORD)a3 )
    return *(_QWORD *)(v11 + 40);
  v17 = a9;
  if ( (a9 & 0x40000000) != 0 )
  {
    v18 = *(HANDLE *)(W32GetUserSessionState(v14, v13) + 63544);
    if ( PsGetThreadProcessId(*(PETHREAD *)v15) != v18 )
    {
      UserSetLastError(1004);
      return 0LL;
    }
    if ( !a1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2056LL);
    ApiSetEditionFreeIMEKeyboardLayouts(a1);
    xxxFreeKeyboardLayouts(a1);
  }
  KbdLayoutListHead = GetKbdLayoutListHead(a1, v13);
  v21 = (__int64)KbdLayoutListHead;
  if ( !KbdLayoutListHead )
  {
    v22 = a8;
LABEL_27:
    if ( (int)IsEditionResetIMELayoutSupported() >= 0 && !(unsigned int)EditionResetIMELayout(v22, a9, &Buffer) )
      return 0LL;
    inited = ApiSetEditionInitSystemCharsetInfoForLayout(SourceString[0], &v60);
    v50 = inited;
    KeyboardLayoutFile = LoadKeyboardLayoutFile(v58[0], a4, a5, v27, a6 + 290, 0, 0);
    if ( KeyboardLayoutFile )
    {
      v21 = HMAllocObjectEx(0LL, 0LL, 0xDu, 0xA0u, 0);
      if ( v21 )
      {
        v58[1] = KeyboardLayoutFile;
        v58[0] = (void *)(v21 + 56);
        HMAssignmentLock((__int64)v58, 1LL);
        if ( *(_DWORD *)a6 )
        {
          v30 = Win32AllocPoolZInitImpl(256LL, 8LL * *(unsigned int *)a6, 0x746B7355u);
          *(_QWORD *)(v21 + 96) = v30;
          if ( v30 )
          {
            v31 = 0;
            v32 = 0;
            if ( *(_DWORD *)a6 )
            {
              do
              {
                if ( *(_QWORD *)&a6[8 * v31 + 324] )
                {
                  a6[36 * v31 + 33] = 0;
                  v33 = LoadKeyboardLayoutFile(
                          *(void **)&a6[8 * v31 + 324],
                          *(unsigned int *)&a6[8 * v31 + 328],
                          *(_DWORD *)&a6[8 * v31 + 330],
                          (const unsigned __int16 *)(2LL * v31),
                          &a6[36 * v31 + 2],
                          *(_DWORD *)&a6[36 * v31 + 34],
                          *(_DWORD *)&a6[36 * v31 + 36]);
                  if ( !v33 )
                    break;
                  v34 = *(_QWORD *)(v21 + 96);
                  v57 = (__int64)v33;
                  v56 = v34 + 8LL * v32;
                  HMAssignmentLock((__int64)&v56, 0LL);
                  ++v32;
                }
                ++v31;
              }
              while ( v31 < *(_DWORD *)a6 );
              v17 = a9;
            }
            *(_DWORD *)(v21 + 88) = v32;
            inited = v50;
          }
        }
        v35 = SourceString[0];
        *(_DWORD *)(v21 + 32) = 0;
        *(_WORD *)(v21 + 74) = 0;
        *(_QWORD *)(v21 + 40) = a8;
        *(_QWORD *)(v21 + 16) = v21;
        *(_QWORD *)(v21 + 24) = v21;
        RtlInitUnicodeString(&DestinationString, v35);
        RtlUnicodeStringToInteger(&DestinationString, 0x10u, (PULONG)(v21 + 112));
        if ( (*((_DWORD *)a6 + 194) & 1) != 0 )
          *(_DWORD *)(v21 + 32) |= 0x80000000;
        v36 = *(const WCHAR **)(v21 + 56);
        SourceString[0] = (PCWSTR)(v21 + 48);
        SourceString[1] = v36;
        HMAssignmentLock((__int64)SourceString, 1LL);
        v37 = *(_QWORD *)(v21 + 48);
        v38 = *((_DWORD *)a6 + 195);
        if ( !v38 )
          v38 = *(_DWORD *)(*(_QWORD *)(v37 + 32) + 96LL);
        *(_DWORD *)(v21 + 104) = v38;
        v39 = *((_DWORD *)a6 + 196);
        if ( !v39 )
          v39 = *(_DWORD *)(*(_QWORD *)(v37 + 32) + 100LL);
        *(_DWORD *)(v21 + 108) = v39;
        *(_DWORD *)(v21 + 116) = *((_DWORD *)a6 + 195);
        *(_DWORD *)(v21 + 120) = *((_DWORD *)a6 + 196);
        *(_DWORD *)(*(_QWORD *)(v37 + 32) + 80LL) |= ((unsigned int)v17 >> 15) & 7;
        *(_QWORD *)(v21 + 80) = Buffer;
        if ( inited )
        {
          *(_WORD *)(v21 + 72) = WORD2(v60);
          *(_DWORD *)(v21 + 64) = HIDWORD(v61);
          *(_DWORD *)(v21 + 68) = v60;
        }
        else
        {
          *(_WORD *)(v21 + 72) = 0;
          *(_QWORD *)(v21 + 64) = 1LL;
        }
        RtlStringCchCopyNW(
          (unsigned __int16 *)(v21 + 124),
          0x10uLL,
          (const unsigned __int16 *)(*(_QWORD *)(v15 + 464) + 976LL),
          0x10uLL);
        v41 = GetKbdLayoutListHead(a1, v40);
        if ( v41 )
        {
          *(_QWORD *)(v21 + 16) = v41;
          *(_QWORD *)(v21 + 24) = *((_QWORD *)v41 + 3);
          *(_QWORD *)(*((_QWORD *)v41 + 3) + 16LL) = v21;
          *((_QWORD *)v41 + 3) = v21;
        }
        else
        {
          LockKbdLayoutListHead(a1, (struct tagKL *)v21);
        }
        InputTraceLogging::Keyboard::LoadKeyboardLayoutW((struct tagKL *const)v21);
        v25 = 0;
        goto LABEL_57;
      }
      DestroyKF(KeyboardLayoutFile, v29);
    }
    if ( Buffer )
      GreDeleteFastMutex((char *)Buffer);
    return 0LL;
  }
  v22 = a8;
  while ( 1 )
  {
    if ( *(_QWORD *)(v21 + 40) == a8 )
    {
      v23 = *(unsigned int *)(v21 + 32);
      if ( (int)v23 >= 0 || (*((_DWORD *)a6 + 194) & 1) != 0 )
        break;
    }
    v21 = *(_QWORD *)(v21 + 16);
    if ( (struct tagKL *)v21 == KbdLayoutListHead )
      goto LABEL_27;
  }
  if ( (v23 & 0x20000000) != 0 )
  {
    v24 = HMPheFromObject((int *)v21, v19);
    *(_BYTE *)(v24 + 25) &= ~1u;
    *(_DWORD *)(v21 + 32) &= ~0x20000000u;
    InputTraceLogging::Keyboard::LoadKeyboardLayoutW((struct tagKL *const)v21);
  }
  else if ( (a9 & 0x40000000) == 0 )
  {
    v17 = a9 & 0xFFFFFF7F;
  }
  v25 = 1;
LABEL_57:
  v55[0] = *(_QWORD *)(v15 + 456);
  *(_QWORD *)(v15 + 456) = v55;
  v55[1] = v21;
  _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
  v42 = v53[0];
  if ( v53[0] )
  {
    v43 = HKLtoPKL(v15, v53[0]);
    if ( v43 )
    {
      v53[0] = *(_QWORD *)(v15 + 456);
      *(_QWORD *)(v15 + 456) = v53;
      v53[1] = v43;
      _InterlockedIncrement((volatile signed __int32 *)(v43 + 8));
      xxxSetPKLinThreads((struct tagKL *)v21, (struct tagKL *)v43);
      xxxInternalUnloadKeyboardLayout(a1, (struct tagKL *)v43, 0x80000000);
      Win32HMThreadLockBase<tagKL,0,1>::ManualUnlock<void>(v53);
      Win32HMThreadLockBase<tagMONITOR,0,1>::~Win32HMThreadLockBase<tagMONITOR,0,1>(v53);
    }
  }
  if ( (v17 & 8) != 0 )
    ReorderKeyboardLayouts(a1, (struct tagKL *)v21);
  if ( !v25 )
    xxxWindowEvent(0x80000000, 0, 0, 0, 0);
  if ( (v17 & 0x80u) == 0 )
    ApiSetEditionNotifyShellLanguageHook(v15, 0LL, 0LL);
  if ( (v17 & 1) != 0 )
    xxxInternalActivateKeyboardLayout((__int64)a1, v21, v17, 0LL);
  if ( (v17 & 0x40000000) != 0 )
  {
    SetGlobalKeyboardTableInfo(v21, v42);
    UserSessionState = W32GetUserSessionState(v45, v44);
    v57 = v21;
    v56 = UserSessionState + 14272;
    HMAssignmentLock((__int64)&v56, 0LL);
    xxxSetPKLinThreads((struct tagKL *)v21, 0LL);
  }
  if ( v17 < 0 && !*(_QWORD *)(W32GetUserSessionState(v23, v42) + 14272) )
    SetGlobalKeyboardTableInfo(v21, v47);
  v48 = Win32HMThreadLockBase<tagKL,0,1>::ManualUnlock<void>(v55);
  if ( !v48 )
  {
    Win32HMThreadLockBase<tagMONITOR,0,1>::~Win32HMThreadLockBase<tagMONITOR,0,1>(v55);
    return 0LL;
  }
  v49 = *(_QWORD *)(v48 + 40);
  Win32HMThreadLockBase<tagMONITOR,0,1>::~Win32HMThreadLockBase<tagMONITOR,0,1>(v55);
  return v49;
}
