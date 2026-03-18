/*
 * XREFs of DpiDxgkDdiDisplayMuxGetRuntimeStatus @ 0x140093C08
 * Callers:
 *     DpiMdmProcessStartAdapter @ 0x140090C00 (DpiMdmProcessStartAdapter.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayMuxGetRuntimeStatus(__int64 a1, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(a1, (__int64)&EventEnterDdiDisplayMuxGetRuntimeStatus);
  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(a1 + 5936))(*(_QWORD *)(a1 + 48), &v10);
  v7 = v4;
  if ( bTracingEnabled )
  {
    if ( v4 < 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_10;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_10;
      v6 = v10;
    }
    McTemplateK0pqq_EtwWriteTransfer(v6, (__int64)&EventExitDdiDisplayMuxGetRuntimeStatus);
  }
LABEL_10:
  v8 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v8 + 24) = a1;
  *(_QWORD *)(v8 + 32) = (int)v10;
  *(_QWORD *)(v8 + 40) = v7;
  *(_OWORD *)(v8 + 48) = 0LL;
  WdLogGlobalForLineNumber = 985;
  if ( (int)v7 >= 0 )
  {
    switch ( v10 )
    {
      case 1u:
        *a2 = 1;
        break;
      case 2u:
        *a2 = 2;
        break;
      case 3u:
        *a2 = 3;
        break;
      case 4u:
        *a2 = 4;
        break;
      default:
        WdLogSingleEntry1(1LL);
        WdLogGlobalForLineNumber = 1016;
        LODWORD(v7) = -1073739509;
        break;
    }
  }
  return (unsigned int)v7;
}
