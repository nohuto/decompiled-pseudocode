/*
 * XREFs of EditionKeepMachineUp @ 0x1400D4908
 * Callers:
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14009C8D4 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D36E0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionKeepMachineUp(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4))(_QWORD, _QWORD, _QWORD, _QWORD)
{
  unsigned int v7; // ebp
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD); // rax

  v7 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                                    + 3944LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))result(v7, a2, a3, a4);
  return result;
}
