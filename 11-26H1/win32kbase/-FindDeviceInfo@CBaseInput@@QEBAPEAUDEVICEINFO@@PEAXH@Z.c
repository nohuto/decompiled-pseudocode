/*
 * XREFs of ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1400D3370
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1400D3070 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1400D51D0 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1401627B0 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1401892E0 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

struct DEVICEINFO *__fastcall CBaseInput::FindDeviceInfo(CBaseInput *this, char *a2, int a3)
{
  int v3; // esi
  __int64 v4; // r15
  char *v5; // rbx
  char v7; // di
  int v8; // edx
  int v9; // r8d
  PVOID v10; // rsi
  char *v11; // rbp
  __int64 v12; // rbx
  __int64 i; // rcx
  char v15; // bl
  bool v16; // si
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  v3 = a3;
  v4 = 0LL;
  Object = 0LL;
  v5 = a2;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      17,
      (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids);
  if ( v5 == (char *)-1LL )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v15 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)a2, a3);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(UserSessionState + 69136),
        2,
        2,
        18,
        (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( (_BYTE)a2 || v7 )
    {
      LOBYTE(a3) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        (_DWORD)a2,
        a3,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        2,
        19,
        (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids);
    }
    return 0LL;
  }
  else
  {
    if ( (int)RawInputManagerDeviceObjectResolveHandle(v5, 3u, v3 == 0, &Object) >= 0 )
    {
      v10 = Object;
      v11 = (char *)Object + 72;
      if ( !Object )
        v11 = 0LL;
      v12 = *((_QWORD *)this + 154);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v12, 0LL);
      for ( i = **((_QWORD **)this + 155); i; i = *(_QWORD *)(i + 56) )
      {
        if ( (char *)i == v11 )
        {
          v4 = i;
          break;
        }
      }
      ObfDereferenceObject(v10);
      ExReleasePushLockSharedEx(v12, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (LOBYTE(v8) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( (_BYTE)v8 || v7 )
    {
      LOBYTE(v9) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v9,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        2,
        20,
        (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids);
    }
    return (struct DEVICEINFO *)v4;
  }
}
