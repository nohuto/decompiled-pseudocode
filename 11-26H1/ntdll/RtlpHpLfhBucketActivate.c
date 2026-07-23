/*
 * XREFs of RtlpHpLfhBucketActivate @ 0x180071E3C
 * Callers:
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x180071D60 (RtlpHpLfhBucketCheckAndUpdate.c)
 * Callees:
 *     RtlpHpLfhSlotInitialize @ 0x180071FD8 (RtlpHpLfhSlotInitialize.c)
 *     RtlpHpLfhBucketInitialize @ 0x180072040 (RtlpHpLfhBucketInitialize.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpHpLfhBucketActivate(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  signed __int64 v5; // r8
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  unsigned int v8; // r15d
  __int64 v9; // r13
  __int64 v10; // r12
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r14
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 i; // rcx
  signed __int64 v17; // [rsp+50h] [rbp+8h]
  unsigned __int64 v18; // [rsp+50h] [rbp+8h]

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 8LL * a2 + 448);
  LOBYTE(v6) = v5 & 3;
  if ( (v5 & 3) == 1 )
  {
    v17 = *(_QWORD *)(a1 + 8LL * a2 + 448);
    LOWORD(v17) = v5 | 2;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8LL * a2 + 448), v17, v5);
    if ( v6 == v5 )
    {
      v7 = (unsigned __int64)(((unsigned int)RtlpHpLfhPerfFlags >> 7) & 1) << 6;
      v8 = (RtlpHpLfhPerfFlags & 0x20) != 0 ? *(unsigned __int8 *)(a1 + 72) : 1;
      v9 = (v7 + 64) * v8;
      v10 = v8;
      v6 = ((__int64 (__fastcall *)(_QWORD, unsigned __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40)))(
             *(_QWORD *)a1,
             v9 + v7 + 128);
      v11 = v6;
      if ( v6 )
      {
        memset_thunk_772440563353939046((void *)v6, 0, v9 + v7 + 128);
        LOBYTE(v6) = RtlpHpLfhBucketInitialize(v11, a2);
        v12 = v11 + v7 + 128;
        if ( v8 )
        {
          v18 = v7 + 64;
          v13 = a1;
          do
          {
            RtlpHpLfhSlotInitialize(v12, v11, a1);
            ++*(_BYTE *)(v11 + 1);
            v6 = *(unsigned __int8 *)(a1 + 72);
            v14 = (v12 - a1) >> 6;
            if ( v8 == (_DWORD)v6 )
            {
              *(_WORD *)(v13 + 2 * v4 + 1472) = v14;
            }
            else
            {
              for ( i = a1 + 1472; ; i += 256LL )
              {
                v6 = a1 + (v6 << 8) + 1472;
                if ( i >= v6 )
                  break;
                *(_WORD *)(i + 2 * v4) = v14;
                v6 = *(unsigned __int8 *)(a1 + 72);
              }
            }
            v12 += v18;
            v13 += 256LL;
            --v10;
          }
          while ( v10 );
        }
        *(_QWORD *)(a1 + 8 * v4 + 448) = v11;
      }
    }
  }
  return v6;
}
