/*
 * XREFs of EmpEvaluateNodeLink @ 0x14046D9BC
 * Callers:
 *     EmpEvaluateTargetRule @ 0x14046D670 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x14046D9BC (EmpEvaluateNodeLink.c)
 * Callees:
 *     EmpEvaluateNodeLink @ 0x14046D9BC (EmpEvaluateNodeLink.c)
 *     EmpFreePool @ 0x14046DEA4 (EmpFreePool.c)
 *     EmpEvaluateParseNodeMapping @ 0x14046DED8 (EmpEvaluateParseNodeMapping.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EmpEvaluateNodeLink(
        int *a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        unsigned int a11,
        __int64 a12)
{
  unsigned __int64 v14; // r14
  __int64 v16; // r10
  __int64 Pool2; // r13
  unsigned int v18; // ebx
  __int64 v19; // r12
  __int64 v20; // rdi
  unsigned int v21; // esi
  unsigned int v23; // r8d
  unsigned int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // r8d
  unsigned __int64 v28; // rcx
  unsigned int v29; // r8d
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  __int64 v32; // rdi
  int v33; // esi
  unsigned __int64 v34; // rdx
  int v36; // eax
  __int64 v37; // [rsp+20h] [rbp-C8h]
  __int64 v38; // [rsp+20h] [rbp-C8h]
  __int64 v39; // [rsp+30h] [rbp-B8h]
  __int64 v40; // [rsp+30h] [rbp-B8h]
  __int64 v41; // [rsp+40h] [rbp-A8h]
  __int64 v42; // [rsp+40h] [rbp-A8h]
  __int64 v43; // [rsp+58h] [rbp-90h]
  __int64 v44; // [rsp+58h] [rbp-90h]
  int v45; // [rsp+70h] [rbp-78h]
  int v46; // [rsp+74h] [rbp-74h]
  __int64 v47; // [rsp+78h] [rbp-70h]
  __int64 v48; // [rsp+80h] [rbp-68h]
  __int64 v49; // [rsp+88h] [rbp-60h]
  unsigned int v54; // [rsp+138h] [rbp+50h]
  unsigned int v55; // [rsp+140h] [rbp+58h]

  v14 = a11;
  v49 = 0LL;
  v16 = 0LL;
  v47 = 0LL;
  Pool2 = 0LL;
  v18 = 1;
  v19 = 0LL;
  v20 = a10;
  v21 = a11;
  if ( (unsigned int)a12 > 0xA )
    return v18;
  v25 = *a1;
  if ( *a1 && v25 != 1 )
  {
    if ( v25 != 2 )
      return v18;
    v32 = *((_QWORD *)a1 + 1);
    v33 = EmpEvaluateNodeLink(
            *(_QWORD *)(v32 + 8),
            a2,
            a3,
            a4,
            (unsigned int)a5,
            a6,
            (unsigned int)a7,
            *(_QWORD *)(v32 + 24),
            *(_DWORD *)(v32 + 16),
            a10,
            a11,
            (int)a12 + 1);
    if ( v33 == 1 )
      return v18;
    if ( *(_BYTE *)v32 == 38 )
    {
      if ( !v33 )
        return 0;
    }
    else if ( *(_BYTE *)v32 == 124 && v33 == 2 )
    {
      return 2;
    }
    LODWORD(v44) = a12 + 1;
    LODWORD(v42) = *(_DWORD *)(v32 + 40);
    LODWORD(v40) = a7;
    LODWORD(v38) = a5;
    v36 = EmpEvaluateNodeLink(
            *(_QWORD *)(v32 + 32),
            a2,
            a3,
            a4,
            v38,
            a6,
            v40,
            *(_QWORD *)(v32 + 48),
            v42,
            a10,
            a11,
            v44);
    if ( v36 == 1 )
      return v18;
    if ( *(_BYTE *)v32 == 38 )
    {
      if ( !v33 || !v36 )
        return 0;
    }
    else
    {
      if ( *(_BYTE *)v32 != 124 )
        return v18;
      if ( !v33 && !v36 )
        return 0;
    }
    return 2;
  }
  v26 = *((_QWORD *)a1 + 1);
  if ( v25 )
  {
    v16 = *((_QWORD *)a1 + 1);
    v49 = v16;
    if ( !*(_BYTE *)(v26 + 20) )
      return v18;
    v29 = *(_DWORD *)(v26 + 44);
    v55 = *(_DWORD *)(v26 + 48);
    v28 = *(unsigned int *)(v26 + 40);
  }
  else
  {
    if ( !*(_QWORD *)(v26 + 16) )
      return v18;
    v27 = *(_DWORD *)(v26 + 64);
    v28 = *(unsigned int *)(v26 + 56);
    v55 = v27;
    v29 = *(_DWORD *)(*((_QWORD *)a1 + 1) + 60LL);
  }
  v54 = v29;
  v45 = v28;
  v46 = a1[4];
  if ( v46 && (v48 = *((_QWORD *)a1 + 3)) != 0 || (LODWORD(v48) = a8, v46 = a9, a8) )
  {
    if ( (_DWORD)v28 )
    {
      if ( !is_mul_ok(v28, 8uLL) )
        return v18;
      v34 = (8 * v28 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( a10 && v14 >= v34 )
      {
        v20 = v34 + a10;
        v21 -= v34;
        Pool2 = a10;
      }
      else
      {
        Pool2 = ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          return v18;
      }
    }
    if ( !v54 )
      goto LABEL_29;
    if ( is_mul_ok(v54, 4uLL) )
    {
      v30 = (4LL * v54 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v20 && v21 >= v30 )
      {
        v47 = v20;
        v20 += v30;
        v21 -= v30;
        goto LABEL_29;
      }
      v47 = ExAllocatePool2(0x100uLL);
      if ( v47 )
      {
LABEL_29:
        v23 = v55;
        if ( v55 )
        {
          if ( !is_mul_ok(v55, 8uLL) )
            goto LABEL_11;
          v31 = (8LL * v55 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          if ( v20 && v21 >= v31 )
          {
            v19 = v20;
            v20 += v31;
            v21 -= v31;
            goto LABEL_5;
          }
          v19 = ExAllocatePool2(0x100uLL);
          if ( !v19 )
          {
LABEL_11:
            if ( v47 )
              EmpFreePool(v47, a10, (unsigned int)v14);
            goto LABEL_13;
          }
          v23 = v55;
        }
LABEL_5:
        if ( (unsigned __int8)EmpEvaluateParseNodeMapping(
                                v48,
                                v46,
                                a2,
                                a3,
                                a4,
                                a5,
                                a6,
                                a7,
                                Pool2,
                                v45,
                                v47,
                                v54,
                                v19,
                                v23) )
        {
          if ( *a1 )
          {
            LODWORD(v43) = a12 + 1;
            LODWORD(v41) = 0;
            LODWORD(v39) = v55;
            LODWORD(v37) = v54;
            v24 = EmpEvaluateNodeLink(*(_QWORD *)(v49 + 96), Pool2, v45, v47, v37, v19, v39, 0LL, v41, v20, v21, v43);
          }
          else
          {
            v24 = guard_dispatch_icall_no_overrides(v19, v55);
          }
          v18 = v24;
        }
        if ( v19 )
          EmpFreePool(v19, a10, (unsigned int)v14);
        goto LABEL_11;
      }
    }
LABEL_13:
    if ( Pool2 )
      EmpFreePool(Pool2, a10, (unsigned int)v14);
    return v18;
  }
  if ( v25 )
    return (unsigned int)EmpEvaluateNodeLink(
                           *(_QWORD *)(v16 + 96),
                           a2,
                           a3,
                           a4,
                           (unsigned int)a5,
                           a6,
                           (unsigned int)a7,
                           0LL,
                           0LL,
                           a10,
                           v14,
                           (int)a12 + 1);
  else
    return (unsigned int)guard_dispatch_icall_no_overrides(a6, (unsigned int)a7);
}
