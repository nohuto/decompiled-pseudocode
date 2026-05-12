/*
 * XREFs of StorPortAdapterIdleState @ 0x1400308C0
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaMiniportIsFeatureSupported @ 0x14005073C (RaMiniportIsFeatureSupported.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140059760 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorPortAdapterIdleState(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  _QWORD *v7; // r8
  __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // rdx
  int v11; // ecx
  unsigned int v12; // ecx
  __int64 v13; // rbp
  char v14; // di
  char v15; // r12
  char v16; // r13
  int *v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  void (__fastcall *v20)(__int64, __int64, _DWORD *); // rax
  __int64 result; // rax
  int v22; // ecx
  int v23; // r8d
  int v24; // eax
  _DWORD *v25; // rcx
  __int64 v26; // rdx
  int *v27; // rcx
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // rcx
  unsigned __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  _DWORD v51[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v52; // [rsp+48h] [rbp-40h]
  unsigned int v53; // [rsp+50h] [rbp-38h]
  int v54; // [rsp+54h] [rbp-34h]

  if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(
      a1,
      (unsigned int)&EventAdapterIdleStateStart,
      a3,
      **(_QWORD **)(a1 + 5024),
      *(_DWORD *)(a1 + 56),
      a2,
      a3);
  v7 = (_QWORD *)(a1 + 5024);
  if ( a3 )
  {
    v9 = (*(_BYTE *)(a1 + 108) & 1) == 0;
    v10 = *v7;
    *(_QWORD *)(a1 + 5328) = MEMORY[0xFFFFF78000000008];
    v11 = *(_DWORD *)(v10 + 20);
    if ( v9 )
      v12 = v11 & 0xFFFFFFEF;
    else
      v12 = v11 | 0x10;
    *(_DWORD *)(v10 + 20) = v12;
  }
  else
  {
    ++*(_DWORD *)(a1 + 5364);
    v8 = *(_QWORD *)(a1 + 5328);
    if ( v8 )
    {
      if ( (*(_DWORD *)(*v7 + 20LL) & 0x10) != 0 || (*(_BYTE *)(a1 + 108) & 1) != 0 )
      {
        v31 = (MEMORY[0xFFFFF78000000008] - v8) / 0x2710uLL;
        *(_QWORD *)(a1 + 5336) += v31;
        if ( v31 >= 0x2710 )
          ++*(_DWORD *)(a1 + 5372);
      }
      *(_QWORD *)(a1 + 5328) = 0LL;
    }
  }
  *(_DWORD *)(*v7 + 16LL) = a3;
  if ( (*(_DWORD *)(a1 + 624) & 0x20) == 0 )
  {
    *(_QWORD *)(a1 + 668) = 0LL;
    *(_QWORD *)(a1 + 676) = 0LL;
    *(_QWORD *)(a1 + 684) = 0LL;
    *(_QWORD *)(a1 + 692) = 0LL;
    *(_DWORD *)(a1 + 664) = 19;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(a1 + 376, 2LL) )
      *(_DWORD *)(a1 + 664) = 20;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v33, 3LL) )
      *(_DWORD *)(a1 + 664) = 21;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v35, 5LL) )
      *(_DWORD *)(a1 + 664) = 22;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v36, 6LL) )
      *(_DWORD *)(a1 + 664) = 23;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v37, 7LL) )
      *(_DWORD *)(a1 + 664) = 24;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v38, 8LL) )
      *(_DWORD *)(a1 + 664) = 25;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v39, 9LL) )
      *(_DWORD *)(a1 + 664) = 26;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v40, 10LL) )
      *(_DWORD *)(a1 + 664) = 27;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v41, 12LL) )
      *(_DWORD *)(a1 + 664) = 28;
    if ( (int)RaCallMiniportAdapterControl(v42) < 0 )
      goto LABEL_29;
    *(_DWORD *)(a1 + 624) |= 0x20u;
  }
  if ( !*(_BYTE *)(a1 + 677) )
    goto LABEL_29;
  if ( *(_DWORD *)(a1 + 96) )
  {
    v13 = *(_QWORD *)(a1 + 5080);
    if ( v13 )
    {
      v14 = 1;
      v15 = 1;
      v16 = 1;
      if ( *(char *)(a1 + 108) >= 0 )
      {
        if ( *(_DWORD *)(a1 + 348) == 4 && !*(_DWORD *)(a1 + 100) )
        {
          v32 = *(_DWORD *)(a1 + 392);
          if ( v32 == 5 || v32 == 17 )
            goto LABEL_22;
          if ( (*(_BYTE *)(a1 + 107) & 0x50) == 0x50 )
          {
            v14 = 0;
            goto LABEL_23;
          }
        }
        v7 = *(_QWORD **)(a1 + 5024);
        if ( !v7 )
          goto LABEL_38;
        v17 = (int *)v7[1];
        v18 = *v17;
        if ( *v17 == 1 )
        {
          v24 = v17[2];
          v25 = v17 + 4;
          if ( !v24 )
            v25 = 0LL;
        }
        else
        {
          if ( v18 != 2 && v18 != 3 || !v17[2] )
            goto LABEL_22;
          v25 = v17 + 6;
        }
        if ( v25 )
        {
          if ( *v25 < 2u )
          {
            v7 += 2;
          }
          else
          {
            v7 += 2;
            if ( *(_DWORD *)v7 > v25[9] )
            {
              v14 = 0;
              goto LABEL_23;
            }
          }
          if ( *v25 == 1 && (*(_BYTE *)(a1 + 107) & 0x40) != 0 && *(_DWORD *)v7 )
          {
            v14 = 0;
            goto LABEL_23;
          }
LABEL_38:
          if ( (*(_BYTE *)(v13 + 506) & 4) != 0 )
          {
            v15 = 0;
            goto LABEL_23;
          }
          if ( *(_DWORD *)(v13 + 548) == 4 && !*(_DWORD *)(v13 + 1044) && (*(_BYTE *)(v13 + 505) & 0x44) == 0x44 )
          {
            v15 = 0;
            goto LABEL_23;
          }
          if ( (*(_DWORD *)(v13 + 504) & 0x8000) == 0
            || !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v13 + 1864)) )
          {
            goto LABEL_24;
          }
          v26 = *(_QWORD *)(v13 + 1872);
          v27 = *(int **)(v26 + 8);
          v28 = *v27;
          if ( *v27 == 1 )
          {
            v29 = v27[2];
            v30 = v27 + 4;
            if ( !v29 )
              v30 = 0LL;
          }
          else
          {
            if ( v28 != 2 && v28 != 3 || !v27[2] )
            {
LABEL_45:
              v15 = 0;
              ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v13 + 1864));
              goto LABEL_23;
            }
            v30 = v27 + 6;
          }
          if ( v30 )
          {
            if ( *v30 >= 2u )
            {
              if ( *(_DWORD *)(v26 + 16) > v30[9] )
                v15 = 0;
            }
            else if ( *v30 == 1 && (*(_BYTE *)(v13 + 505) & 0x40) != 0 && *(_DWORD *)(v26 + 16) )
            {
              v15 = 0;
            }
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v13 + 1864));
            if ( v15 )
              goto LABEL_24;
            goto LABEL_23;
          }
          goto LABEL_45;
        }
      }
LABEL_22:
      v14 = 0;
LABEL_23:
      v16 = 0;
LABEL_24:
      *(_BYTE *)(a1 + 4957) = v14;
      *(_BYTE *)(v13 + 1862) = v15;
      *(_BYTE *)(v13 + 1863) = v16;
    }
  }
  if ( (*(_DWORD *)(a1 + 624) & 0x20) != 0 )
  {
LABEL_26:
    if ( *(_BYTE *)(a1 + 677) )
    {
      v19 = *(_QWORD *)(a1 + 608);
      v51[0] = 1;
      v51[1] = 24;
      v52 = 0LL;
      v53 = a2;
      v54 = a3;
      v20 = *(void (__fastcall **)(__int64, __int64, _DWORD *))(v19 + 120);
      if ( v20 )
        v20(*(_QWORD *)(a1 + 616) + 16LL, 9LL, v51);
    }
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 668) = 0LL;
  *(_QWORD *)(a1 + 676) = 0LL;
  *(_QWORD *)(a1 + 684) = 0LL;
  *(_QWORD *)(a1 + 692) = 0LL;
  *(_DWORD *)(a1 + 664) = 19;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(a1 + 376, 2LL) )
    *(_DWORD *)(a1 + 664) = 20;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v34, 3LL) )
    *(_DWORD *)(a1 + 664) = 21;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v43, 5LL) )
    *(_DWORD *)(a1 + 664) = 22;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v44, 6LL) )
    *(_DWORD *)(a1 + 664) = 23;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v45, 7LL) )
    *(_DWORD *)(a1 + 664) = 24;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v46, 8LL) )
    *(_DWORD *)(a1 + 664) = 25;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v47, 9LL) )
    *(_DWORD *)(a1 + 664) = 26;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v48, 10LL) )
    *(_DWORD *)(a1 + 664) = 27;
  if ( (unsigned __int8)RaMiniportIsFeatureSupported(v49, 12LL) )
    *(_DWORD *)(a1 + 664) = 28;
  if ( (int)RaCallMiniportAdapterControl(v50) >= 0 )
  {
    *(_DWORD *)(a1 + 624) |= 0x20u;
    goto LABEL_26;
  }
LABEL_29:
  result = PoFxCompleteIdleState(**(_QWORD **)(a1 + 5024), a2, v7, a4);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_140173442 & 0x10) != 0 )
      return McTemplateK0pqqq_EtwWriteTransfer(
               v22,
               (unsigned int)&EventAdapterIdleStateStop,
               v23,
               **(_QWORD **)(a1 + 5024),
               *(_DWORD *)(a1 + 56),
               a2,
               a3);
  }
  return result;
}
