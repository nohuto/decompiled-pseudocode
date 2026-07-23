/*
 * XREFs of PopDiagTraceCsDripsWatchdogPerfTrack @ 0x14060B124
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x14061674C (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceCsDripsWatchdogPerfTrack(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        __int16 a7)
{
  __int16 v11; // dx
  int v12; // ecx
  __int64 v13; // r8
  ULONG *p_Size; // rax
  _DWORD *v15; // rcx
  _DWORD v16[4]; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-58h] BYREF

  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG_PERFTRACK) )
  {
    v16[0] = a1;
    v16[1] = a2;
    v16[2] = a3;
    if ( a6 )
      v11 = (a4 != 0) | 0x200;
    else
      v11 = a4 != 0;
    v12 = 0xFFFF;
    v13 = 4LL;
    if ( a5 <= 0xFFFF )
      v12 = a5;
    p_Size = &UserData.Size;
    v16[3] = v11 & 0x201 | (2 * (unsigned __int8)a7) & 0x3FF | (4 * (a7 & 0x100 | (v12 << 14)));
    v15 = v16;
    do
    {
      *((_QWORD *)p_Size - 1) = v15++;
      *(_QWORD *)p_Size = 4LL;
      p_Size += 4;
      --v13;
    }
    while ( v13 );
    EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG_PERFTRACK, 0LL, 0, 0LL, 0LL, 4u, &UserData);
  }
}
