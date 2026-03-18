/*
 * XREFs of ?SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@IQEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@_NPEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAU_MDL@@@Z @ 0x14003FE3C
 * Callers:
 *     DxgkCreatePhysicalMemoryObjectCB @ 0x14003EF60 (DxgkCreatePhysicalMemoryObjectCB.c)
 *     DxgkAllocatePagesForMdlCB @ 0x14003FAD0 (DxgkAllocatePagesForMdlCB.c)
 *     SysMmTestCreateMdlPhysicalObject @ 0x14009D4C0 (SysMmTestCreateMdlPhysicalObject.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     SmmDestroyPhysicalObject @ 0x14003F6D4 (SmmDestroyPhysicalObject.c)
 *     SmmAllocatePhysicalObject @ 0x140040308 (SmmAllocatePhysicalObject.c)
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x140040410 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     McTemplateK0xxqqtpqp_EtwWriteTransfer @ 0x140068274 (McTemplateK0xxqqtpqp_EtwWriteTransfer.c)
 */

__int64 __fastcall SysMmCreateMdlPhysicalObject(
        struct SYSMM_ADAPTER *a1,
        SIZE_T a2,
        PHYSICAL_ADDRESS a3,
        PHYSICAL_ADDRESS a4,
        PHYSICAL_ADDRESS SkipBytes,
        MEMORY_CACHING_TYPE CacheType,
        int a7,
        __int64 a8,
        char a9,
        unsigned __int8 a10,
        __int64 *a11,
        __int64 *a12,
        struct _MDL **a13)
{
  PMDL PagesForMdl; // rax
  __int64 v16; // rbx
  struct _MDL *v17; // rbp
  __int64 ByteCount; // r13
  __int64 PhysicalObject; // rax
  __int64 v20; // rdi
  char v21; // dl
  int v22; // r8d
  _QWORD *v23; // rax
  volatile signed __int64 *v24; // rcx
  int v25; // eax
  unsigned int v26; // esi
  __int64 result; // rax
  int v28; // edx
  int v29; // ecx
  int v30; // r8d

  if ( (a2 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(3LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 1226;
  }
  else
  {
    PagesForMdl = MmAllocatePagesForMdlEx(a3, a4, SkipBytes, a2, CacheType, a7 | 4u);
    v16 = 0LL;
    v17 = PagesForMdl;
    if ( PagesForMdl )
    {
      ByteCount = PagesForMdl->ByteCount;
      PhysicalObject = SmmAllocatePhysicalObject();
      v20 = PhysicalObject;
      if ( PhysicalObject )
      {
        v21 = a9;
        v22 = a8;
        *(_DWORD *)(PhysicalObject + 40) = 1;
        *(_QWORD *)PhysicalObject = ByteCount;
        *(_QWORD *)(PhysicalObject + 8) = v17;
        *(_QWORD *)(PhysicalObject + 16) = a8;
        *(_QWORD *)(PhysicalObject + 32) = 0LL;
        *(_DWORD *)(PhysicalObject + 44) = (32 * (a9 & 0xF | (32 * (a10 | (2 * (CacheType & 3)))))) | 5;
        *(_QWORD *)(PhysicalObject + 80) = 0LL;
        *(_DWORD *)(PhysicalObject + 96) = 0;
        *(_QWORD *)(PhysicalObject + 88) = 0LL;
        *(_DWORD *)(PhysicalObject + 48) = 0;
        v23 = *(_QWORD **)(PhysicalObject + 24);
        if ( v23 )
        {
          v23[1] = v23;
          *v23 = v23;
          RtlCaptureStackBackTrace(4u, 0x10u, (PVOID *)(*(_QWORD *)(v20 + 24) + 16LL), 0LL);
          v21 = a9;
          v22 = a8;
        }
        _InterlockedAdd64(&qword_1401696E0, *(_QWORD *)v20);
        v24 = (volatile signed __int64 *)&unk_1401696F0;
        if ( (*(_DWORD *)(v20 + 44) & 1) == 0 )
          v24 = (volatile signed __int64 *)&unk_1401696E8;
        _InterlockedAdd64(v24, *(_QWORD *)v20);
        if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
          McTemplateK0xxqqtpqp_EtwWriteTransfer(
            (_DWORD)v24,
            (unsigned int)&CreatePhysicalObject,
            v22,
            ByteCount,
            *(_QWORD *)(v20 + 8),
            2,
            CacheType,
            0,
            v22,
            v21,
            v20);
        if ( !a1 )
          goto LABEL_13;
        v25 = SmmOpenPhysicalObject((struct SYSMM_PHYSICAL_OBJECT *)v20, a1);
        v26 = v25;
        if ( v25 >= 0 )
        {
          v16 = v20 + 64;
LABEL_13:
          *a12 = v16;
          *a11 = v20;
          *a13 = v17;
          return 0LL;
        }
        WdLogSingleEntry3(3LL, v20, a1, v25);
        WdLogGlobalForLineNumber = 667;
        SmmDestroyPhysicalObject((_QWORD *)v20, 0);
      }
      else
      {
        *a11 = 0LL;
        v26 = -1073741801;
        *a12 = 0LL;
      }
      MmFreePagesFromMdl(v17);
      ExFreePoolWithTag(v17, 0);
    }
    else
    {
      _InterlockedIncrement(&dword_14016971C);
      WdLogSingleEntry2(6LL, a2, CacheType);
      WdLogGlobalForLineNumber = 1251;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v29,
          v28,
          v30,
          0LL,
          1,
          -1,
          (__int64)L"Failed to allocate MDL from MmAllocatePagesForMdlEx, Size=%I64u, CacheType=%u",
          a2,
          CacheType,
          0LL,
          0LL,
          0LL);
      v26 = -1073741801;
    }
    result = v26;
    *a11 = 0LL;
    *a12 = 0LL;
    *a13 = 0LL;
  }
  return result;
}
