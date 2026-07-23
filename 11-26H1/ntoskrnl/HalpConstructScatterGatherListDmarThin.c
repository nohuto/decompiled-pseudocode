/*
 * XREFs of HalpConstructScatterGatherListDmarThin @ 0x14048AB24
 * Callers:
 *     HalGetScatterGatherListDmarThin @ 0x14048A750 (HalGetScatterGatherListDmarThin.c)
 *     HalpBuildScatterGatherListDmarThin @ 0x14048A918 (HalpBuildScatterGatherListDmarThin.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x14048AB24 (HalpConstructScatterGatherListDmarThin.c)
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x14057B58C (HalpDmaReturnEmergencyLogicalAddressResources.c)
 * Callees:
 *     HalpConstructScatterGatherListDmarThin @ 0x14048AB24 (HalpConstructScatterGatherListDmarThin.c)
 *     HalpPutScatterGatherListDmarThin @ 0x14049BD84 (HalpPutScatterGatherListDmarThin.c)
 *     HalpDmaUseEmergencyLogicalAddressResources @ 0x14052A944 (HalpDmaUseEmergencyLogicalAddressResources.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpConstructScatterGatherListDmarThin(__int64 a1)
{
  __int64 v1; // r11
  void *v2; // r14
  __int64 v3; // r10
  char v4; // r13
  int v5; // edi
  __int64 *v6; // r12
  unsigned int v8; // r15d
  __int64 v9; // r8
  __int64 v10; // rsi
  unsigned int v11; // ecx
  unsigned int v12; // edx
  int v13; // r9d
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  __int64 v17; // [rsp+40h] [rbp-49h]
  __int64 v18; // [rsp+60h] [rbp-29h]
  __int64 v19; // [rsp+68h] [rbp-21h]
  __int64 v20; // [rsp+70h] [rbp-19h]
  __int64 v21; // [rsp+78h] [rbp-11h]
  char v22; // [rsp+F0h] [rbp+67h]
  unsigned int v23; // [rsp+F8h] [rbp+6Fh]
  __int64 v24; // [rsp+100h] [rbp+77h]
  __int64 v25; // [rsp+108h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(void **)(a1 + 88);
  v3 = 0LL;
  v4 = *(_BYTE *)(a1 + 96);
  v5 = 0;
  v6 = *(__int64 **)(a1 + 48);
  v8 = *(_DWORD *)(a1 + 56);
  v9 = *(unsigned int *)(a1 + 60);
  v10 = *(_QWORD *)(a1 + 80);
  v24 = 0LL;
  v17 = v1;
  v21 = *(_QWORD *)(a1 + 64);
  v22 = v4;
  v25 = 0LL;
  v18 = *(_QWORD *)(v1 + 512);
  if ( v2 && (_m_prefetchw(v2), (_InterlockedOr((volatile signed __int32 *)v2, 4u) & 2) != 0) )
  {
    v5 = -1073741536;
LABEL_27:
    if ( *(_DWORD *)v10 )
      HalpPutScatterGatherListDmarThin(*(_QWORD *)(a1 + 24), v10, v9);
    if ( v5 != -1073741536 && !*(_BYTE *)(a1 + 98) )
    {
      *(_BYTE *)(a1 + 98) = 1;
      LOBYTE(v9) = v4 == 0;
      if ( (unsigned __int8)HalpDmaUseEmergencyLogicalAddressResources(v17, a1, v9) )
        return (unsigned int)HalpConstructScatterGatherListDmarThin(a1);
      else
        return v4 != 0 ? (unsigned int)v5 : 0;
    }
  }
  else
  {
    *(_DWORD *)v10 = 0;
    v11 = 0;
    *(_QWORD *)(v10 + 8) = a1;
    while ( v6 )
    {
      if ( !v8 )
        goto LABEL_20;
      v20 = 3LL * v11;
      v12 = v8;
      if ( *((_DWORD *)v6 + 10) - (int)v9 <= v8 )
        v12 = *((_DWORD *)v6 + 10) - v9;
      v13 = v9 + *((_DWORD *)v6 + 11);
      v8 -= v12;
      v23 = v12;
      if ( v12 )
      {
        v14 = ((v13 & 0xFFF) + (unsigned __int64)v12 + 4095) >> 12;
        v19 = v13 & 0xFFF;
        if ( *(_BYTE *)(a1 + 98) )
        {
          v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v1 + 560), v3);
          if ( v5 < 0 )
            goto LABEL_26;
          v1 = v17;
          v15 = v25 + **(_QWORD **)(v17 + 560);
          v3 = v14 + v25;
          v24 = v15;
          v25 += v14;
        }
        else
        {
          v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v18 + 40), 3LL);
          if ( v5 < 0 )
            goto LABEL_26;
          v15 = v24;
          v3 = v25;
          v1 = v17;
        }
        *(_QWORD *)(v10 + 8 * v20 + 16) = v19 + v15;
        *(_DWORD *)(v10 + 8 * v20 + 24) = v23;
        *(_QWORD *)(v10 + 8 * v20 + 32) = 0LL;
        v11 = ++*(_DWORD *)v10;
      }
      v6 = (__int64 *)*v6;
      v9 = 0LL;
    }
    if ( v8 && v11 )
      *(_DWORD *)(v10 + 24 * (v11 - 1 + 1LL)) += v8;
LABEL_20:
    if ( v2 )
    {
      _m_prefetchw(v2);
      if ( (_InterlockedOr((volatile signed __int32 *)v2, 1u) & 2) != 0 )
      {
        v5 = -1073741536;
LABEL_26:
        v4 = v22;
        goto LABEL_27;
      }
    }
    if ( v21 )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
  }
  return (unsigned int)v5;
}
