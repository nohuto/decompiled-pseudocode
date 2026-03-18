/*
 * XREFs of DxgkAllocatePagesForMdlCB @ 0x14003FAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@IQEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@_NPEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAU_MDL@@@Z @ 0x14003FE3C (-SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE.c)
 *     DpiGetSysMmAdapterFromDevice @ 0x1400407B4 (DpiGetSysMmAdapterFromDevice.c)
 */

__int64 __fastcall DxgkAllocatePagesForMdlCB(__int64 a1, __int64 a2)
{
  int v2; // esi
  unsigned __int64 v4; // rdi
  __int64 SysMmAdapterFromDevice; // rax
  char v7; // [rsp+48h] [rbp-30h]
  char v8; // [rsp+88h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 32);
  if ( v2 > 2 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 139;
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 24);
    if ( v4 <= 0xFFFFF000 )
    {
      SysMmAdapterFromDevice = DpiGetSysMmAdapterFromDevice(a1);
      v7 = 1;
      return SysMmCreateMdlPhysicalObject(
               SysMmAdapterFromDevice,
               (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL,
               *(_QWORD *)a2,
               *(_QWORD *)(a2 + 8),
               *(_QWORD *)(a2 + 16),
               v2,
               *(_DWORD *)(a2 + 36),
               0LL,
               0,
               v7,
               a2 + 40,
               &v8,
               a2 + 48);
    }
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 145;
  }
  return 3221225485LL;
}
