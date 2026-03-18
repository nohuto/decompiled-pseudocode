/*
 * XREFs of Timer @ 0x140048550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Timer(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 88);
  v5 = 0LL;
  *(_WORD *)(v2 + 2) = 1;
  if ( *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) < 5u )
  {
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 88);
    *(_QWORD *)(v3 + 16) = KeQueryInterruptTimePrecise(&v5);
  }
  return 0LL;
}
