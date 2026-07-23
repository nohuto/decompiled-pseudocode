/*
 * XREFs of PoTraceSystemTimerResolutionUpdate @ 0x1402577FC
 * Callers:
 *     ExpUpdateTimerResolution @ 0x140530A54 (ExpUpdateTimerResolution.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402578F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PoTraceSystemTimerResolutionUpdate(int a1)
{
  const GUID *ActivityId; // r9
  REGHANDLE v2; // rdx
  __int64 v3; // rcx
  unsigned __int8 v4; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF
  int v6; // [rsp+70h] [rbp+8h] BYREF

  v6 = a1;
  ActivityId = 0LL;
  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( PopDiagHandle )
    {
      if ( (v3 = *(_QWORD *)(PopDiagHandle + 32), *(_DWORD *)(v3 + 96))
        && ((v4 = *(_BYTE *)(v3 + 100), v4 >= 4u) || !v4)
        && (*(_QWORD *)(v3 + 112) & 0x4000000000004004LL) != 0
        && (*(_QWORD *)(v3 + 120) & 0x4000000000004004LL) == *(_QWORD *)(v3 + 120)
        || *(_WORD *)(PopDiagHandle + 102)
        && (LOBYTE(v2) = 4,
            (unsigned __int8)EtwpLevelKeywordEnabled(
                               *(_QWORD *)(PopDiagHandle + 40) + 96LL,
                               v2,
                               0x4000000000004004LL,
                               0LL)) )
      {
        UserData.Ptr = (ULONGLONG)&v6;
        *(_QWORD *)&UserData.Size = 4LL;
        EtwWriteEx(
          PopDiagHandle,
          &POP_ETW_EVENT_TIME_RESOLUTION_UPDATE,
          0LL,
          (ULONG)ActivityId,
          ActivityId,
          ActivityId,
          1u,
          &UserData);
      }
    }
  }
}
