/*
 * XREFs of EtwTraceRetrievePostMessage @ 0x14003E330
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cppppqqq_EtwWriteTransfer @ 0x14003E3B8 (McTemplateK0cppppqqq_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall EtwTraceRetrievePostMessage(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rbp
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // r9d

  v1 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
    if ( CurrentThreadNonPaged && (v4 = *CurrentThreadNonPaged) != 0 )
      v6 = *(unsigned __int8 *)(v4 + 1456);
    else
      LOBYTE(v6) = -1;
    McTemplateK0cppppqqq_EtwWriteTransfer(v4, (unsigned int)&RetrievePostMessage, v5, v6, v1, v2);
  }
}
