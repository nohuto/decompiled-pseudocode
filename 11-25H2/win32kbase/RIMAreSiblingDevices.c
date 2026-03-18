/*
 * XREFs of RIMAreSiblingDevices @ 0x1401DA140
 * Callers:
 *     NtRIMAreSiblingDevices @ 0x1401D7E20 (NtRIMAreSiblingDevices.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall RIMAreSiblingDevices(char *a1, char *a2, _DWORD *a3, int a4)
{
  bool v7; // bl
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  unsigned int v12; // r14d
  int v13; // r15d
  int v14; // eax
  const void *v15; // rdx
  int v16; // r12d
  PVOID v17; // rsi
  const void *v18; // rcx
  unsigned int v19; // eax
  int v20; // r9d
  bool v21; // bl
  bool v22; // si
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  _DWORD Src[4]; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+60h] [rbp-28h] BYREF
  PVOID v29; // [rsp+68h] [rbp-20h] BYREF

  Object = 0LL;
  v29 = 0LL;
  v7 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, a2);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      132,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v12 = 0;
  v13 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  Src[1] = v13;
  v14 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &v29);
  v16 = v14;
  Src[2] = v14;
  if ( v13 < 0 || v14 < 0 )
  {
    v12 = v14;
    if ( v13 < 0 )
      v12 = v13;
    v17 = Object;
  }
  else
  {
    Src[0] = 0;
    v17 = Object;
    v18 = (const void *)*((_QWORD *)Object + 47);
    if ( v18 )
    {
      v15 = (const void *)*((_QWORD *)v29 + 47);
      if ( v15 )
      {
        v19 = *((_DWORD *)Object + 96);
        if ( v19 )
        {
          v20 = *((_DWORD *)v29 + 96);
          if ( v20 )
          {
            if ( v19 == v20 )
              Src[0] = RtlCompareMemory(v18, v15, v19) == v19;
          }
        }
      }
    }
    if ( a4 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      RtlCopyVolatileMemory(a3, Src, 4uLL);
    }
    else
    {
      *a3 = Src[0];
    }
  }
  if ( v13 >= 0 )
    ObfDereferenceObject(v17);
  if ( v16 >= 0 )
    ObfDereferenceObject(v29);
  v21 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v15);
    LOBYTE(v24) = v22;
    LOBYTE(v25) = v21;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v25,
      v24,
      *(_QWORD *)(v23 + 19336),
      4,
      1,
      133,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v12);
  }
  return v12;
}
