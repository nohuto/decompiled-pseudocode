/*
 * XREFs of MiDeletePerSessionProtos @ 0x14044FF10
 * Callers:
 *     MiDereferencePerSessionProtos @ 0x140A9AEB4 (MiDereferencePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x140B26E04 (MiFreeSubsectionProtos.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiDeleteTransitionPte @ 0x140340870 (MiDeleteTransitionPte.c)
 *     MiReleasePageFileSpace @ 0x140340D20 (MiReleasePageFileSpace.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 *     MiFreeProtoPool @ 0x140450078 (MiFreeProtoPool.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140450590 (MiUpdateSystemProtoPtesTree.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeletePerSessionProtos(char *P)
{
  unsigned int *v1; // r8
  __int64 v2; // rdi
  unsigned __int8 v3; // bp
  ULONG_PTR v5; // rbx
  __int64 v6; // r14
  unsigned __int64 v7; // rdx
  ULONG_PTR v8; // r15
  struct _KEVENT *v9; // r12
  ULONG_PTR v10; // rax
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 DemandZeroPte; // rax
  __int64 v15; // rax
  unsigned __int8 v16; // [rsp+50h] [rbp+8h] BYREF

  v1 = (unsigned int *)*((_QWORD *)P + 8);
  v2 = 0LL;
  v3 = 17;
  v16 = 17;
  v5 = *((_QWORD *)P + 9);
  v6 = v1[11];
  v7 = *(_DWORD *)(*(_QWORD *)v1 + 60LL) & 0x3FF;
  v8 = v5 + 8 * v6;
  v9 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * v7);
  if ( v5 < v8 )
  {
    do
    {
      if ( (v5 & 0xFFF) == 0 || !v2 )
      {
        if ( v2 )
        {
          LOBYTE(v7) = v3;
          MiUnlockProtoPoolPage(v2, v7, (__int64)v1);
        }
        v15 = MiLockProtoPoolPageForce(v5, &v16);
        v3 = v16;
        v2 = v15;
      }
      v10 = MiLockLeafPage((unsigned __int64 *)v5, 0);
      v7 = *(_QWORD *)v5;
      if ( v10 )
      {
        v12 = MiDeleteTransitionPte(v5, v10, 0x11u, 0);
        v13 = v6 - 1;
        if ( v12 != 3 )
          v13 = v6;
        v6 = v13;
      }
      else
      {
        if ( !v7 )
          break;
        if ( (v7 & 0x400) == 0 )
        {
          DemandZeroPte = MiMakeDemandZeroPte(24);
          if ( v7 != DemandZeroPte )
            MiReleasePageFileSpace(v9, v7, 1);
        }
      }
      v5 += 8LL;
    }
    while ( v5 < v8 );
    if ( v2 )
    {
      LOBYTE(v7) = v3;
      MiUnlockProtoPoolPage(v2, v7, (__int64)v1);
    }
  }
  MiReturnCommit((__int64)v9, v6, 0);
  MiUpdateSystemProtoPtesTree(P + 24, 0LL);
  MiFreeProtoPool(*((PVOID *)P + 9));
  ExFreePoolWithTag(P, 0);
  return v6;
}
