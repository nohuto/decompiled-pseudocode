/*
 * XREFs of NVMeIceAddressIsExclusionRange @ 0x140031514
 * Callers:
 *     ProcessCommandInSpecificQueue @ 0x14000A910 (ProcessCommandInSpecificQueue.c)
 *     NVMeIceInitPart2 @ 0x140031A48 (NVMeIceInitPart2.c)
 * Callees:
 *     <none>
 */

char __fastcall NVMeIceAddressIsExclusionRange(__int64 a1, unsigned __int64 a2)
{
  char v2; // bl
  _QWORD *i; // rdx
  unsigned __int64 v6; // rcx
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 1;
  memset(v8, 0, 32);
  StorPortExtendedFunction(93LL, a1, 1LL, a1 + 4376);
  for ( i = *(_QWORD **)(a1 + 4360); i != (_QWORD *)(a1 + 4360); i = (_QWORD *)*i )
  {
    v6 = i[3];
    if ( a2 >= v6 && a2 < i[4] + v6 )
      goto LABEL_7;
  }
  v2 = 0;
LABEL_7:
  StorPortNotification(4100LL, a1, v8);
  return v2;
}
