/*
 * XREFs of RIMAbArbitratePointerDeviceFrame @ 0x140074E60
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x140047BC8 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x14005AAE4 (rimEndPointerDeviceStaleContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x14007A7BC (rimEndAllActiveContactsWorker.c)
 *     RIMSuppressAllActiveContacts @ 0x14007B620 (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1400F977C (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 * Callees:
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x140075184 (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1400752B0 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x140075964 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14007ADBC (rimAbSuppressLowerRankActivityForFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall RIMAbArbitratePointerDeviceFrame(struct RawInputManagerObject *a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // ecx
  char v5; // r8
  __int64 v6; // rbp
  _QWORD **v7; // rsi
  unsigned int v8; // r14d
  int v9; // edx
  char v10; // r8
  char v11; // bl
  bool v12; // di
  char v13; // r8
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  char v17; // r8
  char v18; // bl
  bool v19; // di
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  __int64 v23; // rax
  int v24; // edx

  v2 = a2;
  v4 = (int)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
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
  if ( *(_DWORD *)(W32GetUserSessionState(v4, a2, v5) + 244) )
  {
    rimAbRemoveGlobalPenDeadzoneIfExpired(a1);
    rimAbUpdateDeadzonesAndResurrectContacts(a1, v2);
    v15 = *v7;
    while ( v15 != v7 )
    {
      v16 = v15 - 1;
      v15 = (_QWORD *)*v15;
      if ( *v16 != v6 )
        v8 &= rimAbSuppressLowerRankActivityForFrame(a1);
    }
    rimAbSuppressLowerRankActivityInFrame(a1, v6);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v18 = 0;
    }
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v17);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(UserSessionState + 19368),
        4,
        1,
        30,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
        v8);
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v11 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v10);
      LOBYTE(v24) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v12,
        *(_QWORD *)(v23 + 19368),
        4,
        1,
        29,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v13 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v13 = 0;
  }
  if ( (_BYTE)v9 || v13 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v13,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      1,
      31,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
  return v8;
}
