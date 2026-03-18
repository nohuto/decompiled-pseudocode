/*
 * XREFs of SmmDestroyPhysicalObject @ 0x14003F6D4
 * Callers:
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x14003F6B0 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     ?SysMmCreateContiguousMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAX@Z @ 0x14003F8CC (-SysMmCreateContiguousMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY.c)
 *     SmmCreatePhysicalObjectForMdl @ 0x14003FBD0 (SmmCreatePhysicalObjectForMdl.c)
 *     SmmCreatePhysicalObject @ 0x14003FCC0 (SmmCreatePhysicalObject.c)
 *     ?SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@IQEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@_NPEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAU_MDL@@@Z @ 0x14003FE3C (-SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     McTemplateK0xxqqtpqp_EtwWriteTransfer @ 0x140068274 (McTemplateK0xxqqtpqp_EtwWriteTransfer.c)
 */

void __fastcall SmmDestroyPhysicalObject(_QWORD *a1, char a2)
{
  PMDL *v2; // rsi
  _DWORD *v4; // rdi
  PVOID *v6; // r14
  volatile signed __int64 *v7; // rax
  void *v8; // rcx

  v2 = (PMDL *)(a1 + 1);
  v4 = (_DWORD *)a1 + 11;
  if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
  {
    McTemplateK0xxqqtpqp_EtwWriteTransfer(
      (*v4 >> 11) & 3,
      (unsigned int)&DestroyPhysicalObject,
      (*v4 >> 1) & 0xF,
      *a1,
      (char)*v2,
      (*v4 >> 1) & 0xF,
      (*v4 >> 11) & 3,
      (*v4 & 0x200) != 0,
      a1[2],
      (*v4 >> 5) & 0xF,
      (char)a1);
    v6 = (PVOID *)(a1 + 1);
  }
  else
  {
    v6 = (PVOID *)(a1 + 1);
  }
  if ( a2 && (*v4 & 0x200) == 0 )
  {
    if ( ((*v4 >> 1) & 0xF) == 1 )
    {
      ObfDereferenceObject(*v6);
    }
    else if ( ((*v4 >> 1) & 0xF) == 2 )
    {
      MmFreePagesFromMdl(*v2);
      if ( (*v4 & 0x400) == 0 )
        ExFreePoolWithTag(*v6, 0);
      *v6 = 0LL;
    }
    else if ( ((*v4 >> 1) & 0xF) != 3 )
    {
      if ( ((*v4 >> 1) & 0xF) == 4 )
      {
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v2, a1, 0x8000u);
      }
      else if ( ((*v4 >> 1) & 0xF) == 5 )
      {
        MmFreeContiguousMemory(*v2);
      }
      else
      {
        WdLogSingleEntry5(0LL, 484LL, 1LL, a1, ((unsigned __int64)(unsigned int)*v4 >> 1) & 0xF, 0LL);
        WdLogGlobalForLineNumber = 495;
      }
    }
  }
  _InterlockedAdd64(&qword_1401696E0, -*a1);
  v7 = (volatile signed __int64 *)&unk_1401696F0;
  if ( (*v4 & 1) == 0 )
    v7 = (volatile signed __int64 *)&unk_1401696E8;
  _InterlockedAdd64(v7, -*a1);
  v8 = (void *)a1[3];
  if ( v8 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1);
}
