/*
 * XREFs of MiInsertSubsectionNode @ 0x140482AB0
 * Callers:
 *     MiFinishExtendAppend @ 0x1404829A0 (MiFinishExtendAppend.c)
 *     MiCreateDataFileMap @ 0x140A63B60 (MiCreateDataFileMap.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 */

void __fastcall MiInsertSubsectionNode(__int64 a1, __int64 a2, int a3)
{
  bool v3; // bl
  unsigned __int64 *v4; // r14
  KIRQL v7; // si
  _QWORD *v8; // r10
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rax

  v3 = 0;
  v4 = (unsigned __int64 *)(a1 + 288);
  if ( a3 )
    v7 = 17;
  else
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v8 = (_QWORD *)*v4;
  if ( !*v4 )
    goto LABEL_14;
  while ( 1 )
  {
    v9 = *(unsigned int *)(a2 + 36) | ((*(_DWORD *)(a2 + 32) & 0xFFC0LL) << 26);
    v10 = *((unsigned int *)v8 - 5) | ((*(_DWORD *)(v8 - 3) & 0xFFC0LL) << 26);
    v11 = v10 + *((unsigned int *)v8 - 4);
    if ( *((_DWORD *)v8 - 6) < 0x100000u )
      --v11;
    if ( v9 > v11 || v9 >= v10 )
      break;
    v12 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_14;
LABEL_12:
    v8 = v12;
  }
  v12 = (_QWORD *)v8[1];
  if ( v12 )
    goto LABEL_12;
  v3 = 1;
LABEL_14:
  RtlAvlInsertNodeEx(v4, (unsigned __int64)v8, v3, (_QWORD *)(a2 + 56));
  ++*(_QWORD *)(a1 + 296);
  *(_QWORD *)(a1 + 304) = a2;
  if ( v7 != 17 )
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v7);
}
