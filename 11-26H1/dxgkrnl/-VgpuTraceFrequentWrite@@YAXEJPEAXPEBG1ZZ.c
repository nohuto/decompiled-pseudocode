/*
 * XREFs of ?VgpuTraceFrequentWrite@@YAXEJPEAXPEBG1ZZ @ 0x14040C1FC
 * Callers:
 *     ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x14018BA60 (-VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 *     DxgkDdiWriteVirtualFunctionConfig @ 0x140218430 (DxgkDdiWriteVirtualFunctionConfig.c)
 *     DxgkDdiWriteVirtualFunctionConfigBlock @ 0x1402184E4 (DxgkDdiWriteVirtualFunctionConfigBlock.c)
 * Callees:
 *     McTemplateK0pzzq_EtwWriteTransfer @ 0x140065250 (McTemplateK0pzzq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

void VgpuTraceFrequentWrite(__int64 a1, int a2, void *a3, const unsigned __int16 *a4, wchar_t *Format, ...)
{
  char v7; // si
  wchar_t *v9; // r8
  const EVENT_DESCRIPTOR *v10; // rdx
  int v11; // [rsp+30h] [rbp-258h]
  wchar_t Dst[256]; // [rsp+50h] [rbp-238h] BYREF
  va_list ArgList; // [rsp+2B8h] [rbp+30h] BYREF

  va_start(ArgList, Format);
  v7 = a1;
  memset(Dst, 0, sizeof(Dst));
  v9 = Format;
  if ( Format )
    vswprintf_s(Dst, 0x100uLL, Format, ArgList);
  if ( !v7 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) == 0 )
      return;
    v11 = a2;
    v10 = (const EVENT_DESCRIPTOR *)&EventGpuPartitioningEnd;
LABEL_8:
    McTemplateK0pzzq_EtwWriteTransfer(a1, v10, (__int64)v9, a3, a4, Dst, v11);
    return;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
  {
    v11 = 0;
    v10 = (const EVENT_DESCRIPTOR *)&EventGpuPartitioningStart;
    goto LABEL_8;
  }
}
