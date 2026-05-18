/*
 * XREFs of sub_18006B680 @ 0x18006B680
 * Callers:
 *     <none>
 * Callees:
 *     sub_180042544 @ 0x180042544 (sub_180042544.c)
 *     sub_180051E20 @ 0x180051E20 (sub_180051E20.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_18006B680(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v3; // rbx
  int v6; // esi
  __int64 v7; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = (__int64 *)(a1 + 256);
  v6 = *(_DWORD *)(*(_QWORD *)a2 + 88LL);
  v10 = v6;
  if ( sub_180042544(a1 + 256, (__int64)&v10) == *(_QWORD *)(a1 + 256) )
    return 0;
  v10 = v6;
  v7 = sub_180051E20(v3, (__int64)v9, &v10);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)v7 + 40LL) + 88LL))(
           *(_QWORD *)(*(_QWORD *)v7 + 40LL),
           a2,
           a3);
}
