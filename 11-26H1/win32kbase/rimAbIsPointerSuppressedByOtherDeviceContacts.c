/*
 * XREFs of rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x14007AAC0
 * Callers:
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x140077904 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14007ADBC (rimAbSuppressLowerRankActivityForFrame.c)
 * Callees:
 *     RIMCmActiveContactsBeginNoButton @ 0x140072854 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMGetPointerInputType @ 0x140074390 (RIMGetPointerInputType.c)
 *     RIMCmActiveContactsNext @ 0x140074BA4 (RIMCmActiveContactsNext.c)
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x14007613C (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmIsContactSuppressed @ 0x14007615C (RIMCmIsContactSuppressed.c)
 *     RIMCmActiveContactsEnd @ 0x14007B47C (RIMCmActiveContactsEnd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDdddDdd @ 0x1401A3BD8 (WPP_RECORDER_AND_TRACE_SF_dDdddDdd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsPointerSuppressedByPointer @ 0x140202E5C (rimAbIsPointerSuppressedByPointer.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByOtherDeviceContacts(int *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rdx
  int v9; // r8d
  int v10; // ebx
  __int64 **v11; // rax
  __int64 *v12; // xmm1_8
  __int64 *v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int64 v20; // rax
  char v21; // r15
  int v22; // edx
  int v23; // r8d
  char v24; // r12
  bool v25; // r13
  __int64 UserSessionState; // rax
  int v27; // r8d
  int v28; // edx
  int v29; // [rsp+28h] [rbp-E0h]
  __int128 v30; // [rsp+90h] [rbp-78h] BYREF
  __int64 *v31; // [rsp+A0h] [rbp-68h]
  __int64 *v32; // [rsp+A8h] [rbp-60h] BYREF
  int v33; // [rsp+B0h] [rbp-58h]
  __int64 *v34; // [rsp+B8h] [rbp-50h]
  _OWORD v35[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v36; // [rsp+E8h] [rbp-20h]
  __int128 v37; // [rsp+F8h] [rbp-10h]
  __int128 v38; // [rsp+108h] [rbp+0h]
  __int128 v39; // [rsp+118h] [rbp+10h]

  if ( !*(_DWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 329LL);
  v10 = *a1;
  if ( v10 != (unsigned int)RIMGetPointerInputType(a3, v8, v9) )
  {
    v11 = RIMCmActiveContactsBeginNoButton(&v32, a3);
    v12 = v11[2];
    v30 = *(_OWORD *)v11;
    v31 = v12;
    while ( 1 )
    {
      RIMCmActiveContactsEnd(&v32, a3);
      v13 = v31;
      if ( (__int64 *)v30 == v32 && DWORD2(v30) == v33 && v31 == v34 )
        return 0LL;
      v14 = *((_DWORD *)v31 + 4);
      v15 = a4 != 0 ? 2672LL : 2432LL;
      v16 = *(_OWORD *)((char *)v31 + v15);
      v35[0] = *(_OWORD *)((char *)v31 + v15 - 16);
      v35[1] = v16;
      v17 = *(_OWORD *)((char *)v31 + v15 + 32);
      v36 = *(_OWORD *)((char *)v31 + v15 + 16);
      v37 = v17;
      v18 = *(_OWORD *)((char *)v31 + v15 + 64);
      v38 = *(_OWORD *)((char *)v31 + v15 + 48);
      v39 = v18;
      if ( (v14 & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 350LL);
      if ( (v13[2] & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 351LL);
      if ( (unsigned int)RIMCmIsContactSuppressed((__int64)(v13 - 2)) )
      {
        if ( !(unsigned int)RIMIsPenPointerDevice(a3)
          || !(unsigned int)RIMCmIsContactSuppressedByArbitrationOnly((__int64)(v13 - 2)) )
        {
          goto LABEL_13;
        }
        v20 = v13[9];
        v21 = BYTE12(v35[0]) | 2;
        HIDWORD(v35[0]) |= 2u;
        LODWORD(v35[0]) = 3;
        *((_QWORD *)&v36 + 1) = v20;
      }
      else
      {
        v21 = BYTE12(v35[0]);
      }
      if ( (v21 & 2) != 0
        && (unsigned __int8)rimAbIsPointerSuppressedByPointer(
                              (int)a2 + 156,
                              (_DWORD)a1,
                              (int)a3 + 156,
                              (unsigned int)v35,
                              (*(_DWORD *)(a2 + 368) & 8u) >> 3) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v24 = 0;
        }
        v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v22, v23);
          LOBYTE(v27) = v25;
          LOBYTE(v28) = v24;
          WPP_RECORDER_AND_TRACE_SF_dDdddDdd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v28,
            v27,
            *(_QWORD *)(UserSessionState + 19368),
            v29);
        }
        return 1LL;
      }
LABEL_13:
      RIMCmActiveContactsNext(a3, (__int64 **)&v30);
    }
  }
  return 0LL;
}
