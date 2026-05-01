/*
 * XREFs of ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x18002AA30
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18006CE8C (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x1800889BC (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18002AEB0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x18002BCB0 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x18002CD84 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18005ACCC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18006BD9C (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 *     ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18006E20C (-RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180070998 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800709A4 (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::EvaluateResourceRequest(
        ExecutionModel::ResourceSet *this,
        __int64 a2,
        struct _RM_RESOURCE_USAGE_LIMITS *a3,
        struct _RM_SYSTEM_MEMORY_METRICS *a4,
        struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *a5,
        bool *a6,
        bool *a7)
{
  struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *v7; // rbp
  struct _RM_RESOURCE_USAGE_LIMITS *v9; // r9
  __int64 v12; // rdi
  char v13; // si
  ExecutionModel::_ResourceInfo *v14; // rax
  ExecutionModel::_ResourceInfo *v15; // r12
  __int64 v16; // xmm0_8
  int v17; // eax
  int v18; // edi
  int v19; // eax
  bool *v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdi
  unsigned int v23; // r13d
  __int64 v24; // rsi
  int *v25; // rdi
  bool v26; // al
  bool *v27; // r9
  bool *v28; // r14
  __int64 v29; // rsi
  int v30; // ebp
  _QWORD *i; // rax
  __int64 v32; // r10
  _QWORD *v33; // rax
  _QWORD *v34; // rsi
  __int64 v35; // r10
  unsigned __int64 v37; // r12
  unsigned __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // r14
  struct _RM_PARTITION *v41; // rcx
  unsigned __int64 v42; // r9
  int v43; // r15d
  __int64 v44; // r9
  unsigned __int64 v45; // r9
  int j; // r8d
  unsigned __int64 v47; // r11
  __int64 v48; // rcx
  int k; // r8d
  unsigned __int64 v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // [rsp+50h] [rbp-48h]
  __int64 v53; // [rsp+58h] [rbp-40h]
  __int64 v54; // [rsp+58h] [rbp-40h]
  _QWORD *v55; // [rsp+A0h] [rbp+8h] BYREF
  struct _RM_RESOURCE_USAGE_LIMITS *v56; // [rsp+B0h] [rbp+18h]

  v56 = a3;
  v7 = a5;
  LOBYTE(a5) = 0;
  v9 = a3;
  LOBYTE(v55) = 0;
  v12 = *((_QWORD *)v7 + 1);
  v13 = 0;
  v53 = v12;
  if ( *((_DWORD *)this + 366) != 2 )
  {
    v18 = 0;
    goto LABEL_9;
  }
  v52 = *((_QWORD *)this + 8);
  v14 = (ExecutionModel::_ResourceInfo *)operator new[](0x18uLL);
  v15 = v14;
  if ( !v14 )
  {
    v18 = -2147024882;
    goto LABEL_8;
  }
  ExecutionModel::_ResourceInfo::_ResourceInfo(v14);
  v16 = *((_QWORD *)this + 185);
  *(_OWORD *)v15 = *(_OWORD *)((char *)this + 1464);
  *((_QWORD *)v15 + 2) = v16;
  v17 = ExecutionModel::BaseResourceSet::RecursiveVisit(
          v52,
          0,
          1,
          (_DWORD)v15,
          0,
          1,
          (__int64)&a5,
          (__int64)&v55,
          v12,
          0LL);
  v18 = 0;
  if ( v17 < 0 )
    v18 = v17;
  operator delete(v15);
  if ( v18 < 0 )
  {
    v13 = (char)a5;
    goto LABEL_8;
  }
  if ( (_BYTE)v55 )
  {
    v13 = (char)a5;
    if ( !(_BYTE)a5 )
    {
LABEL_8:
      v9 = v56;
LABEL_9:
      v19 = 0;
      goto LABEL_10;
    }
  }
  else
  {
    if ( *((_QWORD *)this + 184) > *(_QWORD *)(*((_QWORD *)this + 3) + 40LL) )
    {
      v18 = -2147220992;
      goto LABEL_8;
    }
    v13 = 1;
    utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v53);
  }
  v9 = v56;
  v19 = 2;
LABEL_10:
  v20 = a6;
  *((_DWORD *)v7 + 8) = v19;
  *v20 = v13;
  if ( v18 < 0 )
    return (unsigned int)v18;
  v21 = *((_QWORD *)this + 181);
  v22 = -1LL;
  if ( v21 != -1LL && a2 != -1 )
  {
    v22 = v21 + a2;
    if ( v21 + a2 < v21 )
      return (unsigned int)-805306219;
  }
  v23 = *((_DWORD *)this + 336);
  a5 = (struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)*((_QWORD *)this + 165);
  v24 = *((_QWORD *)a5 + 6);
  v54 = *(_QWORD *)(*((_QWORD *)this + 3) + 128LL);
  if ( !v22 )
  {
    v25 = (int *)((char *)v7 + 36);
    goto LABEL_14;
  }
  if ( v22 + *((_QWORD *)a4 + 2) + 1 < v22 )
  {
    *(_DWORD *)(v24 + 472) = 0;
LABEL_40:
    v18 = -2147220992;
    *a7 = 0;
    return (unsigned int)v18;
  }
  if ( *((_QWORD *)a4 + 1) < v22 )
    goto LABEL_40;
  v37 = *((_QWORD *)v9 + 6);
  if ( (int)RmpEmPriorityCompare(v23, *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 128LL) + 628LL)) >= 0 )
    v40 = v37;
  else
    v40 = *(_QWORD *)(v39 + 32);
  if ( v38 >= v37 || v38 >= v40 )
  {
    v41 = (struct _RM_PARTITION *)*((_QWORD *)v7 + 2);
    v55 = (_QWORD *)((char *)v7 + 16);
    RmpPolicyEnsureMetricsForAcquire(v41, a4);
    if ( (int)RmpEmPriorityCompare(v23, *(unsigned int *)(v54 + 628)) >= 0
      || (v42 = v22 + *((_QWORD *)a4 + 2) - *((_QWORD *)a4 + 4), v42 < v40) )
    {
      v45 = v22 + *((_QWORD *)a4 + 2);
      v25 = (int *)((char *)v7 + 36);
      if ( v45 < v37 )
        goto LABEL_14;
      v43 = 2;
      v44 = v45 - v37 + 1;
    }
    else
    {
      v43 = 1;
      v25 = (int *)((char *)v7 + 36);
      v44 = v42 - v40;
    }
    RmpPolicyGenerateReclaimListForCommit(*v55, v24 + 432, a5, v44, v23, v43);
    v26 = 1;
    *v25 = v43;
    goto LABEL_15;
  }
  v25 = (int *)((char *)v7 + 36);
LABEL_14:
  *v25 = 0;
  v26 = 0;
  *(_DWORD *)(v24 + 472) = 0;
LABEL_15:
  v27 = a7;
  v28 = a6;
  *a7 = v26;
  if ( *v28 )
  {
    *(_DWORD *)(v24 + 472) = 0;
    *v25 = 0;
    *v27 = 0;
  }
  else if ( !v26 )
  {
    v29 = *((_QWORD *)this + 8);
    v30 = *((_DWORD *)this + 336);
    for ( i = *(_QWORD **)(v29 + 40); i != (_QWORD *)(v29 + 40); i = (_QWORD *)*i )
    {
      v32 = i[2];
      if ( *(_DWORD *)(v32 + 1280) == 1 && *(_DWORD *)(v32 + 1288) < v30 )
      {
        for ( j = 0; !j; j = 1 )
        {
          if ( *((_QWORD *)this + 184) )
          {
            v47 = *((unsigned int *)this + 366);
            if ( *(_QWORD *)(v32 + 24LL * (int)v47 + 80) )
            {
              v48 = *(_QWORD *)(v29 + 1272);
              if ( !_bittest64(&v48, v47) )
              {
                *v28 = 1;
                return 0;
              }
            }
          }
        }
      }
    }
    if ( !*v27 )
    {
      v33 = *(_QWORD **)(v29 + 40);
      v34 = (_QWORD *)(v29 + 40);
      while ( v33 != v34 )
      {
        v35 = v33[2];
        if ( *(_DWORD *)(v35 + 1280) == 1 && *(_DWORD *)(v35 + 1288) < v30 )
        {
          for ( k = 0; !k; k = 1 )
          {
            if ( *((_QWORD *)this + 181) )
            {
              v50 = *((unsigned int *)this + 360);
              if ( *(_QWORD *)(v35 + 24LL * (int)v50 + 80) )
              {
                v51 = *(_QWORD *)(*((_QWORD *)this + 8) + 1272LL);
                if ( !_bittest64(&v51, v50) )
                {
                  *v27 = 1;
                  return 0;
                }
              }
            }
          }
        }
        v33 = (_QWORD *)*v33;
      }
    }
  }
  return 0;
}
