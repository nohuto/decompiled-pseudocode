/*
 * XREFs of ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x140124994
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1400BE480 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1400BF7D8 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_K@Z@Z @ 0x1400BFF54 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 * Callees:
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1400FB248 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1400FC0EC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  char *v4; // r12
  char *v5; // r13
  unsigned __int64 v6; // rax
  struct _VIDMM_POOL_BLOCK *v7; // rsi
  unsigned __int64 v8; // r8
  char *v10; // r14
  struct _VIDMM_POOL_BLOCK *v11; // rdi
  char v12; // al
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  char **v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbp
  struct _VIDMM_POOL_BLOCK *Block; // rdx
  char **v24; // rcx
  char **v25; // rax
  struct _VIDMM_POOL_BLOCK *v26; // rax
  struct _VIDMM_POOL_BLOCK **v27; // rdx
  char *v28; // rsi
  __int64 v29; // rcx
  struct _VIDMM_POOL_BLOCK **v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdi
  struct _VIDMM_POOL_BLOCK *v33; // rax
  char *v34; // rcx
  char **v35; // rdx
  VIDMM_LINEAR_POOL *v36; // rax
  VIDMM_LINEAR_POOL **v37; // rdx
  unsigned __int64 v38; // [rsp+60h] [rbp+8h]

  v3 = 0LL;
  v4 = (char *)this + 80;
  v5 = (char *)*((_QWORD *)this + 10);
  v6 = a3;
  v7 = 0LL;
  v8 = a2;
  while ( 1 )
  {
    v10 = v5;
    if ( v5 == v4 )
      break;
    v11 = (struct _VIDMM_POOL_BLOCK *)(v5 - 40);
    v5 = *(char **)v5;
    v12 = *((_BYTE *)v11 + 56);
    if ( v12 == 2 || v12 == 4 )
      v7 = v11;
    v13 = *(_QWORD *)v11;
    v14 = *((_QWORD *)v11 + 1);
    v38 = v14 + *(_QWORD *)v11;
    if ( v38 > v8 )
    {
      if ( v3 != v13 )
      {
        if ( v12 == 2 )
        {
          v15 = v14 - v3;
          if ( !(v15 + v13) )
          {
            v16 = (_QWORD *)((char *)v11 + 24);
            v17 = *((_QWORD *)v11 + 3);
            if ( *(struct _VIDMM_POOL_BLOCK **)(v17 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)v11 + 24) )
              goto LABEL_40;
            v18 = (_QWORD *)*((_QWORD *)v11 + 4);
            if ( (_QWORD *)*v18 != v16 )
              goto LABEL_40;
            *v18 = v17;
            *(_QWORD *)(v17 + 8) = v18;
            *v16 = 0LL;
            *((_QWORD *)v11 + 4) = 0LL;
            v19 = *(_QWORD *)v10;
            if ( *(char **)(*(_QWORD *)v10 + 8LL) != v10 )
              goto LABEL_40;
            v20 = (char **)*((_QWORD *)v10 + 1);
            if ( *v20 != v10 )
              goto LABEL_40;
            *v20 = (char *)v19;
            *(_QWORD *)(v19 + 8) = v20;
            *(_QWORD *)v10 = 0LL;
            *((_QWORD *)v10 + 1) = 0LL;
            VIDMM_LINEAR_POOL::FreeBlock(this, v11);
            v7 = 0LL;
            goto LABEL_32;
          }
          *(_QWORD *)v11 = v3;
          *((_QWORD *)v11 + 1) = v15 + v13;
        }
        else if ( v7 && (v21 = *((_QWORD *)v7 + 1), v21 + *(_QWORD *)v7 == v3) && *((_BYTE *)v7 + 56) == 2 )
        {
          *((_QWORD *)v7 + 1) = v21 + v13 - v3;
        }
        else
        {
          v22 = v13 - v3;
          if ( v22 )
          {
            Block = VIDMM_LINEAR_POOL::AllocateBlock(this);
            *((_BYTE *)Block + 56) = 2;
            v24 = (char **)((char *)Block + 40);
            *((_QWORD *)Block + 2) = 0LL;
            *(_QWORD *)Block = v3;
            *((_QWORD *)Block + 1) = v22;
            v25 = (char **)*((_QWORD *)v10 + 1);
            if ( *v25 != v10 )
              goto LABEL_40;
            *((_QWORD *)Block + 6) = v25;
            *v24 = v10;
            *v25 = (char *)v24;
            v26 = (struct _VIDMM_POOL_BLOCK *)((char *)Block + 24);
            *((_QWORD *)v10 + 1) = v24;
            if ( v7 == v11 )
            {
              v27 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v11 + 4);
              if ( *v27 != (struct _VIDMM_POOL_BLOCK *)((char *)v11 + 24) )
                goto LABEL_40;
              *(_QWORD *)v26 = (char *)v11 + 24;
              *((_QWORD *)v26 + 1) = v27;
              *v27 = v26;
              *((_QWORD *)v11 + 4) = v26;
            }
            else
            {
              if ( v7 )
              {
                v28 = (char *)v7 + 24;
                v29 = *(_QWORD *)v28;
                if ( *(char **)(*(_QWORD *)v28 + 8LL) != v28 )
                  goto LABEL_40;
                *(_QWORD *)v26 = v29;
                *((_QWORD *)Block + 4) = v28;
                *(_QWORD *)(v29 + 8) = v26;
                *(_QWORD *)v28 = v26;
              }
              else
              {
                v30 = (struct _VIDMM_POOL_BLOCK **)((char *)this + 48);
                v31 = *((_QWORD *)this + 6);
                if ( *(VIDMM_LINEAR_POOL **)(v31 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 48) )
                  goto LABEL_40;
                *(_QWORD *)v26 = v31;
                *((_QWORD *)Block + 4) = v30;
                *(_QWORD *)(v31 + 8) = v26;
                *v30 = v26;
              }
              v7 = Block;
            }
LABEL_32:
            v8 = a2;
          }
        }
      }
      v6 = a3;
      v3 = v38;
      if ( *(_QWORD *)v11 >= a3 )
        break;
    }
    else
    {
      v6 = a3;
      v3 = v14 + *(_QWORD *)v11;
    }
  }
  v32 = *((_QWORD *)this + 1);
  if ( v6 == v32 && v3 != v32 )
  {
    v33 = VIDMM_LINEAR_POOL::AllocateBlock(this);
    *((_BYTE *)v33 + 56) = 2;
    v34 = (char *)v33 + 40;
    *((_QWORD *)v33 + 2) = 0LL;
    *(_QWORD *)v33 = v3;
    *((_QWORD *)v33 + 1) = v32 - v3;
    v35 = (char **)*((_QWORD *)v4 + 1);
    if ( *v35 != v4
      || (*(_QWORD *)v34 = v4,
          v36 = (struct _VIDMM_POOL_BLOCK *)((char *)v33 + 24),
          *((_QWORD *)v34 + 1) = v35,
          *v35 = v34,
          *((_QWORD *)v4 + 1) = v34,
          v37 = (VIDMM_LINEAR_POOL **)*((_QWORD *)this + 7),
          *v37 != (VIDMM_LINEAR_POOL *)((char *)this + 48)) )
    {
LABEL_40:
      __fastfail(3u);
    }
    *(_QWORD *)v36 = (char *)this + 48;
    *((_QWORD *)v36 + 1) = v37;
    *v37 = v36;
    *((_QWORD *)this + 7) = v36;
  }
}
