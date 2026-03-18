/*
 * XREFs of ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x14020DC04
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x14020CA8C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     PtInRect @ 0x1400DCE04 (PtInRect.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x140205AD4 (-PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z.c)
 */

void __fastcall CTouchProcessor::UpdateStateIndicator(
        PERESOURCE *this,
        struct CInputPointerNode *a2,
        int a3,
        __int64 a4,
        struct tagPOINT a5)
{
  LONG y; // edx
  int v10; // r8d
  char v11; // bl
  int v12; // r8d
  bool v13; // zf
  void *v14; // r8
  _QWORD *v15; // rcx
  int v16; // r9d
  __int16 v17; // [rsp+30h] [rbp-28h]

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1862);
  v11 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(y) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(y) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v10) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)y || (_BYTE)v10 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      y,
      v10,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      62,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  v12 = *((_DWORD *)a2 + 75);
  if ( (a3 & 0x10000) != 0 )
  {
    y = a5.y;
    v13 = *((_DWORD *)a2 + 15) == 3;
    *((_DWORD *)a2 + 75) = v12 & 0xFFFFFFFC;
    *((_QWORD *)a2 + 26) = a4;
    LODWORD(v14) = 300;
    if ( !v13 )
      LODWORD(v14) = 270;
    *((_DWORD *)a2 + 54) = a5.x - (_DWORD)v14;
    *((_DWORD *)a2 + 55) = a5.y - (_DWORD)v14;
    *((_DWORD *)a2 + 56) = (_DWORD)v14 + a5.x;
    *((_DWORD *)a2 + 57) = (_DWORD)v14 + a5.y;
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(y) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(y) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v11 = 0;
    if ( (_BYTE)y || v11 )
    {
      v17 = 63;
LABEL_54:
      LOBYTE(v14) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        v15[3],
        y,
        (_DWORD)v14,
        v15[8],
        5,
        4,
        v17,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
  }
  else if ( (a3 & 0x40004) != 0 )
  {
    LOBYTE(v16) = *((_DWORD *)a2 + 75);
    if ( (v12 & 2) == 0 && !PtInRect((_DWORD *)a2 + 54, *(_QWORD *)&a5) )
    {
      v16 |= 2u;
      *((_DWORD *)a2 + 75) = v16;
    }
    if ( (v16 & 2) == 0
      && (v16 & 1) == 0
      && CTouchProcessor::PassedHoldTime(this, *((_DWORD *)a2 + 15), *((_QWORD *)a2 + 26), a4).LowPart )
    {
      *((_DWORD *)a2 + 75) |= 1u;
    }
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(y) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(y) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v11 = 0;
    if ( (_BYTE)y || v11 )
    {
      v14 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
      v17 = 65;
      goto LABEL_54;
    }
  }
  else
  {
    LODWORD(v14) = v12 & 0xFFFFFFFC;
    *((_QWORD *)a2 + 26) = 0LL;
    *((_DWORD *)a2 + 75) = (_DWORD)v14;
    *(_OWORD *)((char *)a2 + 216) = 0LL;
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(y) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(y) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v11 = 0;
    if ( (_BYTE)y || v11 )
    {
      v17 = 64;
      goto LABEL_54;
    }
  }
}
