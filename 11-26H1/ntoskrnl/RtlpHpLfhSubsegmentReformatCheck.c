/*
 * XREFs of RtlpHpLfhSubsegmentReformatCheck @ 0x14034BE98
 * Callers:
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x14034BA20 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpLfhSubsegmentConstructCommitState @ 0x14034BB90 (RtlpHpLfhSubsegmentConstructCommitState.c)
 *     RtlpHpLfhSubsegmentCountAllocatedBlocks @ 0x14034C00C (RtlpHpLfhSubsegmentCountAllocatedBlocks.c)
 *     RtlpHpAcquireLockShared @ 0x14034C05C (RtlpHpAcquireLockShared.c)
 *     RtlpHpReleaseLockShared @ 0x14034DEC0 (RtlpHpReleaseLockShared.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentReformatCheck(__int64 a1, unsigned __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v6; // ebx
  unsigned int v9; // ebx
  __int64 v11; // rsi
  int v12; // ebp
  __int16 *v13; // r14
  __int16 *v14; // r13
  _WORD *v15; // rdx
  __int16 v16; // r8
  int v17; // ecx
  _WORD v19[64]; // [rsp+30h] [rbp-D8h] BYREF

  v6 = *(unsigned __int16 *)(a2 + 34) - *(unsigned __int16 *)(a2 + 32);
  if ( *(_BYTE *)(a2 + 39) == 1 )
  {
    if ( (unsigned int)RtlpHpLfhSubsegmentCountAllocatedBlocks(a2) >= v6 )
    {
      *a3 = 0;
      *a4 = 0;
      return 1;
    }
    return 0;
  }
  memset_0(v19, 0, sizeof(v19));
  if ( (unsigned int)RtlpHpLfhSubsegmentConstructCommitState(a1, a2, (unsigned __int64 *)(a2 + 64), v19) < v6 )
    return 0;
  v9 = 0;
  LODWORD(v11) = 0;
  v12 = 0;
  v13 = (__int16 *)(a2 + 8LL * *(unsigned __int8 *)(a2 + 24));
  v14 = &v13[*(unsigned __int8 *)(a2 + 39)];
  RtlpHpAcquireLockShared(a2 + 56, *(unsigned __int8 *)(a1 + 73));
  if ( v13 < v14 )
  {
    v15 = v19;
    do
    {
      v16 = *v13;
      v17 = v12 + 1;
      if ( *v13 )
        v17 = v12;
      v12 = v17;
      if ( v16 != *v15 )
      {
        if ( *v15 || v16 != -1 )
          break;
        if ( !(_DWORD)v11 )
          v11 = v15 - v19;
      }
      ++v13;
      ++v15;
    }
    while ( v13 < v14 );
  }
  RtlpHpReleaseLockShared((struct _KTHREAD *)(a2 + 56));
  if ( v13 >= v14 )
  {
    *a3 = v11;
    *a4 = v12;
    return 1;
  }
  return v9;
}
