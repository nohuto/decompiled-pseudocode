/*
 * XREFs of EtwTraceBeginAppMessageProcessing @ 0x14001E4E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cdqq_EtwWriteTransfer @ 0x14001E550 (McTemplateK0cdqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceBeginAppMessageProcessing(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  char v4; // di
  int v5; // esi
  __int64 *CurrentThreadWin32Thread; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax

  v3 = a2;
  v4 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    v5 = *(_DWORD *)(a3 + 8);
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
    if ( CurrentThreadWin32Thread && (v11 = *CurrentThreadWin32Thread) != 0 )
      v10 = *(unsigned __int8 *)(v11 + 1456);
    else
      LOBYTE(v10) = -1;
    McTemplateK0cdqq_EtwWriteTransfer(v8, v7, v9, v10, v4, v3, v5);
  }
}
