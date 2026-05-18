/*
 * XREFs of sub_180081DB0 @ 0x180081DB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180029154 @ 0x180029154 (sub_180029154.c)
 *     sub_180042544 @ 0x180042544 (sub_180042544.c)
 *     sub_180081EFC @ 0x180081EFC (sub_180081EFC.c)
 *     sub_1800823B4 @ 0x1800823B4 (sub_1800823B4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_180081DB0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // r14d
  __int64 v7[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(v4) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)v4 && *(_QWORD *)(a1 + 136) )
  {
    v5 = *(_DWORD *)(*a2 + 244LL);
    v8 = v5;
    if ( sub_180042544(a1 + 120, (__int64)&v8) == *(_QWORD *)(a1 + 120) )
    {
      LOBYTE(v4) = sub_180081EFC(a1, a2);
    }
    else
    {
      LOBYTE(v4) = sub_180029154(a1, v5);
      if ( !(_BYTE)v4 )
        LOBYTE(v4) = sub_1800823B4(a1, *a2);
    }
    if ( (*(_BYTE *)(a1 + 40) & 8) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 112);
      if ( !v4 || *(_DWORD *)(v4 + 24) != 2 )
      {
        *(_OWORD *)v7 = 0LL;
        LOBYTE(v4) = (unsigned __int8)sub_180011F5C((_QWORD *)(a1 + 136), v7);
        if ( v7[1] )
          LOBYTE(v4) = sub_180010EC8(v7[1]);
      }
    }
  }
  return v4;
}
