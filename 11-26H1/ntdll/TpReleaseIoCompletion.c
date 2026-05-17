/*
 * XREFs of TpReleaseIoCompletion @ 0x1800C9A80
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x1800C9AE0 (TppIopValidateIo.c)
 *     TppCleanupGroupMemberRelease @ 0x1800C9B80 (TppCleanupGroupMemberRelease.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TpReleaseIoCompletion(__int64 a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  result = TppIopValidateIo(a1, 1LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
