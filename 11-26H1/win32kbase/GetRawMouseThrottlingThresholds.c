/*
 * XREFs of GetRawMouseThrottlingThresholds @ 0x14012B520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetRawMouseThrottlingThresholds(__int64 a1, int a2, int a3)
{
  __int64 v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-29h]
  __int128 v14; // [rsp+30h] [rbp-19h]
  __int128 v15; // [rsp+40h] [rbp-9h]
  __int128 v16; // [rsp+50h] [rbp+7h]
  __int128 v17; // [rsp+60h] [rbp+17h]
  __int128 v18; // [rsp+70h] [rbp+27h]

  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 3136);
  if ( v4 )
  {
    v5 = *(_OWORD *)(v4 + 1360);
    *(_OWORD *)a1 = *(_OWORD *)(v4 + 1344);
    v6 = *(_OWORD *)(v4 + 1376);
    *(_OWORD *)(a1 + 16) = v5;
    v7 = *(_OWORD *)(v4 + 1392);
    *(_OWORD *)(a1 + 32) = v6;
    v8 = *(_OWORD *)(v4 + 1408);
    *(_OWORD *)(a1 + 48) = v7;
    v9 = *(_OWORD *)(v4 + 1424);
    *(_OWORD *)(a1 + 64) = v8;
    v10 = *(_OWORD *)(v4 + 1440);
    *(_OWORD *)(a1 + 80) = v9;
    v11 = *(_QWORD *)(v4 + 1456);
  }
  else
  {
    *(_QWORD *)&v15 = 0LL;
    *((_QWORD *)&v13 + 1) = 1LL;
    *(_QWORD *)&v13 = L"RawMouseThrottleEnabled";
    *((_QWORD *)&v14 + 1) = L"RawMouseThrottleForced";
    *(_QWORD *)&v16 = L"RawMouseThrottleDuration";
    *(_OWORD *)a1 = v13;
    *(_QWORD *)&v14 = 1LL;
    *((_QWORD *)&v15 + 1) = 1LL;
    *((_QWORD *)&v16 + 1) = 0x100000008LL;
    *(_OWORD *)(a1 + 16) = v14;
    *(_QWORD *)&v17 = 20LL;
    *(_OWORD *)(a1 + 32) = v15;
    *((_QWORD *)&v17 + 1) = L"RawMouseThrottleLeeway";
    *(_QWORD *)&v18 = 2LL;
    *(_OWORD *)(a1 + 48) = v16;
    *((_QWORD *)&v18 + 1) = 5LL;
    *(_OWORD *)(a1 + 64) = v17;
    v10 = 0x32uLL;
    *(_OWORD *)(a1 + 80) = v18;
    v11 = 0LL;
  }
  *(_OWORD *)(a1 + 96) = v10;
  result = a1;
  *(_QWORD *)(a1 + 112) = v11;
  return result;
}
