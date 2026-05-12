/*
 * XREFs of NvmeAdapterProcessFabricControllerDiscoveryEntry @ 0x1400EC734
 * Callers:
 *     NvmeAdapterNvmeControllerBackgroundWork @ 0x1400EA6E0 (NvmeAdapterNvmeControllerBackgroundWork.c)
 * Callees:
 *     NvmeAdapterCreateAddNvmeController @ 0x1400D40F4 (NvmeAdapterCreateAddNvmeController.c)
 *     NvmeAdapterCreateAddSubsystemPort @ 0x1400D41C0 (NvmeAdapterCreateAddSubsystemPort.c)
 *     NvmeAdapterHostGatewayAcquireRundown @ 0x1400D8F28 (NvmeAdapterHostGatewayAcquireRundown.c)
 *     NvmeAdapterSubsystemPortAcquireRundown @ 0x1400E0BE8 (NvmeAdapterSubsystemPortAcquireRundown.c)
 *     McTemplateK0qjzpduuuhhsssq_EtwWriteTransfer @ 0x1400E3440 (McTemplateK0qjzpduuuhhsssq_EtwWriteTransfer.c)
 */

void __fastcall NvmeAdapterProcessFabricControllerDiscoveryEntry(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rbp
  int v3; // r15d
  bool v6; // di
  __int64 v7; // r14
  __int64 v8; // r8
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  const char *v11; // r13
  const char *v12; // rsi
  const char *v13; // r12
  int v14; // edi
  __int64 v15; // rsi
  unsigned __int16 v16; // r8
  __int16 v17; // cx
  __int64 v19; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v20; // [rsp+E8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 128);
  v3 = 0;
  v20 = 0LL;
  v19 = 0LL;
  v6 = 0;
  ExAcquireResourceSharedLite((PERESOURCE)(*(_QWORD *)(v2 + 608) + 24LL), 1u);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( (int)NvmeAdapterHostGatewayAcquireRundown(v7) < 0 )
    goto LABEL_12;
  if ( *a2 == *(_DWORD *)(v7 + 4) )
    v6 = a2[1] == *(_DWORD *)(v7 + 8);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 56));
  if ( !v6 )
  {
LABEL_12:
    v9 = *(_QWORD **)(v2 + 608);
    v10 = (_QWORD *)*v9;
    if ( (_QWORD *)*v9 == v9 )
      goto LABEL_27;
    do
    {
      if ( (int)NvmeAdapterHostGatewayAcquireRundown((__int64)(v10 - 3)) >= 0 )
      {
        if ( *a2 == *((_DWORD *)v10 - 5) && a2[1] == *((_DWORD *)v10 - 4) )
        {
          ++v3;
          v7 = (__int64)(v10 - 3);
        }
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v10[4]);
      }
      v10 = (_QWORD *)*v10;
    }
    while ( v10 != *(_QWORD **)(v2 + 608) );
    if ( v3 != 1 )
    {
LABEL_27:
      LOBYTE(v14) = 114;
      v13 = (const char *)(a2 + 32);
      v11 = (const char *)(a2 + 512);
      v12 = (const char *)(a2 + 256);
LABEL_28:
      if ( (byte_14017344A & 8) != 0 )
        McTemplateK0qjzpduuuhhsssq_EtwWriteTransfer(
          a1 ^ v2,
          v2 + 1048,
          v8,
          *(_DWORD *)(v2 + 56),
          v2 + 1048,
          *(const wchar_t **)(v2 + 1032),
          a1 ^ v2,
          v14,
          *a2,
          a2[1],
          a2[2],
          *((_WORD *)a2 + 2),
          *((_WORD *)a2 + 3),
          v12,
          v11,
          v13,
          v3);
      goto LABEL_30;
    }
  }
  v11 = (const char *)(a2 + 512);
  v12 = (const char *)(a2 + 256);
  v13 = (const char *)(a2 + 32);
  v14 = NvmeAdapterCreateAddSubsystemPort(
          v7,
          1,
          (_OWORD *)a2 + 16,
          (__int64)(a2 + 512),
          (NTSTRSAFE_PSTR)a2 + 32,
          *((_WORD *)a2 + 2),
          0,
          a2[2] == 2,
          *((_WORD *)a2 + 3) == 0xFFFF,
          *((_WORD *)a2 + 3) == 0xFFFE,
          &v19);
  if ( v14 >= 0 )
  {
    if ( *((_WORD *)a2 + 3) > 0xFFEFu )
    {
      v17 = *((_WORD *)a2 + 4);
      if ( (unsigned __int16)(v17 - 32) <= 0xFE0u )
        *(_WORD *)(v19 + 6) = v17;
    }
    else
    {
      v15 = v19;
      v14 = NvmeAdapterSubsystemPortAcquireRundown(v19);
      if ( v14 >= 0 )
      {
        v14 = NvmeAdapterCreateAddNvmeController(v15, *((_WORD *)a2 + 3), 0, 0, &v20);
        if ( v14 >= 0 )
        {
          v16 = *((_WORD *)a2 + 4);
          if ( v16 >= 0x20u )
          {
            if ( v16 >= *(_WORD *)(v20 + 6) )
              v16 = *(_WORD *)(v20 + 6);
            *(_WORD *)(v20 + 6) = v16;
          }
        }
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v15 + 40));
      }
      v12 = (const char *)(a2 + 256);
    }
  }
  if ( v14 < 0 )
    goto LABEL_28;
LABEL_30:
  ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(v2 + 608) + 24LL));
}
