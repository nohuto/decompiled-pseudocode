/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ @ 0x14003FD40
 * Callers:
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14003F770 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>(
        __int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // rax
  __int64 v6; // rcx

  *(_OWORD *)a1 = 0LL;
  v2 = 0LL;
  v3 = (a1 - 64) & -(__int64)(a1 != 0);
  *(_OWORD *)(a1 + 16) = 0LL;
  if ( a1 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a1 - 64);
    if ( CurrentThreadWin32Thread )
      v2 = *CurrentThreadWin32Thread;
    *(_QWORD *)(a1 + 16) = v3;
    *(_QWORD *)(a1 + 24) = UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic;
    if ( ((v2 + 8) & -(__int64)(v2 != 0)) != 0 )
    {
      v5 = ((v2 + 8) & -(__int64)(v2 != 0)) + 88;
      v6 = *(_QWORD *)(((v2 + 8) & -(__int64)(v2 != 0)) + 0x58);
      if ( *(_QWORD *)(v6 + 8) != v5 )
        __fastfail(3u);
      *(_QWORD *)a1 = v6;
      *(_QWORD *)(a1 + 8) = v5;
      *(_QWORD *)(v6 + 8) = a1;
      *(_QWORD *)(((v2 + 8) & -(__int64)(v2 != 0)) + 0x58) = a1;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = a1;
      *(_QWORD *)a1 = a1;
    }
  }
  return a1;
}
