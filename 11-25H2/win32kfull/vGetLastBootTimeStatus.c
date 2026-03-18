/*
 * XREFs of vGetLastBootTimeStatus @ 0x14010ECF0
 * Callers:
 *     InitFNTCache @ 0x14010CA54 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x14010C8D0 (bQueryFntCacheReg.c)
 */

__int64 __fastcall vGetLastBootTimeStatus(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  *(_DWORD *)(*(_QWORD *)(v3 + 19600) + 12LL) = 0;
  if ( (unsigned int)bQueryFntCacheReg(*(HANDLE *)(v3 + 19616), L"LastBootTimeFontCacheState", &v6) )
    *(_DWORD *)(*(_QWORD *)(v3 + 19600) + 12LL) = v6;
  v4 = *(_QWORD *)(v3 + 19600);
  result = *(unsigned int *)(v4 + 12);
  *(_DWORD *)(v4 + 16) = result;
  return result;
}
