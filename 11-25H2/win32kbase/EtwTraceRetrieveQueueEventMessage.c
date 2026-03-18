/*
 * XREFs of EtwTraceRetrieveQueueEventMessage @ 0x14003F770
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cppqp_EtwWriteTransfer @ 0x14003F7F8 (McTemplateK0cppqp_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall EtwTraceRetrieveQueueEventMessage(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rdi
  int v3; // esi
  __int64 v4; // rbp
  __int64 *CurrentThreadNonPaged; // rax
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // r9

  v1 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = *(_DWORD *)(a1 + 96);
    v4 = *(_QWORD *)(a1 + 104);
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
    if ( CurrentThreadNonPaged && (v8 = *CurrentThreadNonPaged) != 0 )
      LOBYTE(v8) = *(_BYTE *)(v8 + 1456);
    else
      LOBYTE(v8) = -1;
    McTemplateK0cppqp_EtwWriteTransfer(v6, (unsigned int)&RetrieveQueueEventMessage, v7, v8, v1, v4, v3, v2);
  }
}
