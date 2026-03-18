/*
 * XREFs of ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x14015CD20
 * Callers:
 *     NtUserGetRawPointerDeviceData @ 0x1401E4D40 (NtUserGetRawPointerDeviceData.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140050B68 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x140051C6C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x140051CC4 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14006C3AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x14014553C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     IsExemptInjectionDevice @ 0x140163428 (IsExemptInjectionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1401BEF5C (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     RtlSetVolatileMemory @ 0x14024BCB0 (RtlSetVolatileMemory.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawDataWithHistory(
        PERESOURCE *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        const struct tagPOINTER_DEVICE_PROPERTY *a5,
        unsigned int a6,
        int *a7)
{
  __int64 v7; // r15
  char v9; // di
  _UNKNOWN **v10; // r8
  PERESOURCE *v11; // r12
  int v12; // edx
  bool IsLockedShared; // r13
  unsigned int v14; // eax
  CTouchProcessor *v15; // rcx
  char v16; // si
  _UNKNOWN **v17; // r8
  bool v18; // r15
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v24; // edx
  struct CPointerMsgData *v25; // rsi
  char v26; // si
  _UNKNOWN **v27; // r8
  bool v28; // r15
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  CTouchProcessor *v32; // rcx
  const struct CPointerInputFrame *FrameById; // rax
  const struct CPointerInputFrame *v34; // r13
  char v35; // si
  bool v36; // r15
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  __int64 v40; // r15
  unsigned int HistoryCount; // ecx
  int v42; // r8d
  unsigned int PointerRawData; // esi
  char v44; // r15
  bool v45; // r12
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  int v49; // edx
  int v50; // r8d
  char v51; // r15
  bool v52; // r12
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  CTouchProcessor *v56; // rcx
  _UNKNOWN **v57; // r8
  int *v58; // r12
  int v59; // r8d
  char v60; // r15
  bool v61; // r12
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  unsigned int v65; // r15d
  const struct CPointerInputFrame *PreviousFrameByDevice; // r13
  __int64 v67; // r12
  int v68; // r8d
  char v69; // si
  bool v70; // r15
  __int64 v71; // rax
  int v72; // r8d
  int v73; // edx
  int v74; // [rsp+28h] [rbp-80h]
  __int16 v75; // [rsp+30h] [rbp-78h]
  __int16 v76; // [rsp+30h] [rbp-78h]
  int v77; // [rsp+38h] [rbp-70h]
  size_t Size; // [rsp+50h] [rbp-58h]
  __int64 v79; // [rsp+58h] [rbp-50h]
  int *v80; // [rsp+60h] [rbp-48h]
  PERESOURCE *v81; // [rsp+70h] [rbp-38h] BYREF
  bool v82; // [rsp+78h] [rbp-30h]
  unsigned int v86; // [rsp+D8h] [rbp+30h]
  int *v87; // [rsp+E0h] [rbp+38h]

  v7 = a2;
  Size = a6;
  v80 = &a7[Size];
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u )
  {
    LOBYTE(a2) = 0;
    v9 = 1;
  }
  else
  {
    v9 = 1;
    LOBYTE(a2) = 1;
  }
  v10 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v10) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)v10 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      (_DWORD)v10,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      128,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v11 = this + 4;
  v81 = this + 4;
  IsLockedShared = tagDomLock::IsLockedShared(this + 4);
  v82 = IsLockedShared;
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceShared(*v11);
  v14 = a4;
  v15 = (CTouchProcessor *)(a4 * a3);
  if ( a6 != (_DWORD)v15 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5383LL);
    v14 = a4;
  }
  if ( a6 < v14 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v16 = 0;
    }
    v17 = &WPP_RECORDER_INITIALIZED;
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(
                           (_DWORD)WPP_GLOBAL_Control,
                           v12,
                           (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v16;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(UserSessionState + 69136),
        3,
        4,
        129,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      v17 = &WPP_RECORDER_INITIALIZED;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v12) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( (_BYTE)v12 || v9 )
    {
      LOBYTE(v17) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        (_DWORD)v17,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        130,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    if ( !IsLockedShared )
      ExReleaseResourceAndLeaveCriticalRegion(*v11);
    return 0LL;
  }
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v15, v7);
  v25 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v26 = 0;
    }
    v27 = &WPP_RECORDER_INITIALIZED;
    v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v24, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v26;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v30,
        *(_QWORD *)(v29 + 69136),
        3,
        4,
        131,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      v27 = &WPP_RECORDER_INITIALIZED;
    }
    v32 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v24) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v24) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v24 && !v9 )
      goto LABEL_74;
    v75 = 132;
LABEL_73:
    LOBYTE(v27) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v32 + 3),
      v24,
      (_DWORD)v27,
      *((_QWORD *)v32 + 8),
      5,
      4,
      v75,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
LABEL_74:
    CInpLockGuardShared::~CInpLockGuardShared(&v81);
    return 0LL;
  }
  FrameById = (const struct CPointerInputFrame *)CTouchProcessor::FindFrameById(
                                                   (__int64)this,
                                                   *((_DWORD *)NonConstMsgData + 7),
                                                   4);
  v34 = FrameById;
  if ( !FrameById )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v35 = 0;
    }
    v27 = &WPP_RECORDER_INITIALIZED;
    v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v37 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v24, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v38) = v36;
      LOBYTE(v39) = v35;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v39,
        v38,
        *(_QWORD *)(v37 + 69136),
        3,
        4,
        133,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      v27 = &WPP_RECORDER_INITIALIZED;
    }
    v32 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v24) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v24) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v24 && !v9 )
      goto LABEL_74;
    v75 = 134;
    goto LABEL_73;
  }
  if ( *((_DWORD *)v25 + 8) >= *((_DWORD *)FrameById + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5411LL);
  v40 = *((_QWORD *)v34 + 30) + 480LL * *((unsigned int *)v25 + 8);
  v79 = v40;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v40) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5413LL);
  HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v40);
  v86 = HistoryCount;
  if ( a3 == 1 || a3 == HistoryCount )
  {
    PointerRawData = 1;
  }
  else
  {
    PointerRawData = 0;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v44 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v44 = 0;
    }
    v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v46 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, (_DWORD)WPP_GLOBAL_Control, v42);
      LOBYTE(v47) = v45;
      LOBYTE(v48) = v44;
      WPP_RECORDER_AND_TRACE_SF_LL(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v48,
        v47,
        *(_QWORD *)(v46 + 69136),
        3,
        v74,
        135,
        v77,
        a3,
        v86);
    }
    v40 = v79;
  }
  if ( (unsigned __int8)IsExemptInjectionDevice(*((_QWORD *)v34 + 8)) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v51 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v51 = 0;
    }
    v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v53 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v49, v50);
      LOBYTE(v54) = v52;
      LOBYTE(v55) = v51;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v55,
        v54,
        *(_QWORD *)(v53 + 69136),
        4,
        4,
        136,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    RtlSetVolatileMemory(a7, 0, Size * 4);
    v56 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v49) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v49) = 0;
    }
    v57 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v49 && !v9 )
      goto LABEL_152;
    v76 = 138;
  }
  else
  {
    v58 = a7;
    if ( PointerRawData )
    {
      PointerRawData = (unsigned int)CTouchProcessor::GetPointerRawData(
                                       this,
                                       v34,
                                       *(_DWORD *)(v40 + 156),
                                       *(_WORD *)(v40 + 162),
                                       a4,
                                       a5,
                                       a7);
      if ( !PointerRawData )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v60 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v60 = 0;
        }
        v61 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v60 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v62 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v49, v59);
          LOBYTE(v63) = v61;
          LOBYTE(v64) = v60;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v64,
            v63,
            *(_QWORD *)(v62 + 69136),
            3,
            4,
            139,
            (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
        }
        v58 = a7;
      }
      if ( PointerRawData )
      {
        v87 = &v58[a4];
        if ( a3 > 1 )
        {
          v65 = *(_DWORD *)(v79 + 344);
          PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, v34);
          do
          {
            if ( !PreviousFrameByDevice || v86 <= 1 )
              break;
            if ( v65 >= *((_DWORD *)PreviousFrameByDevice + 12) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5482LL);
            v67 = *((_QWORD *)PreviousFrameByDevice + 30) + 480LL * v65;
            if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v67) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5484LL);
            if ( &v87[a4] > v80 )
            {
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                || (v69 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
              {
                v69 = 0;
              }
              v70 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v69 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v71 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, a4, v68);
                LOBYTE(v72) = v70;
                LOBYTE(v73) = v69;
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v73,
                  v72,
                  *(_QWORD *)(v71 + 69136),
                  3,
                  4,
                  140,
                  (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
              }
              PointerRawData = 0;
            }
            else
            {
              PointerRawData = (unsigned int)CTouchProcessor::GetPointerRawData(
                                               this,
                                               PreviousFrameByDevice,
                                               *(_DWORD *)(v67 + 156),
                                               *(_WORD *)(v67 + 162),
                                               a4,
                                               a5,
                                               v87);
              if ( PointerRawData )
                v87 += a4;
            }
            if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v67) != v86 - 1 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5506LL);
            v86 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v67);
            v65 = *(_DWORD *)(v67 + 344);
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
          }
          while ( PointerRawData );
        }
      }
    }
    v56 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v49) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v49) = 0;
    }
    v57 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v49 && !v9 )
      goto LABEL_152;
    v76 = 141;
  }
  LOBYTE(v57) = v9;
  WPP_RECORDER_AND_TRACE_SF_(
    *((_QWORD *)v56 + 3),
    v49,
    (_DWORD)v57,
    *((_QWORD *)v56 + 8),
    5,
    4,
    v76,
    (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
LABEL_152:
  CInpLockGuardShared::~CInpLockGuardShared(&v81);
  return PointerRawData;
}
