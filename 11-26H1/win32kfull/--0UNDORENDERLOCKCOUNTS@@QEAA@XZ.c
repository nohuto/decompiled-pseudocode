/*
 * XREFs of ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1401AC914
 * Callers:
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 * Callees:
 *     <none>
 */

UNDORENDERLOCKCOUNTS *__fastcall UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS(UNDORENDERLOCKCOUNTS *this)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(this);
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  else
    v3 = 0LL;
  v4 = v3 + 8;
  v5 = -v3;
  *((_QWORD *)this + 1) = v4 & -(__int64)(v5 != 0);
  if ( (v4 & -(__int64)(v5 != 0)) != 0 )
  {
    *(_DWORD *)this = *(_DWORD *)((v4 & -(__int64)(v5 != 0)) + 0x154);
    *((_DWORD *)this + 1) = *(_DWORD *)((v4 & -(__int64)(v5 != 0)) + 0x158);
    *(_DWORD *)((v4 & -(__int64)(v5 != 0)) + 0x154) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 344LL) = 0;
  }
  return this;
}
