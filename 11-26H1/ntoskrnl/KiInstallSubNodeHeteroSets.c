/*
 * XREFs of KiInstallSubNodeHeteroSets @ 0x140453E78
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x140452524 (KeConfigureHeteroProcessors.c)
 *     KeUpdateProcessorRestrictions @ 0x1405EBF80 (KeUpdateProcessorRestrictions.c)
 * Callees:
 *     KiComputeHeteroSet @ 0x140453FC0 (KiComputeHeteroSet.c)
 */

__int64 __fastcall KiInstallSubNodeHeteroSets(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned int i; // edi
  int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // r13
  int v10; // r15d
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // ecx
  __int64 result; // rax
  __int64 v16; // rcx
  __int128 v17; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h]
  __int64 v19; // [rsp+90h] [rbp+8h]
  int v20; // [rsp+98h] [rbp+10h]

  if ( a4 )
  {
    v20 = a2;
    v17 = 0LL;
    v18 = 0LL;
    for ( i = 0; i < a4; ++i )
    {
      v7 = 0;
      v8 = 0LL;
      v19 = 0LL;
      do
      {
        v9 = v8;
        v10 = 0;
        do
        {
          if ( a2 )
          {
            KiComputeHeteroSet(v7, v10, KiDynamicHeteroCpuPolicy[v9], a1 + 128, a3, (__int64)&v17);
            v11 = v18;
            v12 = *((_QWORD *)&v17 + 1);
            v13 = v17;
          }
          else
          {
            v13 = *(_QWORD *)(a1 + 128);
            *(_QWORD *)&v17 = v13;
            v12 = v13;
            *((_QWORD *)&v17 + 1) = v13;
            v11 = v13;
            v18 = v13;
          }
          v14 = *(unsigned __int8 *)(a1 + 185) * (2 * v7 + v10++);
          result = *(_QWORD *)(a1 + 192);
          ++v9;
          v16 = 3LL * (i + v14);
          *(_QWORD *)(result + 8 * v16 + 16) = v11;
          *(_QWORD *)(result + 8 * v16 + 8) = v12;
          *(_QWORD *)(result + 8 * v16) = v13;
          a2 = v20;
        }
        while ( v10 < 2 );
        ++v7;
        v8 = v19 + 2;
        v19 += 2LL;
      }
      while ( v7 < 7 );
      a3 += 496LL;
    }
  }
  return result;
}
