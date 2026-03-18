/*
 * XREFs of _lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator() @ 0x1401908BC
 * Callers:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x14020C38C (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall lambda_0204d79c2644d1b9cd88bde7d32e7162_::operator()(
        __int64 a1,
        _DWORD *a2,
        int *a3,
        __int64 a4,
        int a5)
{
  int v6; // ecx
  int v7; // eax

  switch ( a5 )
  {
    case 90:
      v6 = *(_DWORD *)(a4 + 8) - *a3;
      *a2 = a3[1];
LABEL_7:
      a2[1] = v6;
      return a2;
    case 180:
      *a2 = *(_DWORD *)(a4 + 8) - *a3;
      v6 = *(_DWORD *)(a4 + 12) - a3[1];
      goto LABEL_7;
    case 270:
      v7 = *a3;
      *a2 = *(_DWORD *)(a4 + 12) - a3[1];
      a2[1] = v7;
      break;
    default:
      *(_QWORD *)a2 = *(_QWORD *)a3;
      break;
  }
  return a2;
}
