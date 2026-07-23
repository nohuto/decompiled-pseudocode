/*
 * XREFs of MiInsertViewOfPhysicalSection @ 0x140317984
 * Callers:
 *     MiMapViewOfPhysicalSection @ 0x140A0228C (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiPageTableLockIsContended @ 0x1402E88A0 (MiPageTableLockIsContended.c)
 *     MiInsertVad @ 0x140318030 (MiInsertVad.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiInsertPhysicalPteMapping @ 0x140367EF0 (MiInsertPhysicalPteMapping.c)
 */

void __fastcall MiInsertViewOfPhysicalSection(__int64 a1, ULONG_PTR a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v6; // r11d
  __int64 v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // rcx
  ULONG_PTR v11; // rbp
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v13; // r12
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  KIRQL v19; // di
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  _QWORD v23[3]; // [rsp+20h] [rbp-48h] BYREF
  int v24; // [rsp+38h] [rbp-30h]
  int v25; // [rsp+3Ch] [rbp-2Ch]

  v6 = *(unsigned __int8 *)(a2 + 33);
  v8 = *(unsigned int *)(a2 + 28);
  v9 = *(_DWORD *)(a2 + 48) >> 5;
  v10 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v23[0] = a2;
  v24 = v9 & 0x1F;
  v25 = 0;
  v11 = 8 * (v10 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  CurrentThread = KeGetCurrentThread();
  v13 = 8 * ((v8 | ((unsigned __int64)v6 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v14 = a1 + 1024;
  v15 = 0LL;
  MiLockVad((__int64)CurrentThread, a2, 0xFFFFF68000000000uLL, a4);
  MiInsertVad(a2);
  v19 = MiLockWorkingSetShared(a1 + 1024, v16, v17);
  if ( v11 > v13 )
    goto LABEL_8;
  do
  {
    if ( v15 )
    {
      if ( (v11 & 0xFFF) != 0 )
        goto LABEL_4;
      MiUnlockPageTableInternal(v14, v15);
    }
    MiMakeSystemAddressValid(v11, (*(_DWORD *)(a2 + 48) >> 10) & 0x7F, v19, 0);
    v15 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_4:
    v23[1] = v11;
    v23[2] = a3;
    MiInsertPhysicalPteMapping(v23);
    v11 += 8LL;
    if ( (v11 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(v14)
       || (unsigned int)MiPageTableLockIsContended(v14, v15)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v14, v15);
      LOBYTE(v20) = v19;
      MiUnlockWorkingSetShared(v14, v20);
      v15 = 0LL;
      MiLockWorkingSetShared(v14, v21, v22);
    }
    ++a3;
  }
  while ( v11 <= v13 );
  if ( v15 )
    MiUnlockPageTableInternal(v14, v15);
LABEL_8:
  LOBYTE(v18) = v19;
  MiUnlockWorkingSetShared(v14, v18);
  MiUnlockVad((__int64)CurrentThread, a2);
}
