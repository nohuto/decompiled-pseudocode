/*
 * XREFs of RIMAreSiblingDevices @ 0x140200BE0
 * Callers:
 *     NtRIMAreSiblingDevices @ 0x1401FEFC0 (NtRIMAreSiblingDevices.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RIMAreSiblingDevices(char *a1, char *a2, BOOL *a3)
{
  bool v6; // bl
  bool v7; // di
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  unsigned int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // edx
  int v15; // r8d
  PVOID v16; // r15
  int v17; // ebp
  PVOID v18; // rsi
  const void *v19; // rcx
  BOOL v20; // r14d
  const void *v21; // rdx
  unsigned int v22; // eax
  int v23; // r8d
  bool v24; // bl
  bool v25; // si
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  PVOID v31; // [rsp+A8h] [rbp+20h] BYREF

  Object = 0LL;
  v31 = 0LL;
  v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, (_DWORD)a3);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      131,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v11 = 0;
  v12 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v13 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &v31);
  v16 = v31;
  v17 = v13;
  if ( v12 < 0 )
  {
    v11 = v12;
  }
  else
  {
    v18 = Object;
    if ( v13 < 0 )
    {
      v11 = v13;
    }
    else
    {
      v19 = (const void *)*((_QWORD *)Object + 47);
      v20 = 0;
      if ( v19 )
      {
        v21 = (const void *)*((_QWORD *)v31 + 47);
        if ( v21 )
        {
          v22 = *((_DWORD *)Object + 96);
          if ( v22 )
          {
            v23 = *((_DWORD *)v31 + 96);
            if ( v23 )
            {
              if ( v22 == v23 )
                v20 = RtlCompareMemory(v19, v21, v22) == v22;
            }
          }
        }
      }
      *a3 = v20;
    }
    ObfDereferenceObject(v18);
  }
  if ( v17 >= 0 )
    ObfDereferenceObject(v16);
  v24 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v14, v15);
    LOBYTE(v27) = v25;
    LOBYTE(v28) = v24;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v28,
      v27,
      *(_QWORD *)(v26 + 19368),
      4,
      1,
      132,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v11);
  }
  return v11;
}
