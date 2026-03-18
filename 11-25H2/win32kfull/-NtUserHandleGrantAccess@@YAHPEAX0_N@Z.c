/*
 * XREFs of ?NtUserHandleGrantAccess@@YAHPEAX0_N@Z @ 0x14029314C
 * Callers:
 *     NtUserUserHandleGrantAccess @ 0x14024F3E0 (NtUserUserHandleGrantAccess.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

_BOOL8 __fastcall NtUserHandleGrantAccess(HANDLE Handle, struct _EJOB *a2, char a3)
{
  BOOL v6; // edi
  __int64 v7; // rdx
  char v8; // si
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  Win32JobObject *v11; // rbp
  bool v12; // bl
  int v13; // edx
  int v14; // r8d
  __int64 v15; // r9
  __int64 v16; // rdx
  void *v17; // r8
  bool v18; // r9
  __int64 v19; // rcx
  __int16 v21; // [rsp+30h] [rbp-38h]
  _BYTE v22[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v23; // [rsp+48h] [rbp-20h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  v6 = 0;
  v22[0] = 0;
  v23 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v22, v7);
  v8 = 1;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)PsJobType, 1, &Object, 0LL);
  v11 = (Win32JobObject *)Object;
  if ( v9 < 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v8 = 0;
    }
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    v15 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10) + 69160);
    v21 = 18;
    goto LABEL_9;
  }
  if ( !(unsigned int)PsGetJobUIRestrictionsClass(Object) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v8 = 0;
    }
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    v15 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16) + 69160);
    v21 = 19;
LABEL_9:
    LOBYTE(v14) = v12;
    LOBYTE(v13) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v14,
      v15,
      3,
      3,
      v21,
      (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
    goto LABEL_10;
  }
  LOBYTE(v16) = -1;
  if ( HMValidateHandleWithDescriptor((__int64)a2, v16) )
  {
    LOBYTE(v17) = a3;
    v6 = Win32JobObject::GrantAccessHandle(v11, a2, v17, v18);
    goto LABEL_22;
  }
  UserSetLastError(87);
LABEL_10:
  UserSetLastError(87);
LABEL_22:
  ObfDereferenceObject(v11);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v22);
  UserSessionSwitchLeaveCrit(v19);
  return v6;
}
