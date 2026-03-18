/*
 * XREFs of MiCopyWorkingSetFields @ 0x1406E43D8
 * Callers:
 *     MmInitializeHandBuiltProcess @ 0x140963A54 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x1402FE650 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402FE7B0 (MiLockWorkingSetCoreExclusive.c)
 */

void __fastcall MiCopyWorkingSetFields(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // r14
  _QWORD *v8; // r15
  _QWORD *v9; // rbp
  char v10; // r12
  __int64 v11; // rdx
  __int64 *v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx

  v3 = &unk_140E37830;
  v4 = &unk_140E37838;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
  {
    v8 = &unk_140E37830;
    v9 = &unk_140E37838;
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
  MiLockWorkingSetCoreExclusive(a2);
  v11 = 8LL;
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  *v8 = *v3;
  *v9 = *v4;
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
  v12 = (__int64 *)(a2 + 56);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 160);
  *(_QWORD *)(a1 + 16) = a3;
  v13 = (_QWORD *)(a1 + 56);
  do
  {
    v14 = *v12++;
    *v13++ = v14;
    --v11;
  }
  while ( v11 );
  MiUnlockWorkingSetCoreExclusive(a2);
  LOBYTE(v15) = v10;
  MiUnlockWorkingSetShared(a2, v15);
}
