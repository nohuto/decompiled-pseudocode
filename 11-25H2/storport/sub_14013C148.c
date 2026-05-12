/*
 * XREFs of sub_14013C148 @ 0x14013C148
 * Callers:
 *     sub_1401377C0 @ 0x1401377C0 (sub_1401377C0.c)
 *     sub_140138500 @ 0x140138500 (sub_140138500.c)
 *     sub_1401385C0 @ 0x1401385C0 (sub_1401385C0.c)
 *     sub_140139940 @ 0x140139940 (sub_140139940.c)
 * Callees:
 *     sub_14013C04C @ 0x14013C04C (sub_14013C04C.c)
 */

__int64 __fastcall sub_14013C148(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = sub_14013C04C(a1, a2);
  if ( (int)result >= 0 )
  {
    v4 = *(unsigned int *)(a1 + 12);
    if ( (unsigned int)(v4 + 1) <= *(_DWORD *)(a1 + 8) )
    {
      *(_BYTE *)(v4 + *(_QWORD *)a1) = -16;
      ++*(_DWORD *)(a1 + 12);
      return 0LL;
    }
    else
    {
      return 3221225507LL;
    }
  }
  return result;
}
