/*
 * XREFs of MiIncrementPageTableLockCheckWrap @ 0x14031CE00
 * Callers:
 *     MiLockPageTablePage @ 0x14031C910 (MiLockPageTablePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIncrementPageTableLockCheckWrap(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // r8
  __int64 result; // rax

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x3FFFFFFFFFFEFDFFLL )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 24);
  v2 = v1 + 0x10000;
  v3 = (v1 ^ (v1 + 0x10000)) & 0xC000000000000000uLL;
  result = 1LL;
  *(_QWORD *)(a1 + 24) = v2 ^ v3;
  return result;
}
