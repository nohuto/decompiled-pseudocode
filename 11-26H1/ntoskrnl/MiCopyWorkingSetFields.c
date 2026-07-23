/*
 * XREFs of MiCopyWorkingSetFields @ 0x1406E9088
 * Callers:
 *     MmInitializeHandBuiltProcess @ 0x140ABF810 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x1402E06D0 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402E0830 (MiLockWorkingSetCoreExclusive.c)
 */

void __fastcall MiCopyWorkingSetFields(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // r14
  _QWORD *v8; // r15
  _QWORD *v9; // rbp
  char v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 *v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx

  v3 = &unk_140E379B0;
  v4 = &unk_140E379B8;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
  {
    v8 = &unk_140E379B0;
    v9 = &unk_140E379B8;
  }
  else
  {
    v8 = (_QWORD *)(a1 + 240);
    v9 = (_QWORD *)(a1 + 248);
  }
  if ( (*(_DWORD *)(a2 + 184) & 0xF) != 1 )
  {
    v3 = (_QWORD *)(a2 + 240);
    v4 = (_QWORD *)(a2 + 248);
  }
  v10 = MiLockWorkingSetShared(a2, a2, a3);
  MiLockWorkingSetCoreExclusive(a2, v11, v12);
  v13 = 8LL;
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  *v8 = *v3;
  *v9 = *v4;
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
  v14 = (__int64 *)(a2 + 56);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 160);
  *(_QWORD *)(a1 + 16) = a3;
  v15 = (_QWORD *)(a1 + 56);
  do
  {
    v16 = *v14++;
    *v15++ = v16;
    --v13;
  }
  while ( v13 );
  MiUnlockWorkingSetCoreExclusive(a2);
  LOBYTE(v17) = v10;
  MiUnlockWorkingSetShared(a2, v17);
}
