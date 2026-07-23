/*
 * XREFs of TtmpUpdateTerminalState @ 0x1407F2640
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x1407F1C68 (TtmiSessionTerminalListWorker.c)
 * Callees:
 *     TtmiLogTerminalStateMachine @ 0x1407F1320 (TtmiLogTerminalStateMachine.c)
 *     TtmiResetInactivityTimer @ 0x1407F1B44 (TtmiResetInactivityTimer.c)
 *     TtmpResetEvaluationTimer @ 0x1407F2344 (TtmpResetEvaluationTimer.c)
 *     TtmpTsmIterate @ 0x1407F2540 (TtmpTsmIterate.c)
 */

char __fastcall TtmpUpdateTerminalState(__int64 a1, __int64 a2, char *a3, char *a4)
{
  __int64 v7; // rsi
  int v8; // eax
  int v9; // edi
  int v10; // eax
  __int64 v11; // rax
  int v12; // edx
  bool v13; // zf
  unsigned int v14; // edx
  BOOL v15; // ecx
  char v16; // al
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  char v20; // dl
  __int128 v22; // [rsp+20h] [rbp-60h] BYREF
  __int128 v23; // [rsp+30h] [rbp-50h]
  int v24[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+48h] [rbp-38h]
  __int64 v26; // [rsp+50h] [rbp-30h]
  __int64 v27; // [rsp+58h] [rbp-28h]
  __int64 v28; // [rsp+60h] [rbp-20h]
  char v29; // [rsp+68h] [rbp-18h]
  bool v30; // [rsp+69h] [rbp-17h]
  __int16 v31; // [rsp+6Ah] [rbp-16h]
  int v32; // [rsp+6Ch] [rbp-14h]
  int v33; // [rsp+70h] [rbp-10h]

  v24[0] = *(_DWORD *)(a2 + 40);
  v25 = *(_QWORD *)(a2 + 80);
  v24[1] = 0;
  v31 = 0;
  v7 = MEMORY[0xFFFFF78000000008];
  v27 = *(_QWORD *)(a2 + 64);
  v28 = *(_QWORD *)(a2 + 72);
  v8 = *(_DWORD *)(a2 + 36);
  v33 = 0;
  v22 = 0LL;
  v26 = MEMORY[0xFFFFF78000000008];
  v23 = 0LL;
  if ( *(_DWORD *)(a2 + 32) || (v29 = 0, (v8 & 8) != 0) )
    v29 = 1;
  v9 = *(_DWORD *)(a2 + 56);
  v33 = v9;
  v30 = (v8 & 0x60) != 0;
  *(_DWORD *)(a2 + 36) = v8 & 0xFFFFFF9F;
  v10 = *(_DWORD *)(a2 + 52);
  *(_QWORD *)(a2 + 52) = 0LL;
  v32 = v10;
  TtmpTsmIterate(v24, (__int64)&v22);
  TtmiLogTerminalStateMachine(*(_DWORD *)(a2 + 28), v24, (int *)&v22);
  v11 = v23;
  *(_QWORD *)(a2 + 80) = v23;
  if ( v11 == v7 )
    TtmiResetInactivityTimer(v9);
  v12 = v22;
  *(_DWORD *)(a2 + 40) = v22;
  if ( !BYTE4(v22)
    || (v13 = v12 == 1,
        v14 = *(_DWORD *)(a2 + 36),
        *(_DWORD *)(a2 + 44) = DWORD2(v22),
        v15 = !v13,
        ((v14 >> 4) & 1) == v15) )
  {
    v16 = 0;
  }
  else
  {
    v16 = 1;
    *(_DWORD *)(a2 + 36) = v14 & 0xFFFFFFEF | (16 * v15);
  }
  *a3 = v16;
  v17 = *(_DWORD *)(a2 + 44);
  if ( (*(_DWORD *)(a2 + 36) & 8) != 0 )
    v18 = 0;
  else
    v18 = *(_DWORD *)(a2 + 40);
  v19 = *(_DWORD *)(a2 + 276);
  if ( v19 == v18 )
  {
    v20 = 0;
  }
  else
  {
    if ( !v19 || !v18 )
      v17 = 22;
    *(_DWORD *)(a2 + 280) = v17;
    v19 = v18;
    *(_DWORD *)(a2 + 276) = v18;
    v20 = 1;
  }
  *a4 = v20;
  if ( v19 )
  {
    if ( v19 == 1 )
      *(_DWORD *)(a2 + 48) = 2;
    else
      *(_DWORD *)(a2 + 48) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 48) = 1;
  }
  return TtmpResetEvaluationTimer((char *)a2, *((__int64 *)&v23 + 1));
}
