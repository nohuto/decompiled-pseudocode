/*
 * XREFs of ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1400C43C8
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140034DD0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1400C3A40 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 * Callees:
 *     <none>
 */

HmgInsertObjectHelper *__fastcall HmgInsertObjectHelper::HmgInsertObjectHelper(HmgInsertObjectHelper *this, __int64 a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  HmgInsertObjectHelper *result; // rax

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  if ( this )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(this, a2);
    if ( CurrentThreadWin32Thread )
      v4 = *CurrentThreadWin32Thread;
    else
      v4 = 0LL;
    *((_QWORD *)this + 2) = this;
    v5 = (v4 + 8) & -(__int64)(v4 != 0);
    *((_QWORD *)this + 3) = UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic;
    if ( v5 )
    {
      v6 = (_QWORD *)(v5 + 88);
      v7 = *(_QWORD *)(((v4 + 8) & -(__int64)(v4 != 0)) + 0x58);
      if ( *(_QWORD *)(v7 + 8) != v5 + 88 )
        __fastfail(3u);
      *(_QWORD *)this = v7;
      *((_QWORD *)this + 1) = v6;
      *(_QWORD *)(v7 + 8) = this;
      *v6 = this;
    }
    else
    {
      *((_QWORD *)this + 1) = this;
      *(_QWORD *)this = this;
    }
  }
  *((_QWORD *)this + 4) = 0LL;
  result = this;
  *((_BYTE *)this + 40) = 0;
  return result;
}
