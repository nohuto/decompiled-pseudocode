/*
 * XREFs of RaidZeroUnit @ 0x14002DF68
 * Callers:
 *     RaidCreateUnit @ 0x14002D474 (RaidCreateUnit.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     RaCreateTagList @ 0x1401BE2F8 (RaCreateTagList.c)
 */

__int64 __fastcall RaidZeroUnit(_DWORD *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0xE40uLL);
  *a1 = 1431193940;
  RaCreateTagList(a1 + 144);
  *((_BYTE *)a1 + 556) = 0;
  a1[136] = 1;
  *(_QWORD *)(a1 + 137) = 1LL;
  a1[26] = RaidNullAddress;
  result = 134684677LL;
  a1[360] = 134684677;
  a1[380] = 134684677;
  a1[400] = 134684677;
  a1[420] = 134684677;
  a1[440] = 134684677;
  a1[348] = 10;
  return result;
}
