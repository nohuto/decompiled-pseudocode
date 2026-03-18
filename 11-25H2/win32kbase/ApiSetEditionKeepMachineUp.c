/*
 * XREFs of ApiSetEditionKeepMachineUp @ 0x140195D10
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D99B0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     EditionKeepMachineUp @ 0x1400E4E50 (EditionKeepMachineUp.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionKeepMachineUp(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  int (*v9)(void); // rax

  v6 = a2;
  v7 = a1;
  v8 = 0;
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4384LL);
  if ( v9 && v9() >= 0 )
    return (unsigned int)EditionKeepMachineUp(v7, v6, a3, a4);
  return v8;
}
