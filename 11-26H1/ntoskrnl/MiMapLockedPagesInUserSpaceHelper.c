/*
 * XREFs of MiMapLockedPagesInUserSpaceHelper @ 0x1403684CC
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140AEF51C (MiRotateToFrameBufferNoCopy.c)
 *     MiRotateToFrameBuffer @ 0x140AEF750 (MiRotateToFrameBuffer.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiPageTableLockIsContended @ 0x1402E88A0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiInsertPhysicalPteMapping @ 0x140367EF0 (MiInsertPhysicalPteMapping.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 */

void __fastcall MiMapLockedPagesInUserSpaceHelper(
        unsigned __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v9; // r8
  _KPROCESS *Process; // r15
  ULONG_PTR v11; // rsi
  unsigned int v12; // ebp
  __int64 p_Blink; // r15
  int v14; // ebx
  unsigned __int64 v15; // rdi
  KIRQL v16; // r13
  int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // ecx
  int v23; // eax
  _QWORD v24[3]; // [rsp+20h] [rbp-48h] BYREF
  int v25; // [rsp+38h] [rbp-30h]
  int v26; // [rsp+3Ch] [rbp-2Ch]
  __int64 v28; // [rsp+78h] [rbp+10h]

  v24[0] = a6;
  v26 = 0;
  v9 = 1LL;
  if ( (*(_DWORD *)(a6 + 48) & 0x1C) == 0x10 )
  {
    v22 = *(_DWORD *)(MiLocateLockedVadEvent(a6, 8LL) + 32);
    v23 = a2 - 8;
    if ( ((unsigned __int8)v22 & (unsigned __int8)v9) != 0 )
      v23 = v9;
    v26 = v23;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((a7 >> 31) & 0xFFFFFFFD) + 4;
  if ( a4 )
  {
    if ( a4 == 2 )
      v12 |= 0x18u;
  }
  else
  {
    v12 |= 8u;
  }
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v14 = (*(_DWORD *)(a6 + 48) >> 10) & 0x7F;
  v15 = 0LL;
  v16 = MiLockWorkingSetShared(p_Blink, a2, v9);
  v28 = a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v17 = v12;
    if ( a3 )
    {
      v17 = (*(_DWORD *)(48LL * *a3 - 0x220000000000LL + 16) >> 5) & 7;
      if ( (*(_DWORD *)(48LL * *a3 - 0x220000000000LL + 32) & 0xC00000) == 0x800000 )
      {
        v17 |= 0x18u;
      }
      else if ( (*(_DWORD *)(48LL * *a3 - 0x220000000000LL + 32) & 0xC00000) == 0 )
      {
        v17 |= 8u;
      }
      ++a3;
    }
    if ( !v15 )
      goto LABEL_14;
    if ( (v11 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(p_Blink, v15);
LABEL_14:
      v15 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v11, v14, v16, 0);
    }
    v24[1] = v11;
    v25 = v17;
    v24[2] = *(_QWORD *)(v28 + v11);
    MiInsertPhysicalPteMapping(v24);
    v11 += 8LL;
    if ( (v11 & 0x78) == 0
      && (MiWorkingSetIsContended(p_Blink, 0)
       || (unsigned int)MiPageTableLockIsContended(p_Blink, v15)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(p_Blink, v15);
      LOBYTE(v19) = v16;
      MiUnlockWorkingSetShared(p_Blink, v19);
      v15 = 0LL;
      MiLockWorkingSetShared(p_Blink, v20, v21);
    }
    --a5;
  }
  while ( a5 );
  if ( v15 )
    MiUnlockPageTableInternal(p_Blink, v15);
  LOBYTE(v18) = v16;
  MiUnlockWorkingSetShared(p_Blink, v18);
}
