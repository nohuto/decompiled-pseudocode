/*
 * XREFs of Uart16550LegacyInitializePort @ 0x1407268E0
 * Callers:
 *     <none>
 * Callees:
 *     Uart16550InitializePortCommon @ 0x140726824 (Uart16550InitializePortCommon.c)
 */

char __fastcall Uart16550LegacyInitializePort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  switch ( *(_QWORD *)a2 )
  {
    case 1LL:
      *(_QWORD *)a2 = 1016LL;
      break;
    case 2LL:
      *(_QWORD *)a2 = 760LL;
      break;
    case 3LL:
      *(_QWORD *)a2 = 1000LL;
      break;
    case 4LL:
      *(_QWORD *)a2 = 744LL;
      break;
    default:
      return 0;
  }
  LOBYTE(a4) = 1;
  *(_WORD *)(a2 + 12) = 0;
  return Uart16550InitializePortCommon(a1, a2, 0LL, a4, 8);
}
