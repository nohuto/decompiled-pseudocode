/*
 * XREFs of sub_14008BA40 @ 0x14008BA40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14008BA40(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, void *, _QWORD, _QWORD),
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 v10; // rbx
  __int64 result; // rax

  if ( !a8 || *(_DWORD *)a8 != 40 || *(_DWORD *)(a8 + 4) != 40 )
    return 3221225485LL;
  if ( *(_DWORD *)(a8 + 24) != 1 )
    return 3221225659LL;
  v10 = *(_QWORD *)(a8 + 32);
  if ( !*(_QWORD *)(v10 + 144) || !*(_DWORD *)(v10 + 140) )
    return 3221225485LL;
  result = a2(a1, &unk_14014D838, *(_QWORD *)(a8 + 32), *(unsigned int *)(v10 + 4));
  if ( (int)result >= 0 )
    return a2(a1, &unk_14014D828, *(_QWORD *)(v10 + 144), *(unsigned int *)(v10 + 140));
  return result;
}
