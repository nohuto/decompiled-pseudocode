/*
 * XREFs of MiPrefetchJumpVad @ 0x140316388
 * Callers:
 *     MiZeroFault @ 0x14041A2F0 (MiZeroFault.c)
 * Callees:
 *     MiIsVadLargePrivate @ 0x1402ED74C (MiIsVadLargePrivate.c)
 *     MiLeapPrefetch @ 0x1403164F4 (MiLeapPrefetch.c)
 *     MiUpdatePrefetchPriority @ 0x1403169DC (MiUpdatePrefetchPriority.c)
 */

__int64 __fastcall MiPrefetchJumpVad(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  __int64 result; // rax

  v6 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) + 4096;
  if ( (*(_DWORD *)(a2 + 48) & 0x80000) != 0 )
  {
    if ( (((*(_DWORD *)(a2 + 48) & 0x1C) - 4) & 0xFFFFFFF7) != 0 && !MiIsVadLargePrivate(a2) )
    {
      v8 = v6 >> 9;
      v9 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      if ( (v8 & 0x7FFFFFFFF8LL) - 0x98000000000LL <= v10 )
        v10 = (v8 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      for ( ; v9 < v10; a3 += 4096LL )
      {
        v11 = *(_QWORD *)v9;
        v9 += 8LL;
        if ( v11 )
        {
          if ( (v11 & 1) != 0 )
            goto LABEL_11;
          if ( (v11 & 0x400) != 0 )
            break;
          if ( (v11 & 0x800) != 0 )
          {
LABEL_11:
            MiUpdatePrefetchPriority(a1, a3, a2);
          }
          else
          {
            if ( qword_140E2D8C0 )
            {
              if ( (v11 & 0x10) != 0 )
                LOWORD(v11) = v11 & 0xFFEF;
              else
                LOWORD(v11) = qword_140E2D8C8 & v11;
            }
            if ( (v11 & 0x400) != 0 || (v11 & 0x800) != 0 || (v11 & 8) != 0 )
              break;
          }
        }
      }
      v6 = (__int64)(v9 << 25) >> 16;
    }
    goto LABEL_14;
  }
  result = *(unsigned int *)(a2 + 72);
  if ( (result & 1) != 0 )
  {
LABEL_14:
    result = MiLeapPrefetch(a1, v6);
    *(_BYTE *)(a1 + 1) = 1;
  }
  return result;
}
