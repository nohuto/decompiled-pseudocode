/*
 * XREFs of MiGetWorkingSetInfoList @ 0x1402B4660
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14027CFA0 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiQueryPteLarge @ 0x1402B3610 (MiQueryPteLarge.c)
 *     MiQueryPteAttributes @ 0x1402B4C40 (MiQueryPteAttributes.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1403166E0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiQueryPteCleanup @ 0x14040F8FC (MiQueryPteCleanup.c)
 *     MiPureAweVad @ 0x14045E8F0 (MiPureAweVad.c)
 *     MiQueryPteFaultLargeVa @ 0x140528B34 (MiQueryPteFaultLargeVa.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiQueryPtePrepare @ 0x140A95A04 (MiQueryPtePrepare.c)
 *     MiGetAweVadPageSize @ 0x140B4CA44 (MiGetAweVadPageSize.c)
 */

__int64 __fastcall MiGetWorkingSetInfoList(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r13d
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned int v5; // r12d
  __int64 v6; // r10
  unsigned __int64 *v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r9
  void *v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  char v14; // al
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  __int64 v17; // r15
  unsigned __int64 v18; // r10
  ULONG_PTR v19; // r8
  __int64 HasShadow; // rax
  ULONG_PTR v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 valid; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-C0h]
  __int64 v29; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v31; // [rsp+58h] [rbp-A8h]
  __int128 v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  __int64 *v34; // [rsp+78h] [rbp-88h]
  unsigned __int64 v35; // [rsp+80h] [rbp-80h]
  __int64 v36[4]; // [rsp+90h] [rbp-70h] BYREF
  PVOID P; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v38; // [rsp+B8h] [rbp-48h]
  unsigned __int8 v39; // [rsp+C0h] [rbp-40h]
  __int16 v40; // [rsp+C1h] [rbp-3Fh]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v42; // [rsp+100h] [rbp+0h]

  v2 = a2;
  v28 = a2;
  v3 = a1;
  v29 = a1;
  v30 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  memset_0(v36, 0, 0xF8uLL);
  result = MiQueryPtePrepare(v3, v36, v2);
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = v36[0];
    v7 = (unsigned __int64 *)v36[1];
    v34 = v36;
    v26 = v36[0];
    while ( 1 )
    {
      v8 = *v7;
      v9 = 0LL;
      v35 = v8;
      if ( v8 < 0x7FFFFFFF0000LL )
        break;
LABEL_26:
      if ( (v2 & 0x40000000) != 0 )
      {
        if ( (v9 & 1) != 0 )
        {
          if ( (v9 & 0x40000000) != 0 )
            v9 = v9 & 0xFFFFFFFFF8C0FFF1uLL | 0xE;
        }
        else if ( (v9 & 0x40000000) != 0 )
        {
          v9 &= 0xFFFFFFFFF03FFFFFuLL;
        }
      }
      v7[1] = v9;
      v7 += 2;
      if ( v7 == (unsigned __int64 *)v36[2] )
        return MiQueryPteCleanup(v3, v36, v7, v5);
    }
    v10 = v8 >> 12;
    *(_QWORD *)&v32 = v8;
    if ( P )
    {
      v13 = *((unsigned int *)P + 6);
      if ( v10 >= (v13 | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) )
      {
        v13 = *((unsigned int *)P + 7);
        v12 = v13 | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32);
        if ( v10 <= v12 )
        {
          v5 = 0;
          goto LABEL_12;
        }
      }
      if ( v42 )
      {
        LOBYTE(v13) = 17;
        MiUnlockProtoPoolPage(v42, v13);
        v42 = 0LL;
        v41 = 0LL;
      }
      if ( v38 )
      {
        MiUnlockPageTableInternal(v36[0], v38);
        v38 = 0LL;
      }
      if ( v39 != 17 )
      {
        MiUnlockWorkingSetShared(v36[0], v39);
        v39 = 17;
      }
      if ( P )
      {
        MiUnlockAndDereferenceVadShared((ULONG_PTR)P);
        P = 0LL;
      }
    }
    LODWORD(v27) = 0;
    v11 = (void *)MiObtainReferencedVadEx(v8, 2LL, (int *)&v27);
    v13 = (unsigned __int64)v11;
    if ( !v11 )
    {
      v5 = v27;
      if ( (v27 & 0x80000000) != 0LL )
      {
        if ( (_DWORD)v27 == -1073741558 )
          return MiQueryPteCleanup(v3, v36, v7, v5);
        v5 = 0;
        goto LABEL_25;
      }
      goto LABEL_11;
    }
    P = v11;
    if ( (v8 & 0xFFFFFFFFFFFFF000uLL) != 0x7FFE0000
      && ((v8 & 0xFFFFFFFFFFFFF000uLL) != qword_140E2D7B8 || !qword_140E2D7B8)
      || (v25 = *(_QWORD *)(v3 + 80), LOBYTE(v33) = 1, (*(_DWORD *)(v25 + 1532) & 1) != 0) )
    {
      LOBYTE(v33) = 0;
    }
    v12 = *(unsigned int *)(v13 + 48);
    v14 = *(_DWORD *)(v13 + 48) & 0x1C;
    HIDWORD(v33) = 3;
    v40 = 0;
    if ( v14 == 4 )
    {
LABEL_10:
      v5 = 0;
LABEL_11:
      v6 = v26;
LABEL_12:
      v15 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v39 != 17
        && (((((v8 >> 9) & 0xF8) + 8) & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(v6)
         || KeShouldYieldProcessor()) )
      {
        v12 = v42;
        if ( v42 )
        {
          LOBYTE(v13) = 17;
          MiUnlockProtoPoolPage(v42, v13);
          v42 = 0LL;
          v41 = 0LL;
        }
        if ( v38 )
        {
          MiUnlockPageTableInternal(v36[0], v38);
          v38 = 0LL;
        }
        v13 = v39;
        if ( v39 != 17 )
        {
          MiUnlockWorkingSetShared(v36[0], v39);
          v39 = 17;
        }
      }
      v16 = v35;
      v17 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v2 = v28;
      while ( 1 )
      {
        v9 = 0LL;
        v31 = 0LL;
        v27 = 0LL;
        if ( v39 == 17 )
          v39 = MiLockWorkingSetShared(v36[0]);
        if ( v38 == v17 )
        {
          v18 = v15;
        }
        else
        {
          if ( v42 )
          {
            LOBYTE(v13) = 17;
            MiUnlockProtoPoolPage(v42, v13);
            v42 = 0LL;
            v41 = 0LL;
          }
          if ( v38 )
            MiUnlockPageTableInternal(v36[0], v38);
          valid = MiLockLowestValidPageTableEx(v36[0], v15, &v27, 0LL);
          v18 = v27;
          v38 = valid;
        }
        v19 = *(_QWORD *)v18;
        if ( v18 >= 0xFFFFF6FB7DBED000uLL
          && v18 <= 0xFFFFF6FB7DBED7F8uLL
          && (v19 & 1) != 0
          && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
        {
          HasShadow = MiPteHasShadow(v12, *(_QWORD *)v18, v19);
          if ( HasShadow )
          {
            v22 = *(_QWORD *)(HasShadow + 1288);
            if ( v22 )
            {
              v23 = *(_QWORD *)(v22 + 8 * ((v18 >> 3) & 0x1FF));
              if ( (v23 & 0x20) != 0 )
                v21 |= 0x20uLL;
              v19 = v21 | 0x42;
              if ( (v23 & 0x42) == 0 )
                v19 = v21;
            }
          }
        }
        if ( (v19 & 0x81) == 0x81 )
          break;
        if ( v38 == v17 )
        {
          if ( (unsigned int)MiQueryPteAttributes(v36, &v30, v18) )
            goto LABEL_23;
        }
        else if ( (_BYTE)v40 )
        {
          if ( (int)MiQueryPteFaultLargeVa(v36, v16) < 0 )
            goto LABEL_24;
        }
        else
        {
          if ( !(unsigned int)MiWorkingSetInfoCheckPageTable(v26, v18, (unsigned int)&v30, v2, v39) )
            goto LABEL_23;
          v38 = 0LL;
        }
      }
      MiQueryPteLarge((__int64)&v30, v18, v19);
LABEL_23:
      v9 = v31;
LABEL_24:
      v3 = v29;
LABEL_25:
      v6 = v26;
      goto LABEL_26;
    }
    if ( (v12 & 0x80000) != 0 )
    {
      if ( (v12 & 0x200000) == 0 && (v12 & 0x60000) < 0x40000 || (v12 & 0x60000) < 0x40000 )
      {
LABEL_64:
        if ( !(unsigned int)MiPureAweVad() )
          goto LABEL_10;
        HIBYTE(v40) = 1;
        if ( (unsigned __int64)MiGetAweVadPageSize(v13) < 0x200 )
          goto LABEL_10;
      }
    }
    else if ( (*(_DWORD *)(v13 + 72) & 1) == 0 )
    {
      goto LABEL_64;
    }
    LOBYTE(v40) = 1;
    goto LABEL_10;
  }
  return result;
}
