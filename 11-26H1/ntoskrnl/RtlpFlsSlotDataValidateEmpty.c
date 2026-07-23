/*
 * XREFs of RtlpFlsSlotDataValidateEmpty @ 0x1404BDC44
 * Callers:
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpFlsSlotDataValidateEmpty(__int64 a1, __int64 a2)
{
  char v2; // r8
  unsigned int i; // edx
  int v6; // ecx
  __int64 v7; // rbx
  _QWORD *v8; // rax

  v2 = 1;
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    for ( i = 17; i - 16 <= LODWORD(PspTlsContext.InitialStack); ++i )
    {
      _BitScanReverse((unsigned int *)&v6, i);
      v7 = *(_QWORD *)(a2 + 8LL * (unsigned int)(v6 - 4));
      if ( v7 )
      {
        v8 = (_QWORD *)(v7 + 8 * ((i ^ (1 << v6)) + 2LL * (i ^ (1 << v6)) + 1));
        if ( v8 )
        {
          if ( *v8 )
            return 0;
        }
      }
    }
  }
  return v2;
}
