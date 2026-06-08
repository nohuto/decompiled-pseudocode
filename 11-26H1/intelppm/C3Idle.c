/*
 * XREFs of C3Idle @ 0x140009C20
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1400016C8 (WriteGenAddr.c)
 *     ReadGenAddr @ 0x140001D90 (ReadGenAddr.c)
 *     IssueVerw @ 0x140010360 (IssueVerw.c)
 */

__int64 __fastcall C3Idle(unsigned __int8 *a1, unsigned int a2)
{
  unsigned int GenAddr; // eax
  unsigned int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rdx

  _InterlockedExchange(&ProcBmRldSet, 1);
  GenAddr = ReadGenAddr((unsigned __int8 *)&dword_14001915C);
  WriteGenAddr(&dword_14001915C, GenAddr | 2LL);
  if ( qword_14001916C )
  {
    v5 = ReadGenAddr((unsigned __int8 *)&dword_140019168);
    WriteGenAddr(&dword_140019168, v5 | 2LL);
  }
  v6 = (unsigned int)ReadGenAddr((unsigned __int8 *)&dword_140019174);
  WriteGenAddr(&dword_140019174, v6 | 1);
  if ( (_WORD)a2 )
  {
    v7 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(a2) )
    IssueVerw(HIWORD(a2), v7);
  ReadGenAddr(a1);
  WriteGenAddr(&dword_140019174, v6);
  if ( (_WORD)a2 )
    __writemsr(0x48u, (unsigned __int16)a2);
  else
    _mm_lfence();
  return 0LL;
}
