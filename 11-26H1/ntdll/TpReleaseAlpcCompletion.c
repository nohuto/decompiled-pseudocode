/*
 * XREFs of TpReleaseAlpcCompletion @ 0x1800C9940
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x1800C99AC (TppAlpcpValidateAlpc.c)
 *     TppCleanupGroupMemberRelease @ 0x1800C9B80 (TppCleanupGroupMemberRelease.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TpReleaseAlpcCompletion(__int64 a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  result = TppAlpcpValidateAlpc(a1, 1LL, 0LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1 + 72, 1LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 256) = retaddr;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 80))(a1 + 72);
    }
  }
  return result;
}
