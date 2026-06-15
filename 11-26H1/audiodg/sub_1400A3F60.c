/*
 * XREFs of sub_1400A3F60 @ 0x1400A3F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000F5B0 @ 0x14000F5B0 (sub_14000F5B0.c)
 *     sub_140025810 @ 0x140025810 (sub_140025810.c)
 *     sub_14003F04C @ 0x14003F04C (sub_14003F04C.c)
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_14009D41C @ 0x14009D41C (sub_14009D41C.c)
 *     sub_1400A4E38 @ 0x1400A4E38 (sub_1400A4E38.c)
 */

__int64 __fastcall sub_1400A3F60(__int64 a1, __int64 a2)
{
  int v2; // r13d
  __int64 v3; // rsi
  unsigned int v5; // ebp
  signed __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  signed __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rdi
  _DWORD *v12; // rax
  __int64 v13; // rdi
  unsigned int v15; // edi
  __int64 v16; // r12
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // r9d
  unsigned int v20; // r8d
  _DWORD *v21; // [rsp+70h] [rbp+8h]

  v2 = a2;
  v21 = (_DWORD *)(a1 + 16);
  v3 = a1 - 472;
  *(_DWORD *)(a1 + 16) = 2;
  *(_DWORD *)(a1 - 472 + 492) = a2;
  v5 = 0;
  v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 384) + 16LL), 0LL, 0LL);
  v7 = *(_QWORD *)(a1 - 384);
  v8 = v6;
  v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 24), 0LL, 0LL);
  v10 = v9;
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000F5B0(v7, a2, v3, 17, a2, v8, v9);
  v11 = *(_QWORD *)(v3 + 88);
  if ( v8 < 0 || v10 < 0 )
  {
    if ( (byte_1400E8401 & 4) != 0 )
      sub_14009D41C(v7, a2, v3);
    sub_140048108();
    _InterlockedAnd((volatile signed __int32 *)(v11 + 164), 0xFFFFFFFE);
    goto LABEL_7;
  }
  if ( !v2 )
  {
LABEL_7:
    v12 = v21;
LABEL_8:
    v13 = *(_QWORD *)(a1 - 344);
    goto LABEL_9;
  }
  v15 = *(_DWORD *)(a1 - 368) * v2;
  if ( v8 >= v10 )
  {
    v17 = *(_DWORD *)(a1 - 304);
    v16 = a1 - 256;
    v5 = v10 + v17 - v8;
  }
  else
  {
    if ( (byte_1400E8401 & 1) != 0 )
      sub_1400A4E38(v7, a2, v3, v8, v10, *(_BYTE *)(a1 - 368) * v2);
    v16 = a1 - 256;
    sub_140025810(a1 - 256, 3, "CpGlitchEvent::CLIENT_OUTPUT_SERVER_OVERREAD");
    v5 = *(_DWORD *)(a1 - 304);
    v17 = v5;
  }
  v18 = *(_QWORD *)(a1 - 376);
  v19 = *(_DWORD *)(v18 + 160);
  v20 = v19 + v8 % v17;
  if ( v5 < v15 )
  {
    if ( (byte_1400E8401 & 1) != 0 )
      sub_14003F04C(v18, &stru_1400C80E8, v3, v20, v19 + v10 % v17, v15, *(_DWORD *)(v18 + 164));
    sub_140025810(v16, 4, "CpGlitchEvent::CLIENT_OUTPUT_READ_POINTER_OVERWRITE");
    goto LABEL_7;
  }
  v12 = v21;
  if ( v15 + v20 > *(_DWORD *)(v18 + 164) )
  {
    *v21 = 1;
    goto LABEL_8;
  }
  v13 = *(_QWORD *)(a1 - 392) + v20;
  *v21 = 0;
LABEL_9:
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000F5B0(v5 / *(_DWORD *)(a1 - 368), v5 % *(_DWORD *)(a1 - 368), v3, 18, v2, v5 / *(_DWORD *)(a1 - 368), *v12);
  return v13;
}
