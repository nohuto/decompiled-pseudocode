/*
 * XREFs of ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x14004E2F4
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIG@Z @ 0x14010C4A8 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x14010CBE8 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z @ 0x140213994 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x140122850 (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     WPP_RECORDER_AND_TRACE_SF_HLL @ 0x140140DC0 (WPP_RECORDER_AND_TRACE_SF_HLL.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1401BEF5C (WPP_RECORDER_AND_TRACE_SF_LL.c)
 */

_BOOL8 __fastcall CTouchProcessor::SetNewValidState(PERESOURCE *this, unsigned int a2, struct CInputPointerNode *a3)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rdx
  int v6; // r8d
  char v7; // bp
  BOOL v8; // esi
  int v9; // r14d
  char v10; // r12
  char v11; // di
  bool v12; // r14
  int v13; // ebx
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  char v17; // r12
  bool v18; // r13
  int v19; // ebx
  __int16 v20; // di
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  int v25; // eax
  bool v26; // zf
  _QWORD *v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  char v30; // bl
  bool v31; // di
  __int64 UserSessionState; // rax
  int v33; // r8d
  int v34; // edx
  void *v35; // r8
  int v36; // [rsp+20h] [rbp-78h]
  int v37; // [rsp+28h] [rbp-70h]
  int v38; // [rsp+30h] [rbp-68h]
  int v39; // [rsp+38h] [rbp-60h]

  v4 = a2;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1661LL);
  v7 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v5) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v5) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v6) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v6) = 0;
  }
  if ( (_BYTE)v5 || (_BYTE)v6 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)v5,
      v6,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      57,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  if ( (v4 & 0x70006) == 0x10006 )
  {
    v29 = *((_DWORD *)a3 + 14);
    if ( v29 == 1 || (v8 = 0, !v29) )
      v8 = 1;
    goto LABEL_15;
  }
  if ( (v4 & 0x70006) == 0x20000 )
  {
    v26 = *((_DWORD *)a3 + 14) == 1;
    v9 = 3;
LABEL_57:
    v8 = v26;
    goto LABEL_16;
  }
  if ( (v4 & 0x70006) != 0x20002 )
  {
    switch ( v4 & 0x70006 )
    {
      case 0x20006u:
        v8 = *((_DWORD *)a3 + 14) == 2;
LABEL_15:
        v9 = 2;
        goto LABEL_16;
      case 0x40000u:
        v9 = 3;
        break;
      case 0x40002u:
        v9 = 1;
        break;
      default:
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v30 = 0;
        }
        v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v5, v6);
          LOBYTE(v33) = v31;
          v10 = a2;
          LOBYTE(v34) = v30;
          WPP_RECORDER_AND_TRACE_SF_L(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v34,
            v33,
            *(_QWORD *)(UserSessionState + 69136),
            2,
            v37,
            58,
            (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids,
            a2);
        }
        else
        {
          v10 = a2;
        }
        v8 = 0;
        goto LABEL_18;
    }
    v26 = *((_DWORD *)a3 + 14) == 2;
    goto LABEL_57;
  }
  v25 = *((_DWORD *)a3 + 14);
  if ( v25 == 1 || (v8 = 0, !v25) )
    v8 = 1;
  v9 = 1;
LABEL_16:
  if ( !v8 )
  {
LABEL_17:
    v10 = a2;
LABEL_18:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v11 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = *((_DWORD *)a3 + 14);
      v14 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v5, v6);
      LOBYTE(v15) = v12;
      LOBYTE(v16) = v11;
      WPP_RECORDER_AND_TRACE_SF_LL(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(v14 + 69136),
        2,
        v37,
        59,
        v39,
        v10,
        v13);
    }
    goto LABEL_39;
  }
  if ( (v4 & 4) == 0 || (v8 = (v4 & 0x1F0) != 0) )
  {
    if ( (*((_DWORD *)a3 + 75) & 8) == 0 )
      goto LABEL_31;
    v8 = (v4 & 0x8000) != 0;
    if ( (v4 & 0x8000) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1783LL);
  }
  if ( !v8 )
    goto LABEL_17;
LABEL_31:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v17 = 0;
  }
  v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = *((_DWORD *)a3 + 14);
    v20 = *((_WORD *)a3 + 16);
    v21 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v5, v6);
    LOBYTE(v22) = v18;
    LOBYTE(v23) = v17;
    WPP_RECORDER_AND_TRACE_SF_HLL(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      v22,
      *(_QWORD *)(v21 + 69136),
      v36,
      v37,
      v38,
      v39,
      v20,
      v19,
      v9);
    v4 = a2;
  }
  *((_DWORD *)a3 + 14) = v9;
  if ( v9 == 3 )
  {
    v27 = (_QWORD *)((char *)a3 + 16);
    v28 = *((_QWORD *)a3 + 2);
    if ( (struct CInputPointerNode *)v28 != (struct CInputPointerNode *)((char *)a3 + 16) )
    {
      if ( *(_QWORD **)(v28 + 8) != v27 || (v5 = (_QWORD *)*((_QWORD *)a3 + 3), (_QWORD *)*v5 != v27) )
        __fastfail(3u);
      *v5 = v28;
      *(_QWORD *)(v28 + 8) = v5;
      *((_QWORD *)a3 + 3) = (char *)a3 + 16;
      *v27 = v27;
    }
  }
  *((_DWORD *)a3 + 75) = *((_DWORD *)a3 + 75) & 0xFFFFFFF3 | ((v4 & 0x2000 | (v4 >> 1) & 0x4000) >> 11);
LABEL_39:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v5) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v5) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v7 = 0;
  if ( (_BYTE)v5 || v7 )
  {
    v35 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    LOBYTE(v35) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)v5,
      (_DWORD)v35,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      61,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
  return v8;
}
