/*
 * XREFs of MiWalkPageTablesRecursivelyNoSynch @ 0x140328DB8
 * Callers:
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x140328DB8 (MiWalkPageTablesRecursivelyNoSynch.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x140328DB8 (MiWalkPageTablesRecursivelyNoSynch.c)
 *     KdCheckForDebugBreak @ 0x14048198C (KdCheckForDebugBreak.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiWalkPageTablesRecursivelyNoSynch(unsigned int *a1, volatile unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  ULONG *v4; // r9
  unsigned __int64 v5; // rsi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbx
  _KPROCESS *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  _KPROCESS *v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // ecx
  __int64 result; // rax
  unsigned int v20; // ecx
  int v21; // eax

  v3 = (int)a3;
  v4 = &MiState;
  v5 = a2;
  if ( a2 < *(_QWORD *)&a1[2 * (int)a3 + 24] )
    v5 = *(_QWORD *)&a1[2 * (int)a3 + 24];
  v7 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( v7 > *(_QWORD *)&a1[2 * (int)a3 + 32] )
    v7 = *(_QWORD *)&a1[2 * (int)a3 + 32];
  while ( v5 <= v7 )
  {
    if ( (_DWORD)v3 != 3
      || (KdCheckForDebugBreak(0xFFFFF6FB7DBED7F8uLL, a2, a3, v4), v4 = &MiState, v5 != 0xFFFFF6FB7DBEDF68uLL) )
    {
      v8 = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (v8 & 1) == 0 )
          goto LABEL_32;
        if ( (v8 & 0x20) == 0 || (v8 & 0x42) == 0 )
        {
          v9 = MiPteHasShadow();
          if ( v9 )
          {
            KernelWaitTime = v9[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v12 = *(_QWORD *)(KernelWaitTime + 8 * ((v5 >> 3) & 0x1FF));
              if ( (v12 & 0x20) != 0 )
                v10 |= 0x20uLL;
              v8 = v10 | 0x42;
              if ( (v12 & 0x42) == 0 )
                v8 = v10;
            }
          }
        }
      }
      if ( (v8 & 1) == 0 )
        goto LABEL_32;
      a2 = *a1;
      v13 = (v8 >> 12) & 0xFFFFFFFFFFLL;
      if ( ((a2 & 0x100) == 0
         || qword_140E36180 == (PVOID)qword_140E36198
         || v13 != *(_QWORD *)&v4[2 * v3 + 9888]
         || !_bittest64(&MiFlags, 0x1Fu))
        && ((a2 & 0x200) == 0 || qword_140E36180 == (PVOID)qword_140E36198 || v13 != *(_QWORD *)&v4[2 * v3 + 9902]) )
      {
        if ( (v8 & 0x20) == 0 && (_DWORD)v3 )
        {
          v8 |= 0x20uLL;
          if ( (MiFlags & 0x8000000) != 0 )
            _mm_lfence();
          _InterlockedExchange64((volatile __int64 *)v5, v8);
        }
LABEL_32:
        v14 = guard_dispatch_icall_no_overrides(a1, v5, (unsigned int)v3);
        a2 = v14 & 7;
        a1[1] ^= (a1[1] ^ (v14 << 18)) & 0x1C0000;
        if ( (unsigned int)a2 >= 4 )
          break;
        if ( (_DWORD)v3 && (_DWORD)a2 != 1 )
        {
          if ( (*a1 & 0x20000) != 0 && (v8 = *(_QWORD *)v5, v5 >= 0xFFFFF6FB7DBED000uLL) && v5 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            a2 = *(_QWORD *)v5;
            if ( (v8 & 1) != 0 )
            {
              if ( (v8 & 0x20) == 0 || (v8 & 0x42) == 0 )
              {
                v15 = MiPteHasShadow();
                if ( v15 )
                {
                  v16 = v15[2].KernelWaitTime;
                  if ( v16 )
                  {
                    v17 = *(_QWORD *)(v16 + 8 * ((v5 >> 3) & 0x1FF));
                    if ( (v17 & 0x20) != 0 )
                      a2 |= 0x20uLL;
                    LOBYTE(v8) = a2 | 0x42;
                    if ( (v17 & 0x42) == 0 )
                      LOBYTE(v8) = a2;
                  }
                }
              }
              goto LABEL_47;
            }
          }
          else
          {
LABEL_47:
            if ( (v8 & 1) != 0 && (v8 & 0x80u) == 0LL )
            {
              if ( *((_QWORD *)a1 + 22) )
              {
                v18 = guard_dispatch_icall_no_overrides(a1, a2, a3);
                if ( v18 >= 4 )
                {
                  result = a1[1];
                  v20 = result ^ (result ^ (v18 << 18)) & 0x1C0000;
LABEL_60:
                  a1[1] = v20;
                  return result;
                }
              }
              MiWalkPageTablesRecursivelyNoSynch(a1, (__int64)(v5 << 25) >> 16, (unsigned int)(v3 - 1));
              if ( (a1[1] & 0x1C0000) >= 0x100000 )
                break;
            }
          }
        }
        v4 = &MiState;
      }
    }
    v5 += 8LL;
  }
  if ( *((_QWORD *)a1 + 22) )
  {
    v21 = guard_dispatch_icall_no_overrides(a1, a2, a3);
    if ( v21 >= 4 )
    {
      result = a1[1] ^ (a1[1] ^ (v21 << 18)) & 0x1C0000;
      a1[1] = result;
      return result;
    }
  }
  result = a1[1] & 0x1C0000;
  if ( (unsigned int)result < 0x100000 )
  {
    v20 = a1[1] & 0xFFE3FFFF;
    goto LABEL_60;
  }
  return result;
}
