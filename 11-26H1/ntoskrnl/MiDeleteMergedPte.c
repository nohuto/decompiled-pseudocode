/*
 * XREFs of MiDeleteMergedPte @ 0x14033C800
 * Callers:
 *     MiDecrementCloneBlock @ 0x14036A250 (MiDecrementCloneBlock.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiTryDeleteTransitionPte @ 0x14033E48C (MiTryDeleteTransitionPte.c)
 */

unsigned __int64 __fastcall MiDeleteMergedPte(struct _KEVENT *a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax
  __int64 v5; // rbp
  unsigned int v6; // edi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int8 v9; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp+18h]

  result = *a2;
  v9 = 0;
  if ( result )
  {
    v5 = MiLockProtoPoolPage((ULONG_PTR)a2, &v9);
    v6 = MiTryDeleteTransitionPte((ULONG_PTR)a2);
    if ( v6 == 1 )
    {
      v10 = *a2;
      if ( (v10 & 0x400) == 0 )
      {
        v7 = v10;
        if ( (v10 & 8) == 0 )
        {
          v8 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          if ( (v10 & 4) != 0 )
            v8 = v10;
          v7 = v8;
        }
        if ( v7 )
          MiReleasePageFileInfo(a1, v7, 1);
      }
    }
    MiUnlockProtoPoolPage(v5, v9);
    return v6;
  }
  return result;
}
