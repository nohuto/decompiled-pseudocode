/*
 * XREFs of LdrpDeleteEnclave @ 0x1801396B4
 * Callers:
 *     LdrDeleteEnclave @ 0x1801265D0 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     LdrpDereferenceEnclave @ 0x180070D94 (LdrpDereferenceEnclave.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800C7324 (LdrpCleanupEnclaveLoadState.c)
 *     NtTerminateEnclave @ 0x180162970 (NtTerminateEnclave.c)
 */

__int64 __fastcall LdrpDeleteEnclave(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax

  result = NtTerminateEnclave(a1[9], 4LL);
  if ( (int)result >= 0 )
  {
    a1[14] = 0LL;
    LdrpCleanupEnclaveLoadState((__int64)a1, -1073741823);
    a1[9] = 0LL;
    RtlEnterCriticalSection((__int64)&LdrpEnclaveListLock);
    v3 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock);
    LdrpDereferenceEnclave((__int64)a1);
    return 0LL;
  }
  return result;
}
