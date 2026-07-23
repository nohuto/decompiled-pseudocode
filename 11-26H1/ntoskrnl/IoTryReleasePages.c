/*
 * XREFs of IoTryReleasePages @ 0x140410F40
 * Callers:
 *     MiRequestIoPageMdlCacheRelease @ 0x140410EB8 (MiRequestIoPageMdlCacheRelease.c)
 *     MiInvokeIoReleasePages @ 0x14050DC54 (MiInvokeIoReleasePages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     IopMcDereferenceBufferEntry @ 0x1404111A0 (IopMcDereferenceBufferEntry.c)
 *     IopMcReferenceBufferEntry @ 0x1404F71E8 (IopMcReferenceBufferEntry.c)
 *     IopMcTryUnlockMdl @ 0x1405D9F78 (IopMcTryUnlockMdl.c)
 */

void __fastcall IoTryReleasePages(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  char v4; // r14
  ULONG_PTR v5; // r13
  ULONG_PTR v6; // rbp
  ULONG_PTR v7; // r15
  KIRQL v8; // al
  __int64 v9; // r9
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // rax
  KIRQL v15; // al
  __int64 v16; // r9
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rsi
  __int64 v19; // r8
  ULONG_PTR v20; // r10
  __int64 v21; // rax
  unsigned __int64 i; // r8
  unsigned __int64 v23; // r13
  _QWORD *v24; // rcx
  unsigned __int64 j; // r8
  unsigned __int64 v26; // r13
  _QWORD *v27; // rcx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( a2 )
  {
    v2 = a2;
    do
    {
      _InterlockedIncrement(&dword_140F850E0);
      v4 = 0;
      v5 = 0LL;
      v6 = 0LL;
      v7 = 0LL;
      v8 = ExAcquireSpinLockShared(&dword_140F850E4);
      v9 = qword_140F850E8;
      v10 = 0LL;
      v11 = v8;
      if ( qword_140F850E8 )
      {
        do
        {
          v12 = *(unsigned int *)(v9 + 24);
          v13 = v9 - (unsigned int)(32 * (v12 + 3));
          v14 = *(_QWORD *)(v13 + 88);
          if ( a1 < *(_QWORD *)(v14 + 8 * v12) )
          {
            v9 = *(_QWORD *)v9;
          }
          else if ( a1 <= *(_QWORD *)(v14 + 8 * v12) && v13 )
          {
            v10 = v9;
            v9 = *(_QWORD *)v9;
          }
          else
          {
            v9 = *(_QWORD *)(v9 + 8);
          }
        }
        while ( v9 );
        if ( v10 )
        {
          i = *(_QWORD *)(v10 + 8);
          v23 = v10;
          if ( i )
          {
            v24 = *(_QWORD **)i;
            if ( *(_QWORD *)i )
            {
              do
              {
                i = (unsigned __int64)v24;
                v24 = (_QWORD *)*v24;
              }
              while ( v24 );
            }
          }
          else
          {
            for ( i = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)i == v10 )
                break;
              v10 = i;
            }
          }
          if ( !i
            || *(_QWORD *)(*(_QWORD *)(i - (unsigned int)(32 * (*(_DWORD *)(i + 24) + 3)) + 88)
                         + 8LL * *(unsigned int *)(i + 24)) != a1 )
          {
            v4 = 1;
          }
          v5 = v23 - (unsigned int)(32 * (*(_DWORD *)(v23 + 24) + 3));
          v6 = v5;
          IopMcReferenceBufferEntry(v5);
          if ( (*(_DWORD *)(v5 + 12) & 1) == 0 )
            _InterlockedOr((volatile signed __int32 *)(v5 + 12), 1u);
          v7 = *(_QWORD *)(v5 + 56);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(&dword_140F850E4, 0xBFFFFFFF);
        _InterlockedDecrement(&dword_140F850E4);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140F850E4, retaddr);
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
      __writecr8(v11);
      while ( v6 )
      {
        if ( !*(_DWORD *)(v6 + 48) )
          IopMcTryUnlockMdl(v6, v7);
        IopMcDereferenceBufferEntry(v6);
        v6 = 0LL;
        v7 = 0LL;
        if ( v4 )
          break;
        v15 = ExAcquireSpinLockShared(&dword_140F850E4);
        v16 = qword_140F850E8;
        v17 = 0LL;
        v18 = v15;
        if ( qword_140F850E8 )
        {
          do
          {
            v19 = *(unsigned int *)(v16 + 24);
            v20 = v16 - (unsigned int)(32 * (v19 + 3));
            v21 = *(_QWORD *)(v20 + 88);
            if ( a1 < *(_QWORD *)(v21 + 8 * v19) )
            {
              v16 = *(_QWORD *)v16;
            }
            else if ( a1 > *(_QWORD *)(v21 + 8 * v19) || v5 >= v20 )
            {
              v16 = *(_QWORD *)(v16 + 8);
            }
            else
            {
              v17 = v16;
              v16 = *(_QWORD *)v16;
            }
          }
          while ( v16 );
          if ( v17 )
          {
            j = *(_QWORD *)(v17 + 8);
            v26 = v17;
            if ( j )
            {
              v27 = *(_QWORD **)j;
              if ( *(_QWORD *)j )
              {
                do
                {
                  j = (unsigned __int64)v27;
                  v27 = (_QWORD *)*v27;
                }
                while ( v27 );
              }
            }
            else
            {
              for ( j = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
              {
                if ( *(_QWORD *)j == v17 )
                  break;
                v17 = j;
              }
            }
            if ( !j
              || *(_QWORD *)(*(_QWORD *)(j - (unsigned int)(32 * (*(_DWORD *)(j + 24) + 3)) + 88)
                           + 8LL * *(unsigned int *)(j + 24)) != a1 )
            {
              v4 = 1;
            }
            v5 = v26 - (unsigned int)(32 * (*(_DWORD *)(v26 + 24) + 3));
            v6 = v5;
            IopMcReferenceBufferEntry(v5);
            if ( (*(_DWORD *)(v5 + 12) & 1) == 0 )
              _InterlockedOr((volatile signed __int32 *)(v5 + 12), 1u);
            v7 = *(_QWORD *)(v5 + 56);
          }
        }
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140F850E4);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
        __writecr8(v18);
      }
      ++a1;
      --v2;
    }
    while ( v2 );
  }
}
