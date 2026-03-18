/*
 * XREFs of EtwTraceRetrieveQueueEventMessage @ 0x1400E67F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cppqp_EtwWriteTransfer @ 0x1400E6880 (McTemplateK0cppqp_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceRetrieveQueueEventMessage(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rdi
  int v4; // esi
  __int64 v5; // rbp
  __int64 *CurrentThreadWin32Thread; // rax
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // r9

  v2 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_DWORD *)(a1 + 96);
    v5 = *(_QWORD *)(a1 + 104);
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
    if ( CurrentThreadWin32Thread && (v9 = *CurrentThreadWin32Thread) != 0 )
      LOBYTE(v9) = *(_BYTE *)(v9 + 1456);
    else
      LOBYTE(v9) = -1;
    McTemplateK0cppqp_EtwWriteTransfer(v7, (unsigned int)&RetrieveQueueEventMessage, v8, v9, v2, v5, v4, v3);
  }
}
