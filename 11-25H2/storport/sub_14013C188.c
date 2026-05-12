/*
 * XREFs of sub_14013C188 @ 0x14013C188
 * Callers:
 *     sub_1401377C0 @ 0x1401377C0 (sub_1401377C0.c)
 *     sub_140138500 @ 0x140138500 (sub_140138500.c)
 *     sub_1401385C0 @ 0x1401385C0 (sub_1401385C0.c)
 *     sub_140139940 @ 0x140139940 (sub_140139940.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14013C188(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(unsigned int *)(a1 + 12);
  if ( (unsigned int)(v2 + 1) > *(_DWORD *)(a1 + 8) )
    return 3221225507LL;
  *(_BYTE *)(v2 + *(_QWORD *)a1) = -15;
  v3 = (unsigned int)(*(_DWORD *)(a1 + 12) + 1);
  *(_DWORD *)(a1 + 12) = v3;
  if ( (unsigned int)(v3 + 1) > *(_DWORD *)(a1 + 8) )
    return 3221225507LL;
  *(_BYTE *)(v3 + *(_QWORD *)a1) = -13;
  result = 0LL;
  ++*(_DWORD *)(a1 + 12);
  return result;
}
