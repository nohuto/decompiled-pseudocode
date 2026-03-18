/*
 * XREFs of EtwTraceThreadExit @ 0x1400DC6AC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1400A9F40 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     EtwTraceProcessWindowInfo @ 0x1400DC7D0 (EtwTraceProcessWindowInfo.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1400DD4A0 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 */

char __fastcall EtwTraceThreadExit(PETHREAD *a1)
{
  PETHREAD v2; // rax
  unsigned __int64 v3; // rbx
  int ThreadId; // esi
  char ThreadInfoFlags; // al
  int v6; // ecx
  int v7; // edx
  char v8; // r9
  int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // edx

  LOBYTE(v2) = EtwTraceProcessWindowInfo();
  if ( (W32kEtwEnabledKeyword & 0x8000000000200000uLL) != 0 )
  {
    LOBYTE(v2) = byte_1402A9DD8 - 1;
    if ( (unsigned __int8)(byte_1402A9DD8 - 1) > 2u && (qword_1402A9DC0 & 0x8000000000200000uLL) != 0 )
    {
      LOBYTE(v2) = 0;
      if ( (qword_1402A9DC8 & 0x8000000000200000uLL) == qword_1402A9DC8 )
      {
        v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        ThreadId = (unsigned int)PsGetThreadId(*a1);
        ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)a1);
        v6 = *((_DWORD *)a1 + 326);
        v7 = v3 - v6;
        v8 = ThreadInfoFlags;
        v2 = a1[58];
        v9 = -(v6 != 0);
        v10 = 0LL;
        v11 = v7 & (unsigned int)v9;
        if ( v2 )
        {
          v12 = v3 - *((_DWORD *)v2 + 114);
          if ( *((_DWORD *)v2 + 10) )
          {
            v2 = (PETHREAD)*((_QWORD *)v2 + 3);
            v10 = (unsigned int)(v3 - *((_DWORD *)v2 + 12));
          }
        }
        else
        {
          LOBYTE(v12) = 0;
        }
        if ( (Microsoft_Windows_Win32kEnableBits & 0x400) != 0 )
          LOBYTE(v2) = McTemplateK0qqqqq_EtwWriteTransfer(v10, &ThreadExitEvent, v11, ThreadId, v8, v11, v12, v10);
      }
    }
  }
  return (char)v2;
}
