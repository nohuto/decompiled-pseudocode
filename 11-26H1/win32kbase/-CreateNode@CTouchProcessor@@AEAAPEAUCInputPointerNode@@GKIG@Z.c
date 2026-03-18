/*
 * XREFs of ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x14010CBE8
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIG@Z @ 0x14010C4A8 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x14004E2F4 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isRootPartition @ 0x14009C868 (isRootPartition.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?GetNextPointerId@CTouchProcessor@@AEAAGXZ @ 0x14010D268 (-GetNextPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetNextRootPointerId@CTouchProcessor@@AEAAGXZ @ 0x1401BB390 (-GetNextRootPointerId@CTouchProcessor@@AEAAGXZ.c)
 *     ?GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z @ 0x140215730 (-GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z.c)
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
  int v10; // edx
  void *v11; // r8
  int v12; // ecx
  __int64 v13; // rdi
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  unsigned __int16 NextRootPointerId; // ax
  _QWORD *v18; // r14
  unsigned int v19; // eax
  __int16 v20; // dx
  __int64 *v21; // rax
  PERESOURCE v22; // rcx
  char *v23; // rsi
  __int64 v24; // rax
  char v26; // di
  bool v27; // si
  CTouchProcessor *v28; // rcx
  char v29; // di
  bool v30; // si
  __int64 v31; // rax
  int v32; // r8d
  __int16 v33; // dx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  char v37; // si
  bool v38; // bp
  __int64 v39; // rax
  int v40; // r8d
  __int16 v41; // dx
  void *v42; // r8
  __int64 UserSessionState; // rax
  int v44; // r8d
  int v45; // edx
  __int16 v46; // [rsp+30h] [rbp-48h]

  v6 = a3;
  v7 = a2;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
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
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8656LL);
  if ( v6 == 1 || v6 != 2 && v6 != 3 && v6 != 5 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v26 = 0;
    }
    v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, (_DWORD)v11);
      LOBYTE(v44) = v27;
      LOBYTE(v45) = v26;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v45,
        v44,
        *(_QWORD *)(UserSessionState + 69136),
        2,
        4,
        234,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids,
        v6);
    }
    v28 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v46 = 235;
    goto LABEL_99;
  }
  v13 = Win32AllocPoolZInitImpl(256LL, 0x130uLL, 0x70697355u);
  if ( !v13 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v29 = 0;
    }
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, (_DWORD)v11);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v29;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v32,
        *(_QWORD *)(v31 + 69136),
        2,
        4,
        236,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    v28 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v46 = 237;
    goto LABEL_99;
  }
  if ( isRootPartition(v12, v10, (int)v11) )
  {
    NextRootPointerId = CTouchProcessor::GetNextRootPointerId((CTouchProcessor *)this);
  }
  else if ( isChildPartition(v15, v14, v16) )
  {
    NextRootPointerId = CTouchProcessor::GetNextChildPointerId((CTouchProcessor *)this, a5);
  }
  else
  {
    NextRootPointerId = CTouchProcessor::GetNextPointerId((CTouchProcessor *)this);
  }
  *(_WORD *)(v13 + 32) = NextRootPointerId;
  *(_WORD *)(v13 + 34) = v7;
  *(_DWORD *)(v13 + 60) = v6;
  v18 = (_QWORD *)(v13 + 16);
  *(_QWORD *)(v13 + 264) = v13 + 256;
  *(_QWORD *)(v13 + 256) = v13 + 256;
  *(_QWORD *)(v13 + 248) = v13 + 240;
  *(_QWORD *)(v13 + 240) = v13 + 240;
  *(_QWORD *)(v13 + 288) = v13 + 280;
  *(_QWORD *)(v13 + 280) = v13 + 280;
  *(_QWORD *)(v13 + 8) = v13;
  *(_QWORD *)v13 = v13;
  *(_QWORD *)(v13 + 24) = v13 + 16;
  *(_QWORD *)(v13 + 16) = v13 + 16;
  v19 = *(_DWORD *)(v13 + 300) & 0xFFFFE97F;
  *(_WORD *)(v13 + 272) = 0;
  *(_DWORD *)(v13 + 56) = 0;
  *(_DWORD *)(v13 + 300) = v19 | 0x900;
  if ( !CTouchProcessor::SetNewValidState(this, a4, (struct CInputPointerNode *)v13) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8716LL);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v37 = 0;
    }
    v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v39 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v34, v35);
      LOBYTE(v40) = v38;
      LOBYTE(v41) = v37;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v41,
        v40,
        *(_QWORD *)(v39 + 69136),
        2,
        4,
        238,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    GreDeleteFastMutex((char *)v13, v34, v35, v36);
    v28 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v10 && !v9 )
      return 0LL;
    v11 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    v46 = 239;
LABEL_99:
    LOBYTE(v11) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v28 + 3),
      (_WORD)v10,
      (_DWORD)v11,
      *((_QWORD *)v28 + 8),
      5,
      4,
      v46,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    return 0LL;
  }
  if ( *(_DWORD *)(v13 + 56) == 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8725LL);
  v21 = (__int64 *)(this + 8);
  v22 = this[8];
  if ( (PERESOURCE *)v22->SystemResourcesList.Blink != this + 8
    || (*(_QWORD *)v13 = v22,
        v23 = (char *)(this + 10),
        *(_QWORD *)(v13 + 8) = v21,
        v22->SystemResourcesList.Blink = (struct _LIST_ENTRY *)v13,
        *v21 = v13,
        v24 = *(_QWORD *)v23,
        *(char **)(*(_QWORD *)v23 + 8LL) != v23) )
  {
    __fastfail(3u);
  }
  *v18 = v24;
  *(_QWORD *)(v13 + 24) = v23;
  *(_QWORD *)(v24 + 8) = v18;
  *(_QWORD *)v23 = v18;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v20) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v20) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v9 = 0;
  if ( (_BYTE)v20 || v9 )
  {
    v42 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    LOBYTE(v42) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      (_DWORD)v42,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      240,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
  return (struct CInputPointerNode *)v13;
}
