/*
 * XREFs of NvmeAdapterCreateAddSubsystemPort @ 0x1400D41C0
 * Callers:
 *     NvmeAdapterProcessFabricControllerDiscoveryEntry @ 0x1400EC734 (NvmeAdapterProcessFabricControllerDiscoveryEntry.c)
 *     NvmeAdapterAddSubsystemPort @ 0x1401977B0 (NvmeAdapterAddSubsystemPort.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x140076CE0 (RtlStringCbCopyA.c)
 *     McTemplateK0qjzshsssst_EtwWriteTransfer @ 0x1400D24C8 (McTemplateK0qjzshsssst_EtwWriteTransfer.c)
 *     NvmeAdapterCleanupSubsystemPort @ 0x1400D36DC (NvmeAdapterCleanupSubsystemPort.c)
 *     NvmeAdapterCreateSubsystemPort @ 0x1400D4510 (NvmeAdapterCreateSubsystemPort.c)
 *     NvmeAdapterHostGatewayAcquireRundown @ 0x1400D8F28 (NvmeAdapterHostGatewayAcquireRundown.c)
 *     NvmeAdapterIsSubsystemPortPresent @ 0x1400D942C (NvmeAdapterIsSubsystemPortPresent.c)
 *     NvmeAdapterSendControlAddSubsystemPort @ 0x1400DC8B0 (NvmeAdapterSendControlAddSubsystemPort.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterCreateAddSubsystemPort(
        __int64 a1,
        char a2,
        _OWORD *a3,
        __int64 a4,
        NTSTRSAFE_PSTR pszDest,
        unsigned __int16 a6,
        char a7,
        char a8,
        char a9,
        char a10,
        _QWORD *a11)
{
  __int64 v12; // r15
  __int64 v16; // rcx
  char *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  int SubsystemPort; // ebx
  char *v26; // rsi
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  const char *v29; // r8
  __int64 IsSubsystemPortPresent; // [rsp+78h] [rbp-88h] BYREF
  __int64 v32; // [rsp+80h] [rbp-80h]
  _QWORD *v33; // [rsp+88h] [rbp-78h]
  char v34[256]; // [rsp+90h] [rbp-70h] BYREF

  v12 = *(_QWORD *)(a1 + 40);
  v33 = a11;
  v32 = a4;
  memset_0(v34, 0, sizeof(v34));
  if ( *(_BYTE *)a3 )
  {
    v16 = 2LL;
    v17 = v34;
    do
    {
      v18 = a3[1];
      *(_OWORD *)v17 = *a3;
      v19 = a3[2];
      *((_OWORD *)v17 + 1) = v18;
      v20 = a3[3];
      *((_OWORD *)v17 + 2) = v19;
      v21 = a3[4];
      *((_OWORD *)v17 + 3) = v20;
      v22 = a3[5];
      *((_OWORD *)v17 + 4) = v21;
      v23 = a3[6];
      *((_OWORD *)v17 + 5) = v22;
      v24 = a3[7];
      a3 += 8;
      *((_OWORD *)v17 + 6) = v23;
      v17 += 128;
      *((_OWORD *)v17 - 1) = v24;
      --v16;
    }
    while ( v16 );
  }
  else
  {
    if ( a8 )
      return (unsigned int)-1073741811;
    strcpy(v34, "nqn.2014-08.org.nvmexpress.discovery");
  }
  SubsystemPort = NvmeAdapterHostGatewayAcquireRundown(a1);
  if ( SubsystemPort >= 0 )
  {
    IsSubsystemPortPresent = NvmeAdapterIsSubsystemPortPresent(a1, v34, a6, a4, pszDest);
    v26 = (char *)IsSubsystemPortPresent;
    if ( IsSubsystemPortPresent )
    {
      if ( !a2 )
      {
        SubsystemPort = -1073741771;
LABEL_26:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 56));
        return (unsigned int)SubsystemPort;
      }
    }
    else
    {
      if ( !*pszDest )
      {
        if ( *(_DWORD *)(a1 + 4) != 3 || a8 )
        {
          *(_OWORD *)pszDest = *(_OWORD *)(a1 + 328);
          *((_OWORD *)pszDest + 1) = *(_OWORD *)(a1 + 344);
        }
        else
        {
          RtlStringCbCopyA(pszDest, 0x20uLL, "8009");
        }
      }
      SubsystemPort = NvmeAdapterCreateSubsystemPort(
                        a1,
                        (unsigned int)v34,
                        v32,
                        (_DWORD)pszDest,
                        a6,
                        a7,
                        a8,
                        a9,
                        a10,
                        (__int64)&IsSubsystemPortPresent);
      if ( SubsystemPort < 0 )
        goto LABEL_26;
      v26 = (char *)IsSubsystemPortPresent;
      SubsystemPort = NvmeAdapterSendControlAddSubsystemPort(v12, IsSubsystemPortPresent);
      if ( SubsystemPort < 0 )
      {
        NvmeAdapterCleanupSubsystemPort(v12, 0, (PVOID *)&IsSubsystemPortPresent);
        goto LABEL_26;
      }
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 384), 1u);
      v27 = *(_QWORD **)(a1 + 368);
      v28 = v26 + 8;
      if ( *v27 != a1 + 360 )
        __fastfail(3u);
      *v28 = a1 + 360;
      *((_QWORD *)v26 + 2) = v27;
      *v27 = v28;
      *(_QWORD *)(a1 + 368) = v28;
      ++*(_DWORD *)(a1 + 376);
      ExReleaseResourceLite((PERESOURCE)(a1 + 384));
      KeLeaveCriticalRegion();
      if ( (byte_14017344A & 2) != 0 )
      {
        v29 = "IO";
        if ( (v26[32] & 2) == 0 )
          v29 = "Discovery";
        McTemplateK0qjzshsssst_EtwWriteTransfer(
          (__int64)(v26 + 316),
          (__int64)(v26 + 60),
          (__int64)v29,
          *(_DWORD *)(v12 + 56),
          v12 + 1048,
          *(const wchar_t **)(v12 + 1032),
          (const char *)(a1 + 72),
          *((_WORD *)v26 + 2),
          v26 + 60,
          v26 + 316,
          v26 + 572,
          v29,
          1);
      }
    }
    *v33 = v26;
    goto LABEL_26;
  }
  return (unsigned int)SubsystemPort;
}
