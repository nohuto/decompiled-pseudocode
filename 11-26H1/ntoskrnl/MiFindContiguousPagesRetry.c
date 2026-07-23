/*
 * XREFs of MiFindContiguousPagesRetry @ 0x14028EE8C
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     MiTrimNoStealPagesFromWorkingSets @ 0x140533854 (MiTrimNoStealPagesFromWorkingSets.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiFindContiguousPagesRetry(__int64 *a1)
{
  __int64 v2; // rdi
  char v3; // al
  __int64 result; // rax
  __int64 v5; // rcx
  _QWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-28h] BYREF

  if ( !*((_BYTE *)a1 + 9) || !*((_BYTE *)a1 + 10) )
    return 3221225495LL;
  v2 = *a1;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v6[1] = 16LL;
    v5 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
    v7[1] = *(_QWORD *)(v2 + 40) << 12;
    v7[0] = v5;
    v6[0] = v7;
    EtwTraceKernelEvent((unsigned int)v6, 1, 537919488, 625, 5249538);
  }
  _InterlockedIncrement(dword_140EF930C);
  if ( (*(_DWORD *)(v2 + 60) & 0x4000000) == 0 )
    *((_DWORD *)a1 + 8) &= ~1u;
  *((_DWORD *)a1 + 8) |= 2u;
  v3 = MiTrimNoStealPagesFromWorkingSets(*(_QWORD *)v2, *((unsigned int *)a1 + 8));
  *((_BYTE *)a1 + 10) = v3;
  if ( !v3 )
    return 3221225495LL;
  *(_WORD *)((char *)a1 + 9) = 0;
  result = 0LL;
  *((_DWORD *)a1 + 8) = 0;
  *(_QWORD *)(v2 + 80) = 0LL;
  return result;
}
