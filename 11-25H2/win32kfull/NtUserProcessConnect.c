/*
 * XREFs of NtUserProcessConnect @ 0x1400D8E60
 * Callers:
 *     <none>
 * Callees:
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1400D949C (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

NTSTATUS __fastcall NtUserProcessConnect(void *a1, unsigned int a2, volatile void *a3)
{
  __int64 v4; // rdx
  char v5; // bl
  char v6; // r14
  bool v7; // di
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rbx
  __int64 (*v12)(void); // rax
  int v13; // eax
  int v14; // ebx
  __int64 (*v15)(void); // rax
  NTSTATUS result; // eax
  PVOID v17; // rdi
  int inited; // ebx
  __int64 v19; // rcx
  __int64 v20; // rdx
  bool v21; // di
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  signed __int64 v25; // rsi
  signed __int32 v26[8]; // [rsp+0h] [rbp-3A8h] BYREF
  char v27; // [rsp+40h] [rbp-368h]
  unsigned int v28; // [rsp+48h] [rbp-360h]
  HANDLE Handle; // [rsp+50h] [rbp-358h]
  unsigned __int64 v30; // [rsp+58h] [rbp-350h]
  volatile void *v31; // [rsp+60h] [rbp-348h]
  __int64 ProcessPeb; // [rsp+68h] [rbp-340h]
  volatile void *Address; // [rsp+70h] [rbp-338h]
  PVOID Object; // [rsp+78h] [rbp-330h] BYREF
  SIZE_T Length; // [rsp+80h] [rbp-328h]
  __int128 v36; // [rsp+98h] [rbp-310h]
  int Src; // [rsp+E0h] [rbp-2C8h] BYREF
  _BYTE v38[584]; // [rsp+E8h] [rbp-2C0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+330h] [rbp-78h] BYREF

  Handle = a1;
  v28 = a2;
  Address = a3;
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(&Src, 0, 0x248uLL);
  v31 = 0LL;
  ProcessPeb = 0LL;
  Length = a2 + 8;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v5 = 0;
    v6 = 1;
  }
  else
  {
    v6 = 1;
    v5 = 1;
  }
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      3,
      16,
      (__int64)&WPP_9b0ffd12fc44339632c358433cbe781e_Traceguids);
  }
  if ( a2 > 0x248 )
    return -1073741823;
  v11 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
  if ( v11 != PsGetCurrentProcess() )
    return -1073741823;
  v12 = **(__int64 (***)(void))(W32GetWin32kFullApiSetTable()
                              + 24LL * ext_ms_win_moderncore_win32k_base_sysentry_l1_ApiSetTableIndex);
  if ( v12 )
    v13 = v12();
  else
    v13 = -1073741637;
  if ( v13 < 0 )
    return -1073741637;
  ProbeForWrite(Address, Length, 4u);
  v14 = *(_DWORD *)Address;
  Src = *(_DWORD *)Address;
  v15 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kFullApiSetTable()
                                        + 24LL * ext_ms_win_moderncore_win32k_base_sysentry_l1_ApiSetTableIndex)
                            + 8LL);
  if ( v15 )
    LODWORD(v15) = v15();
  if ( v14 != (_DWORD)v15 )
    return -1073741811;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v17 = Object;
  Handle = Object;
  if ( result >= 0 )
  {
    if ( v17 == (PVOID)PsGetCurrentProcess()
      || !(unsigned int)PsIsProtectedProcess(v17)
      || (unsigned int)PsIsProtectedProcessLight(v17) )
    {
      v27 = 0;
    }
    else
    {
      v30 = 0LL;
      v36 = 0LL;
      inited = PsAcquireProcessExitSynchronization(v17);
      if ( inited < 0 )
      {
LABEL_22:
        ObfDereferenceObject(v17);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
        {
          v6 = 0;
        }
        v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v22 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20);
          LOBYTE(v23) = v21;
          LOBYTE(v24) = v6;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v24,
            v23,
            *(_QWORD *)(v22 + 69160),
            4,
            3,
            17,
            (__int64)&WPP_9b0ffd12fc44339632c358433cbe781e_Traceguids);
        }
        return inited;
      }
      v27 = 1;
      ProcessPeb = PsGetProcessPeb(v17);
      KeStackAttachProcess((PRKPROCESS)v17, &ApcState);
      _m_prefetchw((const void *)(ProcessPeb + 88));
      v25 = _InterlockedAnd64((volatile signed __int64 *)(ProcessPeb + 88), 0xFFFFFFFFFFFFFFFEuLL);
      v30 = v25;
      if ( (v25 & 1) == 0 )
      {
        inited = -1073741823;
        goto LABEL_20;
      }
      v30 = v25 & 0xFFFFFFFFFFFFFFFEuLL;
      ProbeForRead((volatile void *)(v25 & 0xFFFFFFFFFFFFFFFEuLL), 0x10uLL, 4u);
      v36 = *(_OWORD *)(v25 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (_DWORD)v36 != a2 )
      {
        inited = -1073741823;
        goto LABEL_20;
      }
      v31 = (volatile void *)*((_QWORD *)&v36 + 1);
      ProbeForWrite(*((volatile void **)&v36 + 1), a2, 4u);
    }
    EnterCrit(1LL, 0LL);
    inited = InitMapSharedSection((struct _EPROCESS *)v17, (struct _USERCONNECT *)&Src);
    UserSessionSwitchLeaveCrit(v19);
    if ( inited >= 0 )
    {
      if ( v27 )
      {
        memmove((void *)v31, v38, a2);
        _InterlockedOr(v26, 0);
        *(_QWORD *)(ProcessPeb + 88) = 0LL;
LABEL_21:
        KeUnstackDetachProcess(&ApcState);
        PsReleaseProcessExitSynchronization(v17);
        goto LABEL_22;
      }
      memmove((void *)Address, &Src, Length);
    }
LABEL_20:
    if ( !v27 )
      goto LABEL_22;
    goto LABEL_21;
  }
  return result;
}
