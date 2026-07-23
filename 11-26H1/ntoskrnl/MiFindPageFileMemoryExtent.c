/*
 * XREFs of MiFindPageFileMemoryExtent @ 0x1407117E0
 * Callers:
 *     MiTransferMemoryPagefileData @ 0x1404FC9E8 (MiTransferMemoryPagefileData.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiComparePageFileMemoryExtents @ 0x140711534 (MiComparePageFileMemoryExtents.c)
 */

__int64 __fastcall MiFindPageFileMemoryExtent(__int64 a1, int a2, int a3)
{
  volatile LONG *v3; // rdi
  volatile LONG *v5; // rcx
  KIRQL v7; // bp
  __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // rbx
  int v11; // esi
  int v12; // eax
  __int64 v13; // rax
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  v3 = (volatile LONG *)(a1 + 200);
  v5 = (volatile LONG *)(a1 + 200);
  if ( a3 )
  {
    v7 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v5);
  }
  else
  {
    v7 = ExAcquireSpinLockShared(v5);
  }
  v8 = a1 + 232;
  v9 = (*(_BYTE *)(a1 + 240) & 1) == 0;
  v10 = *(_QWORD *)(a1 + 232);
  if ( !v9 && v10 )
    v10 ^= v8;
  v11 = *(_BYTE *)(v8 + 8) & 1;
  if ( !v10 )
    goto LABEL_18;
  do
  {
    v12 = MiComparePageFileMemoryExtents(&v15, v10);
    if ( v12 >= 0 )
    {
      if ( v12 <= 0 )
        break;
      v13 = *(_QWORD *)(v10 + 8);
    }
    else
    {
      v13 = *(_QWORD *)v10;
    }
    if ( v11 && v13 )
      v10 ^= v13;
    else
      v10 = v13;
  }
  while ( v10 );
  if ( !v10 )
LABEL_18:
    NT_ASSERT("Node != ((void *)0)");
  if ( a3 || v7 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(v3);
  else
    ExReleaseSpinLockShared(v3, v7);
  return v10;
}
