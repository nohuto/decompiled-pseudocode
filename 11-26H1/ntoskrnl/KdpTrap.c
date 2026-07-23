/*
 * XREFs of KdpTrap @ 0x140C1DA90
 * Callers:
 *     KdTrap @ 0x1404576D0 (KdTrap.c)
 *     KdpStub @ 0x140457710 (KdpStub.c)
 * Callees:
 *     KdpReport @ 0x14050255C (KdpReport.c)
 *     KdpCommandString @ 0x140C1BC54 (KdpCommandString.c)
 *     KdpPrint @ 0x140C1BD30 (KdpPrint.c)
 *     KdpPrompt @ 0x140C1BEBC (KdpPrompt.c)
 *     KdpSymbol @ 0x140C1C018 (KdpSymbol.c)
 */

char __fastcall KdpTrap(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  char v6; // r10
  bool v8; // zf
  __int64 v9; // r9
  int *v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // [rsp+20h] [rbp-38h]
  char v23; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0;
  v8 = *(_DWORD *)a3 == -2147483645;
  v23 = 0;
  if ( !v8 )
    return KdpReport(a1, a2, (int *)a3, a4, v22, a6);
  v9 = *(_QWORD *)(a3 + 32);
  if ( !v9 )
    return KdpReport(a1, a2, (int *)a3, a4, v22, a6);
  v10 = (int *)(a4 + 1256);
  v11 = *(_QWORD *)(a4 + 248);
  v12 = 0LL;
  if ( (*(_DWORD *)(a4 + 48) & 0x100080) == 0x100080 )
    v12 = *(_QWORD *)(*v10 + a4 + 1240);
  v13 = v9 - 1;
  if ( !v13 )
  {
    v17 = KdpPrint(
            *(_DWORD *)(a4 + 184),
            *(_DWORD *)(a4 + 192),
            *(_BYTE **)(a4 + 128),
            *(_WORD *)(a4 + 136),
            a5,
            a1,
            a2,
            &v23);
    v6 = v23;
    *(_QWORD *)(a4 + 120) = v17;
    goto LABEL_16;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    *(_QWORD *)(a4 + 120) = (unsigned __int16)KdpPrompt(
                                                *(_BYTE **)(a4 + 128),
                                                *(_WORD *)(a4 + 136),
                                                *(volatile void **)(a4 + 184),
                                                *(_WORD *)(a4 + 192),
                                                a5,
                                                a1,
                                                a2);
    goto LABEL_14;
  }
  v15 = v14 - 1;
  if ( !v15 )
    goto LABEL_12;
  v16 = v15 - 1;
  if ( !v16 )
  {
    v6 = 1;
LABEL_12:
    KdpSymbol(*(unsigned __int16 **)(a4 + 128), *(__int64 **)(a4 + 136), v6, a5, a4, a1, a2);
    goto LABEL_14;
  }
  if ( v16 == 1 )
  {
    KdpCommandString(*(unsigned __int16 **)(a4 + 128), *(unsigned __int16 **)(a4 + 136), a5, a4, a1, a2);
LABEL_14:
    v6 = 1;
  }
LABEL_16:
  v18 = *(_QWORD *)(a4 + 248);
  if ( v18 == v11 )
    *(_QWORD *)(a4 + 248) = v18 + 1;
  if ( (*(_DWORD *)(a4 + 48) & 0x100080) == 0x100080 )
  {
    v19 = *v10;
    v20 = *(_QWORD *)(v19 + a4 + 1240);
    if ( v20 == v12 )
      *(_QWORD *)(v19 + a4 + 1240) = v20 + 1;
  }
  return v6;
}
