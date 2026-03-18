/*
 * XREFs of ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x14003F220
 * Callers:
 *     DxgkUnmapPhysicalMemoryCB @ 0x14003F200 (DxgkUnmapPhysicalMemoryCB.c)
 *     ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x140288370 (-SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x14003F6B0 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     SmmUnmapMdl @ 0x140040894 (SmmUnmapMdl.c)
 *     McTemplateK0ppx_EtwWriteTransfer @ 0x14009D0FC (McTemplateK0ppx_EtwWriteTransfer.c)
 *     SmmUnmapSection @ 0x1402882D0 (SmmUnmapSection.c)
 */

void __fastcall SysMmUnmapPhysicalObject(struct SYSMM_PHYSICAL_OBJECT *a1, PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  char v3; // si
  char v4; // di
  int v6; // edx
  int v7; // ecx
  int v8; // r8d

  v3 = NumberOfBytes;
  v4 = (char)BaseAddress;
  switch ( (*((_DWORD *)a1 + 11) >> 1) & 0xF )
  {
    case 1:
      SmmUnmapSection(BaseAddress);
      break;
    case 2:
      SmmUnmapMdl(a1, *((_QWORD *)a1 + 1), BaseAddress);
      break;
    case 3:
      MmUnmapIoSpace(BaseAddress, NumberOfBytes);
      break;
    default:
      if ( ((*((_DWORD *)a1 + 11) >> 1) & 0xFu) - 4 > 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 807;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0", 807LL, 0LL, 0LL, 0LL, 0LL);
      }
      break;
  }
  SysMmUnreferencePhysicalObject(a1);
  if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
    McTemplateK0ppx_EtwWriteTransfer(v7, v6, v8, (_DWORD)a1, v4, v3);
}
