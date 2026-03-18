/*
 * XREFs of ?PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z @ 0x1400FF530
 * Callers:
 *     PurgeSegments @ 0x1400FEE38 (PurgeSegments.c)
 * Callees:
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1400E3CE8 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1400FF9E0 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140101480 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140124788 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::PurgeContent(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx
  _QWORD *v7; // r15
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // r12
  _QWORD *v11; // rax
  _QWORD **v12; // rax
  _QWORD *v13; // rcx
  _DWORD *v14; // rdi
  __int64 v15; // r14
  int v16; // ecx
  __int64 *v17; // r8
  __int64 **v18; // r14
  __int64 *v19; // rdi
  __int64 *v20; // rdx
  __int64 *v21; // rax
  __int64 **v22; // rcx
  __int64 *v23; // rax
  __int64 *v24; // r8
  __int64 **v25; // r14
  __int64 *v26; // rdi
  __int64 *v27; // rdx
  __int64 *v28; // rax
  __int64 **v29; // rcx
  __int64 *v30; // rax
  __int64 result; // rax
  __int64 v32; // rdx
  __int64 *v33; // rcx
  __int64 *v34; // rax
  VIDMM_GLOBAL *v35; // rcx
  __int64 v36; // rdx
  __int64 *v37; // rcx
  __int64 *v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // [rsp+20h] [rbp-20h]
  _QWORD *i; // [rsp+28h] [rbp-18h]
  __int64 v42; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v43; // [rsp+38h] [rbp-8h]
  _QWORD **v44; // [rsp+80h] [rbp+40h]
  __int64 v45; // [rsp+90h] [rbp+50h]

  v45 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a1;
    WdLogGlobalForLineNumber = 2828;
LABEL_3:
    a3 = v45;
  }
  v6 = (_QWORD *)(a1 + 112);
  v7 = *(_QWORD **)(a1 + 112);
LABEL_5:
  while ( v7 != v6 )
  {
    v8 = v7 - 3;
    v7 = (_QWORD *)*v7;
    if ( (a2 & 8) == 0 || *v8 == a3 )
    {
      v9 = v8 + 5;
      v10 = (_QWORD *)v8[5];
      for ( i = v8 + 5; ; v9 = i )
      {
        v11 = v10;
        if ( v10 == v9 )
        {
          a3 = v45;
          v6 = (_QWORD *)(a1 + 112);
          goto LABEL_5;
        }
        v10 = (_QWORD *)*v10;
        v12 = (_QWORD **)(v11 + 2);
        v44 = v12;
        v13 = *v12;
        while ( v13 != v12 )
        {
          v14 = v13 - 7;
          v13 = (_QWORD *)*v13;
          v40 = v13;
          v15 = **(_QWORD **)v14;
          v12 = v44;
          if ( (*(_DWORD *)(v15 + 28) & 2) == 0 )
          {
            v16 = **(_DWORD **)(v15 + 368);
            if ( (v16 & 0x40000000) != 0 && v16 >= 0 && (a2 & 8) == 0 )
            {
              WdLogSingleEntry1(3LL, v14);
              v35 = *(VIDMM_GLOBAL **)(a1 + 8);
              WdLogGlobalForLineNumber = 2897;
              if ( VIDMM_GLOBAL::InvalidateOneAllocation(v35, (struct VIDMM_GLOBAL_ALLOC *)v15) )
                goto LABEL_3;
            }
            if ( (*((_BYTE *)v14 + 25) & 1) == 0 )
              goto LABEL_14;
            if ( (a2 & 8) != 0 )
            {
              WdLogSingleEntry1(2LL, v14);
              WdLogGlobalForLineNumber = 2914;
LABEL_18:
              v13 = v40;
              v12 = v44;
            }
            else
            {
              VIDMM_GLOBAL::UnpinOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), (__int64)v14, 3, 0);
LABEL_14:
              v13 = v40;
              v12 = v44;
              if ( (**(_DWORD **)(v15 + 368) & 0x10000000) == 0 )
              {
                v12 = v44;
                if ( (*(_DWORD *)(v15 + 24) & 4) == 0 )
                {
                  v12 = v44;
                  if ( (v14[7] & 3) != 0 )
                  {
                    VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), (struct VIDMM_ALLOC *)v14);
                    goto LABEL_18;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v17 = &v42;
  v43 = &v42;
  v42 = (__int64)&v42;
  v18 = (__int64 **)(a1 + 136);
  while ( 1 )
  {
    v19 = *v18;
    if ( *v18 == (__int64 *)v18 )
      break;
    v20 = v19 - 30;
    if ( (*(_DWORD *)v19[16] & 0x10000000) == 0
      && (*((_DWORD *)v20 + 7) & 2) == 0
      && (v20[3] & 4) == 0
      && ((a2 & 4) == 0 || *(_QWORD *)(*v20 + 16) + *(_QWORD *)(*v20 + 72) > *(_QWORD *)(a1 + 248))
      && !*((_DWORD *)v20 + 19) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(_QWORD *)(a1 + 8), v20, a2, a4, v40, i, v42);
      v17 = v43;
    }
    v21 = (__int64 *)*v19;
    if ( *v19 )
    {
      if ( (__int64 *)v21[1] != v19 )
        goto LABEL_30;
      v22 = (__int64 **)v19[1];
      if ( *v22 != v19 )
        goto LABEL_30;
      *v22 = v21;
      v21[1] = (__int64)v22;
      v23 = v43;
      if ( (__int64 *)*v43 != &v42 )
        goto LABEL_30;
      v19[1] = (__int64)v43;
      *v19 = (__int64)&v42;
      v17 = v19;
      *v23 = (__int64)v19;
      v43 = v19;
    }
  }
  if ( (__int64 *)v42 != &v42 )
  {
    v36 = a1 + 136;
    if ( v19[1] != a1 + 136 )
      goto LABEL_30;
    v37 = *(__int64 **)(a1 + 144);
    if ( *v37 != v36 )
      goto LABEL_30;
    if ( *(__int64 **)(v42 + 8) != &v42 )
      goto LABEL_30;
    if ( (__int64 *)*v17 != &v42 )
      goto LABEL_30;
    *v37 = (__int64)&v42;
    v38 = v43;
    *(_QWORD *)(a1 + 144) = v43;
    *v38 = v36;
    v39 = v42;
    v43 = v37;
    if ( *(__int64 **)(v42 + 8) != &v42 || (__int64 *)*v37 != &v42 )
      goto LABEL_30;
    *v37 = v42;
    *(_QWORD *)(v39 + 8) = v37;
  }
  v24 = &v42;
  v43 = &v42;
  v42 = (__int64)&v42;
  v25 = (__int64 **)(a1 + 264);
  while ( 1 )
  {
    v26 = *v25;
    if ( *v25 == (__int64 *)v25 )
      break;
    v27 = v26 - 30;
    if ( (*(_DWORD *)v26[16] & 0x10000000) == 0
      && (v27[3] & 4) == 0
      && ((a2 & 4) == 0
       || (*(_DWORD *)(a1 + 64) & 0x200) == 0
       || *(_QWORD *)(*v27 + 16) + *(_QWORD *)(*v27 + 72) > *(_QWORD *)(a1 + 248))
      && !*((_DWORD *)v27 + 19) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(_QWORD *)(a1 + 8), v27, a2, a4, v40, i, v42);
      v24 = v43;
    }
    v28 = (__int64 *)*v26;
    if ( *v26 )
    {
      if ( (__int64 *)v28[1] != v26 )
        goto LABEL_30;
      v29 = (__int64 **)v26[1];
      if ( *v29 != v26 )
        goto LABEL_30;
      *v29 = v28;
      v28[1] = (__int64)v29;
      v30 = v43;
      if ( (__int64 *)*v43 != &v42 )
        goto LABEL_30;
      v26[1] = (__int64)v43;
      *v26 = (__int64)&v42;
      v24 = v26;
      *v30 = (__int64)v26;
      v43 = v26;
    }
  }
  result = v42;
  if ( (__int64 *)v42 != &v42 )
  {
    v32 = a1 + 264;
    if ( v26[1] == a1 + 264 )
    {
      v33 = *(__int64 **)(a1 + 272);
      if ( *v33 == v32 && *(__int64 **)(v42 + 8) == &v42 && (__int64 *)*v24 == &v42 )
      {
        *v33 = (__int64)&v42;
        v34 = v43;
        *(_QWORD *)(a1 + 272) = v43;
        *v34 = v32;
        result = v42;
        v43 = v33;
        if ( *(__int64 **)(v42 + 8) == &v42 && (__int64 *)*v33 == &v42 )
        {
          *v33 = v42;
          *(_QWORD *)(result + 8) = v33;
          return result;
        }
      }
    }
LABEL_30:
    __fastfail(3u);
  }
  return result;
}
