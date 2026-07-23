/*
 * XREFs of SshpTracingWriteBlockerStateChange @ 0x140258144
 * Callers:
 *     SshpSetBlockerActive @ 0x140258074 (SshpSetBlockerActive.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402578F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall SshpTracingWriteBlockerStateChange(__int64 a1, char a2)
{
  int v2; // eax
  const GUID *ActivityId; // r11
  char v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  int v9; // [rsp+40h] [rbp+7h] BYREF
  __int64 v10; // [rsp+48h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  __int64 *v12; // [rsp+60h] [rbp+27h]
  __int64 v13; // [rsp+68h] [rbp+2Fh]
  int *v14; // [rsp+70h] [rbp+37h]
  __int64 v15; // [rsp+78h] [rbp+3Fh]
  __int64 v16; // [rsp+A0h] [rbp+67h] BYREF

  v16 = a1;
  LOBYTE(v2) = SshpTraceHandleRegistered;
  ActivityId = 0LL;
  v4 = a2;
  if ( SshpTraceHandleRegistered && SshpTraceHandle )
  {
    if ( (v5 = *(_QWORD *)(SshpTraceHandle + 32), *(_DWORD *)(v5 + 96))
      && ((LOBYTE(v2) = *(_BYTE *)(v5 + 100), (unsigned __int8)v2 >= 4u) || !(_BYTE)v2)
      && (v2 = *(_DWORD *)(v5 + 104), (*(_QWORD *)(v5 + 112) & 0x8000000000000004uLL) != 0)
      && (v6 = *(_QWORD *)(v5 + 120), LOBYTE(v2) = v6 & 4, (v6 & 0x8000000000000004uLL) == v6)
      || *(_WORD *)(SshpTraceHandle + 102)
      && (LOBYTE(v2) = EtwpLevelKeywordEnabled(*(_QWORD *)(SshpTraceHandle + 40) + 96LL, 4u, 0x8000000000000004uLL),
          (_BYTE)v2) )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v16;
      v10 = MEMORY[0xFFFFF78000000008];
      v12 = &v10;
      v7 = (int)ActivityId;
      LOBYTE(v7) = v4 != 0;
      v13 = 8LL;
      v9 = v7;
      v15 = 4LL;
      v14 = &v9;
      LOBYTE(v2) = EtwWriteEx(
                     SshpTraceHandle,
                     &SLEEPSTUDY_EVT_BLOCKER_STATE_CHANGE,
                     0LL,
                     1u,
                     ActivityId,
                     ActivityId,
                     3u,
                     &UserData);
    }
  }
  return v2;
}
