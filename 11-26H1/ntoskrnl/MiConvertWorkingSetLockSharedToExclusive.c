/*
 * XREFs of MiConvertWorkingSetLockSharedToExclusive @ 0x140708254
 * Callers:
 *     MiInsertLargeVadMapping @ 0x140509CA4 (MiInsertLargeVadMapping.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiConvertWorkingSetLockSharedToExclusive(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 v2; // rbp
  _DWORD *MmInternal; // rcx
  int v4; // esi
  unsigned int i; // ebx
  volatile signed __int32 *v6; // rcx
  signed __int32 v7; // eax
  signed __int32 v8; // edx
  signed __int32 v9; // ett
  volatile signed __int32 *v11; // rdi
  signed __int32 v12; // r8d
  signed __int32 v13; // eax
  signed __int32 v14; // ecx
  unsigned int v15; // ecx
  signed __int32 v16; // ecx

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v1 = &qword_140E37980;
  else
    v1 = (__int64 *)(a1 + 192);
  v2 = *v1;
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
    v4 = MmInternal[81];
  else
    v4 = 0;
  for ( i = 0; i < 4; ++i )
  {
    v6 = (volatile signed __int32 *)(v2 + ((unsigned __int64)i << 6));
    if ( i == v4 )
    {
      v7 = 1;
      v8 = 0x80000000;
      while ( 1 )
      {
        v9 = v7;
        v7 = _InterlockedCompareExchange(v6, v8, v7);
        if ( v9 == v7 )
          break;
        if ( v7 == 1 )
        {
          v8 &= ~0x40000000u;
        }
        else
        {
          if ( v7 != 1073741825 )
            goto LABEL_19;
          v8 |= 0x40000000u;
        }
      }
    }
    else if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v6) )
    {
      goto LABEL_19;
    }
  }
  if ( i == 4 )
    return 1LL;
LABEL_19:
  if ( i )
  {
    v11 = (volatile signed __int32 *)(v2 + ((unsigned __int64)i << 6));
    do
    {
      --i;
      v11 -= 16;
      if ( i == v4 )
      {
        v12 = 1;
        v13 = _InterlockedCompareExchange(v11, 1, 0x80000000);
        if ( v13 != 0x80000000 )
        {
          do
          {
            v14 = v12;
            v12 |= 0x40000000u;
            v15 = v14 & 0xBFFFFFFF;
            if ( (v13 & 0x40000000) == 0 )
              v12 = v15;
            v16 = v13;
            v13 = _InterlockedCompareExchange(v11, v12, v13);
          }
          while ( v13 != v16 );
        }
      }
      else
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v11);
      }
    }
    while ( i );
  }
  return 0LL;
}
