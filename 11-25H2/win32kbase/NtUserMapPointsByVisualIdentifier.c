/*
 * XREFs of NtUserMapPointsByVisualIdentifier @ 0x1401BF260
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     UserGetLastError @ 0x14015A8E8 (UserGetLastError.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1401AE19C (-MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserMapPointsByVisualIdentifier(
        void *Src,
        void *a2,
        unsigned int a3,
        const void *a4,
        volatile void *Address)
{
  char v8; // r14
  char v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  struct _LUID *v14; // r12
  struct VisualPoint *v15; // rsi
  struct VisualPoint *v16; // rbx
  unsigned __int64 v17; // rdi
  struct _LUID *v18; // r13
  ULONG64 v19; // rcx
  struct VisualPoint *v20; // rax
  __int64 v21; // rcx
  struct VisualPoint *v22; // rax
  NTSTATUS v23; // eax
  int v24; // edi
  ULONG v25; // ecx
  __int64 CurrentProcessWow64Process; // rax
  bool v27; // si
  char LastError; // bl
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  struct _LUID *v35; // [rsp+60h] [rbp-88h]
  struct _LUID v36; // [rsp+78h] [rbp-70h] BYREF
  struct _LUID v37; // [rsp+80h] [rbp-68h] BYREF
  __int64 v38; // [rsp+88h] [rbp-60h] BYREF
  __int64 v39; // [rsp+90h] [rbp-58h] BYREF
  struct _LUID *v40; // [rsp+98h] [rbp-50h]

  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
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
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, a2);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      2,
      102,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
      (char)Src,
      a2);
  }
  v35 = 0LL;
  v14 = 0LL;
  v40 = 0LL;
  v37 = 0LL;
  v39 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 8LL * a3;
  if ( v17 > 0xFFFFFFFF )
    goto LABEL_28;
  if ( !(_DWORD)v17 )
  {
LABEL_27:
    v24 = 1;
    goto LABEL_30;
  }
  if ( Src )
  {
    v36 = 0LL;
    RtlCopyFromUser(&v36, Src, 8uLL);
    v37 = v36;
    v18 = &v37;
    v35 = &v37;
  }
  else
  {
    v18 = 0LL;
  }
  if ( a2 )
  {
    v38 = 0LL;
    RtlCopyFromUser(&v38, a2, 8uLL);
    v39 = v38;
    v14 = (struct _LUID *)&v39;
    v40 = (struct _LUID *)&v39;
  }
  if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
    ExRaiseDatatypeMisalignment();
  v19 = (ULONG64)a4 + (unsigned int)v17;
  if ( v19 > MmUserProbeAddress || v19 < (unsigned __int64)a4 )
  {
    v14 = v40;
    v18 = v35;
  }
  v20 = (struct VisualPoint *)Win32AllocPoolWithQuotaZInitImpl(v19, (unsigned int)v17, 0x766E6355u);
  v15 = v20;
  if ( !v20 )
    ExRaiseStatus(-1073741801);
  RtlCopyVolatileMemory(v20, a4, (unsigned int)v17);
  v22 = (struct VisualPoint *)Win32AllocPoolWithQuotaZInitImpl(v21, (unsigned int)v17, 0x766E6355u);
  v16 = v22;
  if ( !v22 )
  {
LABEL_28:
    v24 = 0;
    v25 = 8;
    goto LABEL_29;
  }
  v23 = MapPointsByVisualIdentifierInternal(v18, v14, a3, v15, v22);
  if ( v23 >= 0 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(Address, (unsigned int)v17, CurrentProcessWow64Process != 0 ? 1 : 4);
    RtlCopyVolatileMemory((void *)Address, v16, (unsigned int)v17);
    goto LABEL_27;
  }
  v24 = 0;
  v25 = RtlNtStatusToDosError(v23);
LABEL_29:
  UserSetLastError(v25);
LABEL_30:
  if ( v15 )
    GreDeleteFastMutex((char *)v15);
  if ( v16 )
    GreDeleteFastMutex((char *)v16);
  if ( !v24 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v8 = 0;
    }
    v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v31 = W32GetUserSessionState(v30, v29);
      LOBYTE(v32) = v27;
      LOBYTE(v33) = v8;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v32,
        *(_QWORD *)(v31 + 69144),
        2,
        2,
        103,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        LastError);
    }
  }
  return v24;
}
