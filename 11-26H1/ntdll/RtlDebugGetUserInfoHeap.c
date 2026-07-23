/*
 * XREFs of RtlDebugGetUserInfoHeap @ 0x1800D9654
 * Callers:
 *     RtlGetUserInfoHeap @ 0x1800D9310 (RtlGetUserInfoHeap.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180060540 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x1800605E8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapEntry @ 0x1800610A0 (RtlpValidateHeapEntry.c)
 *     RtlGetUserInfoHeap @ 0x1800D9310 (RtlGetUserInfoHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOLEAN __fastcall RtlDebugGetUserInfoHeap(unsigned __int64 a1, int a2, char *a3, PVOID *a4, PULONG UserFlags)
{
  BOOLEAN UserInfoHeap; // di
  char v10; // r14
  ULONG v11; // esi
  unsigned __int64 v12; // rdx

  UserInfoHeap = 0;
  v10 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_1801C4608)(a1);
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlGetUserInfoHeap") )
  {
    v11 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v10 = 1;
      v11 |= 1u;
    }
    RtlpValidateHeap(a1, 0);
    v12 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
    if ( RtlpValidateHeapEntry(a1, v12, "RtlGetUserInfoHeap") )
      UserInfoHeap = RtlGetUserInfoHeap((PVOID)a1, v11, a3, a4, UserFlags);
  }
  else
  {
    UserInfoHeap = 0;
  }
  if ( v10 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return UserInfoHeap;
}
