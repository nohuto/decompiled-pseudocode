/*
 * XREFs of HvlpSelectLpSet @ 0x1405BCF2C
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1405BC1D8 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HalEnumerateProcessors @ 0x14057E9D0 (HalEnumerateProcessors.c)
 *     HvlpComputeLpComparisonMetrics @ 0x1405BC7B8 (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x1405BCCF0 (HvlpLpComparison.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x1405BCE58 (HvlpQueryApicIdAndNumaNode.c)
 *     HviGetImplementationLimits @ 0x1406E0AA8 (HviGetImplementationLimits.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlpSelectLpSet(unsigned int a1, __int64 a2)
{
  unsigned int v4; // r15d
  unsigned int v5; // r13d
  unsigned int i; // r14d
  int ApicIdAndNumaNode; // eax
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // r12d
  __int64 v13; // rdi
  int v14; // r11d
  int v15; // r14d
  unsigned int v16; // r10d
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // edx
  unsigned int v22; // eax
  _BYTE *v23; // rcx
  unsigned int v24; // edi
  _BYTE *v25; // r14
  unsigned int v26; // r9d
  __int64 j; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  _BYTE *v30; // rdi
  unsigned int v31; // ecx
  int v32; // r8d
  _DWORD *v33; // rdx
  __int64 v34; // rcx
  unsigned __int16 v36[2]; // [rsp+20h] [rbp-40h] BYREF
  __int16 v37; // [rsp+24h] [rbp-3Ch] BYREF
  int v38; // [rsp+28h] [rbp-38h]
  unsigned int v39; // [rsp+2Ch] [rbp-34h]
  unsigned int v40; // [rsp+30h] [rbp-30h]
  int v41; // [rsp+34h] [rbp-2Ch]
  int v42; // [rsp+38h] [rbp-28h] BYREF
  int v43; // [rsp+3Ch] [rbp-24h]
  __int128 v44; // [rsp+40h] [rbp-20h] BYREF

  v36[0] = 0;
  v40 = 0;
  v37 = 0;
  v42 = 0;
  v39 = 0;
  v44 = 0LL;
  if ( (HvlpRootFlags & 1) == 0 )
  {
    KeHypervisorNumprocSpecified = 0;
    KeRootProcSpecified = 0;
    KeRootProcNumaNodesSpecified = 0;
    KeRootProcPerNodeSpecified = 0;
    KeRootProcPerCoreSpecified = 0;
    KeRootProcNumaNodeLpsSpecified = 0;
  }
  if ( (HvlpRootFlags & 0x800) != 0 )
  {
    KeRootProcSpecified = 0;
    KeRootProcNumaNodesSpecified = 0;
    KeRootProcPerNodeSpecified = 0;
    KeRootProcPerCoreSpecified = 1;
    KeRootProcNumaNodeLpsSpecified = 0;
  }
  HviGetImplementationLimits(&v44);
  v4 = 64;
  v5 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
  if ( (unsigned int)v44 < 0x40 )
    v4 = v44;
  if ( KeRootProcSpecified && KeRootProcSpecified < v4 && !KeRootProcNumaNodesSpecified )
    v4 = KeRootProcSpecified;
  v43 = HalEnumerateProcessors(KeRegisteredProcessors);
  for ( i = 0; ; ++i )
  {
    if ( i >= a1 )
    {
      v12 = 1;
      v13 = a2 + 1;
      *(_BYTE *)(a2 + 1) = 1;
      v14 = 1;
      v38 = 1;
      v15 = 1;
LABEL_24:
      v41 = v15;
      while ( 1 )
      {
        v16 = 0;
        if ( a1 )
        {
          v17 = a2;
          do
          {
            if ( *(_BYTE *)v17 )
            {
              if ( *(_BYTE *)(v17 + 1)
                || (v18 = *(unsigned __int16 *)(v17 + 8), (unsigned __int16)v18 >= (unsigned __int16)KeNumberNodes)
                || (*(_BYTE *)(KeNodeBlock[v18] + 10) & 2) == 0
                || v12 == 2048
                || v12 == v43
                || KeBootprocSpecified && v12 == KeBootprocSpecified
                || KeNumprocSpecified && v16 >= KeNumprocSpecified
                || KeHypervisorNumprocSpecified && v12 == KeHypervisorNumprocSpecified )
              {
LABEL_51:
                *(_BYTE *)v17 = 0;
              }
              else
              {
                if ( v15 == v4 )
                {
                  v19 = 0LL;
                  while ( *(_WORD *)(a2 + 40 * v19 + 8) != (_WORD)v18 || !*(_BYTE *)(a2 + 40 * v19 + 1) )
                  {
                    v19 = (unsigned int)(v19 + 1);
                    if ( (unsigned int)v19 >= a1 )
                    {
                      if ( (_DWORD)v19 == a1 )
                        goto LABEL_51;
                      break;
                    }
                  }
                }
                if ( v14 == KeRegisteredProcessors )
                {
                  v20 = v13;
                  v21 = 0;
                  while ( (v5 & *(_DWORD *)(v17 + 4)) != (v5 & *(_DWORD *)(v20 + 3)) || !*(_BYTE *)v20 )
                  {
                    ++v21;
                    v20 += 40LL;
                    if ( v21 >= a1 )
                    {
                      if ( v21 != a1 )
                        break;
                      goto LABEL_51;
                    }
                  }
                }
              }
            }
            ++v16;
            v17 += 40LL;
          }
          while ( v16 < a1 );
          v22 = 0;
          v23 = (_BYTE *)a2;
          while ( !*v23 )
          {
            ++v22;
            v23 += 40;
            if ( v22 >= a1 )
              goto LABEL_58;
          }
        }
        else
        {
          v22 = 0;
LABEL_58:
          if ( v22 == a1 )
            return v39;
        }
        v24 = 0;
        if ( a1 )
        {
          v25 = (_BYTE *)a2;
          do
          {
            if ( *v25 )
              HvlpComputeLpComparisonMetrics(a1, a2, v24);
            ++v24;
            v25 += 40;
          }
          while ( v24 < a1 );
          v15 = v41;
        }
        v26 = -1;
        for ( j = 0LL; (unsigned int)j < a1; j = (unsigned int)(j + 1) )
        {
          if ( *(_BYTE *)(a2 + 40 * j) )
          {
            v26 = j;
            break;
          }
        }
        v28 = v26 + 1;
        if ( (unsigned int)v28 < a1 )
        {
          v29 = 5 * v28;
          v30 = (_BYTE *)(a2 + 40 * v28);
          do
          {
            if ( *v30 && (unsigned int)HvlpLpComparison(v29, a2, v28, v26) == -1 )
              v26 = v28;
            LODWORD(v28) = v28 + 1;
            v30 += 40;
          }
          while ( (unsigned int)v28 < a1 );
        }
        ++v12;
        v31 = 0;
        v32 = v5 & *(_DWORD *)(a2 + 40LL * v26 + 4);
        *(_BYTE *)(a2 + 40LL * v26 + 1) = 1;
        if ( a1 )
        {
          v33 = (_DWORD *)(a2 + 4);
          while ( v31 == v26 || !*((_BYTE *)v33 - 3) || (*v33 & v5) != v32 )
          {
            ++v31;
            v33 += 10;
            if ( v31 >= a1 )
              goto LABEL_82;
          }
          v14 = v38;
        }
        else
        {
LABEL_82:
          v14 = v38;
          if ( v31 == a1 )
            v14 = ++v38;
        }
        v34 = 0LL;
        if ( a1 )
        {
          while ( 1 )
          {
            if ( (_DWORD)v34 != v26 )
            {
              if ( *(_BYTE *)(a2 + 40 * v34 + 1) )
              {
                v13 = a2 + 1;
                if ( *(_WORD *)(a2 + 40 * v34 + 8) == *(_WORD *)(a2 + 40LL * v26 + 8) )
                  break;
              }
            }
            v34 = (unsigned int)(v34 + 1);
            if ( (unsigned int)v34 >= a1 )
              goto LABEL_90;
          }
        }
        else
        {
LABEL_90:
          v13 = a2 + 1;
          if ( (_DWORD)v34 == a1 )
          {
            ++v15;
            v13 = a2 + 1;
            goto LABEL_24;
          }
        }
      }
    }
    *(_BYTE *)(a2 + 40LL * i) = 1;
    ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(i, (_DWORD *)(a2 + 4 + 40LL * i), v36);
    v39 = ApicIdAndNumaNode;
    v8 = ApicIdAndNumaNode;
    if ( ApicIdAndNumaNode == -1073741275 )
    {
      v39 = 0;
      *(_BYTE *)(a2 + 40LL * i) = 0;
      continue;
    }
    if ( ApicIdAndNumaNode < 0 )
      break;
    v9 = HvlpQueryProximityId;
    v10 = v36[0];
    *(_WORD *)(a2 + 40LL * i + 8) = v36[0];
    if ( v9 )
    {
      if ( (int)guard_dispatch_icall_no_overrides(v10, &v42) < 0
        || !HvlpQueryProximityNode
        || (v11 = guard_dispatch_icall_no_overrides(v40, &v37), LOWORD(v10) = v37, v11 < 0) )
      {
        LOWORD(v10) = v36[0];
      }
    }
    *(_WORD *)(a2 + 40LL * i + 10) = v10;
    *(_WORD *)(a2 + 40LL * i + 12) = v10;
  }
  return v8;
}
