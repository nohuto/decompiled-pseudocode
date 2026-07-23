/*
 * XREFs of MiLogSectionCreate @ 0x14086ED1C
 * Callers:
 *     MiCreatePagingFileFinish @ 0x140988DEC (MiCreatePagingFileFinish.c)
 *     MiSegmentDelete @ 0x140A8752C (MiSegmentDelete.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140501C70 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x14052DE78 (MiInitPerfMemoryFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

_QWORD *__fastcall MiLogSectionCreate(__int64 *a1, int a2)
{
  __int64 v2; // rsi
  _QWORD *v3; // rbx
  int v5; // r15d
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int inited; // eax
  _QWORD *result; // rax
  __int128 v10; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+40h] [rbp-30h]
  _QWORD v12[2]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v13[2]; // [rsp+58h] [rbp-18h] BYREF

  v2 = *a1;
  v3 = a1 + 16;
  v10 = 0LL;
  v11 = 0LL;
  v5 = *(_DWORD *)(v2 + 48);
  do
  {
    v6 = v3[1];
    if ( v6 )
    {
      v7 = *((unsigned int *)v3 + 11);
      *(_QWORD *)&v10 = v3[1];
      *((_QWORD *)&v10 + 1) = v6 + 8 * v7;
      if ( a2 )
      {
        LODWORD(v11) = v5;
        v12[0] = &v10;
        v12[1] = 24LL;
        EtwTraceKernelEvent((int)v12, 1, 0x20400001u, 585, 5249282);
        if ( _bittest16((const signed __int16 *)(v2 + 12), 0xAu) )
        {
          if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
          {
            inited = MiInitPerfMemoryFlags(1, 2);
            MiLogPerfMemoryRangeEvent(v6, 0LL, inited, *((unsigned int *)v3 + 11));
          }
        }
      }
      else
      {
        LODWORD(v11) = -1;
        v13[0] = &v10;
        v13[1] = 24LL;
        EtwTraceKernelEvent((int)v13, 1, 0x20400001u, 591, 22026498);
      }
    }
    result = (_QWORD *)v3[2];
    v3 = result;
  }
  while ( result );
  return result;
}
