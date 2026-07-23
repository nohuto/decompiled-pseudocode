/*
 * XREFs of MiUpdatePerSessionProto @ 0x1404D97AC
 * Callers:
 *     MiCreatePerSessionProtos @ 0x1409A0A14 (MiCreatePerSessionProtos.c)
 *     MiDereferenceSubsectionProtos @ 0x140A9AFD0 (MiDereferenceSubsectionProtos.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 */

void __fastcall MiUpdatePerSessionProto(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile LONG *v4; // rsi
  KIRQL v9; // al
  bool v10; // r8
  unsigned __int64 *v11; // rcx
  KIRQL v12; // r14
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax

  v4 = (volatile LONG *)(a1 + 72);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v10 = 0;
  v11 = (unsigned __int64 *)(a2 + 24);
  v12 = v9;
  if ( !a4 )
  {
    RtlAvlRemoveNode(v11, a3);
    goto LABEL_11;
  }
  v13 = *v11;
  if ( !*v11 )
    goto LABEL_9;
  while ( *(_DWORD *)(a3 + 64) < *(_DWORD *)(v13 + 64) )
  {
    v14 = *(_QWORD *)v13;
    if ( !*(_QWORD *)v13 )
      goto LABEL_9;
LABEL_7:
    v13 = v14;
  }
  v14 = *(_QWORD *)(v13 + 8);
  if ( v14 )
    goto LABEL_7;
  v10 = 1;
LABEL_9:
  RtlAvlInsertNodeEx(v11, v13, v10, (_QWORD *)a3);
  v4 = (volatile LONG *)(a1 + 72);
LABEL_11:
  if ( v12 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  else
    ExReleaseSpinLockExclusive(v4, v12);
}
