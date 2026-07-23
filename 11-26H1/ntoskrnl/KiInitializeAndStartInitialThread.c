/*
 * XREFs of KiInitializeAndStartInitialThread @ 0x1405F921C
 * Callers:
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 * Callees:
 *     PsInitializeThreadRngState @ 0x14048D204 (PsInitializeThreadRngState.c)
 *     KiStartIdleThread @ 0x1405F9500 (KiStartIdleThread.c)
 *     KeInitThread @ 0x140C0D634 (KeInitThread.c)
 */

__int64 __fastcall KiInitializeAndStartInitialThread(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // r9
  _QWORD v11[4]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+40h] [rbp-40h]
  void *v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+5Ch] [rbp-24h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  void *v17; // [rsp+68h] [rbp-18h]
  __int64 v18; // [rsp+70h] [rbp-10h]

  qword_140FCB110 = 1LL;
  v7 = 6;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v7 = 7;
    v8 = *(_QWORD *)(a1 + 1056);
    v9 = *(_QWORD *)(*(_QWORD *)(a4 + 240) + 3712LL) + 4112LL;
    *(_QWORD *)(a1 + 1048) = v9;
    *(_QWORD *)(a1 + 1056) = v8 & 0xFFFFFFFFFFFFFFFAuLL ^ (v8 ^ (v9 - 12288)) & 0xFFFFFFFFFFFFF002uLL | 2;
  }
  v14 = 1;
  v16 = 0LL;
  v11[2] = 0LL;
  v11[3] = 0LL;
  v15 = v7;
  v13 = &unk_140FC9F40;
  v12 = 0LL;
  v17 = &unk_140FCB8D8;
  v11[0] = a2;
  v11[1] = KiIdleLoop;
  v18 = 1104LL;
  KeInitThread(a1, v11);
  *(_QWORD *)(a1 + 1248) = KiIdleLoop;
  *(_QWORD *)(a1 + 1696) = &KiIdleThreadName;
  *(_QWORD *)(a1 + 1376) = KiIdleLoop;
  PsInitializeThreadRngState(a1);
  *(_QWORD *)(a1 + 1528) = a1 + 1520;
  *(_QWORD *)(a1 + 1520) = a1 + 1520;
  *(_QWORD *)(a1 + 1544) = a1 + 1536;
  *(_QWORD *)(a1 + 1536) = a1 + 1536;
  *(_QWORD *)(a1 + 1552) = 0LL;
  *(_BYTE *)(a1 + 1831) = -1;
  _interlockedbittestandset((volatile signed __int32 *)a1, 0x15u);
  return KiStartIdleThread(a1, a3, a2);
}
