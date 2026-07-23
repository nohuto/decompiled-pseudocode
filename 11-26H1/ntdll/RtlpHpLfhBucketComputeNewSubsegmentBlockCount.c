/*
 * XREFs of RtlpHpLfhBucketComputeNewSubsegmentBlockCount @ 0x1800BE880
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x1800BE5AC (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhBucketComputeNewSubsegmentBlockCount(unsigned __int8 *a1, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int16 v5; // r11
  unsigned int v6; // r9d
  char v7; // cl
  char v8; // dl
  __int64 result; // rax

  v2 = a1[1];
  LODWORD(v3) = -1;
  v5 = RtlpBucketBlockSizes[(*a1 >> 1) + 1];
  if ( *((_QWORD *)a1 + 7) < 0xFFFFFFFFuLL )
    v3 = *((_QWORD *)a1 + 7);
  if ( a2 >= 1 )
    v6 = (unsigned int)v3 >> (((unsigned int)RtlpHpLfhPerfFlags >> 12) & 3);
  else
    v6 = ((unsigned int)v3 >> 3) / v2;
  v7 = ((unsigned __int8)v2 > 1u) - 1;
  if ( (unsigned __int16)v5 >= 0x100u )
    v7 = (unsigned __int8)v2 > 1u;
  v8 = v7 - 1;
  if ( !*((_QWORD *)a1 + 8) )
    v8 = v7;
  result = (unsigned int)(1 << (3 - v8));
  if ( v6 >= (unsigned int)result )
    result = v6;
  if ( (unsigned int)result < 4 )
    return 4LL;
  if ( (unsigned int)result > 0x400 )
    return 1024LL;
  return result;
}
