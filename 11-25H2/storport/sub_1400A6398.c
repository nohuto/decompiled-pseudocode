/*
 * XREFs of sub_1400A6398 @ 0x1400A6398
 * Callers:
 *     DoScreenSave @ 0x14003A05C (DoScreenSave.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

bool __fastcall sub_1400A6398(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax

  *(_QWORD *)(a1 + 6072) = 0LL;
  v2 = *(unsigned int *)(a1 + 968);
  if ( (unsigned int)v2 <= 1 )
    return 0;
  v3 = sub_1400143E0(64LL, 24 * v2, 1095197010LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 6072) = v3;
  return v3 != 0;
}
