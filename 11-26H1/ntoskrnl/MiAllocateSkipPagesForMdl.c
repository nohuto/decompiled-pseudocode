/*
 * XREFs of MiAllocateSkipPagesForMdl @ 0x140339B7C
 * Callers:
 *     MiFindPagesForMdl @ 0x140339E68 (MiFindPagesForMdl.c)
 * Callees:
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 *     MiInitializeBestCandidatesContext @ 0x140339D94 (MiInitializeBestCandidatesContext.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiAllocateSkipPagesForMdl(__int64 a1, int a2, int a3)
{
  __int64 v6; // r15
  _DWORD *v7; // rsi
  __int64 v8; // r13
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rbp
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  __int64 *i; // r10
  __int64 v19; // r8
  __int64 v20; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+78h] [rbp-C0h]
  _DWORD *v22; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+88h] [rbp-B0h]
  _BYTE v24[96]; // [rsp+90h] [rbp-A8h] BYREF

  memset_0(v24, 0, 0x58uLL);
  v6 = *(_QWORD *)(a1 + 64);
  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(_QWORD *)(a1 + 16);
  v20 = -1LL;
  v12 = v8 * ((unsigned __int64)*(unsigned int *)(v6 + 40) >> 12);
  v23 = v10;
  v21 = v11;
  v22 = 0LL;
  if ( v9 )
  {
    MiInitializeBestCandidatesContext((unsigned int)&v22, (unsigned int)v24, v9, (*(_QWORD *)(a1 + 32) - v12) / v9, v9);
    v7 = v22;
    v14 = 0LL;
    v11 = v21;
    v10 = v23;
    if ( v8 == 1 )
      v14 = v6;
    v6 = v14;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 32) - v12;
  }
  v13 = a3 | 0x60000000;
  do
  {
    if ( (int)MiFindContiguousPagesEx(
                *(_QWORD *)a1,
                v10,
                v11,
                *(_QWORD *)(a1 + 24),
                0,
                v9,
                *(_DWORD *)(a1 + 144),
                a2,
                255,
                v13,
                0,
                v6,
                (__int64)v7,
                &v20) < 0 )
      break;
    if ( !v6 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      v16 = *(_QWORD *)(a1 + 48);
      v17 = 0LL;
      for ( i = (__int64 *)(v15 + 8 * (((unsigned __int64)*(unsigned int *)(v15 + 40) >> 12) + 6));
            v17 < v9 / v16;
            v16 = *(_QWORD *)(a1 + 48) )
      {
        v19 = v20 + v17 * v16;
        ++v17;
        *i++ = v19;
      }
      *(_DWORD *)(v15 + 40) += (_DWORD)v17 << 12;
    }
    v12 += v9;
    if ( v12 == *(_QWORD *)(a1 + 32) )
      break;
    if ( v7 && v7[3] )
    {
      v11 = v21;
    }
    else
    {
      v11 = v20 - 1;
      v21 = v20 - 1;
    }
    v10 = v23;
  }
  while ( v20 - v23 >= v9 );
  if ( v7 )
  {
    if ( v7 != (_DWORD *)v24 )
      ExFreePoolWithTag(v7, 0);
  }
}
