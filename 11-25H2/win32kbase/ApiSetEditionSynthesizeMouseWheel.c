/*
 * XREFs of ApiSetEditionSynthesizeMouseWheel @ 0x140196B7C
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D23B8 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     EditionSynthesizeMouseWheel @ 0x140131FA0 (EditionSynthesizeMouseWheel.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionSynthesizeMouseWheel(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 7088LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))EditionSynthesizeMouseWheel(a1, a2, a3, a4, a5);
  }
  return result;
}
