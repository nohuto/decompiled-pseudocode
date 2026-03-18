/*
 * XREFs of RIMGetPropertyCount @ 0x14012D940
 * Callers:
 *     RIMRetrieveLinkCollection @ 0x14012D368 (RIMRetrieveLinkCollection.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401E2528 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     _IsValidParallelValue @ 0x140108190 (_IsValidParallelValue.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

_BOOL8 __fastcall RIMGetPropertyCount(__int64 a1, USHORT a2, USHORT a3, struct _HIDP_PREPARSED_DATA *a4)
{
  unsigned int v8; // r13d
  USHORT v9; // r14
  NTSTATUS SpecificValueCaps; // ebx
  __int64 v11; // rax
  USHORT v12; // di
  USHORT v13; // cx
  __int64 v14; // rdx
  _UNKNOWN **v15; // rcx
  bool v16; // di
  bool v17; // r14
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  struct _HIDP_VALUE_CAPS *v21; // r12
  struct _HIDP_PREPARSED_DATA *v22; // rsi
  USHORT v23; // r8
  USHORT v24; // si
  struct _HIDP_PREPARSED_DATA *v25; // r14
  int v26; // edi
  struct _HIDP_VALUE_CAPS *v27; // rdx
  int valid; // eax
  USHORT v29; // r14
  USHORT v30; // si
  struct _HIDP_PREPARSED_DATA *v31; // rbx
  struct _HIDP_VALUE_CAPS *v32; // rdx
  __int64 v33; // rax
  USHORT v35[2]; // [rsp+40h] [rbp-79h] BYREF
  USHORT v36; // [rsp+44h] [rbp-75h]
  USHORT v37; // [rsp+48h] [rbp-71h] BYREF
  NTSTATUS v38; // [rsp+50h] [rbp-69h]
  int v39; // [rsp+54h] [rbp-65h]
  USHORT ValueCapsLength[2]; // [rsp+58h] [rbp-61h] BYREF
  USHORT v41; // [rsp+5Ch] [rbp-5Dh] BYREF
  USHORT v42; // [rsp+60h] [rbp-59h]
  PHIDP_PREPARSED_DATA v43; // [rsp+68h] [rbp-51h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+70h] [rbp-49h] BYREF

  v42 = a2;
  v37 = a3;
  v35[0] = a3;
  v43 = a4;
  v8 = 0;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v41 = 1;
  v9 = a2;
  ValueCapsLength[0] = 0;
  SpecificValueCaps = -1073741668;
  v39 = 0;
  if ( !a3 )
  {
    v38 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2292LL);
  }
  v11 = *(_QWORD *)(a1 + 768);
  v12 = a3;
  v36 = a3;
  if ( v11 )
  {
    v13 = *(_WORD *)(v11 + 8);
    v36 = a3;
    if ( v13 )
    {
      v9 = v13;
      LOWORD(v38) = v13;
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, v13, 0, 0LL, ValueCapsLength, a4);
      if ( SpecificValueCaps == -1072627705 )
      {
        v33 = *(_QWORD *)(a1 + 768);
        v35[0] = ValueCapsLength[0];
        v12 = ValueCapsLength[0] + v37;
        v36 = ValueCapsLength[0] + v37;
        *(_WORD *)(v33 + 10) = ValueCapsLength[0];
        v39 = 1;
      }
      else
      {
        v15 = &WPP_GLOBAL_Control;
        v16 = 0;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
        {
          v15 = (_UNKNOWN **)*((unsigned int *)WPP_GLOBAL_Control + 11);
          if ( ((unsigned __int8)v15 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
            v16 = 1;
        }
        v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(v15, v14);
          LOBYTE(v19) = v17;
          LOBYTE(v20) = v16;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v20,
            v19,
            *(_QWORD *)(UserSessionState + 19336),
            3,
            1,
            30,
            (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids);
        }
        v9 = v38;
        v12 = a3;
        v36 = a3;
      }
    }
  }
  if ( v12 > 1u )
  {
    v21 = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInitImpl(256LL, 72LL * v12, 0x63707352u);
    if ( v21 )
    {
      v22 = v43;
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 1u, v9, 0x30u, &ValueCaps, &v41, v43);
      if ( SpecificValueCaps >= 0 )
      {
        *(_BYTE *)(a1 + 832) = ValueCaps.ReportID;
        v38 = HidP_GetSpecificValueCaps(HidP_Input, 0, v9, 0, v21, v35, v22);
        SpecificValueCaps = v38;
        if ( v38 >= 0 )
        {
          v23 = v35[0];
          v24 = 0;
          v25 = v43;
          if ( v35[0] )
          {
            v26 = v39;
            do
            {
              v27 = &v21[v24];
              if ( v27->ReportID == ValueCaps.ReportID )
              {
                if ( v26
                  || (*(_DWORD *)(a1 + 368) & 2) == 0
                  || (valid = IsValidParallelValue(a1, &v27->UsagePage, v25), v23 = v35[0], valid) )
                {
                  ++v8;
                }
              }
              ++v24;
            }
            while ( v24 < v23 );
            SpecificValueCaps = v38;
            v12 = v36;
          }
          if ( v39 )
          {
            v38 = HidP_GetSpecificValueCaps(HidP_Input, 0, v42, 0, &v21[v23], &v37, v25);
            SpecificValueCaps = v38;
            if ( v38 >= 0 )
            {
              v29 = 0;
              v30 = v35[0];
              if ( v37 )
              {
                v31 = v43;
                do
                {
                  if ( v30 >= v12 )
                    break;
                  v32 = &v21[v30];
                  if ( v32->ReportID == ValueCaps.ReportID
                    && ((*(_DWORD *)(a1 + 368) & 2) == 0 || (unsigned int)IsValidParallelValue(a1, &v32->UsagePage, v31)) )
                  {
                    ++v8;
                  }
                  ++v30;
                  ++v29;
                }
                while ( v29 < v37 );
                SpecificValueCaps = v38;
              }
            }
          }
          if ( v8 <= 1 )
          {
            v39 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2391LL);
          }
          *(_DWORD *)(a1 + 392) = v8;
        }
      }
      GreDeleteFastMutex((char *)v21);
    }
  }
  return SpecificValueCaps >= 0;
}
