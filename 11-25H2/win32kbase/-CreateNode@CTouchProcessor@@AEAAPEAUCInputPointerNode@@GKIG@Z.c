/*
 * XREFs of ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1401FCAD0
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x14020CA8C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     isRootPartition @ 0x14005E028 (isRootPartition.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z @ 0x1402027A0 (-GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z.c)
 *     ?GetNextPointerId@CTouchProcessor@@AEAAGXZ @ 0x1402028B4 (-GetNextPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     ?GetNextRootPointerId@CTouchProcessor@@AEAAGXZ @ 0x140202950 (-GetNextRootPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1402095AC (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 */

struct CInputPointerNode *__fastcall CTouchProcessor::CreateNode(
        PERESOURCE *this,
        __int16 a2,
        int a3,
        unsigned int a4,
        unsigned __int16 a5)
{
  int v6; // ebp
  __int16 v7; // r14
  char v9; // bl
  __int64 v10; // rdx
  void *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdi
  char v14; // di
  bool v15; // si
  __int64 v16; // rax
  int v17; // r8d
  __int16 v18; // dx
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int16 NextRootPointerId; // ax
  _QWORD *v23; // r14
  unsigned int v24; // eax
  __int16 v25; // dx
  __int64 v26; // rdx
  char v27; // si
  bool v28; // bp
  __int64 v29; // rax
  int v30; // r8d
  __int16 v31; // dx
  __int64 *v32; // rax
  PERESOURCE v33; // rcx
  char *v34; // rsi
  __int64 v35; // rax
  void *v36; // r8
  char v38; // di
  bool v39; // si
  __int64 UserSessionState; // rax
  int v41; // r8d
  int v42; // edx
  __int16 v43; // [rsp+30h] [rbp-48h]

  v6 = a3;
  v7 = a2;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
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
      a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      233,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8673);
  if ( v6 == 1 || v6 != 2 && v6 != 3 && v6 != 5 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v38 = 0;
    }
    v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v41) = v39;
      LOBYTE(v42) = v38;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v42,
        v41,
        *(_QWORD *)(UserSessionState + 69144),
        2,
        4,
        234,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids,
        v6);
    }
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v43 = 235;
    goto LABEL_91;
  }
  v13 = Win32AllocPoolZInitImpl(256LL, 0x130uLL, 0x70697355u);
  if ( !v13 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v14 = 0;
    }
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(v16 + 69144),
        2,
        4,
        236,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v43 = 237;
LABEL_91:
    LOBYTE(v11) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      v19[3],
      (_WORD)v10,
      (_DWORD)v11,
      v19[8],
      5,
      4,
      v43,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    return 0LL;
  }
  if ( isRootPartition(v12, v10) )
  {
    NextRootPointerId = CTouchProcessor::GetNextRootPointerId((CTouchProcessor *)this);
  }
  else if ( isChildPartition(v21, v20) )
  {
    NextRootPointerId = CTouchProcessor::GetNextChildPointerId((CTouchProcessor *)this, a5);
  }
  else
  {
    NextRootPointerId = CTouchProcessor::GetNextPointerId((CTouchProcessor *)this);
  }
  *(_WORD *)(v13 + 32) = NextRootPointerId;
  *(_WORD *)(v13 + 34) = v7;
  *(_QWORD *)(v13 + 264) = v13 + 256;
  v23 = (_QWORD *)(v13 + 16);
  *(_QWORD *)(v13 + 256) = v13 + 256;
  *(_QWORD *)(v13 + 8) = v13;
  *(_QWORD *)(v13 + 248) = v13 + 240;
  *(_QWORD *)(v13 + 240) = v13 + 240;
  *(_QWORD *)(v13 + 288) = v13 + 280;
  *(_QWORD *)(v13 + 280) = v13 + 280;
  v24 = *(_DWORD *)(v13 + 300) & 0xFFFFE97F;
  *(_QWORD *)v13 = v13;
  *(_QWORD *)(v13 + 24) = v13 + 16;
  *(_QWORD *)(v13 + 16) = v13 + 16;
  *(_DWORD *)(v13 + 300) = v24 | 0x900;
  *(_DWORD *)(v13 + 60) = v6;
  *(_WORD *)(v13 + 272) = 0;
  *(_DWORD *)(v13 + 56) = 0;
  if ( !(unsigned int)CTouchProcessor::SetNewValidState((CTouchProcessor *)this, a4, (struct CInputPointerNode *)v13) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8733);
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v27 = 0;
    }
    v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v30,
        *(_QWORD *)(v29 + 69144),
        2,
        4,
        238,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    GreDeleteFastMutex((char *)v13);
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v11 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
    v43 = 239;
    goto LABEL_91;
  }
  if ( *(_DWORD *)(v13 + 56) == 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8742);
  v32 = (__int64 *)(this + 8);
  v33 = this[8];
  if ( (PERESOURCE *)v33->SystemResourcesList.Blink != this + 8
    || (*(_QWORD *)v13 = v33,
        v34 = (char *)(this + 10),
        *(_QWORD *)(v13 + 8) = v32,
        v33->SystemResourcesList.Blink = (struct _LIST_ENTRY *)v13,
        *v32 = v13,
        v35 = *(_QWORD *)v34,
        *(char **)(*(_QWORD *)v34 + 8LL) != v34) )
  {
    __fastfail(3u);
  }
  *v23 = v35;
  *(_QWORD *)(v13 + 24) = v34;
  *(_QWORD *)(v35 + 8) = v23;
  *(_QWORD *)v34 = v23;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v25) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v25) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v9 = 0;
  if ( (_BYTE)v25 || v9 )
  {
    v36 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
    LOBYTE(v36) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v25,
      (_DWORD)v36,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      240,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  }
  return (struct CInputPointerNode *)v13;
}
