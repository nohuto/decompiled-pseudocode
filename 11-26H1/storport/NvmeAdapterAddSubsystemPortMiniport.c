/*
 * XREFs of NvmeAdapterAddSubsystemPortMiniport @ 0x1400D2D7C
 * Callers:
 *     StorPortNvmeofExtendedFunction @ 0x14007BC80 (StorPortNvmeofExtendedFunction.c)
 * Callees:
 *     McTemplateK0qjzshsssst_EtwWriteTransfer @ 0x1400D24C8 (McTemplateK0qjzshsssst_EtwWriteTransfer.c)
 *     NvmeAdapterCreateSubsystemPort @ 0x1400D4510 (NvmeAdapterCreateSubsystemPort.c)
 *     NvmeAdapterGetHostGateway @ 0x1400D8CFC (NvmeAdapterGetHostGateway.c)
 *     NvmeAdapterHostGatewayAcquireRundown @ 0x1400D8F28 (NvmeAdapterHostGatewayAcquireRundown.c)
 *     NvmeAdapterIsSubsystemPortPresent @ 0x1400D942C (NvmeAdapterIsSubsystemPortPresent.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterAddSubsystemPortMiniport(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r8
  int SubsystemPort; // ebx
  _OWORD *v8; // rax
  __int64 v9; // rdx
  char *v10; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 HostGateway; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdi
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  const char *v24; // r8
  __int64 IsSubsystemPortPresent; // [rsp+70h] [rbp-158h] BYREF
  char v27[256]; // [rsp+80h] [rbp-148h] BYREF

  memset_0(v27, 0, sizeof(v27));
  if ( KeGetCurrentIrql() )
    return (unsigned int)-1056964600;
  if ( (*(_BYTE *)(a1 + 144) & 1) == 0 )
    return (unsigned int)-1073741637;
  if ( *(_WORD *)a2 != 1 || *(_WORD *)(a2 + 2) < 0x240u || (*(_BYTE *)(a2 + 4) & 6) == 6 )
    return (unsigned int)-1073741811;
  v8 = (_OWORD *)(a2 + 28);
  if ( !*(_BYTE *)(a2 + 28) )
  {
    if ( (*(_DWORD *)(a2 + 4) & 1) == 0 )
    {
      strcpy(v27, "nqn.2014-08.org.nvmexpress.discovery");
      goto LABEL_14;
    }
    return (unsigned int)-1073741811;
  }
  v9 = 2LL;
  v10 = v27;
  v6 = 128LL;
  do
  {
    v11 = v8[1];
    *(_OWORD *)v10 = *v8;
    v12 = v8[2];
    *((_OWORD *)v10 + 1) = v11;
    v13 = v8[3];
    *((_OWORD *)v10 + 2) = v12;
    v14 = v8[4];
    *((_OWORD *)v10 + 3) = v13;
    v15 = v8[5];
    *((_OWORD *)v10 + 4) = v14;
    v16 = v8[6];
    *((_OWORD *)v10 + 5) = v15;
    v17 = v8[7];
    v8 += 8;
    *((_OWORD *)v10 + 6) = v16;
    v10 += 128;
    *((_OWORD *)v10 - 1) = v17;
    --v9;
  }
  while ( v9 );
LABEL_14:
  HostGateway = NvmeAdapterGetHostGateway(a1, *(_QWORD *)(a2 + 8), v6);
  v19 = HostGateway;
  if ( HostGateway )
  {
    SubsystemPort = NvmeAdapterHostGatewayAcquireRundown(HostGateway);
    if ( SubsystemPort >= 0 )
    {
      IsSubsystemPortPresent = NvmeAdapterIsSubsystemPortPresent(
                                 v19,
                                 v27,
                                 *(unsigned __int16 *)(a2 + 24),
                                 a2 + 284,
                                 a2 + 540);
      if ( IsSubsystemPortPresent )
      {
        SubsystemPort = -1073741771;
      }
      else
      {
        SubsystemPort = NvmeAdapterCreateSubsystemPort(
                          v19,
                          (unsigned int)v27,
                          (int)a2 + 284,
                          (int)a2 + 540,
                          *(_WORD *)(a2 + 24),
                          0,
                          *(_DWORD *)(a2 + 4) & 1,
                          (*(_DWORD *)(a2 + 4) & 2) != 0,
                          (*(_DWORD *)(a2 + 4) & 4) != 0,
                          (__int64)&IsSubsystemPortPresent);
        if ( SubsystemPort >= 0 )
        {
          v20 = *(_QWORD *)(a2 + 16);
          v21 = IsSubsystemPortPresent;
          *(_QWORD *)(IsSubsystemPortPresent + 48) = v20;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(v19 + 384), 1u);
          v22 = *(_QWORD **)(v19 + 368);
          v23 = (_QWORD *)(v21 + 8);
          if ( *v22 != v19 + 360 )
            __fastfail(3u);
          *v23 = v19 + 360;
          *(_QWORD *)(v21 + 16) = v22;
          *v22 = v23;
          *(_QWORD *)(v19 + 368) = v23;
          ++*(_DWORD *)(v19 + 376);
          ExReleaseResourceLite((PERESOURCE)(v19 + 384));
          KeLeaveCriticalRegion();
          if ( (byte_14017344A & 2) != 0 )
          {
            v24 = "IO";
            if ( (*(_BYTE *)(v21 + 32) & 2) == 0 )
              v24 = "Discovery";
            McTemplateK0qjzshsssst_EtwWriteTransfer(
              v21 + 316,
              v21 + 60,
              (__int64)v24,
              *(_DWORD *)(a1 + 56),
              a1 + 1048,
              *(const wchar_t **)(a1 + 1032),
              (const char *)(v19 + 72),
              *(_WORD *)(v21 + 4),
              (const char *)(v21 + 60),
              (const char *)(v21 + 316),
              (const char *)(v21 + 572),
              v24,
              0);
          }
          *a3 = v21;
        }
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v19 + 56));
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)SubsystemPort;
}
