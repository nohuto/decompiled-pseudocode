/*
 * XREFs of NtUserSwitchDesktop @ 0x14024F070
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14002C0F0 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSwitchDesktopWithFade @ 0x1401FCFD0 (xxxSwitchDesktopWithFade.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x140275B0C (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1402832A8 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

_BOOL8 __fastcall NtUserSwitchDesktop(__int64 a1, unsigned int a2, int a3)
{
  BOOL v5; // edi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  _QWORD v21[7]; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0;
  Object = 0LL;
  v7 = EnterCrit(0LL, 0LL);
  PtiCurrent(v9, v8);
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    v12 = !tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v7 + 464), 0x40u);
  }
  else
  {
    v15 = PtiCurrent(v11, v10);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v15 + 132, 0, 0) & 0x20000000) == 0 )
      goto LABEL_7;
    v12 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent((__int64)v15, v13) + 58) + 752LL) + 24LL) & 0x40) == 0;
  }
  if ( !v12 )
  {
LABEL_4:
    UserSetLastError(5);
    goto LABEL_15;
  }
LABEL_7:
  LOBYTE(v13) = 1;
  if ( (int)ValidateHdesk(a1, v13, 256LL, &Object) < 0 )
    goto LABEL_15;
  if ( (*(_DWORD *)(*((_QWORD *)Object + 5) + 64LL) & 4) != 0 )
  {
    ObfDereferenceObject(Object);
    goto LABEL_4;
  }
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v21, Object);
  ObfDereferenceObject(Object);
  v17 = *((_QWORD *)Object + 5);
  if ( a2 )
    v18 = xxxSwitchDesktopWithFade(v17, (__int64)Object, v16, a2, a3);
  else
    v18 = xxxSwitchDesktop(v17, (__int64)Object, 0, a3);
  v5 = v18 >= 0;
  if ( v21[2] != -1LL )
    PopAndFreeW32ThreadLock((__int64)v21, v19);
LABEL_15:
  UserSessionSwitchLeaveCrit(v14);
  return v5;
}
