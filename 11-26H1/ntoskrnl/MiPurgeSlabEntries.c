/*
 * XREFs of MiPurgeSlabEntries @ 0x1404BB48C
 * Callers:
 *     MiFreeSlabEntries @ 0x1402A6AEC (MiFreeSlabEntries.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     MiPurgeSlabEntry @ 0x1404BB64C (MiPurgeSlabEntry.c)
 */

void __fastcall MiPurgeSlabEntries(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // r13
  __int64 v4; // r15
  __int64 v5; // r14
  KIRQL v6; // al
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  _QWORD **v12; // rcx
  unsigned __int64 v13; // rax
  _QWORD *i; // rcx
  unsigned int v15; // [rsp+50h] [rbp+8h]

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) )
  {
    v2 = 0LL;
    v3 = 0LL;
    v4 = 0LL;
    v5 = 0LL;
    v15 = MiPageSizes[((unsigned __int64)*(unsigned __int16 *)(a1 + 136) >> 3) & 3];
    do
    {
      v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 16));
      v7 = *(_QWORD *)a1;
      v8 = v6;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v7 )
        v7 ^= a1;
      v9 = 0LL;
      while ( v7 )
      {
        if ( v2 > *(_QWORD *)(v7 + 48) )
        {
          v10 = *(_QWORD *)(v7 + 8);
        }
        else
        {
          if ( v2 >= *(_QWORD *)(v7 + 40) )
            goto LABEL_17;
          v10 = *(_QWORD *)v7;
          v9 = v7;
        }
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v10 )
          v7 ^= v10;
        else
          v7 = v10;
      }
      v7 = v9;
LABEL_17:
      while ( v7 )
      {
        v11 = *(unsigned int *)(v7 + 88);
        v5 = (unsigned int)v11;
        if ( (_DWORD)v11 && v11 + (unsigned __int64)*(unsigned int *)(v7 + 84) >= v15 && (*(_DWORD *)(v7 + 92) & 1) == 0 )
        {
          v3 = *(_QWORD *)(v7 + 40);
          v4 = *(_QWORD *)(v7 + 48);
          break;
        }
        v12 = *(_QWORD ***)(v7 + 8);
        v13 = v7;
        if ( v12 )
        {
          v7 = *(_QWORD *)(v7 + 8);
          for ( i = *v12; i; i = (_QWORD *)*i )
            v7 = (unsigned __int64)i;
        }
        else
        {
          while ( 1 )
          {
            v7 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v7 || *(_QWORD *)v7 == v13 )
              break;
            v13 = v7;
          }
        }
      }
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
      if ( !v7 )
        break;
      MiPurgeSlabEntry(v3, v4, v5, 0LL);
      v2 = v4 + 1;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
      __writecr8(v8);
      LOBYTE(v8) = 17;
    }
    while ( *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) );
    if ( (_BYTE)v8 != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
      __writecr8((unsigned __int8)v8);
    }
  }
}
