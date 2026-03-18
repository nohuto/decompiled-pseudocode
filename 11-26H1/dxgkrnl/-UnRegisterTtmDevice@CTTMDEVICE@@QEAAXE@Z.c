/*
 * XREFs of ?UnRegisterTtmDevice@CTTMDEVICE@@QEAAXE@Z @ 0x1402047D0
 * Callers:
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x140409050 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x140410870 (-DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1400589B4 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x140059690 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

void __fastcall CTTMDEVICE::UnRegisterTtmDevice(CTTMDEVICE *this, char a2)
{
  __int64 v4; // r8
  struct _KEVENT *p_Event; // rax
  __int64 v6; // rdx
  CTTMDEVICE **v7; // r8
  CTTMDEVICE **v8; // rax
  struct _KEVENT Event; // [rsp+50h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-60h] BYREF
  char v11; // [rsp+98h] [rbp-30h]

  memset(&Event, 0, sizeof(Event));
  if ( *(struct _KTHREAD **)(*((_QWORD *)DXGGLOBAL::GetGlobal() + 123) + 344LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6520;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGGLOBAL::GetGlobal()->GetSessionMgr()->IsTtmDeviceListLockOwner()",
      6520LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_BYTE *)this + 913) )
  {
    if ( a2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6527;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_DeleteOnStop || !Wait", 6527LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_BYTE *)this + 913) && *(CTTMDEVICE **)this != this )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6533;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!m_DeleteOnStop || IsListEmpty(&m_ListSessionMan)",
        6533LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( !*((_QWORD *)this + 8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6542;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pOwnerAdapter != NULL", 6542LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 156, 1u) & 0x1F;
  *((_DWORD *)this + 2 * v4 + 157) = 1073741825;
  *((_DWORD *)this + 2 * v4 + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)this + 6);
  if ( *((_QWORD *)this + 7) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6562;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pWaitEvent == NULL", 6562LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a2 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    p_Event = &Event;
  }
  else
  {
    p_Event = 0LL;
  }
  *((_QWORD *)this + 7) = p_Event;
  v6 = *((_QWORD *)this + 4);
  v11 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(v6 + 18656));
  *((_QWORD *)this + 4) = 0LL;
  v7 = (CTTMDEVICE **)*((_QWORD *)this + 2);
  if ( v7[1] != (CTTMDEVICE *)((char *)this + 16)
    || (v8 = (CTTMDEVICE **)*((_QWORD *)this + 3), *v8 != (CTTMDEVICE *)((char *)this + 16)) )
  {
    __fastfail(3u);
  }
  *v8 = (CTTMDEVICE *)v7;
  v7[1] = (CTTMDEVICE *)v8;
  TtmNotifyDeviceDeparture(1LL, this);
  CPROCESSATTACHHELPER::Detach(&ApcState);
  if ( a2 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  CPROCESSATTACHHELPER::Detach(&ApcState);
}
