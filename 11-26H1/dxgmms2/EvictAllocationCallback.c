/*
 * XREFs of EvictAllocationCallback @ 0x1400B62BC
 * Callers:
 *     ?IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6A_N11@Z@Z @ 0x14011B60C (-IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6A_N11@Z@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

char __fastcall EvictAllocationCallback(_BYTE *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  struct _KTHREAD **v4; // rdi
  _QWORD **v5; // rbx
  _QWORD *v6; // rdx
  _QWORD *i; // r8
  _QWORD *v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // r9

  if ( a2 )
  {
    v3 = *a2;
    if ( *(_DWORD *)(*(_QWORD *)(*a2 + 368LL) + 16LL)
      || (**(_DWORD **)(v3 + 368) & 0x20000) != 0
      || (*(_DWORD *)(v3 + 24) & 4) != 0 )
    {
      if ( a2[8] )
      {
        WdLogSingleEntry1(3LL, *a2);
        WdLogGlobalForLineNumber = 4760;
        a1[8] = 0;
        return 0;
      }
    }
    else if ( a2[8] )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = v3;
        WdLogGlobalForLineNumber = 4718;
      }
      v4 = (struct _KTHREAD **)(v3 + 136);
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v3 + 136));
      v5 = (_QWORD **)(v3 + 112);
      v6 = *v5;
LABEL_9:
      if ( v6 != v5 )
      {
        for ( i = (_QWORD *)*(v6 - 2); ; i = (_QWORD *)*i )
        {
          if ( i == v6 - 2 )
          {
            v6 = (_QWORD *)*v6;
            goto LABEL_9;
          }
          v8 = (_QWORD *)*(i - 4);
          if ( !v8[3] || (*(_DWORD *)(v8[1] + 136LL) & 2) != 0 )
            break;
          v9 = v8 + 23;
          if ( !v8[23] )
          {
            v10 = *(_QWORD *)a1;
            v11 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
            if ( *v11 != *(_QWORD *)a1 )
              __fastfail(3u);
            *v9 = v10;
            v9[1] = v11;
            *v11 = v9;
            *(_QWORD *)(v10 + 8) = v9;
          }
        }
        a1[8] = 0;
        DXGFASTMUTEX::Release(v4);
        return 0;
      }
      DXGFASTMUTEX::Release(v4);
    }
  }
  return 1;
}
