/*
 * XREFs of RtlpHpLfhBucketComputeNewSubsegmentBlockCount @ 0x14051913C
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x1405194B4 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhBucketComputeNewSubsegmentBlockCount(unsigned __int8 *a1, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r10
  unsigned int v4; // r10d
  bool v5; // r8
  char v6; // dl
  char v7; // r8
  __int64 result; // rax
  unsigned int v9; // r11d

  v2 = a1[1];
  LODWORD(v3) = -1;
  if ( *((_QWORD *)a1 + 7) < 0xFFFFFFFFuLL )
    v3 = *((_QWORD *)a1 + 7);
  if ( a2 >= 1 )
    v4 = (unsigned int)v3 >> (((unsigned int)RtlpHpLfhPerfFlags >> 12) & 3);
  else
    v4 = ((unsigned int)v3 >> 3) / v2;
  v5 = (unsigned __int8)v2 > 1u;
  v6 = v5 - 1;
  if ( (unsigned __int16)RtlpBucketBlockSizes[(*a1 >> 1) + 1] >= 0x100u )
    v6 = v5;
  v7 = v6 - 1;
  result = 4LL;
  if ( !*((_QWORD *)a1 + 8) )
    v7 = v6;
  v9 = 1 << (3 - v7);
  if ( v4 >= v9 )
    v9 = v4;
  if ( v9 >= 4 )
  {
    result = v9;
    if ( v9 > 0x400 )
      return 1024LL;
  }
  return result;
}
