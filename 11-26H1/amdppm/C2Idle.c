/*
 * XREFs of C2Idle @ 0x140005EA0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1400021A0 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x140003B54 (WriteGenAddr.c)
 *     IssueVerw @ 0x14000E650 (IssueVerw.c)
 */

__int64 __fastcall C2Idle(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int GenAddr; // eax
  int v6; // eax

  v3 = a2;
  if ( _InterlockedExchange(&ProcBmRldSet, 0) == 1 )
  {
    GenAddr = ReadGenAddr((__int64)&dword_14001558C, a2, a3);
    WriteGenAddr((unsigned __int8 *)&dword_14001558C, GenAddr & 0xFFFFFFFD);
    if ( qword_14001559C )
    {
      v6 = ReadGenAddr((__int64)&dword_140015598, a2, a3);
      WriteGenAddr((unsigned __int8 *)&dword_140015598, v6 & 0xFFFFFFFD);
    }
  }
  if ( (_WORD)v3 )
  {
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(v3) )
    IssueVerw(HIWORD(v3));
  ReadGenAddr(a1, a2, a3);
  if ( (_WORD)v3 )
    __writemsr(0x48u, (unsigned __int16)v3);
  else
    _mm_lfence();
  return 0LL;
}
