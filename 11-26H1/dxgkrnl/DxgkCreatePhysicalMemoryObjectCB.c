/*
 * XREFs of DxgkCreatePhysicalMemoryObjectCB @ 0x14003EF60
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmCreateIoSpacePhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14003EC94 (-SysMmCreateIoSpacePhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@W4_MEMORY_CACHING_TY.c)
 *     ?SysMmCreateContiguousMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAX@Z @ 0x14003F8CC (-SysMmCreateContiguousMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY.c)
 *     ?SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@IQEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@_NPEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAU_MDL@@@Z @ 0x14003FE3C (-SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE.c)
 *     DpiGetSysMmAdapterFromDevice @ 0x1400407B4 (DpiGetSysMmAdapterFromDevice.c)
 *     ?SysMmCreateSectionPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KKPEAU_OBJECT_ATTRIBUTES@@KPEAXW4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x140287488 (-SysMmCreateSectionPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KKPEAU_OBJECT_ATTRIBUTES@@KPEAXW4_MEMO.c)
 */

__int64 __fastcall DxgkCreatePhysicalMemoryObjectCB(__int64 a1)
{
  int v1; // edi
  __int64 SysMmAdapterFromDevice; // r10
  __int64 v4; // r9
  int v5; // edx
  int v6; // edx
  int v8; // edx
  unsigned __int64 v9; // rdx
  int v10; // r8d
  char v11; // [rsp+48h] [rbp-30h]
  char v12; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 28);
  if ( v1 > 2 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 394;
    return 3221225485LL;
  }
  SysMmAdapterFromDevice = 0LL;
  if ( *(_QWORD *)a1 )
    SysMmAdapterFromDevice = DpiGetSysMmAdapterFromDevice();
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 24);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 )
      return SysMmCreateContiguousMemoryPhysicalObject(
               SysMmAdapterFromDevice,
               *(_QWORD *)(a1 + 8),
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 40),
               *(_QWORD *)(a1 + 48),
               v1,
               v4,
               0,
               a1 + 64,
               a1 + 72,
               &v12);
    v8 = v6 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 486;
        return 3221225485LL;
      }
      return SysMmCreateIoSpacePhysicalObject(
               SysMmAdapterFromDevice,
               *(_QWORD *)(a1 + 8),
               *(_QWORD *)(a1 + 32),
               v1,
               v4,
               0,
               a1 + 64,
               a1 + 72);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 8);
      if ( v9 > 0xFFFFF000 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 447;
        return 3221225485LL;
      }
      v10 = *(_DWORD *)(a1 + 48);
      if ( (v10 & 0xFFFFFFE1) != 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 453;
        return 3221225485LL;
      }
      return SysMmCreateSectionPhysicalObject(
               SysMmAdapterFromDevice,
               v9,
               *(unsigned int *)(a1 + 32),
               *(_QWORD *)(a1 + 40),
               v10,
               0LL,
               v1,
               v4,
               0,
               a1 + 64,
               a1 + 72);
    }
  }
  else
  {
    v11 = 0;
    return SysMmCreateMdlPhysicalObject(
             SysMmAdapterFromDevice,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 32),
             *(_QWORD *)(a1 + 40),
             *(_QWORD *)(a1 + 48),
             v1,
             *(_DWORD *)(a1 + 56),
             v4,
             0,
             v11,
             a1 + 64,
             a1 + 72,
             &v12);
  }
}
