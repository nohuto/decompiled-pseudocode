/*
 * XREFs of CiTaskIndexReference @ 0x140003FE0
 * Callers:
 *     CiDispatchCreateTaskIndexClient @ 0x14000E0B0 (CiDispatchCreateTaskIndexClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiTaskIndexReference(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 48));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
