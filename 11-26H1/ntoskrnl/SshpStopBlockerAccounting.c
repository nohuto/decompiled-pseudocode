/*
 * XREFs of SshpStopBlockerAccounting @ 0x14049C650
 * Callers:
 *     SshpQueryAndResetBlockerAccounting @ 0x14049C418 (SshpQueryAndResetBlockerAccounting.c)
 *     SshpSetCollectionActive @ 0x14049C548 (SshpSetCollectionActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SshpStopBlockerAccounting(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r10
  __int64 v6; // r9
  unsigned __int64 v8; // r8
  __int64 v9; // rcx

  result = *(_QWORD *)(a1 + 32);
  v5 = a2;
  v6 = a1 + ((unsigned __int64)((*(_DWORD *)(a1 + 8) & 1) == 0) << 7);
  if ( a2 >= result )
  {
    v8 = a2 - result;
    LODWORD(a2) = 0;
    *(_QWORD *)(v6 + 40) += v8;
    while ( (unsigned int)a2 < 5 )
    {
      v9 = (unsigned int)a2;
      a2 = (unsigned int)(a2 + 1);
      if ( v8 >= PopFxAccountingBucketLimits[v9] && v8 < PopFxAccountingBucketLimits[a2] )
      {
        if ( a3 )
        {
          ++*(_DWORD *)(v6 + 4 * v9 + 148);
          *(_QWORD *)(v6 + 8 * v9 + 88) += v8;
        }
        else
        {
          ++*(_DWORD *)(v6 + 4 * v9 + 128);
          *(_QWORD *)(v6 + 8 * v9 + 48) += v8;
        }
        break;
      }
    }
  }
  if ( a3 == 1 )
    v5 = 0LL;
  *(_QWORD *)(a1 + 32) = v5;
  return result;
}
