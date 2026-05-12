/*
 * XREFs of sub_1400EB5E0 @ 0x1400EB5E0
 * Callers:
 *     sub_1400C70D0 @ 0x1400C70D0 (sub_1400C70D0.c)
 *     sub_1400E8030 @ 0x1400E8030 (sub_1400E8030.c)
 *     sub_1400EBA60 @ 0x1400EBA60 (sub_1400EBA60.c)
 *     sub_1400F25C0 @ 0x1400F25C0 (sub_1400F25C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400EB5E0(__int64 a1)
{
  union _SLIST_HEADER *v1; // rcx
  PSLIST_ENTRY v2; // rax
  __int64 result; // rax
  int v4; // ecx

  v1 = *(union _SLIST_HEADER **)(a1 + 1416);
  if ( !v1 )
    return 0LL;
  v2 = ExpInterlockedPopEntrySList(v1 + 1);
  result = (unsigned __int64)&v2[-1] & -(__int64)(v2 != 0LL);
  if ( !result )
    return 0LL;
  v4 = *(_DWORD *)(result + 48);
  *(_WORD *)(result + 52) = 0;
  if ( (v4 & 1) == 0 )
    *(_DWORD *)(result + 48) = v4 | 1;
  *(_QWORD *)(*(_QWORD *)result + 4240LL) = result;
  return result;
}
