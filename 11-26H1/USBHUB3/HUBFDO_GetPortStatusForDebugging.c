/*
 * XREFs of HUBFDO_GetPortStatusForDebugging @ 0x14000E2A4
 * Callers:
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x14000E4F0 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x14002EE1C (HUBMISC_ControlTransfer.c)
 */

_QWORD *__fastcall HUBFDO_GetPortStatusForDebugging(_QWORD *a1, int a2)
{
  _QWORD *result; // rax
  _QWORD *v4; // r8
  char v5; // al
  int v6; // edx
  __int64 v7; // [rsp+28h] [rbp-30h]

  for ( result = (_QWORD *)a1[297]; ; result = (_QWORD *)*result )
  {
    v4 = result - 31;
    if ( a1 + 297 == result )
      break;
    if ( *((unsigned __int16 *)v4 + 100) == a2 )
    {
      v5 = v4[21] & 0x1C;
      *((_WORD *)v4 + 86) = a2;
      *((_BYTE *)v4 + 169) = 0;
      *((_BYTE *)v4 + 168) = v5 | 0xA3;
      v6 = *((_DWORD *)v4 + 51) & 0x100;
      *((_WORD *)v4 + 85) = v6 != 0 ? 2 : 0;
      *((_WORD *)v4 + 87) = v6 != 0 ? 8 : 4;
      result = (_QWORD *)HUBMISC_ControlTransfer(
                           (_DWORD)a1,
                           a1[31],
                           (_DWORD)v4,
                           (int)v4 + 16,
                           (__int64)HUBFDO_GetPortStatusForDebuggingComplete,
                           (__int64)(v4 + 23),
                           (unsigned __int16)(v6 != 0 ? 8 : 4),
                           0,
                           0);
      if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v7) = (_DWORD)result;
        return (_QWORD *)WPP_RECORDER_SF_d(
                           a1[317],
                           2u,
                           3u,
                           0x3Du,
                           (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
                           v7);
      }
      return result;
    }
  }
  return result;
}
