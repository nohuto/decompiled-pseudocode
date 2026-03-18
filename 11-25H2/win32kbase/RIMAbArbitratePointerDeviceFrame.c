/*
 * XREFs of RIMAbArbitratePointerDeviceFrame @ 0x14003065C
 * Callers:
 *     RIMSuppressAllActiveContacts @ 0x14002E5A0 (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x14002F41C (rimEndAllActiveContactsWorker.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1400303D4 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimEndPointerDeviceStaleContacts @ 0x140031B74 (rimEndPointerDeviceStaleContacts.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6CD8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14002F720 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x140030980 (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x140030AA8 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1400310C8 (rimAbSuppressLowerRankActivityInFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall RIMAbArbitratePointerDeviceFrame(struct RawInputManagerObject *a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v4; // rcx
  char v5; // r8
  __int64 v6; // rbp
  _QWORD **v7; // rsi
  unsigned int v8; // r14d
  __int64 v9; // rdx
  char v10; // bl
  bool v11; // di
  char v12; // r8
  _QWORD *v14; // rbx
  __int64 *v15; // rax
  char v16; // bl
  bool v17; // di
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  __int64 v21; // rax
  int v22; // edx

  v2 = a2;
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      v5,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      1,
      28,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
  v6 = *(_QWORD *)(v2 + 456);
  v7 = (_QWORD **)((char *)a1 + 448);
  v8 = 1;
  if ( *(_DWORD *)(W32GetUserSessionState(v4, a2) + 244) )
  {
    rimAbRemoveGlobalPenDeadzoneIfExpired(a1);
    rimAbUpdateDeadzonesAndResurrectContacts(a1, v2);
    v14 = *v7;
    while ( v14 != v7 )
    {
      v15 = v14 - 1;
      v14 = (_QWORD *)*v14;
      if ( *v15 != v6 )
        v8 &= rimAbSuppressLowerRankActivityForFrame(a1, *v15, v6);
    }
    rimAbSuppressLowerRankActivityInFrame(a1, v6);
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v16 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v16;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(UserSessionState + 19336),
        4,
        1,
        30,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
        v8);
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v10 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
      LOBYTE(v22) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v11,
        *(_QWORD *)(v21 + 19336),
        4,
        1,
        29,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v12 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v12 = 0;
  }
  if ( (_BYTE)v9 || v12 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v12,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      1,
      31,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
  return v8;
}
