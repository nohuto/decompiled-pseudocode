/*
 * XREFs of BiIsSystemStoreCandidate @ 0x1409A119C
 * Callers:
 *     BiIsSystemStore @ 0x1409A1114 (BiIsSystemStore.c)
 * Callees:
 *     BiGetRegistryValue @ 0x1409A6CB4 (BiGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

bool __fastcall BiIsSystemStoreCandidate(__int64 a1)
{
  char v1; // di
  int v3; // ebx
  int v4; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  P = 0LL;
  v4 = 0;
  if ( (int)BiGetRegistryValue(a1, L"System", L"Description", 4LL, &P, &v4) >= 0 )
  {
    v3 = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0x4B444342u);
    return v3 != 0;
  }
  return v1;
}
