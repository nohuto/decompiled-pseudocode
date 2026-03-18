/*
 * XREFs of NtUserQueryDisplayConfig @ 0x1400FB0F0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     DrvQueryDisplayConfigAndLeaveUserCrit @ 0x14003D2F0 (DrvQueryDisplayConfigAndLeaveUserCrit.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DrvSampleDisplayState @ 0x14007EBD0 (DrvSampleDisplayState.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400D0658 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA?AV1@XZ @ 0x1400FB568 (-CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA-AV1@XZ.c)
 *     ??1MaybeEnterLeaveCritSharedOnly@@QEAA@XZ @ 0x1400FB674 (--1MaybeEnterLeaveCritSharedOnly@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400FB7B4 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1400FC0B4 (_QdcSdcTranslateStatusDefault.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserQueryDisplayConfig(unsigned int a1, __int64 a2, volatile void *a3, int *a4, _OWORD *Address)
{
  int v9; // r12d
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rcx
  ULONG_PTR v26; // r13
  struct tagTHREADINFO *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // edi
  struct tagTHREADINFO *BugCheckParameter4; // rax
  __int64 v32; // rax
  bool v34; // r14
  enum DISPLAYCONFIG_TOPOLOGY_ID *v35; // r9
  __int64 DxgkWin32kInterface; // rax
  unsigned int i; // ecx
  __int64 v38; // rax
  char v39[4]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int ULongFromUser; // [rsp+34h] [rbp-C4h] BYREF
  int v41; // [rsp+38h] [rbp-C0h] BYREF
  int v42; // [rsp+3Ch] [rbp-BCh]
  int v43; // [rsp+40h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+68h] [rbp-90h] BYREF
  void (__fastcall *v45)(char *, __int64, __int64, __int64); // [rsp+78h] [rbp-80h]
  ULONG_PTR v46; // [rsp+80h] [rbp-78h]
  __int128 v47; // [rsp+88h] [rbp-70h] BYREF
  __int64 v48; // [rsp+98h] [rbp-60h]
  int v49; // [rsp+A0h] [rbp-58h]
  __int128 v50; // [rsp+A8h] [rbp-50h]
  _BYTE v51[24]; // [rsp+B8h] [rbp-40h] BYREF

  v46 = 0LL;
  ULongFromUser = 0;
  v41 = -1;
  v50 = 0LL;
  v9 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(BugCheckParameter2);
  v39[0] = 1;
  EnterSharedCrit(1LL, 1LL, v10, v11);
  DISPLAYCONFIG_USER_SESSION_STATE::CreateWithUserCritHeld(v51);
  if ( !*(_DWORD *)(W32GetUserGdiSessionState() + 32) )
  {
    v30 = -1073741823;
    goto LABEL_19;
  }
  if ( (a1 & 0xFFFFFF88) != 0 || (v16 = a1 & 7, v16 != 1) && ((v16 - 2) & 0xFFFFFFFD) != 0 )
  {
    v30 = -1073741811;
    goto LABEL_19;
  }
  if ( !(unsigned int)UserIsWddmConnectedSession(v13, v12, v14, v15) )
  {
    v30 = -1073741790;
    goto LABEL_19;
  }
  if ( !v51[8] )
  {
    v30 = -1073741637;
    goto LABEL_19;
  }
  PtiCurrent(v18, v17);
  ULongFromUser = RtlReadULongFromUser(a2, v19);
  if ( !ULongFromUser )
  {
    v30 = -1073741811;
    v42 = -1073741811;
    goto LABEL_19;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v21, v20);
  ProbeForWrite(a3, 216LL * ULongFromUser, CurrentProcessWow64Process != 0 ? 1 : 4);
  v26 = Win32AllocPoolWithQuotaZInitImpl(v23, 216LL * ULongFromUser, 0x63447355u);
  v46 = v26;
  if ( !v26 )
    ExRaiseStatus(-1073741801);
  if ( v45 != (void (__fastcall *)(char *, __int64, __int64, __int64))-1LL )
  {
    BugCheckParameter4 = PtiCurrent(v25, v24);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, v26, (ULONG_PTR)BugCheckParameter4);
  }
  v27 = PtiCurrent(v25, v24);
  BugCheckParameter2[0] = *((_QWORD *)v27 + 47);
  *((_QWORD *)v27 + 47) = BugCheckParameter2;
  BugCheckParameter2[1] = v26;
  v45 = GreDeleteFastMutex;
  v29 = 4LL;
  v43 = a1 & 4;
  if ( (a1 & 4) != 0 )
  {
    ProbeForWrite(a4, 4uLL, 4u);
  }
  else if ( a4 )
  {
    v30 = -1073741811;
    v42 = -1073741811;
    goto LABEL_19;
  }
  if ( Address )
  {
    v32 = PsGetCurrentProcessWow64Process(v29, v28);
    ProbeForWrite(Address, 0x1CuLL, v32 != 0 ? 1 : 4);
  }
  v34 = 0;
  if ( v16 == 4 )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v29, v28);
    v34 = (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 536))() != 0;
  }
  if ( v34 )
    a1 = a1 & 0xEFFFFFF8 | 0x10000002;
  if ( Address )
  {
    DrvSampleDisplayState((__int64)&v47);
    v9 = v49;
    v50 = v47;
  }
  v39[0] = 0;
  v35 = (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v41;
  if ( v34 )
    v35 = 0LL;
  v30 = DrvQueryDisplayConfigAndLeaveUserCrit(a1, &ULongFromUser, (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v26, v35);
  if ( v30 >= 0 && v34 )
  {
    if ( ULongFromUser > 1 )
    {
      for ( i = 1; i < ULongFromUser; ++i )
      {
        v38 = 216LL * i;
        if ( *(_DWORD *)(v26 + 116) != *(_DWORD *)(v38 + v26 + 116) )
          break;
        if ( *(_DWORD *)(v26 + 120) != *(_DWORD *)(v38 + v26 + 120) )
          break;
      }
      v41 = i < ULongFromUser ? 4 : 2;
    }
    else
    {
      v41 = 1;
    }
  }
  if ( v30 != -1073741789 )
  {
    if ( v30 == -2147483643 )
      v30 = -1073741789;
    else
      v30 = QdcSdcTranslateStatusDefault((unsigned int)v30);
  }
  RtlCopyVolatileMemory((void *)a3, (const void *)v26, 216LL * ULongFromUser);
  RtlWriteULongToUser(a2, ULongFromUser);
  if ( v43 )
    *a4 = v41;
  if ( Address )
  {
    *Address = v50;
    *((_QWORD *)Address + 2) = v48;
    *((_DWORD *)Address + 6) = v9;
  }
LABEL_19:
  MaybeEnterLeaveCritSharedOnly::~MaybeEnterLeaveCritSharedOnly((MaybeEnterLeaveCritSharedOnly *)v39);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  return (unsigned int)v30;
}
