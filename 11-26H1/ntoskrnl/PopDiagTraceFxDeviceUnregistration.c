/*
 * XREFs of PopDiagTraceFxDeviceUnregistration @ 0x140B08A18
 * Callers:
 *     PopFxUnregisterDevice @ 0x140B08758 (PopFxUnregisterDevice.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     PopFxAddLogEntry @ 0x14021BFD0 (PopFxAddLogEntry.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxDeviceUnregistration(__int64 a1, __int64 a2)
{
  char v3; // r9
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  unsigned __int16 *v6; // rbx
  __int64 v8; // [rsp+30h] [rbp-29h] BYREF
  __int64 v9; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-9h] BYREF
  _DWORD *v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  __int64 v14; // [rsp+80h] [rbp+27h]
  _DWORD v15[2]; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 *v16; // [rsp+90h] [rbp+37h]
  __int64 v17; // [rsp+98h] [rbp+3Fh]

  v8 = a1;
  PopFxAddLogEntry(a1, 0, 2, 0LL);
  if ( PopDiagHandleRegistered != v3 && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_UNREGISTRATION) )
  {
    UserData.Ptr = (ULONGLONG)&v8;
    *(_QWORD *)&UserData.Size = 8LL;
    EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DEVICE_UNREGISTRATION, 0LL, 1u, &UserData);
  }
  _m_prefetchw((const void *)(a2 + 32));
  v4 = *(_DWORD *)(a2 + 32);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), v4, v4);
  }
  while ( v5 != v4 );
  if ( (v4 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a2 + 1240) )
    {
      v6 = (unsigned __int16 *)(a2 + 1232);
    }
    else
    {
      if ( !*(_QWORD *)(v8 + 136) )
        return v4;
      v6 = (unsigned __int16 *)(v8 + 128);
    }
    if ( v6 )
    {
      if ( (unsigned int)dword_140E07560 > 5 )
      {
        LOBYTE(v4) = tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL);
        if ( (_BYTE)v4 )
        {
          v13 = 2LL;
          v12 = v15;
          v14 = *((_QWORD *)v6 + 1);
          v15[0] = *v6;
          v16 = &v9;
          v15[1] = 0;
          v9 = 0x1000000LL;
          v17 = 8LL;
          LOBYTE(v4) = tlgWriteTransfer_EtwWriteTransfer(
                         (__int64)&dword_140E07560,
                         (unsigned __int8 *)byte_14004B963,
                         0LL,
                         0LL,
                         5u,
                         &v11);
        }
      }
    }
  }
  return v4;
}
