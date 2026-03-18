/*
 * XREFs of RIMInjectInput @ 0x14019AE50
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall RIMInjectInput(char *a1, char *a2, int a3, char *a4, unsigned int Size)
{
  char v7; // si
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  int v12; // edx
  int v13; // r8d
  int v14; // r14d
  struct RawInputManagerObject *v15; // r15
  int v16; // edx
  int v17; // r8d
  int v18; // edx
  int v19; // r8d
  PVOID v20; // r13
  char *v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rax
  char *v24; // rcx
  void *v25; // r9
  char v26; // si
  bool v27; // r12
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  char v31; // si
  bool v32; // r12
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  char v36; // si
  bool v37; // r15
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  PVOID v42; // [rsp+50h] [rbp-58h] BYREF
  PVOID Object[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v44; // [rsp+68h] [rbp-40h]
  __int64 v45; // [rsp+70h] [rbp-38h]

  v42 = 0LL;
  Object[0] = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, (_DWORD)a2, a3);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      91,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v14 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &v42);
  if ( v14 >= 0 )
  {
    v15 = (struct RawInputManagerObject *)v42;
    v45 = (__int64)v42 + 104;
    RIMLockExclusive((__int64)v42 + 104);
    if ( *((_BYTE *)v15 + 81) || *((_BYTE *)v15 + 82) )
    {
      v14 = -1073741637;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v31 = 0;
      }
      v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v33 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v16, v17);
        LOBYTE(v34) = v32;
        LOBYTE(v35) = v31;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v35,
          v34,
          *(_QWORD *)(v33 + 19368),
          3,
          1,
          94,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
      }
    }
    else
    {
      v14 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, Object);
      if ( v14 >= 0 )
      {
        v20 = Object[0];
        v21 = (char *)Object[0] + 72;
        if ( !Object[0] )
          v21 = 0LL;
        Object[1] = v21;
        if ( (*((_DWORD *)v21 + 42) & 0x2000) != 0 )
        {
          v44 = (__int64)v15 + 760;
          RIMLockExclusive((__int64)v15 + 760);
          *((_DWORD *)v21 + 60) = 0;
          v22 = *((_QWORD *)v21 + 55);
          v23 = *(unsigned __int16 *)(v22 + 44);
          if ( Size < (unsigned int)v23 )
            v23 = Size;
          *((_QWORD *)v21 + 31) = (unsigned int)v23;
          if ( a3 )
          {
            v25 = *(void **)(v22 + 24);
            if ( &a4[v23] < a4 || (unsigned __int64)&a4[v23] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            RtlCopyVolatileMemory(v25, a4, (unsigned int)v23);
          }
          else
          {
            v24 = *(char **)(v22 + 24);
            if ( a4 != v24 )
              memmove(v24, a4, (unsigned int)v23);
          }
          rimProcessDeviceBufferAndStartRead(v15, (struct RIMDEV *)v21, 1);
          RIMUnlockExclusive(v44);
        }
        else
        {
          v14 = -1073741811;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v26 = 0;
          }
          v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v28 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v18, v19);
            LOBYTE(v29) = v27;
            LOBYTE(v30) = v26;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v30,
              v29,
              *(_QWORD *)(v28 + 19368),
              3,
              1,
              93,
              (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
          }
        }
        ObfDereferenceObject(v20);
      }
    }
    RIMUnlockExclusive(v45);
    ObfDereferenceObject(v15);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v36 = 0;
  }
  v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v38 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v12, v13);
    LOBYTE(v39) = v37;
    LOBYTE(v40) = v36;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v40,
      v39,
      *(_QWORD *)(v38 + 19368),
      4,
      1,
      95,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v14);
  }
  return (unsigned int)v14;
}
