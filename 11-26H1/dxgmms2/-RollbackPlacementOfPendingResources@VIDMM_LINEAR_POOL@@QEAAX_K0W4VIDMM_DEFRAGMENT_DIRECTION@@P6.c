/*
 * XREFs of ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_K@Z@Z @ 0x1400BFF54
 * Callers:
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z @ 0x1400B5BF0 (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_K@Z @ 0x1400B6084 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUV.c)
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1400BE480 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z @ 0x1400FB3E4 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z.c)
 * Callees:
 *     ?RepairPendingResourceCB@VIDMM_SEGMENT@@SA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_K@Z @ 0x1400B6FAC (-RepairPendingResourceCB@VIDMM_SEGMENT@@SA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_K@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1400FC0EC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x140124994 (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4)
{
  _QWORD **v4; // r14
  _QWORD *v8; // rdi
  unsigned __int64 *v9; // rbx
  unsigned __int64 *v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // r15
  unsigned __int64 v13; // r15
  char v14; // al
  struct VIDMM_PHYSICAL_ALLOC_LEGACY *v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 *v21; // rcx
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp+10h]

  v26 = a2;
  v4 = (_QWORD **)(a1 + 10);
  if ( a4 == 1 )
    v8 = *v4;
  else
    v8 = (_QWORD *)a1[11];
  v9 = 0LL;
  while ( v8 != v4 )
  {
    v10 = v8 - 5;
    v11 = *(v8 - 5);
    v12 = *(v8 - 4);
    if ( a4 != 1 )
      ++v8;
    v13 = v11 + v12;
    v8 = (_QWORD *)*v8;
    if ( v13 > a2 )
    {
      if ( v11 < a3 )
      {
        v14 = *((_BYTE *)v10 + 56);
        if ( v14 == 3 || v14 == 4 )
        {
          v15 = (struct VIDMM_PHYSICAL_ALLOC_LEGACY *)v10[2];
          v25 = 0LL;
          if ( VIDMM_SEGMENT::RepairPendingResourceCB(v15, &v25) )
          {
            v16 = v25;
            *v10 = v25;
            if ( v9 )
            {
              if ( *((_BYTE *)v9 + 56) == 2 )
              {
                v17 = *v9;
                if ( a4 == 1 )
                {
                  v18 = v16 - v17;
                }
                else
                {
                  *v9 = v13;
                  v18 = v9[1] + v17 - v13;
                }
                v9[1] = v18;
                if ( !v18 )
                {
                  v19 = v9 + 5;
                  v20 = v9[5];
                  if ( *(unsigned __int64 **)(v20 + 8) != v9 + 5 )
                    goto LABEL_30;
                  v21 = (unsigned __int64 *)v9[6];
                  if ( (_QWORD *)*v21 != v19
                    || (*v21 = v20,
                        *(_QWORD *)(v20 + 8) = v21,
                        v22 = v9 + 3,
                        *v19 = 0LL,
                        v9[6] = 0LL,
                        v23 = v9[3],
                        *(unsigned __int64 **)(v23 + 8) != v9 + 3)
                    || (v24 = (unsigned __int64 *)v9[4], (_QWORD *)*v24 != v22) )
                  {
LABEL_30:
                    __fastfail(3u);
                  }
                  *v24 = v23;
                  *(_QWORD *)(v23 + 8) = v24;
                  *v22 = 0LL;
                  v9[4] = 0LL;
                  VIDMM_LINEAR_POOL::FreeBlock((VIDMM_LINEAR_POOL *)a1, (struct _VIDMM_POOL_BLOCK *)v9);
                }
              }
            }
          }
          a2 = v26;
        }
        v9 = v10;
      }
      else if ( a4 == 1 )
      {
        break;
      }
    }
    else if ( a4 != 1 )
    {
      break;
    }
  }
  VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks((VIDMM_LINEAR_POOL *)a1, a2, a3);
}
