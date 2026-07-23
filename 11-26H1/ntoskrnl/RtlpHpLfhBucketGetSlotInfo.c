/*
 * XREFs of RtlpHpLfhBucketGetSlotInfo @ 0x140459290
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140519218 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhBucketCleanup @ 0x14063C62C (RtlpHpLfhBucketCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhBucketGetSlotInfo(__int64 a1, unsigned __int8 *a2, _WORD *a3)
{
  __int64 result; // rax
  __int64 v5; // r11
  __int16 *v6; // r10
  __int16 v7; // dx
  __int64 v8; // rcx
  _WORD *v9; // r8

  result = 0LL;
  if ( *(_BYTE *)(a1 + 72) )
  {
    v5 = *(unsigned __int8 *)(a1 + 72);
    v6 = (__int16 *)(a1 + 2 * (((unsigned __int64)*a2 >> 1) + 736));
    do
    {
      v7 = *v6;
      v8 = 0LL;
      if ( (_DWORD)result )
      {
        v9 = a3;
        while ( *v9 != v7 )
        {
          v8 = (unsigned int)(v8 + 1);
          v9 += 2;
          if ( (unsigned int)v8 >= (unsigned int)result )
            goto LABEL_10;
        }
        ++a3[2 * v8 + 1];
      }
      else
      {
LABEL_10:
        a3[2 * result] = v7;
        a3[2 * result + 1] = 1;
        result = (unsigned int)(result + 1);
      }
      v6 += 128;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
