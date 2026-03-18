/*
 * XREFs of ?WriteVirtualizedInterrupt@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_MSI_TABLE_ENTRY@@PEAU_DXGKARG_GPUP_WRITE_VIRTUALIZED_MSIX@@@Z @ 0x14021F9C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DdiWriteVirtualizedInterrupt@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GPUP_WRITE_VIRTUALIZED_MSIX@@@Z @ 0x1403C13E0 (-DdiWriteVirtualizedInterrupt@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GPUP_WRITE_VIRTUALIZED_MSIX@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::WriteVirtualizedInterrupt(
        DXGK_VIRTUAL_GPU_GPUP *this,
        struct _MSI_TABLE_ENTRY *a2,
        struct _DXGKARG_GPUP_WRITE_VIRTUALIZED_MSIX *a3)
{
  __int64 v3; // r10
  unsigned int v6; // r11d
  unsigned int i; // ecx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v11; // rax
  __int64 v12; // [rsp+28h] [rbp-30h]

  v3 = *((_QWORD *)this + 43);
  if ( v3 )
  {
    v6 = *((_DWORD *)this + 84);
    for ( i = 0; i < v6; ++i )
    {
      v8 = 32LL * i;
      if ( *(_QWORD *)a2 == *(_QWORD *)(v8 + v3) && *((_DWORD *)a2 + 2) == *(_DWORD *)(v8 + v3 + 8) )
      {
        v9 = 32LL * i;
        *((_QWORD *)a3 + 1) = *(_QWORD *)(v3 + v9 + 16);
        *((_DWORD *)a3 + 4) = *(_DWORD *)(*((_QWORD *)this + 43) + v9 + 24);
        *((_DWORD *)a3 + 5) = *((_DWORD *)a2 + 3);
        return ADAPTER_RENDER::DdiWriteVirtualizedInterrupt(*((ADAPTER_RENDER **)this + 1), a3);
      }
    }
    WdLogSingleEntry2(2LL, *(_QWORD *)a2, *((unsigned int *)a2 + 2));
    v12 = *((unsigned int *)a2 + 2);
    v11 = *(_QWORD *)a2;
    WdLogGlobalForLineNumber = 988;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to find a valid MSI-X Mapping for entry MessageAddress 0x%I64x and MessageData 0x%I64x",
      v11,
      v12,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 970;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"WriteVirtualizedInterrupt called without any mappings",
      970LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 3221225485LL;
}
