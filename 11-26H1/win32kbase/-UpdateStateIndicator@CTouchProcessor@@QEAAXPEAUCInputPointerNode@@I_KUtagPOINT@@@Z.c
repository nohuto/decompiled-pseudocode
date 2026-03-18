/*
 * XREFs of ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x14010D6C0
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIG@Z @ 0x14010C4A8 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     PtInRect @ 0x14010DA60 (PtInRect.c)
 *     ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x14010DA88 (-PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateStateIndicator(
        PERESOURCE *this,
        struct CInputPointerNode *a2,
        int a3,
        unsigned __int64 a4,
        struct tagPOINT a5)
{
  LONG y; // edx
  int v10; // r8d
  char v11; // bl
  void *v12; // r8
  CTouchProcessor *v13; // rcx
  bool v14; // zf
  int v15; // r9d
  int v16; // [rsp+20h] [rbp-38h]
  __int16 v17; // [rsp+30h] [rbp-28h]

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1849LL);
  v11 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
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
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v12 = (void *)*((unsigned int *)a2 + 75);
  if ( (a3 & 0x10000) != 0 )
  {
    y = a5.y;
    v14 = *((_DWORD *)a2 + 15) == 3;
    *((_DWORD *)a2 + 75) = (unsigned int)v12 & 0xFFFFFFFC;
    *((_QWORD *)a2 + 26) = a4;
    LODWORD(v12) = 300;
    if ( !v14 )
      LODWORD(v12) = 270;
    *((_DWORD *)a2 + 54) = a5.x - (_DWORD)v12;
    *((_DWORD *)a2 + 55) = a5.y - (_DWORD)v12;
    *((_DWORD *)a2 + 56) = (_DWORD)v12 + a5.x;
    *((_DWORD *)a2 + 57) = (_DWORD)v12 + a5.y;
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
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
      goto LABEL_41;
    }
  }
  else if ( (a3 & 0x40004) != 0 )
  {
    LOBYTE(v15) = *((_DWORD *)a2 + 75);
    if ( ((unsigned __int8)v12 & 2) == 0
      && !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))PtInRect)(
                          (char *)a2 + 216,
                          a5,
                          v12,
                          (unsigned int)v12,
                          v16) )
    {
      v15 |= 2u;
      *((_DWORD *)a2 + 75) = v15;
    }
    if ( (v15 & 2) == 0
      && (v15 & 1) == 0
      && (unsigned int)CTouchProcessor::PassedHoldTime(
                         (CTouchProcessor *)this,
                         *((_DWORD *)a2 + 15),
                         *((_QWORD *)a2 + 26),
                         a4) )
    {
      *((_DWORD *)a2 + 75) |= 1u;
    }
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(y) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(y) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v11 = 0;
    if ( (_BYTE)y || v11 )
    {
      v12 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
      v17 = 65;
      goto LABEL_41;
    }
  }
  else
  {
    LODWORD(v12) = (unsigned int)v12 & 0xFFFFFFFC;
    *((_QWORD *)a2 + 26) = 0LL;
    *((_DWORD *)a2 + 75) = (_DWORD)v12;
    *(_OWORD *)((char *)a2 + 216) = 0LL;
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
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
LABEL_41:
      LOBYTE(v12) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)v13 + 3),
        y,
        (_DWORD)v12,
        *((_QWORD *)v13 + 8),
        5,
        4,
        v17,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
  }
}
