/*
 * XREFs of PopDiagTraceIrpStart @ 0x1403BD9D4
 * Callers:
 *     PopRequestPowerIrp @ 0x14026F334 (PopRequestPowerIrp.c)
 *     PopQueueQuerySetIrp @ 0x1403BC828 (PopQueueQuerySetIrp.c)
 *     PopDequeueQuerySetIrp @ 0x1403BDC38 (PopDequeueQuerySetIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x14021BFD0 (PopFxAddLogEntry.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIrpStart(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  char v4; // dl
  int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int16 *v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // [rsp+48h] [rbp-59h] BYREF
  char v13; // [rsp+49h] [rbp-58h] BYREF
  __int16 v14; // [rsp+4Ch] [rbp-55h] BYREF
  int v15; // [rsp+50h] [rbp-51h] BYREF
  __int64 v16; // [rsp+58h] [rbp-49h] BYREF
  __int64 v17; // [rsp+60h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-29h] BYREF
  int *v20; // [rsp+88h] [rbp-19h]
  __int64 v21; // [rsp+90h] [rbp-11h]
  char *v22; // [rsp+98h] [rbp-9h]
  __int64 v23; // [rsp+A0h] [rbp-1h]
  __int64 *v24; // [rsp+A8h] [rbp+7h]
  __int64 v25; // [rsp+B0h] [rbp+Fh]
  __int16 *v26; // [rsp+B8h] [rbp+17h]
  __int64 v27; // [rsp+C0h] [rbp+1Fh]
  __int64 v28; // [rsp+C8h] [rbp+27h]
  int v29; // [rsp+D0h] [rbp+2Fh]
  int v30; // [rsp+D4h] [rbp+33h]

  v17 = a2;
  v2 = *(char *)(a2 + 66);
  DestinationString = 0LL;
  v3 = *(_QWORD *)(a2 + 72 * v2 + 200);
  v4 = *(_BYTE *)(v3 + 184);
  v12 = v4;
  v5 = *(_DWORD *)(v3 + 188);
  v15 = v5;
  v13 = *(_BYTE *)(v3 + 192) - 1;
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v7 = 0LL;
  v16 = v7;
  v8 = (unsigned __int16 *)(v7 + 40);
  v14 = *(_WORD *)(v7 + 40) >> 1;
  if ( !*(_QWORD *)(v7 + 16) )
  {
    RtlInitUnicodeString(&DestinationString, &SourceString);
    v7 = v16;
    v4 = v12;
    v5 = v15;
  }
  if ( v5 == 1 && v4 == 2 )
    PopFxAddLogEntry(v7, 0, 22, *(int *)(v3 + 192));
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRPSTART) )
  {
    *(_QWORD *)&UserData.Size = 8LL;
    v9 = 5;
    UserData.Ptr = (ULONGLONG)&v17;
    v21 = 4LL;
    v20 = &v15;
    v22 = &v12;
    v24 = &v16;
    v26 = &v14;
    v23 = 1LL;
    v25 = 8LL;
    v27 = 2LL;
    if ( v14 )
    {
      v10 = *((_QWORD *)v8 + 1);
      v29 = *v8;
      v9 = 6;
      v28 = v10;
      v30 = 0;
    }
    v11 = 2LL * v9;
    *(&UserData.Ptr + v11) = (ULONGLONG)&v13;
    *((_QWORD *)&UserData.Size + v11) = 1LL;
    EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_IRPSTART, 0LL, 0, 0LL, 0LL, v9 + 1, &UserData);
  }
}
