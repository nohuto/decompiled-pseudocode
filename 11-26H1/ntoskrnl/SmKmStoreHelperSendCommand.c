/*
 * XREFs of SmKmStoreHelperSendCommand @ 0x1403E9BDC
 * Callers:
 *     SmKmStoreHelperCleanup @ 0x1403E9B88 (SmKmStoreHelperCleanup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 */

NTSTATUS __fastcall SmKmStoreHelperSendCommand(__int64 a1, __int16 a2, __int64 a3, int a4)
{
  NTSTATUS result; // eax
  int v6; // ecx
  char v9; // al

  result = 0;
  v6 = *(_DWORD *)(a1 + 56);
  if ( v6 )
  {
    if ( !a4 && (v6 & 1) == 0 )
      return -1073741650;
    result = KeWaitForSingleObject((PVOID)(a1 + 32), Executive, 0, 0, 0LL);
    if ( !result )
    {
      KeResetEvent((PRKEVENT)(a1 + 32));
      v9 = *(_DWORD *)(a1 + 56) & 2;
      *(_DWORD *)(a1 + 56) = 0;
      result = v9 != 0 ? 0xC0000120 : 0;
    }
  }
  if ( result != -1073741650 )
  {
    *(_WORD *)(a1 + 58) = a2;
    if ( a3 )
    {
      *(_OWORD *)(a1 + 64) = *(_OWORD *)a3;
      *(_OWORD *)(a1 + 80) = *(_OWORD *)(a3 + 16);
      *(_OWORD *)(a1 + 96) = *(_OWORD *)(a3 + 32);
      *(_QWORD *)(a1 + 112) = *(_QWORD *)(a3 + 48);
    }
    KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
    return 0;
  }
  return result;
}
