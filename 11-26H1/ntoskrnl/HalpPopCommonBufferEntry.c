/*
 * XREFs of HalpPopCommonBufferEntry @ 0x1403463F4
 * Callers:
 *     HalFreeCommonBufferDmarThin @ 0x140346220 (HalFreeCommonBufferDmarThin.c)
 *     HalFreeCommonBufferDmaThin @ 0x140346320 (HalFreeCommonBufferDmaThin.c)
 *     HalFreeCommonBufferV3 @ 0x14058C550 (HalFreeCommonBufferV3.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 */

unsigned __int64 __fastcall HalpPopCommonBufferEntry(_RTL_BALANCED_NODE *a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  KIRQL v5; // al
  _RTL_RB_TREE *v6; // rcx
  KIRQL v7; // bp
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  KIRQL v11; // al
  __int64 v12; // rbx
  KIRQL v13; // si
  KIRQL v14; // al
  unsigned __int64 v15; // rdx
  KIRQL v16; // bp
  unsigned __int64 v17; // rax

  v2 = 0LL;
  if ( !a2 )
    goto LABEL_15;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 80));
  v6 = (_RTL_RB_TREE *)(a2 + 64);
  v7 = v5;
  v8 = *(_QWORD *)(a2 + 64);
  if ( (*(_BYTE *)(a2 + 72) & 1) != 0 && v8 )
    v8 ^= (unsigned __int64)v6;
  while ( v8 )
  {
    if ( *(_QWORD *)(v8 + 24) > (unsigned __int64)a1 )
    {
      v9 = *(_QWORD *)v8;
    }
    else
    {
      if ( *(_RTL_BALANCED_NODE **)(v8 + 24) == a1 )
      {
        v2 = v8;
        RtlRbRemoveNode(v6, (PRTL_BALANCED_NODE)v8);
        break;
      }
      v9 = *(_QWORD *)(v8 + 8);
    }
    if ( (*(_BYTE *)(a2 + 72) & 1) != 0 && v9 )
      v8 ^= v9;
    else
      v8 = v9;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 80), v7);
  if ( !v2 )
  {
LABEL_15:
    v11 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
    v12 = HalpDmaDomainList;
    v13 = v11;
    while ( (__int64 *)v12 != &HalpDmaDomainList )
    {
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 80));
      v15 = *(_QWORD *)(v12 + 64);
      v16 = v14;
      if ( (*(_BYTE *)(v12 + 72) & 1) != 0 && v15 )
        v15 ^= v12 + 64;
      while ( v15 )
      {
        if ( *(_RTL_BALANCED_NODE **)(v15 + 24) == a1 )
        {
          v2 = v15;
          RtlRbRemoveNode((PRTL_RB_TREE)(v12 + 64), (PRTL_BALANCED_NODE)v15);
          break;
        }
        if ( *(_QWORD *)(v15 + 24) <= (unsigned __int64)a1 )
          v17 = *(_QWORD *)(v15 + 8);
        else
          v17 = *(_QWORD *)v15;
        if ( (*(_BYTE *)(v12 + 72) & 1) != 0 && v17 )
          v15 ^= v17;
        else
          v15 = v17;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v12 + 80), v16);
      if ( v2 )
        break;
      v12 = *(_QWORD *)v12;
    }
    KeReleaseSpinLock(&HalpDmaDomainListLock, v13);
  }
  return v2;
}
