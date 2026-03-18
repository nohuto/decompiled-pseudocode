/*
 * XREFs of NtUserSetProcessWin32Capabilities @ 0x14029FB10
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x140270A34 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     W32AttachToSessionAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___ @ 0x140289910 (W32AttachToSessionAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___.c)
 */

__int64 __fastcall NtUserSetProcessWin32Capabilities(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  PVOID *v5; // rdi
  __int64 v6; // rbx
  int v7; // ecx
  PVOID *v8; // rsi
  unsigned __int64 v9; // xmm1_8
  int v10; // r12d
  PVOID v11; // rcx
  bool v12; // bl
  bool v13; // r14
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  ULONG v17; // eax
  int ProcessSessionId; // eax
  bool v19; // bl
  bool v20; // si
  __int64 v21; // rax
  int v22; // edx
  int v23; // r8d
  ULONG v24; // eax
  bool v25; // bl
  bool v26; // si
  __int64 v27; // rax
  int v28; // edx
  int v29; // r8d
  bool v30; // bl
  bool v31; // si
  __int64 UserSessionState; // rax
  int v33; // edx
  int v34; // r8d
  unsigned int v35; // ecx
  unsigned int v36; // r14d
  PVOID *v37; // rsi
  __int64 v38; // rcx
  PVOID *v39; // [rsp+50h] [rbp-88h] BYREF
  int v40; // [rsp+58h] [rbp-80h]
  HANDLE Handle[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v42; // [rsp+70h] [rbp-68h]
  __int128 v43; // [rsp+80h] [rbp-58h]
  __int64 v44; // [rsp+90h] [rbp-48h]
  _BYTE v45[56]; // [rsp+A0h] [rbp-38h] BYREF
  PVOID Object; // [rsp+F8h] [rbp+20h] BYREF

  v2 = a2;
  if ( !(unsigned __int8)HasTcbPrivilege() )
  {
    UserSetLastError(5);
    return 0LL;
  }
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v45);
  v5 = 0LL;
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = (PVOID *)Win32AllocPoolZInit(32 * v2, 1935897429LL);
    v39 = v5;
    v6 = 0LL;
    if ( v5 )
    {
      while ( 1 )
      {
        if ( (unsigned int)v6 >= (unsigned int)v2 )
        {
          v35 = *((_DWORD *)v5 + 2);
          v39 = v5;
          v40 = v2;
          LODWORD(v6) = W32AttachToSessionAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e_(v35, (__int64)&v39) != 0;
          goto LABEL_55;
        }
        v8 = &v5[4 * (unsigned int)v6];
        *(_OWORD *)Handle = 0LL;
        v42 = 0LL;
        RtlCopyFromUser(Handle, (void *)(a1 + 24 * v6), 0x18uLL);
        v43 = *(_OWORD *)Handle;
        v44 = v42;
        v9 = _mm_srli_si128(*(__m128i *)Handle, 8).m128i_u64[0];
        if ( (v9 & 0xFFFFFFF8) != 0
          || (v9 & 0xFFFFFFF800000000uLL) != 0
          || (v42 & 0xFFFFFFFE) != 0
          || (v42 & 0xFFFFFFFE00000000uLL) != 0 )
        {
          v30 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
          v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v30 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, *(_QWORD *)&WPP_GLOBAL_Control);
            v33 = 112;
            LOBYTE(v34) = v31;
            LOBYTE(v33) = v30;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v33,
              v34,
              *(_QWORD *)(UserSessionState + 69160),
              2,
              3,
              112,
              (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
          }
          goto LABEL_41;
        }
        Object = 0LL;
        v10 = ObReferenceObjectByHandle(Handle[0], 0x200u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
        v11 = Object;
        *v8 = Object;
        if ( v10 < 0 )
        {
          v12 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
          v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v14 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, *(_QWORD *)&WPP_GLOBAL_Control);
            v15 = 113;
            LOBYTE(v16) = v13;
            LOBYTE(v15) = v12;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v15,
              v16,
              *(_QWORD *)(v14 + 69160),
              2,
              3,
              113,
              (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
          }
          *v8 = 0LL;
          LODWORD(v6) = 0;
          v17 = RtlNtStatusToDosError(v10);
          UserSetLastError(v17);
          goto LABEL_55;
        }
        ProcessSessionId = PsGetProcessSessionIdEx(v11);
        *((_DWORD *)v8 + 2) = ProcessSessionId;
        if ( ProcessSessionId == -1 )
          break;
        if ( (_DWORD)v6 && ProcessSessionId != LODWORD(v5[4 * (unsigned int)(v6 - 1) + 1]) )
        {
          v25 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
          v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v27 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, *(_QWORD *)&WPP_GLOBAL_Control);
            v28 = 115;
            LOBYTE(v29) = v26;
            LOBYTE(v28) = v25;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v28,
              v29,
              *(_QWORD *)(v27 + 69160),
              2,
              3,
              115,
              (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
          }
LABEL_41:
          LODWORD(v6) = 0;
          UserSetLastError(87);
          goto LABEL_55;
        }
        v8[2] = (PVOID)(SDWORD2(v43) | (unsigned __int64)((__int64)(int)v44 << 32));
        v8[3] = (PVOID)(SHIDWORD(v43) | (unsigned __int64)((__int64)SHIDWORD(v44) << 32));
        v6 = (unsigned int)(v6 + 1);
      }
      v19 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v21 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, *(_QWORD *)&WPP_GLOBAL_Control);
        v22 = 114;
        LOBYTE(v23) = v20;
        LOBYTE(v22) = v19;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v22,
          v23,
          *(_QWORD *)(v21 + 69160),
          2,
          3,
          114,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
      }
      LODWORD(v6) = 0;
      v24 = RtlNtStatusToDosError(-1073740715);
      UserSetLastError(v24);
      goto LABEL_55;
    }
    v7 = 14;
  }
  else
  {
    LODWORD(v6) = 0;
    v7 = 5023;
  }
  UserSetLastError(v7);
LABEL_55:
  if ( v5 )
  {
    v36 = 0;
    if ( (_DWORD)v2 )
    {
      v37 = v5;
      do
      {
        if ( !*v37 )
          break;
        ObfDereferenceObject(*v37);
        ++v36;
        v37 += 4;
      }
      while ( v36 < (unsigned int)v2 );
    }
    Win32FreePool(v5);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v45);
  UserSessionSwitchLeaveCrit(v38);
  return (int)v6;
}
