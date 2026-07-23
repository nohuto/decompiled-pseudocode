/*
 * XREFs of MiDeleteMergedPte @ 0x14033E880
 * Callers:
 *     MiDecrementCloneBlock @ 0x14036BFF0 (MiDecrementCloneBlock.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiTryDeleteTransitionPte @ 0x14034050C (MiTryDeleteTransitionPte.c)
 */

unsigned __int64 __fastcall MiDeleteMergedPte(struct _KEVENT *a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax
  __int64 v5; // rbp
  unsigned int v6; // eax
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // edi
  unsigned __int64 v10; // rax
  char v11; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp+18h]

  result = *a2;
  v11 = 0;
  if ( result )
  {
    v5 = MiLockProtoPoolPage((ULONG_PTR)a2, &v11);
    v6 = MiTryDeleteTransitionPte((ULONG_PTR)a2);
    v8 = 1LL;
    v9 = v6;
    if ( v6 == 1 )
    {
      v12 = *a2;
      if ( (v12 & 0x400) == 0 )
      {
        v7 = v12;
        if ( (v12 & 8) == 0 )
        {
          v10 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          if ( (v12 & 4) != 0 )
            v10 = v12;
          v7 = v10;
        }
        if ( v7 )
          MiReleasePageFileInfo(a1, v7, 1LL);
      }
    }
    LOBYTE(v7) = v11;
    MiUnlockProtoPoolPage(v5, v7, v8);
    return v9;
  }
  return result;
}
