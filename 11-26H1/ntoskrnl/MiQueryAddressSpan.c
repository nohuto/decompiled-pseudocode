/*
 * XREFs of MiQueryAddressSpan @ 0x1402E6FF0
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x1402E7200 (MiQueryAddressState.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiQueryReturnResults @ 0x140923994 (MiQueryReturnResults.c)
 *     MiInitializeQueryBasicInfo @ 0x140B14E0C (MiInitializeQueryBasicInfo.c)
 */

__int64 __fastcall MiQueryAddressSpan(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v5; // r8
  int v6; // r12d
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  struct _LIST_ENTRY **p_Blink; // r14
  __int64 v11; // r15
  unsigned __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int128 v17; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-19h]
  __int128 v19; // [rsp+48h] [rbp-11h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-1h]
  __int128 v21; // [rsp+60h] [rbp+7h] BYREF
  __int128 v22; // [rsp+70h] [rbp+17h]
  __int128 v23; // [rsp+80h] [rbp+27h]

  v1 = a1[5];
  v2 = a1[17];
  v3 = a1;
  v20 = 0LL;
  v18 = 0LL;
  v21 = 0LL;
  v4 = v1 & 0xFFFFFFFFFFFFF000uLL;
  v22 = 0LL;
  v23 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  MiInitializeQueryBasicInfo(&v21, a1);
  v6 = 0;
  v7 = *(unsigned int *)(v2 + 28);
  v8 = v3[6];
  v9 = (((v7 | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32)) << 12) | 0xFFF) + 1;
  if ( v8 > v9 || !v8 )
    v8 = (((v7 | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32)) << 12) | 0xFFF) + 1;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v11 = (unsigned __int8)MiLockWorkingSetShared((__int64)p_Blink, v9, v5);
  MiQueryAddressState(v4, v8 - 1, v11, v2, 0LL, &v17);
  LODWORD(v23) = v17;
  if ( DWORD2(v17) )
    DWORD1(v23) = MmProtectToValue[DWORD2(v17)];
  else
    DWORD1(v23) = 0;
  v12 = v18;
  WORD2(v22) = WORD2(v17);
  if ( v18 < v8 )
  {
    do
    {
      MiQueryAddressState(v12, v8 - 1, (unsigned __int8)v11, v2, &v17, &v19);
      if ( (_DWORD)v19 != (_DWORD)v17 || DWORD2(v19) != DWORD2(v17) || WORD2(v19) != WORD2(v17) )
        break;
      v12 = v20;
      if ( (++v6 & 0x3F) == 0 && ((unsigned int)MiWorkingSetIsContended(p_Blink) || KeShouldYieldProcessor()) )
      {
        MiUnlockWorkingSetShared((__int64)p_Blink, (unsigned __int8)v11);
        MiLockWorkingSetShared((__int64)p_Blink, v15, v16);
      }
    }
    while ( v12 < v8 );
    v3 = a1;
  }
  MiUnlockWorkingSetShared((__int64)p_Blink, (unsigned __int8)v11);
  v13 = v12 - v21;
  v3[8] = &v21;
  *((_QWORD *)&v22 + 1) = v13;
  v3[7] = 48LL;
  return MiQueryReturnResults(v3);
}
