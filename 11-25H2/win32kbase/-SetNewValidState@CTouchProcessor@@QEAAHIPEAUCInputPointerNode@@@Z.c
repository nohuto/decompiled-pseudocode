/*
 * XREFs of ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1402095AC
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1401FAC30 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1401FCAD0 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x14020CA8C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1400D901C (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     WPP_RECORDER_AND_TRACE_SF_HLL @ 0x1400FF42C (WPP_RECORDER_AND_TRACE_SF_HLL.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x14019F190 (WPP_RECORDER_AND_TRACE_SF_LL.c)
 */

_BOOL8 __fastcall CTouchProcessor::SetNewValidState(PERESOURCE *this, unsigned int a2, struct CInputPointerNode *a3)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rdx
  int v6; // r8d
  char v7; // bp
  char v8; // bl
  bool v9; // di
  __int64 UserSessionState; // rax
  int v11; // r8d
  char v12; // r12
  int v13; // edx
  BOOL v14; // esi
  int v15; // r14d
  bool v16; // zf
  char v17; // di
  bool v18; // r14
  int v19; // ebx
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  void *v23; // r8
  char v25; // r12
  bool v26; // r13
  int v27; // ebx
  __int16 v28; // di
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  int v34; // [rsp+20h] [rbp-78h]
  int v35; // [rsp+28h] [rbp-70h]
  int v36; // [rsp+30h] [rbp-68h]
  void *v37; // [rsp+38h] [rbp-60h]

  v4 = a2;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1674);
  v7 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
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
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  if ( (v4 & 0x70006) == 0x10006 )
  {
    v14 = *((_DWORD *)a3 + 14) <= 1u;
  }
  else
  {
    if ( (v4 & 0x70006) == 0x20000 )
    {
      v16 = *((_DWORD *)a3 + 14) == 1;
      v15 = 3;
LABEL_30:
      v14 = v16;
      goto LABEL_37;
    }
    if ( (v4 & 0x70006) == 0x20002 )
    {
      v15 = 1;
      v14 = *((_DWORD *)a3 + 14) <= 1u;
      goto LABEL_37;
    }
    if ( (v4 & 0x70006) != 0x20006 )
    {
      if ( (v4 & 0x70006) == 0x40000 )
      {
        v15 = 3;
      }
      else
      {
        if ( (v4 & 0x70006) != 0x40002 )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v8 = 0;
          }
          v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v12 = a2;
          }
          else
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
            LOBYTE(v11) = v9;
            v12 = a2;
            LOBYTE(v13) = v8;
            v37 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
            WPP_RECORDER_AND_TRACE_SF_L(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v13,
              v11,
              *(_QWORD *)(UserSessionState + 69144),
              2);
          }
          v14 = 0;
          goto LABEL_42;
        }
        v15 = 1;
      }
      v16 = *((_DWORD *)a3 + 14) == 2;
      goto LABEL_30;
    }
    v14 = *((_DWORD *)a3 + 14) == 2;
  }
  v15 = 2;
LABEL_37:
  if ( !v14 )
  {
LABEL_41:
    v12 = a2;
LABEL_42:
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v17 = 0;
    }
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = *((_DWORD *)a3 + 14);
      v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
      LOBYTE(v21) = v18;
      LOBYTE(v22) = v17;
      WPP_RECORDER_AND_TRACE_SF_LL(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(v20 + 69144),
        2,
        v35,
        59,
        (_DWORD)v37,
        v12,
        v19);
    }
    goto LABEL_49;
  }
  if ( (v4 & 4) != 0 )
  {
    if ( (v4 & 0x1F0) == 0 )
    {
      v14 = 0;
      goto LABEL_41;
    }
    v14 = 1;
  }
  if ( (*((_DWORD *)a3 + 75) & 8) != 0 )
  {
    v14 = (v4 & 0x8000) != 0;
    if ( (v4 & 0x8000) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1796);
      goto LABEL_41;
    }
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v25 = 0;
  }
  v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = *((_DWORD *)a3 + 14);
    v28 = *((_WORD *)a3 + 16);
    v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
    LOBYTE(v30) = v26;
    LOBYTE(v31) = v25;
    WPP_RECORDER_AND_TRACE_SF_HLL(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v31,
      v30,
      *(_QWORD *)(v29 + 69144),
      v34,
      v35,
      v36,
      (_DWORD)v37,
      v28,
      v27,
      v15);
    v4 = a2;
  }
  *((_DWORD *)a3 + 14) = v15;
  if ( v15 == 3 )
  {
    v32 = (_QWORD *)((char *)a3 + 16);
    v33 = *((_QWORD *)a3 + 2);
    if ( (struct CInputPointerNode *)v33 != (struct CInputPointerNode *)((char *)a3 + 16) )
    {
      if ( *(_QWORD **)(v33 + 8) != v32 || (v5 = (_QWORD *)*((_QWORD *)a3 + 3), (_QWORD *)*v5 != v32) )
        __fastfail(3u);
      *v5 = v33;
      *(_QWORD *)(v33 + 8) = v5;
      *((_QWORD *)a3 + 3) = (char *)a3 + 16;
      *v32 = v32;
    }
  }
  *((_DWORD *)a3 + 75) = *((_DWORD *)a3 + 75) & 0xFFFFFFF3 | ((v4 & 0x2000 | (v4 >> 1) & 0x4000) >> 11);
LABEL_49:
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v5) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v5) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v7 = 0;
  if ( (_BYTE)v5 || v7 )
  {
    v23 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
    LOBYTE(v23) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)v5,
      (_DWORD)v23,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      61,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  }
  return v14;
}
