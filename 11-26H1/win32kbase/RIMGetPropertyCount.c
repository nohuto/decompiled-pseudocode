/*
 * XREFs of RIMGetPropertyCount @ 0x1401698B8
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1401692DC (RIMRetrieveLinkCollection.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     _IsValidParallelValue @ 0x140052B98 (_IsValidParallelValue.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_BOOL8 __fastcall RIMGetPropertyCount(__int64 a1, USHORT a2, USHORT a3, struct _HIDP_PREPARSED_DATA *a4)
{
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r14
  unsigned int v8; // r12d
  NTSTATUS SpecificValueCaps; // ebx
  __int64 v10; // r8
  USHORT v11; // di
  USHORT v12; // r8
  int v13; // edx
  int v14; // r8d
  CTouchProcessor **v15; // rcx
  char v16; // di
  bool v17; // r14
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  struct _HIDP_VALUE_CAPS *v21; // r15
  USHORT v22; // si
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  NTSTATUS v26; // eax
  unsigned __int16 v27; // si
  int v28; // edi
  int valid; // eax
  NTSTATUS v30; // eax
  USHORT v31; // r14
  USHORT v32; // si
  struct _HIDP_PREPARSED_DATA *v33; // rbx
  int v34; // eax
  __int64 v35; // rax
  USHORT v37; // [rsp+40h] [rbp-79h] BYREF
  USHORT v38; // [rsp+48h] [rbp-71h] BYREF
  int v39; // [rsp+50h] [rbp-69h]
  NTSTATUS v40; // [rsp+54h] [rbp-65h]
  int v41; // [rsp+58h] [rbp-61h]
  USHORT ValueCapsLength; // [rsp+5Ch] [rbp-5Dh] BYREF
  USHORT v43[2]; // [rsp+60h] [rbp-59h] BYREF
  USHORT v44; // [rsp+64h] [rbp-55h]
  struct _HIDP_PREPARSED_DATA *v45; // [rsp+68h] [rbp-51h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+70h] [rbp-49h] BYREF

  v44 = a2;
  v38 = a3;
  v37 = a3;
  v45 = a4;
  PreparsedData = a4;
  v8 = 0;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  LOWORD(v40) = a2;
  v43[0] = 1;
  SpecificValueCaps = -1073741668;
  ValueCapsLength = 0;
  v41 = 0;
  if ( !a3 )
  {
    v39 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2292LL);
  }
  v10 = *(_QWORD *)(a1 + 768);
  v11 = a3;
  LOWORD(v39) = a3;
  if ( v10 )
  {
    v12 = *(_WORD *)(v10 + 8);
    LOWORD(v39) = a3;
    if ( v12 )
    {
      LOWORD(v40) = v12;
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, v12, 0, 0LL, &ValueCapsLength, PreparsedData);
      if ( SpecificValueCaps == -1072627705 )
      {
        v35 = *(_QWORD *)(a1 + 768);
        v37 = ValueCapsLength;
        v11 = ValueCapsLength + v38;
        LOWORD(v39) = ValueCapsLength + v38;
        *(_WORD *)(v35 + 10) = ValueCapsLength;
        v41 = 1;
      }
      else
      {
        v15 = &WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (LODWORD(v15) = *((_DWORD *)WPP_GLOBAL_Control + 11), v13 = 1, ((unsigned __int8)v15 & 1) == 0)
          || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v16 = 0;
        }
        v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)v15, v13, v14);
          LOBYTE(v19) = v17;
          LOBYTE(v20) = v16;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v20,
            v19,
            *(_QWORD *)(UserSessionState + 19368),
            3,
            1,
            30,
            (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids);
        }
        PreparsedData = v45;
        v11 = a3;
        LOWORD(v39) = a3;
      }
    }
  }
  if ( v11 > 1u )
  {
    v21 = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInitImpl(256LL, 72LL * v11, 0x63707352u);
    if ( v21 )
    {
      v22 = v40;
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 1u, v40, 0x30u, &ValueCaps, v43, PreparsedData);
      if ( SpecificValueCaps >= 0 )
      {
        *(_BYTE *)(a1 + 832) = ValueCaps.ReportID;
        v26 = HidP_GetSpecificValueCaps(HidP_Input, 0, v22, 0, v21, &v37, PreparsedData);
        v25 = 0LL;
        v40 = v26;
        SpecificValueCaps = v26;
        if ( v26 >= 0 )
        {
          v24 = v37;
          v27 = 0;
          if ( v37 )
          {
            v28 = v41;
            do
            {
              v23 = (__int64)&v21[v27];
              if ( *(_BYTE *)(v23 + 2) == ValueCaps.ReportID )
              {
                if ( v28
                  || (*(_DWORD *)(a1 + 368) & 2) == 0
                  || (valid = IsValidParallelValue(a1, (USAGE *)v23, PreparsedData), v24 = v37, v25 = 0LL, valid) )
                {
                  ++v8;
                }
              }
              ++v27;
            }
            while ( v27 < (unsigned __int16)v24 );
            SpecificValueCaps = v40;
            v11 = v39;
          }
          if ( v41 )
          {
            v30 = HidP_GetSpecificValueCaps(HidP_Input, 0, v44, 0, &v21[(unsigned __int16)v24], &v38, PreparsedData);
            v25 = 0LL;
            v40 = v30;
            SpecificValueCaps = v30;
            if ( v30 >= 0 )
            {
              v31 = 0;
              v32 = v37;
              if ( v38 )
              {
                v33 = v45;
                do
                {
                  if ( v32 >= v11 )
                    break;
                  v23 = (__int64)&v21[v32];
                  if ( *(_BYTE *)(v23 + 2) == ValueCaps.ReportID )
                  {
                    if ( (*(_DWORD *)(a1 + 368) & 2) == 0
                      || (v34 = IsValidParallelValue(a1, (USAGE *)v23, v33), v25 = 0LL, v34) )
                    {
                      ++v8;
                    }
                  }
                  ++v32;
                  ++v31;
                }
                while ( v31 < v38 );
                SpecificValueCaps = v40;
              }
            }
          }
          if ( v8 <= 1 )
          {
            v41 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2391LL);
          }
          *(_DWORD *)(a1 + 392) = v8;
        }
      }
      GreDeleteFastMutex((char *)v21, v23, v24, v25);
    }
  }
  return SpecificValueCaps >= 0;
}
