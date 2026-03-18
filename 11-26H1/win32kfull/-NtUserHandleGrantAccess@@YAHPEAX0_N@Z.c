/*
 * XREFs of ?NtUserHandleGrantAccess@@YAHPEAX0_N@Z @ 0x1402ADF68
 * Callers:
 *     NtUserUserHandleGrantAccess @ 0x1402C0C90 (NtUserUserHandleGrantAccess.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14018CD00 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserHandleGrantAccess(void *a1, __int64 a2, char a3)
{
  unsigned int v4; // ebx
  char v6; // di
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  PVOID v9; // rbp
  bool v10; // si
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v15; // rdx
  __int64 v16; // rdx
  bool v17; // si
  int v18; // edx
  int v19; // r8d
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned int JobIdentity; // eax
  void *v23; // r8
  bool v24; // r9
  __int64 v25; // rcx
  __int16 v26; // [rsp+30h] [rbp-38h]
  _BYTE v27[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v28; // [rsp+48h] [rbp-20h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v6 = 1;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 2u, (POBJECT_TYPE)PsJobType, 1, &Object, 0LL);
  v9 = Object;
  if ( v7 >= 0 )
  {
    EnterCrit(0LL, 0LL);
    v27[0] = 0;
    v28 = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v27, v15);
    if ( (PsGetJobUIRestrictionsClass(v9) & 1) != 0 )
    {
      if ( HMValidateHandleWithDescriptor(a2, 0xFFu) )
      {
        JobIdentity = KfGetJobIdentity(v9);
        LOBYTE(v23) = a3;
        LOBYTE(v4) = Win32JobObject::GrantAccessHandle((Win32JobObject *)JobIdentity, a2, v23, v24);
        goto LABEL_29;
      }
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v6 = 0;
      }
      v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v6 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
LABEL_19:
        UserSetLastError(87);
LABEL_29:
        ObfDereferenceObject(v9);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v27);
        UserSessionSwitchLeaveCrit(v25);
        return v4;
      }
      v20 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v21) + 69152);
      v26 = 20;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v6 = 0;
      }
      v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v6 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      v20 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v16) + 69152);
      v26 = 19;
    }
    LOBYTE(v19) = v17;
    LOBYTE(v18) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v19,
      v20,
      3,
      3,
      v26,
      (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
    goto LABEL_19;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
  {
    v6 = 0;
  }
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69152),
      3,
      3,
      18,
      (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
  }
  UserSetLastError(87);
  return 0LL;
}
