/*
 * XREFs of sub_1400F2F70 @ 0x1400F2F70
 * Callers:
 *     sub_1400D7168 @ 0x1400D7168 (sub_1400D7168.c)
 *     sub_1400D7730 @ 0x1400D7730 (sub_1400D7730.c)
 *     sub_1400EA21C @ 0x1400EA21C (sub_1400EA21C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400F2F70(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp+8h] BYREF

  result = *(_QWORD *)(a1 + 1272);
  if ( result )
  {
    result = *(_QWORD *)(result + 40);
    if ( result )
    {
      if ( *(_QWORD *)(result + 224) )
      {
        *(_QWORD *)(a1 + 136) |= 0x80000000uLL;
        _InterlockedOr(v4, 0);
        KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(a1 + 1272) + 40LL) + 200LL), 0, 0);
        v3 = *(_QWORD *)(a1 + 1272);
        Timeout.QuadPart = -30000000LL;
        ZwWaitForSingleObject(*(HANDLE *)(*(_QWORD *)(v3 + 40) + 224LL), 0, &Timeout);
        ZwClose(*(HANDLE *)(*(_QWORD *)(*(_QWORD *)(a1 + 1272) + 40LL) + 224LL));
        result = *(_QWORD *)(a1 + 1272);
        *(_QWORD *)(*(_QWORD *)(result + 40) + 224LL) = 0LL;
      }
    }
  }
  return result;
}
