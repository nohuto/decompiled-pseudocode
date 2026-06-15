/*
 * XREFs of sub_1400A3810 @ 0x1400A3810
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000F5B0 @ 0x14000F5B0 (sub_14000F5B0.c)
 *     sub_14000F6C0 @ 0x14000F6C0 (sub_14000F6C0.c)
 *     sub_140025810 @ 0x140025810 (sub_140025810.c)
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_14009D41C @ 0x14009D41C (sub_14009D41C.c)
 *     sub_14009D620 @ 0x14009D620 (sub_14009D620.c)
 *     sub_1400A20F4 @ 0x1400A20F4 (sub_1400A20F4.c)
 */

char __fastcall sub_1400A3810(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v7; // r12d
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  char *v13; // r8
  int v14; // edx
  __int64 v15; // rbp
  char v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF

  v3 = a1 - 472;
  v18 = 0LL;
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000F5B0(a1, a2, v3, 13, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), 0);
  v7 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(v3 + 488) = 2;
  if ( a3 )
  {
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 32) = 0LL;
  }
  v8 = *(unsigned int *)(*(_QWORD *)(a1 - 384) + 164LL);
  v9 = *(_QWORD *)(a1 - 384);
  if ( (v8 & 0xFFFFFFF8) != 0 )
  {
    if ( (byte_1400E8401 & 4) != 0 )
      sub_14009D41C(v8, a2, *(_QWORD *)(a1 - 384));
    sub_140048108();
    _InterlockedAnd((volatile signed __int32 *)(v9 + 164), 0xFFFFFFFE);
    if ( (byte_1400E8401 & 4) != 0 )
      sub_14009D41C(v10, a2, v3);
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 - 384) + 164LL), 0xFFFFFFFE);
    goto LABEL_11;
  }
  if ( !v7 )
  {
LABEL_11:
    _InterlockedExchange((volatile __int32 *)(a1 - 296), 1);
    v11 = *(_QWORD *)(a1 - 344);
    *(_QWORD *)a2 = v11;
    *(_DWORD *)(a2 + 12) = 2;
    goto LABEL_12;
  }
  v17 = 0;
  if ( !sub_1400A20F4((_QWORD *)v3, &v18, &v17) )
  {
    if ( (byte_1400E8401 & 1) != 0 )
      sub_14000F6C0(v12, (__int64)&unk_1400C8118, v3);
    v13 = "CpGlitchEvent::CLIENT_INPUT_NO_MESSAGES";
    v14 = 1;
LABEL_20:
    sub_140025810(a1 - 256, v14, v13);
    goto LABEL_11;
  }
  v15 = v18;
  if ( *(_DWORD *)(v18 + 56) != v7 )
  {
    if ( (byte_1400E8401 & 1) != 0 )
      sub_14000F6C0(v12, (__int64)&unk_1400C7F98, v3);
    v13 = "CpGlitchEvent::CLIENT_INPUT_SIZE_MISMATCH";
    v14 = 2;
    goto LABEL_20;
  }
  if ( a3 )
  {
    *(_OWORD *)a3 = *(_OWORD *)(v18 + 16);
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(v15 + 32);
    *(_QWORD *)(a3 + 32) = *(_QWORD *)(v15 + 48);
    if ( *(_BYTE *)(a1 - 56) )
    {
      if ( (unsigned int)sub_14009D620((__int64 *)(a3 + 24)) )
        *(_BYTE *)(a1 - 56) = 0;
    }
  }
  if ( *(_DWORD *)(v15 + 8) == 2 )
  {
    *(_DWORD *)(a1 + 16) = v17 != 0 ? 4 : 0;
    goto LABEL_11;
  }
  *(_DWORD *)(a2 + 12) = 1;
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 392) + *(unsigned int *)(v15 + 4);
  LOBYTE(v11) = -v17;
  *(_DWORD *)(a1 + 16) = v17 != 0 ? 4 : 0;
LABEL_12:
  if ( (byte_1400E8401 & 4) != 0 )
    LOBYTE(v11) = sub_14000F5B0(*(unsigned int *)(a2 + 8), a2, v3, 14, *(_DWORD *)(a2 + 8), 0, *(_DWORD *)(a2 + 12));
  return v11;
}
