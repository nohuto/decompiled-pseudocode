/*
 * XREFs of MiReleaseLargePdeMappings @ 0x1402A22D4
 * Callers:
 *     MiReleasePteMappings @ 0x1402A3050 (MiReleasePteMappings.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiReturnSystemVa @ 0x1402A3788 (MiReturnSystemVa.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiReleaseLargePdeMappings(__int64 a1, _QWORD *a2, BOOL a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  int v8; // r11d
  unsigned int v9; // eax
  int v10; // r9d
  unsigned __int64 DemandZeroPte; // rbx
  __int64 v12; // r11
  __int64 CurrentIrql; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rsi
  __int64 v18; // r15
  __int64 v19; // rbp
  unsigned int v20; // r12d
  __int64 v21; // rdx
  __int16 v23; // cx
  unsigned int v24; // edx
  signed __int32 v25[8]; // [rsp+0h] [rbp-198h] BYREF
  char v26; // [rsp+30h] [rbp-168h]
  unsigned int v27; // [rsp+34h] [rbp-164h]
  unsigned __int64 v28; // [rsp+38h] [rbp-160h]
  __int64 v29; // [rsp+40h] [rbp-158h]
  __int64 v30; // [rsp+48h] [rbp-150h]
  __int64 v31; // [rsp+50h] [rbp-148h]
  _DWORD *v32; // [rsp+58h] [rbp-140h]
  unsigned __int64 v33; // [rsp+60h] [rbp-138h]
  __int64 v34; // [rsp+68h] [rbp-130h]
  __int64 v35; // [rsp+70h] [rbp-128h]
  _BYTE v36[208]; // [rsp+80h] [rbp-118h] BYREF

  v32 = a2;
  memset_0(v36, 0, 0xC8uLL);
  v6 = *a2 >> 16;
  v7 = ((*(_QWORD *)(a1 + 32) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v34 = v7;
  MiInitializeTbFlushList((unsigned int)v36, (unsigned int)&unk_140E37340, 20, 8, 1);
  v9 = v8 + 12;
  if ( *(_DWORD *)(a1 + 44) != v10 )
    v9 = v8 + 10;
  v27 = v9;
  DemandZeroPte = MiMakeDemandZeroPte((unsigned __int8)v8 + 16);
  CurrentIrql = KeGetCurrentIrql();
  v35 = CurrentIrql;
  v14 = 0LL;
  v29 = 0LL;
  do
  {
    v15 = v7 + 8 * v6;
    v6 = *(_QWORD *)v15;
    if ( (*(_QWORD *)v15 & 4) != 0 )
    {
      v17 = 1LL;
    }
    else
    {
      v16 = *(_QWORD *)(v15 + 8);
      if ( qword_140E2D8C0 )
      {
        if ( (v16 & 0x10) != 0 )
          v16 &= ~0x10uLL;
        else
          v16 &= qword_140E2D8C8;
      }
      v17 = HIDWORD(v16);
    }
    if ( v6 )
    {
      if ( qword_140E2D8C0 )
      {
        if ( (v6 & 0x10) != 0 )
        {
          v6 &= ~0x10uLL;
        }
        else
        {
          v6 &= qword_140E2D8C8;
          v14 = v29;
        }
      }
      v6 = (v6 >> 24) & 0x7FFFFFFFFFLL;
    }
    v28 = v6;
    v30 = v17 + v12;
    v18 = 0LL;
    v19 = (((__int64)((v15 << 25) - v14) >> 16 << 25) - v14) >> 16;
    v31 = v19;
    v33 = v17 << 21;
    if ( (_BYTE)CurrentIrql == 2 )
    {
      v26 = 17;
      MiLockWorkingSetSharedAtDpc(&unk_140E37340);
    }
    else
    {
      v26 = MiLockWorkingSetShared(&unk_140E37340);
    }
    v20 = 0;
    if ( v17 )
    {
      while ( 1 )
      {
        if ( !v18 )
          goto LABEL_27;
        if ( (v15 & 0xFFF) == 0 )
          break;
LABEL_19:
        *(_QWORD *)v15 = DemandZeroPte;
        if ( a3 )
          MiInsertLargeTbFlushEntry(v36, 1LL, v15);
        ++v20;
        v15 += 8LL;
        if ( v20 >= v17 )
        {
          v6 = v28;
          v19 = v31;
          goto LABEL_23;
        }
      }
      MiUnlockPageTableInternal(&unk_140E37340, v18);
LABEL_27:
      v18 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(&unk_140E37340, v18, 0LL);
      goto LABEL_19;
    }
LABEL_23:
    MiUnlockPageTableInternal(&unk_140E37340, v18);
    LOBYTE(v21) = v26;
    MiUnlockWorkingSetShared(&unk_140E37340, v21);
    if ( a3 )
    {
      MiFlushTbList(v36);
      if ( v6 )
      {
        _InterlockedOr(v25, 0);
        v23 = *v32;
        v24 = (unsigned __int16)(KiTbFlushTimeStamp - v23);
        a3 = v24 <= 2 && ((v23 & 1) != 0 || v24 < 2);
      }
    }
    MiReturnSystemVa(v19, v19 + v33, v27);
    v12 = v30;
    v7 = v34;
    v14 = v29;
    LOBYTE(CurrentIrql) = v35;
  }
  while ( v6 );
  return v30;
}
