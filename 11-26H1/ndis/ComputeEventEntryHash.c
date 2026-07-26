/*
 * XREFs of ComputeEventEntryHash @ 0x1400E89A8
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1400E8E58 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     RunningHash @ 0x1400E9190 (RunningHash.c)
 */

__int64 __fastcall ComputeEventEntryHash(char a1, unsigned __int8 a2, __int64 a3)
{
  unsigned __int8 v6; // si
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  RunningHash(&v10, a3 + 16, 8LL);
  v6 = a1 + 2;
  if ( v6 < a2 )
  {
    v7 = a3 + 16LL * v6;
    v8 = (unsigned __int8)(a2 - v6);
    do
    {
      RunningHash(&v10, *(_QWORD *)v7, *(unsigned int *)(v7 + 8));
      v7 += 16LL;
      --v8;
    }
    while ( v8 );
  }
  return 32769 * ((9 * v10) ^ ((unsigned int)(9 * v10) >> 11));
}
