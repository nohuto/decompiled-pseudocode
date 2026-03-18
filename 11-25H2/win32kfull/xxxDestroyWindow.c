/*
 * XREFs of xxxDestroyWindow @ 0x14017EBE0
 * Callers:
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14002CC5C (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxMNCloseHierarchy @ 0x14003CF70 (xxxMNCloseHierarchy.c)
 *     xxxMNCancel @ 0x14003D33C (xxxMNCancel.c)
 *     xxxDW_DestroyOwnedWindows @ 0x14004E938 (xxxDW_DestroyOwnedWindows.c)
 *     xxxAddShadow @ 0x1400E0A5C (xxxAddShadow.c)
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     xxxDestroyThreadDDEObject @ 0x14017D9E0 (xxxDestroyThreadDDEObject.c)
 *     xxxCsDdeInitialize @ 0x14017DC44 (xxxCsDdeInitialize.c)
 *     ?xxxDW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14017E740 (-xxxDW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxRemoveShadow @ 0x14017EAD0 (xxxRemoveShadow.c)
 *     NtUserDestroyWindow @ 0x14017EB80 (NtUserDestroyWindow.c)
 *     ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x140204B24 (-UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x140222B10 (-xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1402B5EDC (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxEndMenu @ 0x1402E9D60 (xxxEndMenu.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDW_DestroyOwnedWindows @ 0x14004E938 (xxxDW_DestroyOwnedWindows.c)
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140058924 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 *     ?xxxDW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14017E740 (-xxxDW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140187B78 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ??_4INTERLOCKEDTIFLAGS@@QEAAXW4_TIFLAGS@@@Z @ 0x1401AF388 (--_4INTERLOCKEDTIFLAGS@@QEAAXW4_TIFLAGS@@@Z.c)
 *     ??S@YA?AW4_TIFLAGS@@W40@@Z @ 0x140209FA0 (--S@YA-AW4_TIFLAGS@@W40@@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256E34 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z @ 0x140257214 (-xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z.c)
 *     ?xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x1402B5DE8 (-xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledDeviceUsageNoInline @ 0x1402B6158 (Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxDestroyWindow(struct tagWND *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  unsigned int v4; // ebx
  struct tagTHREADINFO *v5; // rsi
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int v11; // eax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-10h] BYREF
  bool v13; // [rsp+58h] [rbp+28h] BYREF
  int v14; // [rsp+60h] [rbp+30h] BYREF

  v3 = PtiCurrent((__int64)a1, a2);
  v4 = 0;
  v14 = 0;
  v13 = 0;
  v5 = v3;
  Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v3, (__int64)a1);
  if ( (unsigned int)xxxDestroyWindow_Prologue(a1, v5, &v14, &v13) )
  {
    xxxDestroyWindow_Phase1(a1, v5, v14);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
      xxxDW_DestroyOwnedWindows((__int64)a1, v9);
    xxxDestroyWindow_Phase2(a1, v5, v14);
    if ( !(unsigned int)Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledDeviceUsageNoInline() )
      xxxDW_DestroyIMEWindowIfRequired(a1, v5, v14);
    xxxDestroyWindow_Phase3(a1, v5, v14);
    xxxFreeWindow(v5, a1);
    if ( v14 && v13 )
    {
      v11 = operator~(0x10000000LL);
      INTERLOCKEDTIFLAGS::operator&=((char *)v5 + 528, v11);
    }
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v10);
    return 1LL;
  }
  else
  {
    if ( v14 )
    {
      if ( v13 )
      {
        v6 = operator~(0x10000000LL);
        INTERLOCKEDTIFLAGS::operator&=((char *)v5 + 528, v6);
      }
    }
    LOBYTE(v4) = Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>((ULONG_PTR)BugCheckParameter3) == 0;
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v7);
    return v4;
  }
}
