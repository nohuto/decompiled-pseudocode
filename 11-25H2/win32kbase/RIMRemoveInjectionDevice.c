/*
 * XREFs of RIMRemoveInjectionDevice @ 0x1401DBD60
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1400339A4 (RIMIDERemoveInjectionDevice.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     RIMFreeDev @ 0x1401D5288 (RIMFreeDev.c)
 *     Feature_RIMPointerReliability__private_IsEnabledDeviceUsageNoInline @ 0x1401D7B64 (Feature_RIMPointerReliability__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RIMRemoveInjectionDevice(char *a1, char *a2)
{
  char v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rdx
  int v10; // esi
  PVOID v11; // rdi
  __int64 v12; // rbx
  char v13; // bl
  bool v14; // di
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  char v18; // bl
  bool v19; // di
  __int64 v20; // rax
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rdx
  HANDLE *v24; // rdi
  __int64 v25; // rdx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _DWORD *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  struct RIMDEV *v35; // rdx
  char v36; // r14
  bool v37; // r15
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  char v41; // bl
  bool v42; // r14
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  __int16 v47; // [rsp+30h] [rbp-58h]
  char v48; // [rsp+40h] [rbp-48h]
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF
  PVOID v50; // [rsp+A8h] [rbp+20h] BYREF

  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v4 = 0;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      50,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v50 = 0LL;
  Object = 0LL;
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    v10 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
    if ( v10 < 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v13 = 0;
      }
      v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
        LOBYTE(v16) = v14;
        LOBYTE(v17) = v13;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v17,
          v16,
          *(_QWORD *)(v15 + 19336),
          3,
          1,
          51,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
      }
    }
    else
    {
      v11 = Object;
      v12 = *((_QWORD *)Object + 49);
      RIMLockExclusive(v12 + 104);
      RIMIDERemoveInjectionDevice((__int64)v11);
      RIMUnlockExclusive(v12 + 104);
      ObfDereferenceObject(v11);
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v18 = 0;
    }
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
      v48 = v10;
      v47 = 52;
LABEL_63:
      LOBYTE(v22) = v19;
      LOBYTE(v21) = v18;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v22,
        *(_QWORD *)(v20 + 19336),
        4,
        1,
        v47,
        (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
        v48);
    }
  }
  else
  {
    v10 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &v50);
    if ( v10 >= 0 )
    {
      v24 = (HANDLE *)v50;
      RIMLockExclusive((__int64)v50 + 104);
      v10 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
      if ( v10 < 0 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v41 = 0;
        }
        v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v43 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
          LOBYTE(v44) = v42;
          LOBYTE(v45) = v41;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v45,
            v44,
            *(_QWORD *)(v43 + 19336),
            3,
            1,
            54,
            (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
        }
      }
      else
      {
        IsEnabledDeviceUsageNoInline = Feature_RIMPointerReliability__private_IsEnabledDeviceUsageNoInline();
        v29 = Object;
        if ( IsEnabledDeviceUsageNoInline )
        {
          RIMIDERemoveInjectionDevice((__int64)Object);
        }
        else if ( (v24[104] || *((_DWORD *)v24 + 264)) && v24[4] != (HANDLE)PsGetCurrentProcess(v28, v27) )
        {
          v29[60] |= 0x100000u;
          v31 = W32GetUserSessionState(v30, v27);
          RIMLockExclusive(v31 + 56);
          v29[64] |= 4u;
          v34 = W32GetUserSessionState(v33, v32);
          RIMUnlockExclusive(v34 + 56);
          if ( (v29[60] & 0x800000) != 0 )
          {
            LODWORD(Object) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1606);
          }
          v29[60] |= 0x800000u;
          ZwSetEvent(v24[43], 0LL);
          v10 = 0;
        }
        else if ( *((_BYTE *)v24 + 81) || *((_BYTE *)v24 + 82) )
        {
          v10 = -1073741637;
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v36 = 0;
          }
          v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v38 = W32GetUserSessionState(WPP_GLOBAL_Control, v27);
            LOBYTE(v39) = v37;
            LOBYTE(v40) = v36;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v40,
              v39,
              *(_QWORD *)(v38 + 19336),
              3,
              1,
              53,
              (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
          }
        }
        else
        {
          v35 = (struct RIMDEV *)(v29 + 18);
          if ( !v29 )
            v35 = 0LL;
          v10 = RIMFreeDev((struct RawInputManagerObject *)v24, v35);
        }
        ObfDereferenceObject(v29);
      }
      RIMUnlockExclusive((__int64)(v24 + 13));
      ObfDereferenceObject(v24);
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v18 = 0;
    }
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
      v48 = v10;
      v47 = 55;
      goto LABEL_63;
    }
  }
  return (unsigned int)v10;
}
