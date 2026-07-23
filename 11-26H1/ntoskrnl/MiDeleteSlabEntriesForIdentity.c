/*
 * XREFs of MiDeleteSlabEntriesForIdentity @ 0x14070B4B0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiFreeSlabEntry @ 0x1402A6E7C (MiFreeSlabEntry.c)
 *     MiRemoveSlabEntry @ 0x1402A8C10 (MiRemoveSlabEntry.c)
 *     MiUnlinkTransitionSlabPages @ 0x1402A9C34 (MiUnlinkTransitionSlabPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeGenericCallDpcEx @ 0x1403CC184 (KeGenericCallDpcEx.c)
 *     MiRelinkTransitionSlabPages @ 0x140530D80 (MiRelinkTransitionSlabPages.c)
 *     MiChangeSlabEntryIdentity @ 0x14070A8C8 (MiChangeSlabEntryIdentity.c)
 */

__int64 __fastcall MiDeleteSlabEntriesForIdentity(__int64 a1, __int64 a2, char a3)
{
  volatile LONG *v3; // rbp
  int v5; // edi
  _QWORD *v6; // rbx
  volatile LONG *v8; // rcx
  KIRQL v9; // r14
  __int64 v10; // rcx
  _QWORD *v11; // rsi
  _QWORD **v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // r13
  _QWORD *v15; // rax
  _QWORD *i; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  int v24; // [rsp+20h] [rbp-48h]
  char v25; // [rsp+78h] [rbp+10h]
  int v26; // [rsp+80h] [rbp+18h]
  int v27; // [rsp+88h] [rbp+20h]

  v3 = (volatile LONG *)(a2 + 16);
  v5 = 0;
  v6 = 0LL;
  v26 = 0;
  v8 = (volatile LONG *)(a2 + 16);
  v24 = MiPageSizes[((unsigned __int64)*(unsigned __int16 *)(a2 + 136) >> 3) & 3];
  if ( (a3 & 1) != 0 )
  {
    v9 = 17;
    v27 = 1;
    v25 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v8);
  }
  else
  {
    v27 = 0;
    v9 = ExAcquireSpinLockExclusive(v8);
    v25 = v9;
  }
  v10 = *(_QWORD *)(a2 + 8);
  if ( (v10 & 1) != 0 )
  {
    if ( v10 == 1 )
      goto LABEL_26;
    v11 = (_QWORD *)(v10 ^ (a2 | 1));
  }
  else
  {
    v11 = *(_QWORD **)(a2 + 8);
  }
  if ( v11 )
  {
    while ( 1 )
    {
      v12 = (_QWORD **)v11[1];
      v13 = v11;
      v14 = (__int64)v11;
      v15 = v11;
      if ( v12 )
      {
        v11 = (_QWORD *)v11[1];
        for ( i = *v12; i; i = (_QWORD *)*i )
          v11 = i;
      }
      else
      {
        while ( 1 )
        {
          v11 = (_QWORD *)(v11[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v11 || (_QWORD *)*v11 == v15 )
            break;
          v15 = v11;
        }
      }
      v17 = *(_DWORD *)(v14 + 92);
      if ( (v17 & 4) != 0 && *(_QWORD *)(a1 + 8 * (((unsigned __int64)v17 >> 3) & 0x3F) + 21528) )
        goto LABEL_23;
      if ( *(_DWORD *)(v14 + 84) == v24 )
        break;
      if ( v27 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        v19 = MiUnlinkTransitionSlabPages(v18, v14);
        MiChangeSlabEntryIdentity(a2, v14);
        MiRelinkTransitionSlabPages(v19, v20, v21);
        ExAcquireSpinLockExclusiveAtDpcLevel(v3);
LABEL_23:
        v5 = v26;
        goto LABEL_24;
      }
      v5 = 1;
      v26 = 1;
LABEL_24:
      if ( !v11 )
      {
        v9 = v25;
        goto LABEL_26;
      }
    }
    MiRemoveSlabEntry(a1, a2, v14);
    *v13 = v6;
    v6 = (_QWORD *)v14;
    goto LABEL_23;
  }
LABEL_26:
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  while ( 1 )
  {
    v22 = (__int64)v6;
    if ( !v6 )
      break;
    v6 = (_QWORD *)*v6;
    MiFreeSlabEntry(a2, v22);
  }
  if ( v9 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
    __writecr8(v9);
  }
  if ( v5 )
    KeGenericCallDpcEx((__int64)MiChangeSlabIdentitiesDpc, a1);
  return 0LL;
}
