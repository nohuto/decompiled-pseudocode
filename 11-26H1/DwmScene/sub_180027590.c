/*
 * XREFs of sub_180027590 @ 0x180027590
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025E8C @ 0x180025E8C (sub_180025E8C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

bool __fastcall sub_180027590(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  bool v5; // al
  _DWORD *v6; // r8
  char v7; // dl
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, v9, a2);
  v5 = sub_180025E8C(*(_QWORD *)(v4 + 8), *(_QWORD *)(a3 + 8));
  v7 = 0;
  if ( v5 )
    return *v6 == *(_DWORD *)a3;
  return v7;
}
