/*
 * XREFs of C2Idle @ 0x140009B50
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1400016C8 (WriteGenAddr.c)
 *     ReadGenAddr @ 0x140001D90 (ReadGenAddr.c)
 *     IssueVerw @ 0x140010360 (IssueVerw.c)
 */

__int64 __fastcall C2Idle(unsigned __int8 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  int GenAddr; // eax
  int v5; // eax

  v2 = a2;
  if ( _InterlockedExchange(&ProcBmRldSet, 0) == 1 )
  {
    GenAddr = ReadGenAddr((unsigned __int8 *)&dword_14001915C);
    WriteGenAddr(&dword_14001915C, GenAddr & 0xFFFFFFFD);
    if ( qword_14001916C )
    {
      v5 = ReadGenAddr((unsigned __int8 *)&dword_140019168);
      WriteGenAddr(&dword_140019168, v5 & 0xFFFFFFFD);
    }
  }
  if ( (_WORD)v2 )
  {
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(v2) )
    IssueVerw(HIWORD(v2), a2);
  ReadGenAddr(a1);
  if ( (_WORD)v2 )
    __writemsr(0x48u, (unsigned __int16)v2);
  else
    _mm_lfence();
  return 0LL;
}
