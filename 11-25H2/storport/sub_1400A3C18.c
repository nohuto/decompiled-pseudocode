/*
 * XREFs of sub_1400A3C18 @ 0x1400A3C18
 * Callers:
 *     sub_14009641C @ 0x14009641C (sub_14009641C.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400A3C18(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)(a4 + 2 * v4) );
  }
  return ((__int64 (__fastcall *)(__int64, __int64, void *))qword_1401685A0)(a1, 43LL, &unk_14014D880);
}
