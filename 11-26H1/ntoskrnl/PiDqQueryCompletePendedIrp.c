/*
 * XREFs of PiDqQueryCompletePendedIrp @ 0x140950930
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x14094FD80 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PiDqIrpComplete @ 0x140950B44 (PiDqIrpComplete.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x140950CA0 (PiDqQueryGetNextIoctlInfo.c)
 */

__int64 __fastcall PiDqQueryCompletePendedIrp(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v5 = 0LL;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 184);
    result = _InterlockedExchange64((volatile __int64 *)(v2 + 104), 0LL);
    if ( result )
    {
      if ( (*(_DWORD *)(a1 + 216) & 1) == 0 )
        PiDqQueryGetNextIoctlInfo(a1, *(unsigned int *)(v3 + 8), 0LL, &v5);
      result = PiDqIrpComplete(*(PIRP *)(a1 + 176));
      *(_DWORD *)(a1 + 216) &= ~0x10u;
      *(_QWORD *)(a1 + 176) = 0LL;
    }
  }
  return result;
}
