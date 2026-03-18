/*
 * XREFs of xxxConnectService @ 0x14016629C
 * Callers:
 *     xxxResolveDesktop @ 0x140244080 (xxxResolveDesktop.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1?$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ @ 0x1401668B0 (--1-$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x1401668DC (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x14028CAA0 (xxxCreateWindowStation.c)
 */

__int64 __fastcall xxxConnectService(__int64 a1, _QWORD *a2, HANDLE *a3)
{
  __int64 result; // rax
  _QWORD *v4; // r14
  void *v5; // rsi
  void *SecurityDescriptor; // r15
  char v7; // r12
  NTSTATUS WindowStation; // edi
  __int64 v9; // r13
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // rdx
  bool v19; // di
  bool v20; // r13
  HANDLE v21; // r13
  __int64 v22; // rdx
  bool v23; // r13
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 UserSessionState; // rax
  int v28; // r8d
  int v29; // edx
  HANDLE TokenHandle; // [rsp+60h] [rbp-F8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-F0h] BYREF
  __int128 v32; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v33; // [rsp+80h] [rbp-D8h]
  __int128 v34; // [rsp+90h] [rbp-C8h]
  _QWORD *v35; // [rsp+A0h] [rbp-B8h]
  void *v36; // [rsp+A8h] [rbp-B0h]
  __int64 v37; // [rsp+B0h] [rbp-A8h]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-A0h] BYREF
  _BYTE v39[24]; // [rsp+D0h] [rbp-88h] BYREF
  _BYTE v40[24]; // [rsp+E8h] [rbp-70h] BYREF
  _BYTE v41[88]; // [rsp+100h] [rbp-58h] BYREF
  ULONG TokenInformationLength; // [rsp+178h] [rbp+20h] BYREF

  TokenHandle = 0LL;
  TokenInformationLength = 0;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  DestinationString = 0LL;
  result = OpenEffectiveToken(&TokenHandle);
  if ( (int)result < 0 )
    return result;
  v4 = 0LL;
  v5 = 0LL;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  v7 = 1;
  WindowStation = ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
  if ( (int)(WindowStation + 0x80000000) >= 0 && WindowStation != -1073741789 )
  {
    ZwClose(TokenHandle);
    goto LABEL_18;
  }
  v4 = (_QWORD *)Win32AllocPoolZInit(TokenInformationLength, 1869902677LL);
  v35 = v4;
  if ( !v4 )
  {
    ZwClose(TokenHandle);
LABEL_37:
    WindowStation = -1073741801;
    goto LABEL_18;
  }
  WindowStation = ZwQueryInformationToken(TokenHandle, TokenUser, v4, TokenInformationLength, &TokenInformationLength);
  ZwClose(TokenHandle);
  if ( WindowStation >= 0 )
  {
    v9 = *v4;
    v5 = (void *)AllocAce(0LL, 0LL, 0LL, 983150LL, *v4, &TokenInformationLength);
    if ( v5 )
    {
      LOBYTE(v10) = 13;
      v11 = AllocAce(v5, 0LL, v10, 983247LL, v9, &TokenInformationLength);
      if ( v11 )
      {
        v5 = (void *)v11;
        v12 = AllocAce(v11, 0LL, 0LL, 256LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
        if ( v12 )
        {
          v5 = (void *)v12;
          LOBYTE(v13) = 13;
          v14 = AllocAce(v12, 0LL, v13, 193LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
          if ( v14 )
          {
            v5 = (void *)v14;
            v37 = v14;
            SecurityDescriptor = (void *)CreateSecurityDescriptor(v14, TokenInformationLength, 0LL);
            v36 = SecurityDescriptor;
            if ( SecurityDescriptor )
            {
              Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
                v41,
                v4,
                Win32FreePool,
                v15);
              Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
                v40,
                v5,
                Win32FreePool,
                v16);
              Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
                v39,
                SecurityDescriptor,
                Win32FreePool,
                v17);
              LODWORD(v32) = 48;
              *((_QWORD *)&v32 + 1) = 0LL;
              DWORD2(v33) = 128;
              *(_QWORD *)&v33 = a1;
              v34 = (unsigned __int64)SecurityDescriptor;
              WindowStation = xxxCreateWindowStation(
                                (unsigned int)&v32,
                                0,
                                0x2000000,
                                0,
                                0,
                                0,
                                0LL,
                                0LL,
                                0,
                                0,
                                (__int64)&Handle);
              if ( WindowStation < 0 )
              {
                *a2 = 0LL;
              }
              else
              {
                v19 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                   && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
                   && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
                v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v18);
                  LOBYTE(v28) = v20;
                  LOBYTE(v29) = v19;
                  WPP_RECORDER_AND_TRACE_SF_(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v29,
                    v28,
                    *(_QWORD *)(UserSessionState + 69160),
                    4,
                    3,
                    10,
                    (__int64)&WPP_b53782deda8c398bb5e73d5a195dd1c7_Traceguids);
                }
                RtlInitUnicodeString(&DestinationString, L"Default");
                LODWORD(v32) = 48;
                v21 = Handle;
                *((_QWORD *)&v32 + 1) = Handle;
                DWORD2(v33) = 192;
                *(_QWORD *)&v33 = &DestinationString;
                v34 = 0LL;
                WindowStation = xxxCreateDesktopEx((unsigned int)&v32, 0, 0x2000000, 0, (__int64)a2, 1);
                if ( WindowStation >= 0 )
                {
                  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
                    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
                  {
                    v7 = 0;
                  }
                  v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    v24 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v22);
                    LOBYTE(v25) = v23;
                    LOBYTE(v26) = v7;
                    WPP_RECORDER_AND_TRACE_SF_(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                      v26,
                      v25,
                      *(_QWORD *)(v24 + 69160),
                      4,
                      3,
                      11,
                      (__int64)&WPP_b53782deda8c398bb5e73d5a195dd1c7_Traceguids);
                  }
                  *a3 = Handle;
                }
                else
                {
                  ObCloseHandle(v21, 1);
                }
              }
              Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v39);
              Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v40);
              Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v41);
              goto LABEL_18;
            }
          }
        }
      }
    }
    goto LABEL_37;
  }
LABEL_18:
  if ( v4 )
    Win32FreePool(v4);
  if ( v5 )
    Win32FreePool(v5);
  if ( SecurityDescriptor )
    Win32FreePool(SecurityDescriptor);
  return (unsigned int)WindowStation;
}
