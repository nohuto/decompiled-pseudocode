/*
 * XREFs of EtwTraceRetrieveInputMessage @ 0x140116C50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cpppqqq_EtwWriteTransfer @ 0x140116CE8 (McTemplateK0cpppqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceRetrieveInputMessage(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 *CurrentThreadWin32Thread; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // r9

  result = MEMORY[0xFFFFF78000000320];
  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000) != 0 )
  {
    v3 = *a1;
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
    if ( CurrentThreadWin32Thread && (v8 = *CurrentThreadWin32Thread) != 0 )
      LOBYTE(v8) = *(_BYTE *)(v8 + 1456);
    else
      LOBYTE(v8) = -1;
    return McTemplateK0cpppqqq_EtwWriteTransfer(v6, v5, v7, v8, v3);
  }
  return result;
}
