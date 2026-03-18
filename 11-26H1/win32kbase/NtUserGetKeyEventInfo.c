/*
 * XREFs of NtUserGetKeyEventInfo @ 0x1401E45E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     _GetKeyNameText @ 0x140087F70 (_GetKeyNameText.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400D0658 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     xxxToUnicodeEx @ 0x1400E74C0 (xxxToUnicodeEx.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x1400FA870 (-UnlockWorker@-$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1-Win32FreePool@@YAXP.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400FB7B4 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     _GetKeyboardType @ 0x140158DD4 (_GetKeyboardType.c)
 *     _GetKeyboardState @ 0x1401BD130 (_GetKeyboardState.c)
 *     Feature_766733627__private_IsEnabledDeviceUsageNoInline @ 0x1401E02D8 (Feature_766733627__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall NtUserGetKeyEventInfo(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int16 a5,
        __int64 a6,
        int a7,
        volatile void *a8,
        int a9,
        volatile void *a10,
        char *Address,
        unsigned int *a12,
        _QWORD *a13)
{
  char v13; // si
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // ecx
  __int64 *p_Src; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v22; // rax
  unsigned int v23; // ebx
  int v24; // edx
  int v25; // r8d
  int KeyboardType; // r14d
  int v27; // edx
  int v28; // r8d
  unsigned int v29; // r14d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  struct tagTHREADINFO *v39; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v40; // [rsp+80h] [rbp-88h]
  volatile void *v41; // [rsp+88h] [rbp-80h]
  volatile void *v42; // [rsp+90h] [rbp-78h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+98h] [rbp-70h] BYREF
  void (__fastcall *v44)(char *, __int64, __int64, __int64); // [rsp+A8h] [rbp-60h]
  __int64 v45; // [rsp+B0h] [rbp-58h]
  char *v46; // [rsp+B8h] [rbp-50h]
  __int64 Src; // [rsp+C0h] [rbp-48h] BYREF

  v45 = a6;
  v42 = a8;
  v41 = a10;
  v46 = Address;
  Src = 0LL;
  v40 = 0LL;
  v13 = 0;
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  EnterLeaveCritShared::EnterLeaveCritShared(&v39);
  v39 = PtiCurrent(v15, v14);
  if ( a7 > 0 && a9 > 0 && a12 && a13 )
  {
    ProbeForWrite(Address, 0x100uLL, 1u);
    GetKeyboardState((__int64)Address, v16);
    ProbeForWrite(v42, 2LL * a7, 2u);
    if ( (unsigned __int64)a9 > 0x7FFFFFFFFFFFFFFFLL )
      ExRaiseAccessViolation();
    ProbeForWrite(v41, 2LL * a9, 2u);
    if ( (unsigned __int64)a7 >= 4 )
    {
      p_Src = (__int64 *)Win32AllocPoolWithQuotaZInitImpl(v17, 2LL * a7, 0x62757355u);
      v40 = p_Src;
      if ( !p_Src )
        ExRaiseStatus(-1073741801);
      v13 = 1;
      if ( v44 != (void (__fastcall *)(char *, __int64, __int64, __int64))-1LL )
      {
        BugCheckParameter4 = PtiCurrent(v20, v19);
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)p_Src, (ULONG_PTR)BugCheckParameter4);
      }
      v22 = PtiCurrent(v20, v19);
      BugCheckParameter2[0] = *((_QWORD *)v22 + 47);
      *((_QWORD *)v22 + 47) = BugCheckParameter2;
      BugCheckParameter2[1] = (ULONG_PTR)p_Src;
      v44 = GreDeleteFastMutex;
    }
    else
    {
      p_Src = &Src;
      v40 = &Src;
    }
    if ( (unsigned int)Feature_766733627__private_IsEnabledDeviceUsageNoInline() )
    {
      ProbeForWrite(a12, 4uLL, 4u);
      ProbeForWrite(a13, 8uLL, 8u);
    }
    v23 = xxxToUnicodeEx(a1, a2, v46, (__int64)p_Src, a7, a5, a4, v45);
    GetKeyNameText(a3, v41, a9);
    KeyboardType = GetKeyboardType(2147483646, v24, v25);
    v29 = ((unsigned int)GetKeyboardType(0x7FFFFFFF, v27, v28) << 16) | KeyboardType;
    if ( !(unsigned int)Feature_766733627__private_IsEnabledDeviceUsageNoInline() )
    {
      *a12 = v29;
      *a13 = *(unsigned int *)(*((_QWORD *)v39 + 58) + 448LL);
    }
    if ( (unsigned int)Feature_766733627__private_IsEnabledDeviceUsageNoInline() )
    {
      *a12 = v29;
      *a13 = *(unsigned int *)(*((_QWORD *)v39 + 58) + 448LL);
    }
    memmove((void *)v42, p_Src, 2LL * a7);
    if ( v13 )
      Win32RawLockedItemBase<DISPLAYCONFIG_DEVICE_INFO_HEADER,&void Win32FreePool(void *),1,1,1>::UnlockWorker(
        (ULONG_PTR)BugCheckParameter2,
        0LL);
  }
  else
  {
    v23 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v31, v30, v32, v33);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  return v23;
}
