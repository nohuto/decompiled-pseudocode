/*
 * XREFs of MiProcessVaRangesInfoClass @ 0x140B6E518
 * Callers:
 *     MmSetPriorityVaRanges @ 0x14077EE18 (MmSetPriorityVaRanges.c)
 *     NtSetInformationVirtualMemory @ 0x1408F7E60 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 *     MiMoveDirtyBitsToPfns @ 0x14031B4A0 (MiMoveDirtyBitsToPfns.c)
 *     MiIsVadLarge @ 0x1403A8C30 (MiIsVadLarge.c)
 *     MiVadSupportsPrivateCommit @ 0x1403C5E14 (MiVadSupportsPrivateCommit.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiDiscardVirtualMemory @ 0x1406F3E98 (MiDiscardVirtualMemory.c)
 *     MiCheckResetDiscardVirtualMemory @ 0x140AAF800 (MiCheckResetDiscardVirtualMemory.c)
 */

__int64 __fastcall MiProcessVaRangesInfoClass(
        unsigned __int64 a1,
        __int128 *a2,
        int a3,
        unsigned int *a4,
        __int64 a5,
        char a6)
{
  unsigned int *v8; // r13
  int v9; // ebx
  unsigned int v10; // r15d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbp
  ULONG_PTR v13; // rax
  volatile signed __int32 *v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // r10d
  unsigned __int64 v20; // rbp
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v25; // [rsp+30h] [rbp-68h]
  unsigned int v26; // [rsp+34h] [rbp-64h] BYREF
  __int64 v27; // [rsp+38h] [rbp-60h]
  __int64 v28; // [rsp+40h] [rbp-58h] BYREF
  __int128 v29; // [rsp+48h] [rbp-50h]
  unsigned __int64 v30; // [rsp+A0h] [rbp+8h]
  unsigned int v31; // [rsp+B0h] [rbp+18h]

  v30 = a1;
  v26 = 0;
  v8 = 0LL;
  v28 = 0LL;
  v31 = 0;
  if ( a3 == 1 )
  {
    v31 = *a4;
  }
  else if ( a3 == 8 )
  {
    v8 = a4;
    if ( KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[16] )
      return (unsigned int)-1073741637;
  }
  v9 = 0;
  v10 = 0;
LABEL_7:
  if ( v10 < a1 )
  {
    v29 = *a2;
    v27 = *((_QWORD *)&v29 + 1);
    v11 = v29;
    while ( 1 )
    {
      v12 = v11;
      v13 = MiObtainReferencedVadEx(v11, 0LL, (int *)&v26);
      v14 = (volatile signed __int32 *)v13;
      if ( !v13 )
        break;
      v15 = *(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32);
      v25 = 0;
      v16 = (v12 + v27 - 1) | 0xFFF;
      if ( v16 >> 12 > v15 )
      {
        v25 = 1;
        v16 = (v15 << 12) | 0xFFF;
        *(_QWORD *)&v29 = v16 + 1;
        v27 = v12 - v16 + v27 - 1;
      }
      if ( a3 == 8 )
      {
        MiReadVadFlags(v13);
        if ( !(unsigned int)MiVadSupportsPrivateCommit(v17)
          || MiIsVadLarge(v18)
          || (v19 & 0x80000) == 0
          || (v19 & 0x180000) == 0x180000
          || (v19 & 0x880000) == 0x880000
          || (v19 & 0x1080000) == 0x1080000
          || (v19 & 0x1C) != 0 )
        {
          v9 = -1073741637;
LABEL_34:
          MiUnlockAndDereferenceVad(v14);
          return (unsigned int)v9;
        }
        v20 = v12 & 0xFFFFFFFFFFFFF000uLL;
        v9 = MiCheckResetDiscardVirtualMemory((ULONG_PTR)v14, v20, v16, a5, a6);
        if ( v9 < 0 )
          goto LABEL_34;
        v9 = MiDiscardVirtualMemory(v20, v16, v21, &v28);
        *((_QWORD *)v8 + 1) += v28;
        if ( v9 )
          goto LABEL_34;
      }
      else if ( !(unsigned int)MiVadSupportsPrivateCommit(v13) || MiIsVadLarge(v22) )
      {
        v9 = 1073741849;
      }
      else if ( a3 == 1 )
      {
        MiWalkVaRange(v12, v16, (__int64)v14, 2, v31);
      }
      else if ( (MiReadVadFlags(v23) & 0x1080000) == 0x1080000 )
      {
        v9 = -1073741637;
      }
      else
      {
        MiMoveDirtyBitsToPfns(v12, v16, 0LL, 2);
      }
      MiUnlockAndDereferenceVad(v14);
      v11 = v29;
      if ( !v25 )
      {
        a1 = v30;
        ++v10;
        ++a2;
        goto LABEL_7;
      }
    }
    return v26;
  }
  return (unsigned int)v9;
}
