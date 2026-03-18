/*
 * XREFs of InitCreateUserSubsystem @ 0x1402EA574
 * Callers:
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     OpenCacheKeyEx @ 0x1400A9CE0 (OpenCacheKeyEx.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400AA420 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     wcsstr @ 0x1401A2CB8 (wcsstr.c)
 *     wcschr @ 0x1401A30D0 (wcschr.c)
 */

__int64 __fastcall InitCreateUserSubsystem(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  unsigned int v3; // r15d
  char v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  char *v12; // rdi
  __int64 v13; // rcx
  void *v14; // r14
  __int64 v15; // rbx
  NTSTATUS v16; // eax
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // esi
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // esi
  wchar_t *v26; // rax
  wchar_t *v27; // rax
  wchar_t *v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // rcx
  wchar_t *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  UNICODE_STRING String; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  ULONG Length; // [rsp+90h] [rbp+30h] BYREF
  int v52; // [rsp+98h] [rbp+38h] BYREF

  String = 0LL;
  v2 = WPP_GLOBAL_Control;
  v3 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v4 = 0;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      14,
      21,
      (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids);
  }
  result = Win32AllocPoolWithQuotaZInitImpl((__int64)v2, 0x500uLL, 0x78747355u);
  v12 = (char *)result;
  if ( result )
  {
    Length = 0;
    DestinationString = 0LL;
    v52 = *(_DWORD *)(W32GetUserSessionState(v11, v10) + 62784);
    while ( 1 )
    {
      v14 = OpenCacheKeyEx(0LL, 0xAu, 0x20019u, &v52);
      if ( !v14 )
        goto LABEL_17;
      Length = 1226;
      v15 = Win32AllocPoolWithQuotaZInitImpl(v13, 0x4CAuLL, 0x72707355u);
      if ( !v15 )
        goto LABEL_16;
      RtlInitUnicodeString(&DestinationString, L"Windows");
      v16 = ZwQueryValueKey(v14, &DestinationString, KeyValuePartialInformation, (PVOID)v15, Length, &Length);
      v17 = 0;
      if ( v16 != -2147483643 )
        v17 = v16;
      if ( v17 >= 0 )
        break;
      if ( !v52 )
      {
        GreDeleteFastMutex((char *)v15);
LABEL_16:
        ZwClose(v14);
LABEL_17:
        if ( (int)RtlStringCchCopyW(v12, 607LL, (char *)L"SharedSection=,3072") >= 0 )
        {
          v20 = -1LL;
          do
            ++v20;
          while ( *(_WORD *)&v12[2 * v20] );
          v21 = v20 + 1;
          goto LABEL_27;
        }
        goto LABEL_38;
      }
      GreDeleteFastMutex((char *)v15);
      ZwClose(v14);
    }
    v21 = 607;
    if ( *(_DWORD *)(v15 + 8) >> 1 < 0x25Fu )
      v21 = *(_DWORD *)(v15 + 8) >> 1;
    if ( *(_DWORD *)(v15 + 8) < 2u )
    {
      *(_WORD *)v12 = 0;
    }
    else
    {
      *(_WORD *)(v15 + 2LL * (unsigned int)(v21 - 1) + 12) = 0;
      RtlStringCchCopyW(v12, 607LL, (char *)(v15 + 12));
    }
    GreDeleteFastMutex((char *)v15);
    ZwClose(v14);
LABEL_27:
    if ( !v21 )
    {
LABEL_38:
      v3 = 0;
      goto LABEL_33;
    }
    v22 = 512;
    *(_DWORD *)(W32GetUserSessionState(v19, v18) + 62928) = 512;
    v25 = 128;
    *(_DWORD *)(W32GetUserSessionState(v24, v23) + 62932) = 128;
    v26 = wcsstr((const wchar_t *)v12, L"SharedSection");
    if ( v26 )
    {
      v26[32] = 0;
      v27 = wcschr(v26, 0x2Cu);
      v28 = v27;
      if ( v27 )
      {
        RtlInitUnicodeString(&String, v27 + 1);
        v31 = W32GetUserSessionState(v30, v29);
        RtlUnicodeStringToInteger(&String, 0, (PULONG)(v31 + 62928));
        if ( *(_DWORD *)(W32GetUserSessionState(v33, v32) + 62928) >= 0x200u )
          v22 = *(_DWORD *)(W32GetUserSessionState(v35, v34) + 62928);
        *(_DWORD *)(W32GetUserSessionState(v35, v34) + 62928) = v22;
        v38 = *(_DWORD *)(W32GetUserSessionState(v37, v36) + 62928);
        *(_DWORD *)(W32GetUserSessionState(v40, v39) + 62932) = v38;
        v41 = wcschr(v28 + 1, 0x2Cu);
        if ( v41 )
        {
          RtlInitUnicodeString(&String, v41 + 1);
          v44 = W32GetUserSessionState(v43, v42);
          RtlUnicodeStringToInteger(&String, 0, (PULONG)(v44 + 62932));
          if ( *(_DWORD *)(W32GetUserSessionState(v46, v45) + 62932) >= 0x80u )
            v25 = *(_DWORD *)(W32GetUserSessionState(v48, v47) + 62932);
          *(_DWORD *)(W32GetUserSessionState(v48, v47) + 62932) = v25;
        }
      }
    }
LABEL_33:
    GreDeleteFastMutex(v12);
    return v3;
  }
  return result;
}
