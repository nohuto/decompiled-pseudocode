/*
 * XREFs of rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1401DCE20
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14002F720 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x14017F718 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 * Callees:
 *     RIMCmActiveContactsBeginNoButton @ 0x1400327B0 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x140032834 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1400328EC (RIMCmActiveContactsNext.c)
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1400CDA28 (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     RIMCmIsContactSuppressed @ 0x1400D976C (RIMCmIsContactSuppressed.c)
 *     RIMGetPointerInputType @ 0x1400D98BC (RIMGetPointerInputType.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x140105AF8 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDdddDdd @ 0x14015F8C0 (WPP_RECORDER_AND_TRACE_SF_dDdddDdd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsPointerSuppressedByPointer @ 0x1401DD114 (rimAbIsPointerSuppressedByPointer.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByOtherDeviceContacts(_DWORD *a1, __int64 a2, __int64 a3, int a4)
{
  char v8; // r12
  __int64 active; // rax
  __int64 v10; // xmm1_8
  __int64 v11; // rdi
  __int64 v12; // rbx
  int v13; // eax
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int64 v17; // rax
  char v18; // r15
  __int64 v19; // rdx
  char v21; // r13
  __int64 UserSessionState; // rax
  int v23; // [rsp+28h] [rbp-E0h]
  int v24; // [rsp+30h] [rbp-D8h]
  int v25; // [rsp+38h] [rbp-D0h]
  int v26; // [rsp+40h] [rbp-C8h]
  __int128 v27; // [rsp+90h] [rbp-78h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-68h]
  __int128 v29; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-50h]
  __int128 v31; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-38h]
  _OWORD v33[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v34; // [rsp+F8h] [rbp-10h]
  __int128 v35; // [rsp+108h] [rbp+0h]
  __int128 v36; // [rsp+118h] [rbp+10h]
  __int128 v37; // [rsp+128h] [rbp+20h]

  v8 = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 329);
  if ( *a1 == (unsigned int)RIMGetPointerInputType(a3) )
    return 0LL;
  active = RIMCmActiveContactsBeginNoButton((__int64)&v27, a3);
  v10 = *(_QWORD *)(active + 16);
  v31 = *(_OWORD *)active;
  v32 = v10;
  RIMCmActiveContactsEnd((__int64)&v29, a3);
  v27 = v29;
  v28 = v30;
  if ( !tagLIST_TABLE_ITERATOR::operator!=((__int64)&v31, (__int64)&v27) )
    return 0LL;
  v11 = a4 != 0 ? 2672LL : 2432LL;
  while ( 1 )
  {
    v12 = v32;
    v13 = *(_DWORD *)(v32 + 16);
    v14 = *(_OWORD *)(v11 + v32);
    v33[0] = *(_OWORD *)(v11 + v32 - 16);
    v33[1] = v14;
    v15 = *(_OWORD *)(v11 + v32 + 32);
    v34 = *(_OWORD *)(v11 + v32 + 16);
    v35 = v15;
    v16 = *(_OWORD *)(v11 + v32 + 64);
    v36 = *(_OWORD *)(v11 + v32 + 48);
    v37 = v16;
    if ( (v13 & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 350);
    if ( (*(_DWORD *)(v12 + 16) & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 351);
    if ( (unsigned int)RIMCmIsContactSuppressed(v12 - 16) )
    {
      if ( (unsigned int)(*(_DWORD *)(a3 + 24) - 5) > 1
        || !(unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v12 - 16) )
      {
        goto LABEL_17;
      }
      v17 = *(_QWORD *)(v12 + 72);
      v18 = BYTE12(v33[0]) | 2;
      HIDWORD(v33[0]) |= 2u;
      LODWORD(v33[0]) = 3;
      *((_QWORD *)&v34 + 1) = v17;
    }
    else
    {
      v18 = BYTE12(v33[0]);
    }
    if ( (v18 & 2) != 0
      && (unsigned __int8)rimAbIsPointerSuppressedByPointer(
                            (int)a2 + 156,
                            (_DWORD)a1,
                            (int)a3 + 156,
                            (unsigned int)v33,
                            (*(_DWORD *)(a2 + 368) & 8u) >> 3) )
    {
      break;
    }
LABEL_17:
    RIMCmActiveContactsNext(a3, &v31);
    RIMCmActiveContactsEnd((__int64)&v29, a3);
    v27 = v29;
    v28 = v30;
    if ( !tagLIST_TABLE_ITERATOR::operator!=((__int64)&v31, (__int64)&v27) )
      return 0LL;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    v8 = 1;
  }
  v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
    WPP_RECORDER_AND_TRACE_SF_dDdddDdd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v21,
      *(_QWORD *)(UserSessionState + 19336),
      v23,
      v24,
      v25,
      v26);
  }
  return 1LL;
}
