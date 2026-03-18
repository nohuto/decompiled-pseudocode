/*
 * XREFs of ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x14009B294
 * Callers:
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x14009B1F0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D99B0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     EtwTraceDisplayTimeoutReset @ 0x14009B31C (EtwTraceDisplayTimeoutReset.c)
 */

__int64 __fastcall CInputGlobals::_UpdateLastInputTime(_QWORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v7; // ebx
  int v8; // ebx
  __int64 v9; // rax
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx

  result = EtwTraceDisplayTimeoutReset(a1[1]);
  a1[1] = a2;
  if ( a3 <= 11 )
  {
    if ( a3 == 11 )
      goto LABEL_5;
    v10 = a3 - 1;
    if ( !v10 )
      goto LABEL_5;
    v11 = v10 - 2;
    if ( !v11 )
      goto LABEL_5;
    v12 = v11 - 1;
    if ( !v12 )
      goto LABEL_5;
    v13 = v12 - 1;
    if ( !v13 || v13 == 4 )
      goto LABEL_5;
  }
  else
  {
    v7 = a3 - 13;
    if ( !v7 || (v8 = v7 - 1) == 0 || (unsigned int)(v8 - 2) <= 1 )
    {
LABEL_5:
      v9 = a1[9];
      a1[10] = v9;
      result = v9 + 1;
      a1[9] = result;
      a1[2] = a2;
    }
  }
  return result;
}
