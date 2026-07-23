/*
 * XREFs of MiFreezeIoPfnNode @ 0x1406F8D5C
 * Callers:
 *     MiDbgLockIoPage @ 0x140702D80 (MiDbgLockIoPage.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x140428E80 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLockIoPfnTree @ 0x1406F92D4 (MiLockIoPfnTree.c)
 */

__int64 __fastcall MiFreezeIoPfnNode(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v4; // esi
  _QWORD *MmInternal; // r9
  __int64 v7; // rbp
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rax
  volatile signed __int32 *v11; // rcx

  *(_QWORD *)a3 = 0LL;
  v4 = a2;
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  v7 = MmInternal[41];
  if ( (_DWORD)a2 )
  {
    *(_BYTE *)(a3 + 8) = 1;
    qword_140E34928 = 1LL;
    v4 = ExTryAcquireSpinLockSharedAtDpcLevel(v7 + 640, a2, a3, (__int64)MmInternal);
    if ( !v4 )
    {
      qword_140E34928 = 2LL;
      return 0LL;
    }
  }
  else
  {
    *(_BYTE *)(a3 + 8) = 0;
    MiLockIoPfnTree(5LL);
  }
  v9 = (_QWORD *)qword_140E36000;
  while ( v9 )
  {
    v10 = v9[3];
    if ( a1 >= v10 )
    {
      if ( a1 < v10 + 512 )
        break;
      v9 = (_QWORD *)v9[1];
    }
    else
    {
      v9 = (_QWORD *)*v9;
    }
  }
  if ( v9 )
  {
    v11 = (volatile signed __int32 *)v9 + 43;
    if ( v4 )
    {
      qword_140E34928 = (__int64)v9;
      if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v11) )
      {
        qword_140E34928 = (__int64)v9 + 1;
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + 640));
        *(_BYTE *)(a3 + 8) = 0;
        return 0LL;
      }
    }
    else
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v11);
    }
    *(_QWORD *)a3 = v9;
  }
  else
  {
    qword_140E34928 = 3LL;
  }
  return 1LL;
}
