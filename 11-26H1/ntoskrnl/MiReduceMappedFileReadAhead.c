/*
 * XREFs of MiReduceMappedFileReadAhead @ 0x1404ACCEC
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x140370990 (MiBuildMdlForMappedFileFault.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     RtlFindLastBackwardRunClearEx @ 0x1404ACD90 (RtlFindLastBackwardRunClearEx.c)
 */

void __fastcall MiReduceMappedFileReadAhead(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 LastBackwardRunClear; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  RtlSetBitsEx((__int64)a1, a2, 1uLL);
  v6 = *a1;
  do
  {
    v9 = v6 - 1;
    if ( !v9 )
      break;
    LastBackwardRunClear = RtlFindLastBackwardRunClearEx(a1, v9, &v10);
    v6 = v10;
    v8 = LastBackwardRunClear;
    if ( LastBackwardRunClear > a3 )
    {
      v6 = LastBackwardRunClear - a3 + v10;
      v8 = a3;
      v10 = v6;
    }
    RtlSetBitsEx((__int64)a1, v6, v8);
    a3 -= v8;
  }
  while ( a3 );
  RtlClearBitsEx((__int64)a1, a2, 1uLL);
}
