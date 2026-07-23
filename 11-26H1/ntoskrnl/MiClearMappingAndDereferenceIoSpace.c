/*
 * XREFs of MiClearMappingAndDereferenceIoSpace @ 0x140281FA4
 * Callers:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     MmMapMdl @ 0x1404DAA40 (MmMapMdl.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiDereferenceIoPages @ 0x1403152FC (MiDereferenceIoPages.c)
 *     MiVaIsUltra @ 0x14033A650 (MiVaIsUltra.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404F2994 (MiZeroAndFlushGoodCitizen.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiClearMappingAndDereferenceIoSpace(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r12
  int v6; // eax
  int v7; // r15d
  __int64 v8; // r14
  void *v9; // rbp
  __int64 DemandZeroPte; // rbx
  int v11; // r8d
  unsigned __int64 result; // rax
  int v13; // r13d
  unsigned __int64 v14; // rsi
  __int64 v15; // rdx
  char v16; // cl
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int8 CurrentIrql; // cl
  _QWORD *v24; // rsi
  char v25; // [rsp+30h] [rbp-168h]
  __int64 v26; // [rsp+38h] [rbp-160h]
  unsigned __int64 v27; // [rsp+40h] [rbp-158h]
  unsigned __int64 v28; // [rsp+48h] [rbp-150h]
  unsigned __int64 v29; // [rsp+50h] [rbp-148h]
  _QWORD v30[32]; // [rsp+60h] [rbp-138h] BYREF

  v27 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 1LL;
  v6 = MI_IS_PHYSICAL_ADDRESS(a1);
  v7 = v6;
  if ( v6 > 0 )
  {
    v22 = (unsigned int)v6;
    do
    {
      v5 <<= 9;
      v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v22;
    }
    while ( v22 );
  }
  LODWORD(v8) = 0;
  v9 = 0LL;
  if ( !(unsigned int)MiVaIsUltra(a1) )
    v9 = &unk_140E37340;
  DemandZeroPte = MiMakeDemandZeroPte(16LL);
  while ( 1 )
  {
    result = a2 / v5;
    v13 = 0;
    v29 = a2 % v5;
    v14 = result;
    v15 = 0LL;
    v26 = 0LL;
    v28 = v4 + 8 * result;
    if ( v7 >= 1 && v9 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql == 2 )
      {
        v25 = 17;
        result = MiLockWorkingSetSharedAtDpc(v9);
        v16 = 17;
      }
      else
      {
        result = MiLockWorkingSetShared(v9);
        v16 = result;
        v25 = result;
      }
      v15 = 0LL;
    }
    else
    {
      v16 = 17;
      v25 = 17;
    }
    if ( v4 < v28 )
    {
      result = (v5 * (((8 * v14 - 1) >> 3) + 1)) << 12;
      v27 += result;
      while ( 1 )
      {
        if ( v7 < 1 || !v9 )
          goto LABEL_11;
        if ( !v15 )
          goto LABEL_48;
        if ( (v4 & 0xFFF) == 0 )
          break;
LABEL_11:
        if ( *(_QWORD *)v4 )
        {
          v17 = (*(_QWORD *)v4 >> 12) & 0xFFFFFFFFFFLL;
          if ( v7 >= 1 )
          {
            MiRewritePteWithLockBit(v9, 0LL, v4, DemandZeroPte);
            ++v13;
          }
          else
          {
            *(_QWORD *)v4 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          }
          if ( v17 > qword_140E2D920
            || (result = *(_QWORD *)(48 * v17 - 0x21FFFFFFFFD8LL) >> 54,
                (*(_QWORD *)(48 * v17 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0) )
          {
            if ( (_DWORD)v8 && (v18 = v30[2 * (unsigned int)(v8 - 1) + 1], v18 == v17) )
            {
              result = v5 + v18;
              v30[2 * (unsigned int)(v8 - 1) + 1] = result;
            }
            else
            {
              result = v17 + v5;
              v21 = 2LL * (unsigned int)v8;
              LODWORD(v8) = v8 + 1;
              v30[v21] = v17;
              v30[v21 + 1] = v17 + v5;
              if ( (_DWORD)v8 == 16 )
              {
                if ( v7 >= 1 && v9 && v13 )
                {
                  LOBYTE(v11) = v25;
                  MiZeroAndFlushGoodCitizen((_DWORD)v9, v26, v11, v13, 1);
                  v13 = 0;
                  v26 = 0LL;
                }
                v24 = v30;
                v8 = 16LL;
                do
                {
                  result = MiDereferenceIoPages(1LL, *v24, v24[1] - *v24);
                  v24 += 2;
                  --v8;
                }
                while ( v8 );
              }
            }
          }
        }
        v4 += 8LL;
        if ( v4 >= v28 )
          goto LABEL_20;
        v16 = v25;
        v15 = v26;
      }
      LOBYTE(v11) = v16;
      MiZeroAndFlushGoodCitizen((_DWORD)v9, v15, v11, v13, 1);
      v13 = 0;
LABEL_48:
      v26 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      result = MiLockPageTableInternal(v9, v26, 0LL);
      goto LABEL_11;
    }
LABEL_20:
    if ( v7 >= 1 && v9 )
    {
      LOBYTE(v11) = v25;
      result = MiZeroAndFlushGoodCitizen((_DWORD)v9, v26, v11, v13, 0);
    }
    a2 = v29;
    if ( !v29 )
      break;
    v5 = 1LL;
    v7 = 0;
    v4 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  v19 = (unsigned int)v8;
  if ( (_DWORD)v8 )
  {
    v20 = v30;
    do
    {
      result = MiDereferenceIoPages(1LL, *v20, v20[1] - *v20);
      v20 += 2;
      --v19;
    }
    while ( v19 );
  }
  return result;
}
