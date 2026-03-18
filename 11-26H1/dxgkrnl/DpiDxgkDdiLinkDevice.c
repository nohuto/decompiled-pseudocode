/*
 * XREFs of DpiDxgkDdiLinkDevice @ 0x140094418
 * Callers:
 *     DpiAddDevice @ 0x14023C1E0 (DpiAddDevice.c)
 * Callees:
 *     McTemplateK0ppqqtq_EtwWriteTransfer @ 0x1400948E4 (McTemplateK0ppqqtq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiLinkDevice(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v4; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // r14
  _QWORD *v14; // rax
  __int64 result; // rax

  LOBYTE(v4) = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppqqtq_EtwWriteTransfer(a1, (unsigned int)&EventEnterDdiLinkDevice, a3, a2, a3, 0, 0, 0, 0);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 616))(a2, a3, a4);
  v13 = v9;
  if ( bTracingEnabled )
  {
    v11 = 0LL;
    LOBYTE(v10) = 0;
    if ( a4 )
    {
      v4 = *a4;
      v11 = (unsigned int)a4[1];
      LOBYTE(v10) = *((_BYTE *)a4 + 8);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppqqtq_EtwWriteTransfer(v11, (unsigned int)&EventExitDdiLinkDevice, v12, a2, a3, v4, v11, v10, v9);
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
  v14[3] = a2;
  v14[4] = a3;
  v14[5] = (unsigned int)a4[1];
  v14[6] = *((unsigned __int8 *)a4 + 8);
  v14[7] = v13;
  result = (unsigned int)v13;
  WdLogGlobalForLineNumber = 536;
  return result;
}
