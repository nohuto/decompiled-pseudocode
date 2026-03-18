/*
 * XREFs of InitCreateUserSubsystem @ 0x1402F3C80
 * Callers:
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     OpenCacheKeyEx @ 0x1400E1D30 (OpenCacheKeyEx.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400E2300 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     wcsstr @ 0x1401C7178 (wcsstr.c)
 *     wcschr @ 0x1401C73A4 (wcschr.c)
 */

__int64 __fastcall InitCreateUserSubsystem(__int64 a1, int a2, int a3)
{
  int v3; // ecx
  unsigned int v4; // r15d
  char v5; // bl
  bool v6; // di
  __int64 result; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  char *v11; // rdi
  int v12; // ecx
  void *v13; // r14
  __int64 v14; // rbx
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // esi
  __int64 v26; // rdx
  int v27; // ebx
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // esi
  wchar_t *v32; // rax
  wchar_t *v33; // rax
  wchar_t *v34; // r14
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  __int64 v38; // rax
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // ebx
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  wchar_t *v52; // rax
  int v53; // edx
  int v54; // ecx
  int v55; // r8d
  __int64 v56; // rax
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  int v60; // edx
  int v61; // ecx
  int v62; // r8d
  __int64 UserSessionState; // rax
  int v64; // r8d
  int v65; // edx
  UNICODE_STRING String; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  ULONG Length; // [rsp+90h] [rbp+30h] BYREF
  int v69; // [rsp+98h] [rbp+38h] BYREF

  String = 0LL;
  v3 = (int)WPP_GLOBAL_Control;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v64) = v6;
    LOBYTE(v65) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v65,
      v64,
      *(_QWORD *)(UserSessionState + 69136),
      4,
      14,
      21,
      (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids);
  }
  result = Win32AllocPoolWithQuotaZInitImpl(v3, 0x500uLL, 0x78747355u);
  v11 = (char *)result;
  if ( result )
  {
    Length = 0;
    DestinationString = 0LL;
    v69 = *(_DWORD *)(W32GetUserSessionState(v9, v8, v10) + 62776);
    while ( 1 )
    {
      v13 = OpenCacheKeyEx(0LL, 0xAu, 0x20019u, &v69);
      if ( !v13 )
        goto LABEL_15;
      Length = 1226;
      v14 = Win32AllocPoolWithQuotaZInitImpl(v12, 0x4CAuLL, 0x72707355u);
      if ( !v14 )
        goto LABEL_14;
      RtlInitUnicodeString(&DestinationString, L"Windows");
      v15 = ZwQueryValueKey(v13, &DestinationString, KeyValuePartialInformation, (PVOID)v14, Length, &Length);
      v19 = 0;
      if ( v15 != -2147483643 )
        v19 = v15;
      if ( v19 >= 0 )
        break;
      if ( !v69 )
      {
        GreDeleteFastMutex((char *)v14, v16, v17, v18);
LABEL_14:
        ZwClose(v13);
LABEL_15:
        if ( (int)RtlStringCchCopyW(v11, 607LL, (char *)L"SharedSection=,3072") >= 0 )
        {
          v24 = -1LL;
          do
            ++v24;
          while ( *(_WORD *)&v11[2 * v24] );
          v25 = v24 + 1;
          goto LABEL_28;
        }
        goto LABEL_29;
      }
      GreDeleteFastMutex((char *)v14, v16, v17, v18);
      ZwClose(v13);
    }
    v26 = 607LL;
    v25 = 607;
    if ( *(_DWORD *)(v14 + 8) >> 1 < 0x25Fu )
      v25 = *(_DWORD *)(v14 + 8) >> 1;
    if ( *(_DWORD *)(v14 + 8) < 2u )
    {
      *(_WORD *)v11 = 0;
    }
    else
    {
      *(_WORD *)(v14 + 2LL * (unsigned int)(v25 - 1) + 12) = 0;
      RtlStringCchCopyW(v11, 607LL, (char *)(v14 + 12));
    }
    GreDeleteFastMutex((char *)v14, v26, v17, v18);
    ZwClose(v13);
LABEL_28:
    if ( !v25 )
    {
LABEL_29:
      v4 = 0;
      goto LABEL_30;
    }
    v27 = 512;
    *(_DWORD *)(W32GetUserSessionState(v21, v20, v22) + 62920) = 512;
    v31 = 128;
    *(_DWORD *)(W32GetUserSessionState(v29, v28, v30) + 62924) = 128;
    v32 = wcsstr((const wchar_t *)v11, L"SharedSection");
    if ( v32 )
    {
      v32[32] = 0;
      v33 = wcschr(v32, 0x2Cu);
      v34 = v33;
      if ( v33 )
      {
        RtlInitUnicodeString(&String, v33 + 1);
        v38 = W32GetUserSessionState(v36, v35, v37);
        RtlUnicodeStringToInteger(&String, 0, (PULONG)(v38 + 62920));
        if ( *(_DWORD *)(W32GetUserSessionState(v40, v39, v41) + 62920) >= 0x200u )
          v27 = *(_DWORD *)(W32GetUserSessionState(v43, v42, v44) + 62920);
        *(_DWORD *)(W32GetUserSessionState(v43, v42, v44) + 62920) = v27;
        v48 = *(_DWORD *)(W32GetUserSessionState(v46, v45, v47) + 62920);
        *(_DWORD *)(W32GetUserSessionState(v50, v49, v51) + 62924) = v48;
        v52 = wcschr(v34 + 1, 0x2Cu);
        if ( v52 )
        {
          RtlInitUnicodeString(&String, v52 + 1);
          v56 = W32GetUserSessionState(v54, v53, v55);
          RtlUnicodeStringToInteger(&String, 0, (PULONG)(v56 + 62924));
          if ( *(_DWORD *)(W32GetUserSessionState(v58, v57, v59) + 62924) >= 0x80u )
            v31 = *(_DWORD *)(W32GetUserSessionState(v61, v60, v62) + 62924);
          *(_DWORD *)(W32GetUserSessionState(v61, v60, v62) + 62924) = v31;
        }
      }
    }
LABEL_30:
    GreDeleteFastMutex(v11, v20, v22, v23);
    return v4;
  }
  return result;
}
