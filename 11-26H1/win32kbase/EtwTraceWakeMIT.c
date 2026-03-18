/*
 * XREFs of EtwTraceWakeMIT @ 0x140133D90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cd_EtwWriteTransfer @ 0x14001FD78 (McTemplateK0cd_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceWakeMIT(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  char v6; // r9
  __int64 v7; // [rsp+20h] [rbp-18h]

  v2 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2);
    if ( CurrentThreadWin32Thread && *(_QWORD *)CurrentThreadWin32Thread )
      v6 = *(_BYTE *)(*(_QWORD *)CurrentThreadWin32Thread + 1456LL);
    else
      v6 = -1;
    LODWORD(v7) = v2;
    McTemplateK0cd_EtwWriteTransfer(v4, &EtwWakeMIT, v5, v6, v7);
  }
}
