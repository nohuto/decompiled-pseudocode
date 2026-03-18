/*
 * XREFs of EtwTraceBeginRetrieveSendMessage @ 0x14003C5C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cppppqq_EtwWriteTransfer @ 0x14003DD58 (McTemplateK0cppppqq_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall EtwTraceBeginRetrieveSendMessage(__int64 a1)
{
  char v1; // bl
  __int64 *v2; // rax
  int v3; // esi
  __int64 v4; // rdi
  __int64 *CurrentThreadNonPaged; // rax
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // r9

  v1 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    v2 = *(__int64 **)(a1 + 112);
    v3 = *(_DWORD *)(a1 + 80);
    if ( v2 )
      v4 = *v2;
    else
      LOBYTE(v4) = 0;
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
    if ( CurrentThreadNonPaged && (v8 = *CurrentThreadNonPaged) != 0 )
      LOBYTE(v8) = *(_BYTE *)(v8 + 1456);
    else
      LOBYTE(v8) = -1;
    McTemplateK0cppppqq_EtwWriteTransfer(v6, (unsigned int)&BeginRetrieveSendMessage, v7, v8, v1, v4, 0, 0, 0, v3);
  }
}
