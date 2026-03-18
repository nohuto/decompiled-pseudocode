/*
 * XREFs of ?SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z @ 0x14004EA24
 * Callers:
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x14004E830 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x14004F200 (IsPointerInputMessageWithState.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140050B68 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x14006BE60 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInfoNodeMessagePosted(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  unsigned int v5; // ebp
  __int64 v6; // rsi
  char v8; // di
  int v9; // edx
  int v10; // r8d
  const struct CPointerInputFrame *FrameById; // rax
  CTouchProcessor *v12; // rcx
  const struct CPointerInputFrame *v13; // r15
  int v14; // edx
  struct CPointerInfoNode *v15; // rbx
  int v16; // r8d
  int v17; // eax
  unsigned int v18; // eax
  int v19; // ecx
  int v21; // eax
  int v22; // ebp
  int v23; // esi
  int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  int v28; // eax
  CTouchProcessor *v29; // rcx
  int v30; // eax
  __int16 v31; // [rsp+30h] [rbp-38h]

  v5 = a3;
  v6 = a2;
  v8 = 1;
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
      229,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  if ( !(unsigned int)IsPointerInputMessageWithState(v5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7642LL);
  if ( !v6 )
  {
    v29 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v8 = 0;
    if ( !(_BYTE)v9 && !v8 )
      return 0LL;
    v31 = 230;
    goto LABEL_106;
  }
  if ( (*(_DWORD *)(v6 + 36) & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 10641LL);
  FrameById = (const struct CPointerInputFrame *)CTouchProcessor::FindFrameById(this, *(unsigned int *)(v6 + 28), 4LL);
  v13 = FrameById;
  if ( !FrameById )
  {
    v29 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v8 = 0;
    if ( !(_BYTE)v9 && !v8 )
      return 0LL;
    v31 = 231;
LABEL_106:
    LOBYTE(v10) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v29 + 3),
      v9,
      v10,
      *((_QWORD *)v29 + 8),
      5,
      4,
      v31,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    return 0LL;
  }
  v15 = CTouchProcessor::LookupNode(v12, FrameById, *(_DWORD *)(v6 + 32));
  if ( *((_WORD *)v15 + 86) != *(_WORD *)(v6 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7659LL);
  if ( *((_DWORD *)v15 + 2) >= *((_DWORD *)v13 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7660LL);
  if ( v5 == 585 )
  {
    if ( (*(_DWORD *)v15 & 8) == 0 && (*(_DWORD *)v15 & 0x40) == 0 && (*((_DWORD *)v15 + 45) & 1) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7672LL);
    v21 = *(_DWORD *)v15;
    v22 = 0x800000;
    v23 = 0x1000000;
    if ( (*(_DWORD *)v15 & 0x800000) != 0 || (v21 & 0x1000000) != 0 || (v21 & 0x4000000) != 0 || (v21 & 0x2000000) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7677LL);
    v24 = a4 << 24;
    v25 = *(_DWORD *)v15 & 0xFEFFFFFF;
  }
  else
  {
    if ( v5 != 586 )
    {
      if ( v5 == 593 )
      {
        if ( (*(_DWORD *)v15 & 0x40) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7697LL);
        if ( *(int *)v15 < 0 || (v30 = *((_DWORD *)v15 + 1), (v30 & 1) != 0) || (v30 & 4) != 0 || (v30 & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7702LL);
        *(_DWORD *)v15 |= 0x80000000;
        v26 = a4 ^ (*((_DWORD *)v15 + 1) ^ a4) & 0xFFFFFFFE;
      }
      else
      {
        if ( v5 != 594 )
        {
          v17 = *(_DWORD *)v15;
          if ( (*(_DWORD *)v15 & 0x80000) != 0 || (v17 & 0x400000) != 0 || (v17 & 0x200000) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7723LL);
          v18 = *(_DWORD *)v15 & 0xFFE7FFFF | 0x80000;
          v19 = (a4 << 20) & 0x100000;
          goto LABEL_25;
        }
        v27 = *((_DWORD *)v15 + 1);
        if ( (v27 & 8) != 0 || (v27 & 0x10) != 0 || (v27 & 0x40) != 0 || (v27 & 0x20) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7714LL);
        v26 = (16 * (_BYTE)a4) & 0x10 ^ (*((_DWORD *)v15 + 1) & 0xFFFFFFE7 | 8);
      }
      *((_DWORD *)v15 + 1) = v26;
      goto LABEL_26;
    }
    v28 = *(_DWORD *)v15;
    v22 = 0x8000000;
    v23 = 0x10000000;
    if ( (*(_DWORD *)v15 & 0x8000000) != 0
      || (v28 & 0x10000000) != 0
      || (v28 & 0x40000000) != 0
      || (v28 & 0x20000000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7690LL);
    }
    v24 = a4 << 28;
    v25 = *(_DWORD *)v15 & 0xEFFFFFFF;
  }
  v18 = v22 | v25;
  v19 = v23 & v24;
LABEL_25:
  *(_DWORD *)v15 = v19 ^ v18;
LABEL_26:
  if ( a4 )
    *(_DWORD *)(160LL * *((unsigned int *)v15 + 2) + *((_QWORD *)v13 + 31) + 140) |= 8u;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v14) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v16) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v16) = 0;
  }
  if ( (_BYTE)v14 || (_BYTE)v16 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v16,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      232,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  return 1LL;
}
