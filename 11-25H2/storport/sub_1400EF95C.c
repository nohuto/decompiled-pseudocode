/*
 * XREFs of sub_1400EF95C @ 0x1400EF95C
 * Callers:
 *     sub_1400F045C @ 0x1400F045C (sub_1400F045C.c)
 * Callees:
 *     sub_1400C8D5C @ 0x1400C8D5C (sub_1400C8D5C.c)
 */

__int64 __fastcall sub_1400EF95C(_QWORD *SystemArgument2)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = SystemArgument2[16];
  v2 = *(_QWORD *)(result + 160);
  if ( v2 )
  {
    result = *(unsigned int *)(v2 + 176);
    if ( (result & 0x20000) != 0 )
    {
      *(_DWORD *)(v2 + 176) = result & 0xFFFDFFFF;
      return sub_1400C8D5C(
               SystemArgument2,
               (*(_DWORD *)(*(_QWORD *)(SystemArgument2[16] + 160LL) + 176LL) & 0x40000) != 0);
    }
  }
  return result;
}
