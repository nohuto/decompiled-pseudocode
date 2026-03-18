/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VRGNOBJAPI@@@@QEAA@XZ @ 0x1400FC160
 * Callers:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<RGNOBJAPI>::UnexpectedThreadTerminationHandler<RGNOBJAPI>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx

  v2 = a1 - 8;
  *(_OWORD *)a1 = 0LL;
  if ( !a1 )
    v2 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  if ( !a1 )
    return a1;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2);
  if ( !CurrentThreadWin32Thread || (v5 = *CurrentThreadWin32Thread) == 0 )
  {
    *(_QWORD *)(a1 + 16) = v2;
    *(_QWORD *)(a1 + 24) = UnexpectedThreadTerminationHandler<RGNOBJAPI>::OnUnexpectedThreadTerminationStatic;
LABEL_7:
    *(_QWORD *)(a1 + 8) = a1;
    *(_QWORD *)a1 = a1;
    return a1;
  }
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 24) = UnexpectedThreadTerminationHandler<RGNOBJAPI>::OnUnexpectedThreadTerminationStatic;
  v7 = v5 + 8;
  if ( !v7 )
    goto LABEL_7;
  v8 = (_QWORD *)(v7 + 88);
  v9 = *(_QWORD *)(v7 + 88);
  if ( *(_QWORD **)(v9 + 8) != v8 )
    __fastfail(3u);
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(v9 + 8) = a1;
  *v8 = a1;
  return a1;
}
