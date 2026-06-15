/*
 * XREFs of sub_14005C7A0 @ 0x14005C7A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 */

__int64 __fastcall sub_14005C7A0(__int64 a1)
{
  __int64 v1; // r9
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int CompareAddress; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(a1 + 4760) = 1;
  CompareAddress = 1;
  if ( WaitOnAddress((volatile void *)(a1 + 4756), &CompareAddress, 4uLL, 0xFFFFFFFF) )
    return 0LL;
  else
    return sub_1400470EC((int)retaddr, 2189, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v1);
}
