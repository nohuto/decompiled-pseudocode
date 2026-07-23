/*
 * XREFs of TriageGetLoaderEntry @ 0x14072380C
 * Callers:
 *     ViTriageSameDriversFromDump @ 0x140CE5FC0 (ViTriageSameDriversFromDump.c)
 * Callees:
 *     TriagepVerifyDump @ 0x140D0A4F4 (TriagepVerifyDump.c)
 */

__int64 __fastcall TriageGetLoaderEntry(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // r9
  __int16 v8; // cx

  v2 = a2;
  if ( !(unsigned __int8)TriagepVerifyDump()
    || (unsigned int)v2 >= *(_DWORD *)((unsigned int)TriageImagePageSize + a1 + 52) )
  {
    return 0LL;
  }
  _mm_lfence();
  v4 = *(unsigned int *)((unsigned int)TriageImagePageSize + a1 + 48);
  v5 = a1 + 144 * v2;
  result = v5 + v4 + 8;
  v7 = *(unsigned int *)(v4 + v5);
  v8 = 2 * *(_WORD *)(v7 + a1);
  *(_WORD *)(result + 88) = v8;
  *(_WORD *)(result + 90) = v8;
  *(_QWORD *)(result + 96) = v7 + a1 + 4;
  return result;
}
