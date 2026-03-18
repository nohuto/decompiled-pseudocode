/*
 * XREFs of NtUserMapPointsByVisualIdentifier @ 0x1401E7BB0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     UserGetLastError @ 0x14019A2A8 (UserGetLastError.c)
 *     ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1401D02FC (-MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall NtUserMapPointsByVisualIdentifier(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        volatile void *a4,
        volatile void *a5)
{
  __int64 v5; // r12
  struct _LUID *v6; // rdi
  char v8; // r14
  char v9; // si
  _UNKNOWN **v10; // rcx
  bool v11; // r15
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  struct VisualPoint *v15; // r15
  struct VisualPoint *v16; // rsi
  unsigned __int64 v17; // r12
  __int64 CurrentProcessWow64Process; // rax
  int v19; // ecx
  struct VisualPoint *v20; // rax
  int v21; // ecx
  struct VisualPoint *v22; // rax
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // edi
  ULONG v27; // ecx
  __int64 v28; // rax
  bool v29; // si
  char LastError; // bl
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  __int64 ULong64FromUser; // [rsp+80h] [rbp-58h] BYREF
  __int64 v39; // [rsp+88h] [rbp-50h] BYREF
  struct _LUID *p_ULong64FromUser; // [rsp+90h] [rbp-48h]
  __int64 *v41; // [rsp+98h] [rbp-40h]
  __int64 *v42; // [rsp+A0h] [rbp-38h]
  unsigned int v43; // [rsp+F0h] [rbp+18h]

  v43 = a3;
  v5 = (unsigned int)a3;
  v6 = (struct _LUID *)a2;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v9 = 0;
    v8 = 1;
  }
  else
  {
    v8 = 1;
    v9 = 1;
  }
  v10 = &WPP_RECORDER_INITIALIZED;
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, a2, a3);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      2,
      102,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
  }
  p_ULong64FromUser = 0LL;
  ULong64FromUser = 0LL;
  v39 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 8 * v5;
  if ( v17 > 0xFFFFFFFF )
    goto LABEL_22;
  if ( !(_DWORD)v17 )
  {
LABEL_21:
    v26 = 1;
    goto LABEL_24;
  }
  if ( a1 )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    p_ULong64FromUser = (struct _LUID *)&ULong64FromUser;
    v41 = &ULong64FromUser;
  }
  if ( v6 )
  {
    v39 = RtlReadULong64FromUser(v6);
    v6 = (struct _LUID *)&v39;
    v42 = &v39;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v10, a2);
  ProbeForRead(a4, (unsigned int)v17, CurrentProcessWow64Process != 0 ? 1 : 4);
  v20 = (struct VisualPoint *)Win32AllocPoolWithQuotaZInitImpl(v19, (unsigned int)v17, 0x766E6355u);
  v15 = v20;
  if ( !v20 )
    ExRaiseStatus(-1073741801);
  RtlCopyVolatileMemory(v20, (const void *)a4, (unsigned int)v17);
  v22 = (struct VisualPoint *)Win32AllocPoolWithQuotaZInitImpl(v21, (unsigned int)v17, 0x766E6355u);
  v16 = v22;
  if ( !v22 )
  {
LABEL_22:
    v26 = 0;
    v27 = 8;
    goto LABEL_23;
  }
  v23 = MapPointsByVisualIdentifierInternal(p_ULong64FromUser, v6, v43, v15, v22);
  if ( v23 >= 0 )
  {
    v28 = PsGetCurrentProcessWow64Process(v25, v24);
    ProbeForWrite(a5, (unsigned int)v17, v28 != 0 ? 1 : 4);
    RtlCopyVolatileMemory((void *)a5, v16, (unsigned int)v17);
    goto LABEL_21;
  }
  v26 = 0;
  v27 = RtlNtStatusToDosError(v23);
LABEL_23:
  UserSetLastError(v27);
LABEL_24:
  if ( v15 )
    GreDeleteFastMutex((char *)v15, a2, a3, (__int64)a4);
  if ( v16 )
    GreDeleteFastMutex((char *)v16, a2, a3, (__int64)a4);
  if ( !v26 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v8 = 0;
    }
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v34 = W32GetUserSessionState(v32, v31, v33);
      LOBYTE(v35) = v29;
      LOBYTE(v36) = v8;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v35,
        *(_QWORD *)(v34 + 69136),
        2,
        2,
        103,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        LastError);
    }
  }
  return v26;
}
