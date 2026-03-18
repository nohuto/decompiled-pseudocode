/*
 * XREFs of ApiSetEditionSynthesizeMouseWheel @ 0x1401BD4E0
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x140157A4C (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     EditionSynthesizeMouseWheel @ 0x140167F0C (EditionSynthesizeMouseWheel.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionSynthesizeMouseWheel(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6648LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))EditionSynthesizeMouseWheel(a1, a2, a3, a4, a5);
  }
  return result;
}
