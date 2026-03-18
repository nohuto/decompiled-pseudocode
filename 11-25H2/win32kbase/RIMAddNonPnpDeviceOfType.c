/*
 * XREFs of RIMAddNonPnpDeviceOfType @ 0x1401D9660
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     DeviceTypeToRimInputType @ 0x14002CFC0 (DeviceTypeToRimInputType.c)
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     rimOnPnpArrived @ 0x140181640 (rimOnPnpArrived.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1401D5288 (RIMFreeDev.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfType(char *a1, const UNICODE_STRING *a2, unsigned int a3, int a4, _QWORD *a5)
{
  char v8; // di
  bool v9; // r14
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rdx
  int v14; // edi
  struct RawInputManagerObject *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // ecx
  WCHAR *Buffer; // rax
  ULONG64 v20; // r8
  _QWORD *v21; // rdx
  char v22; // r15
  bool v23; // r12
  int v24; // edx
  int v25; // r8d
  __int64 v26; // r9
  char v27; // r14
  bool v28; // r15
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int16 v33; // [rsp+30h] [rbp-88h]
  __int64 v34; // [rsp+58h] [rbp-60h] BYREF
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  const UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp-50h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+80h] [rbp-38h] BYREF

  Object = 0LL;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, WPP_GLOBAL_Control);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      31,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v14 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v14 >= 0 )
  {
    v15 = (struct RawInputManagerObject *)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v15 + 81) || *((_BYTE *)v15 + 82) )
    {
      v14 = -1073741637;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v22 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_57;
      v26 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v16) + 19336);
      v33 = 33;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v15 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        if ( !a4 )
        {
          p_DestinationString = a2;
LABEL_30:
          if ( v14 >= 0 )
          {
            v34 = 0LL;
            v14 = RIMCreateDev(v15, a3, p_DestinationString, 1, 0, 0LL, &v34);
            if ( v14 >= 0 )
            {
              *(_DWORD *)(v34 + 168) |= 1u;
              v14 = rimOnPnpArrived((__int64)v15, v34, (void *)0xFFFFFFFFFFFFFFFFLL);
              if ( v14 >= 0 )
              {
                if ( a4 )
                {
                  v21 = a5;
                  if ( (unsigned __int64)a5 >= MmUserProbeAddress )
                    v21 = (_QWORD *)MmUserProbeAddress;
                  *v21 = *(_QWORD *)(v34 + 16);
                }
                else
                {
                  *a5 = *(_QWORD *)(v34 + 16);
                }
              }
              if ( v14 < 0 )
                RIMFreeDev(v15, (struct RIMDEV *)v34);
            }
          }
          if ( DestinationString.Buffer )
            GreDeleteFastMutex((char *)DestinationString.Buffer);
          goto LABEL_57;
        }
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (const UNICODE_STRING *)MmUserProbeAddress;
        v18 = *(_DWORD *)&a2->Length;
        LODWORD(v34) = v18;
        *(_DWORD *)&SourceString.Length = v18;
        Buffer = a2->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v20 = (ULONG64)Buffer + (unsigned __int16)v18 + 2;
        if ( v20 <= (unsigned __int64)Buffer || v20 >= MmUserProbeAddress )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v18 > WORD1(v34) )
        {
          if ( (v18 & 1) == 0 )
            goto LABEL_28;
        }
        else if ( (v18 & 1) == 0 )
        {
          DestinationString.MaximumLength = v18;
          DestinationString.Length = v18;
          DestinationString.Buffer = (PWSTR)Win32AllocPoolZInitImpl(256LL, (unsigned __int16)v18, 0x706D7452u);
          if ( DestinationString.Buffer )
          {
            RtlCopyUnicodeString(&DestinationString, &SourceString);
            p_DestinationString = &DestinationString;
          }
          else
          {
            v14 = -1073741801;
          }
          v15 = (struct RawInputManagerObject *)Object;
          goto LABEL_30;
        }
        LODWORD(v34) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 921);
LABEL_28:
        ExRaiseAccessViolation();
      }
      v14 = -1073741637;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v22 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_57;
      v26 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v17) + 19336);
      v33 = 32;
    }
    LOBYTE(v25) = v23;
    LOBYTE(v24) = v22;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v25,
      v26,
      3,
      1,
      v33,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
LABEL_57:
    RIMUnlockExclusive((__int64)v15 + 104);
    ObfDereferenceObject(v15);
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v27 = 0;
  }
  v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v13);
    LOBYTE(v30) = v28;
    LOBYTE(v31) = v27;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v31,
      v30,
      *(_QWORD *)(v29 + 19336),
      4,
      1,
      34,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v14);
  }
  return (unsigned int)v14;
}
