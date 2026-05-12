/*
 * XREFs of RaidAdapterGetNvmeIceCapabilities @ 0x1401877EC
 * Callers:
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     WPP_SF_qD @ 0x14006F3F4 (WPP_SF_qD.c)
 *     RaidInitializeNvmeIce @ 0x1400719CC (RaidInitializeNvmeIce.c)
 *     WPP_SF_qDqD @ 0x14007205C (WPP_SF_qDqD.c)
 *     StorEtwNVMeICEInterfaceEvent @ 0x1400B1A5C (StorEtwNVMeICEInterfaceEvent.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidAdapterGetNvmeIceCapabilities(__int64 a1)
{
  int v1; // edi
  _BYTE *Pool; // r14
  int v3; // edx
  bool v5; // zf
  PVOID *i; // rsi
  PVOID v7; // rbp
  unsigned int v8; // eax
  const wchar_t *v9; // r9
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  Pool = 0LL;
  v3 = (32 * *(_DWORD *)(a1 + 952)) | *(_DWORD *)(a1 + 960) & 0x1F;
  v16 = 0;
  v5 = (*(_BYTE *)(a1 + 112) & 0x10) == 0;
  v17 = *(_DWORD *)(a1 + 964) & 7 | (8 * v3);
  if ( !v5 )
    return;
  ExAcquireResourceExclusiveLite(&NvmeIceListLock, 1u);
  for ( i = (PVOID *)NvmeIceList; i != &NvmeIceList; i = (PVOID *)*i )
  {
    v7 = i[5];
    v8 = (*((__int64 (__fastcall **)(_QWORD, int *, _QWORD, unsigned int *))v7 + 4))(
           *((_QWORD *)v7 + 1),
           &v17,
           0LL,
           &v16);
    v1 = v8;
    if ( v8 == -1056964601 )
      goto LABEL_5;
    if ( v8 != -1056964604 )
    {
      v9 = L"Failed to query NVMe ICE required capability size";
      goto LABEL_23;
    }
    if ( Pool )
      ExFreePoolWithTag(Pool, 0x72436152u);
    Pool = (_BYTE *)RaidAllocatePool(256LL, v16, 1917018450LL, *(_QWORD *)(a1 + 8));
    if ( !Pool )
    {
      v1 = -1073741670;
      break;
    }
    v8 = (*((__int64 (__fastcall **)(_QWORD, int *, _BYTE *, unsigned int *))v7 + 4))(
           *((_QWORD *)v7 + 1),
           &v17,
           Pool,
           &v16);
    v1 = v8;
    if ( v8 == -1056964601 )
    {
LABEL_5:
      v14 = 4;
      v9 = L"Device incompatible with NVMe ICE interface";
      v10 = 3238002695LL;
LABEL_24:
      StorEtwNVMeICEInterfaceEvent(a1, (__int64)i, v10, v9, v14);
      continue;
    }
    if ( v8 )
    {
      v9 = L"Unexpected error status from NVMe ICE QueryCapabilities";
LABEL_23:
      v14 = 2;
      v10 = v8;
      goto LABEL_24;
    }
    v12 = *(unsigned __int16 *)Pool;
    if ( (_DWORD)v12 == 1 )
    {
      if ( (Pool[4] & 1) == 0 )
      {
        StorEtwNVMeICEInterfaceEvent(a1, (__int64)i, 0LL, L"NVMe ICE interface does not support a page size of 4096", 4);
        continue;
      }
      *((_BYTE *)i + 96) = Pool[6];
      v8 = RaidInitializeNvmeIce(a1, (__int64)Pool, (__int64)i);
      v1 = v8;
      if ( !v8 )
        break;
      v9 = L"Failed to initialize NVMe ICE using compatible interface";
      goto LABEL_23;
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      LODWORD(v15) = 0;
      LODWORD(v13) = *(unsigned __int16 *)Pool;
      WPP_SF_qDqD((__int64)WPP_GLOBAL_Control->AttachedDevice, v12, v11, a1, v13, v7, v15);
    }
  }
  ExReleaseResourceLite(&NvmeIceListLock);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0x72436152u);
  if ( v1 < 0
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    LODWORD(v13) = v1;
    WPP_SF_qD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x10u,
      (__int64)&WPP_3e90584d844638fb9af1dc8f10a5e4f5_Traceguids,
      a1,
      v13);
  }
}
