/*
 * XREFs of ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1400BF7D8
 * Callers:
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_K@Z @ 0x1400B6084 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUV.c)
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1400BE480 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z @ 0x1400FB3E4 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1400FC0EC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x140124994 (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_LINEAR_POOL::DefragmentRange(VIDMM_LINEAR_POOL *this, struct VIDMM_DEFRAGMENT_ARGS *a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbx
  int v6; // r15d
  unsigned __int64 *v7; // r13
  _QWORD **v8; // r8
  _QWORD *v9; // rsi
  unsigned __int64 *v10; // r14
  _QWORD *v11; // rcx
  _QWORD **v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rax
  int v16; // eax
  char v17; // al
  unsigned __int64 v18; // r12
  char v19; // r13
  char v20; // si
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 *v29; // rcx
  unsigned __int64 v31; // [rsp+88h] [rbp+10h]
  unsigned __int64 v32; // [rsp+90h] [rbp+18h]
  _QWORD *v33; // [rsp+98h] [rbp+20h]

  v2 = *(_QWORD *)a2;
  v4 = *((_QWORD *)a2 + 1);
  v5 = *(_QWORD *)a2;
  v6 = *((_DWORD *)a2 + 4);
  v7 = (unsigned __int64 *)this;
  v31 = *(_QWORD *)a2;
  v32 = v4;
  if ( v6 )
    v5 = *((_QWORD *)a2 + 1);
  if ( v2 == v4 )
    goto LABEL_19;
  v8 = (_QWORD **)((char *)this + 80);
  if ( v6 )
    v9 = (_QWORD *)*((_QWORD *)this + 11);
  else
    v9 = *v8;
  while ( v9 != v8 )
  {
    v10 = v9 - 5;
    v11 = v9;
    if ( v6 )
      v11 = v9 + 1;
    v12 = (_QWORD **)*v11;
    v13 = *v10;
    v14 = *v10 + *(v9 - 4);
    v33 = v12;
    if ( v14 <= v2 )
    {
      if ( v6 )
        goto LABEL_15;
      goto LABEL_12;
    }
    if ( v13 < v4 )
    {
      if ( !v6 )
        v13 = *v10 + *(v9 - 4);
      *((_QWORD *)a2 + 10) = v13;
      if ( *((_BYTE *)v10 + 56) == 2 )
        goto LABEL_67;
      if ( *((_BYTE *)v10 + 56) != 3 && *((_BYTE *)v10 + 56) != 4 )
      {
        if ( *((_BYTE *)v10 + 56) == 5 || (unsigned int)*((unsigned __int8 *)v10 + 56) - 6 < 2 )
          goto LABEL_36;
        if ( !g_IsInternalRelease )
          goto LABEL_34;
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        WdLogGlobalForLineNumber = 213;
      }
      v17 = (*((__int64 (__fastcall **)(unsigned __int64))a2 + 4))(v10[2]);
      if ( v17 == 0 )
      {
        if ( !v17 )
          goto LABEL_36;
        if ( -(v17 != 0) != 1 )
        {
LABEL_34:
          if ( !g_IsInternalRelease )
            goto LABEL_65;
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 213;
LABEL_36:
          if ( v6 )
            v5 = *v10;
          else
            v5 = *v10 + v10[1];
          goto LABEL_65;
        }
        v2 = v31;
LABEL_67:
        if ( v14 == v4 )
        {
          v5 = v4;
          if ( *v10 == v2 )
            goto LABEL_19;
        }
        v25 = *v9;
        if ( *(_QWORD **)(*v9 + 8LL) != v9 )
          goto LABEL_75;
        v26 = (_QWORD *)v9[1];
        if ( (_QWORD *)*v26 != v9
          || (*v26 = v25,
              *(_QWORD *)(v25 + 8) = v26,
              v27 = v10 + 3,
              *v9 = 0LL,
              v9[1] = 0LL,
              v28 = v10[3],
              *(unsigned __int64 **)(v28 + 8) != v10 + 3)
          || (v29 = (unsigned __int64 *)v10[4], (_QWORD *)*v29 != v27) )
        {
LABEL_75:
          __fastfail(3u);
        }
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
        *v27 = 0LL;
        v10[4] = 0LL;
        VIDMM_LINEAR_POOL::FreeBlock((VIDMM_LINEAR_POOL *)v7, (struct _VIDMM_POOL_BLOCK *)(v9 - 5));
        goto LABEL_65;
      }
      v18 = v10[2];
      v19 = 0;
      v20 = 0;
      if ( (*((unsigned __int8 (__fastcall **)(unsigned __int64))a2 + 5))(v18) )
      {
        if ( v6 )
        {
          if ( v5 - v10[1] < v14 )
          {
            if ( (*((_DWORD *)a2 + 16) & 1) != 0 )
            {
LABEL_47:
              v20 = 1;
              goto LABEL_48;
            }
            v5 = v14;
          }
        }
        else if ( v5 + v10[1] > *v10 )
        {
          if ( (*((_DWORD *)a2 + 16) & 1) != 0 )
            goto LABEL_47;
          v5 = *v10;
        }
      }
LABEL_48:
      v21 = (*((__int64 (__fastcall **)(unsigned __int64))a2 + 7))(v18);
      v22 = v21 - 1LL;
      if ( v21 )
      {
        v23 = ~v22;
        if ( v6 )
          v5 = v10[1] + (v23 & (v5 - v10[1]));
        else
          v5 = v23 & (v22 + v5);
      }
      if ( (*((_DWORD *)a2 + 16) & 1) != 0
        && (*((unsigned __int8 (__fastcall **)(unsigned __int64, __int64))a2 + 6))(v18, v22)
        && (v5 != *v10 || (*((_DWORD *)a2 + 16) & 2) != 0) )
      {
        v7 = (unsigned __int64 *)this;
        v2 = v31;
        *((_QWORD *)a2 + 11) = v18;
        *((_QWORD *)a2 + 12) = *v10;
        *((_BYTE *)a2 + 112) = v20;
        *((_QWORD *)a2 + 13) = v5;
        goto LABEL_19;
      }
      v24 = *v10;
      if ( v6 )
      {
        v5 -= v10[1];
        if ( v24 != v5 )
        {
          *v10 = v5;
          v19 = 1;
          v24 = v5;
        }
      }
      else
      {
        if ( v24 != v5 )
        {
          *v10 = v5;
          v19 = 1;
          v24 = v5;
        }
        v5 += v10[1];
      }
      if ( v19 )
        (*((void (__fastcall **)(unsigned __int64, unsigned __int64))a2 + 3))(v18, v24);
      v4 = v32;
      v7 = (unsigned __int64 *)this;
LABEL_65:
      v9 = v33;
      v8 = (_QWORD **)(v7 + 10);
      v2 = v31;
    }
    else
    {
      if ( !v6 )
      {
LABEL_15:
        if ( v12 != v8 )
          goto LABEL_17;
        break;
      }
LABEL_12:
      v9 = v12;
    }
  }
  *((_QWORD *)a2 + 10) = v7[1];
LABEL_17:
  v15 = *((_QWORD *)a2 + 1);
  if ( *((_QWORD *)a2 + 10) > v15 )
    *((_QWORD *)a2 + 10) = v15;
LABEL_19:
  v16 = *((_DWORD *)a2 + 16);
  *((_QWORD *)a2 + 9) = v5;
  if ( (v16 & 4) != 0 )
    VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks((VIDMM_LINEAR_POOL *)v7, v2, v7[1]);
}
