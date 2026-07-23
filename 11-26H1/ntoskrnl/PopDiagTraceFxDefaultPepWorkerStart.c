/*
 * XREFs of PopDiagTraceFxDefaultPepWorkerStart @ 0x1403B7FD8
 * Callers:
 *     PopPepWork @ 0x1403B84E0 (PopPepWork.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402578F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDefaultPepWorkerStart(__int64 a1)
{
  const GUID *ActivityId; // r11
  __int64 v2; // r10
  __int64 v3; // rcx
  unsigned __int8 v4; // al
  const GUID *v5; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  ActivityId = 0LL;
  v2 = a1;
  if ( PopDiagHandleRegistered && PopDiagHandle )
  {
    if ( (v3 = *(_QWORD *)(PopDiagHandle + 32), *(_DWORD *)(v3 + 96))
      && ((v4 = *(_BYTE *)(v3 + 100), v4 >= 4u) || !v4)
      && (*(_DWORD *)(v3 + 112) & 0x100LL) != 0
      && (*(_QWORD *)(v3 + 120) & 0x100LL) == *(_QWORD *)(v3 + 120)
      || *(_WORD *)(PopDiagHandle + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(PopDiagHandle + 40) + 96LL, 4u, 256LL) )
    {
      v5 = ActivityId;
      if ( v2 )
        v5 = *(const GUID **)(v2 + 48);
      UserData.Ptr = (ULONGLONG)&v5;
      *(_QWORD *)&UserData.Size = 8LL;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_START, 0LL, 1u, ActivityId, ActivityId, 1u, &UserData);
    }
  }
}
