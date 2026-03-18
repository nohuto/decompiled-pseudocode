/*
 * XREFs of MiDeletePerSessionProtos @ 0x1404586A0
 * Callers:
 *     MiDereferencePerSessionProtos @ 0x140A96D34 (MiDereferencePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x140B24964 (MiFreeSubsectionProtos.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028B2D0 (MiMakeDemandZeroPte.c)
 *     MiLockLeafPage @ 0x140298E10 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiDeleteTransitionPte @ 0x14033E7F0 (MiDeleteTransitionPte.c)
 *     MiReleasePageFileSpace @ 0x14033ECA0 (MiReleasePageFileSpace.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiLockProtoPoolPageForce @ 0x1403A10E0 (MiLockProtoPoolPageForce.c)
 *     MiFreeProtoPool @ 0x140458808 (MiFreeProtoPool.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140458D20 (MiUpdateSystemProtoPtesTree.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeletePerSessionProtos(char *P)
{
  unsigned int *v1; // r8
  __int64 v2; // rdi
  unsigned __int8 v3; // bp
  ULONG_PTR v5; // rbx
  __int64 v6; // r14
  ULONG_PTR v7; // r15
  struct _KEVENT *v8; // r12
  ULONG_PTR v9; // rax
  unsigned __int64 v10; // rdx
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 DemandZeroPte; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int8 v17; // [rsp+50h] [rbp+8h] BYREF

  v1 = (unsigned int *)*((_QWORD *)P + 8);
  v2 = 0LL;
  v3 = 17;
  v17 = 17;
  v5 = *((_QWORD *)P + 9);
  v6 = v1[11];
  v7 = v5 + 8 * v6;
  v8 = *(struct _KEVENT **)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(*(_QWORD *)v1 + 60LL) & 0x3FF));
  if ( v5 < v7 )
  {
    do
    {
      if ( (v5 & 0xFFF) == 0 || !v2 )
      {
        if ( v2 )
          MiUnlockProtoPoolPage(v2, v3);
        v16 = MiLockProtoPoolPageForce(v5, &v17);
        v3 = v17;
        v2 = v16;
      }
      v9 = MiLockLeafPage((unsigned __int64 *)v5, 0);
      v10 = *(_QWORD *)v5;
      if ( v9 )
      {
        v12 = MiDeleteTransitionPte(v5, v9, 0x11u, 0);
        v13 = v6 - 1;
        if ( v12 != 3 )
          v13 = v6;
        v6 = v13;
      }
      else
      {
        if ( !v10 )
          break;
        if ( (v10 & 0x400) == 0 )
        {
          DemandZeroPte = MiMakeDemandZeroPte(24);
          if ( v15 != DemandZeroPte )
            MiReleasePageFileSpace(v8, v15, 1);
        }
      }
      v5 += 8LL;
    }
    while ( v5 < v7 );
    if ( v2 )
      MiUnlockProtoPoolPage(v2, v3);
  }
  MiReturnCommit((__int64)v8, v6, 0);
  MiUpdateSystemProtoPtesTree(P + 24, 0LL);
  MiFreeProtoPool(*((PVOID *)P + 9));
  ExFreePoolWithTag(P, 0);
  return v6;
}
