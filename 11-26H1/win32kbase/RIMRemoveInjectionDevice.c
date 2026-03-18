/*
 * XREFs of RIMRemoveInjectionDevice @ 0x1402023F0
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RIMIDERemoveInjectionDevice @ 0x14005A710 (RIMIDERemoveInjectionDevice.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RIMRemoveInjectionDevice(char *a1, char *a2)
{
  bool v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  int v9; // edx
  int v10; // esi
  int v11; // r8d
  PVOID v12; // rdi
  __int64 v13; // rbx
  bool v14; // di
  bool v15; // bp
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  bool v19; // bl
  bool v20; // di
  __int64 v21; // rax
  int v22; // edx
  int v23; // r8d
  int v24; // edx
  int v25; // r8d
  PVOID v26; // r14
  int v27; // edx
  int v28; // r8d
  bool v29; // di
  bool v30; // bp
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  __int16 v35; // [rsp+30h] [rbp-58h]
  char v36; // [rsp+40h] [rbp-48h]
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF
  PVOID v38; // [rsp+A8h] [rbp+20h] BYREF

  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, (_DWORD)WPP_GLOBAL_Control);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      50,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v38 = 0LL;
  Object = 0LL;
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    v10 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
    if ( v10 < 0 )
    {
      v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v11);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v18,
          v17,
          *(_QWORD *)(v16 + 19368),
          3,
          1,
          51,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
      }
    }
    else
    {
      v12 = Object;
      v13 = *((_QWORD *)Object + 49);
      RIMLockExclusive(v13 + 104);
      RIMIDERemoveInjectionDevice((__int64)v12);
      RIMUnlockExclusive(v13 + 104);
      ObfDereferenceObject(v12);
    }
    v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v11);
      v36 = v10;
      v35 = 52;
LABEL_48:
      LOBYTE(v23) = v20;
      LOBYTE(v22) = v19;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v23,
        *(_QWORD *)(v21 + 19368),
        4,
        1,
        v35,
        (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
        v36);
    }
  }
  else
  {
    v10 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &v38);
    if ( v10 >= 0 )
    {
      v26 = v38;
      RIMLockExclusive((__int64)v38 + 104);
      v10 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
      if ( v10 < 0 )
      {
        v29 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v31 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v27, v28);
          LOBYTE(v32) = v30;
          LOBYTE(v33) = v29;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v33,
            v32,
            *(_QWORD *)(v31 + 19368),
            3,
            1,
            53,
            (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
        }
      }
      else
      {
        RIMIDERemoveInjectionDevice((__int64)Object);
        ObfDereferenceObject(Object);
      }
      RIMUnlockExclusive((__int64)v26 + 104);
      ObfDereferenceObject(v26);
    }
    v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v24, v25);
      v36 = v10;
      v35 = 54;
      goto LABEL_48;
    }
  }
  return (unsigned int)v10;
}
