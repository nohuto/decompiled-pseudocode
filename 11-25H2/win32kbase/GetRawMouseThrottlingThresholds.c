/*
 * XREFs of GetRawMouseThrottlingThresholds @ 0x1400E4BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetRawMouseThrottlingThresholds(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-29h]
  __int128 v13; // [rsp+30h] [rbp-19h]
  __int128 v14; // [rsp+40h] [rbp-9h]
  __int128 v15; // [rsp+50h] [rbp+7h]
  __int128 v16; // [rsp+60h] [rbp+17h]
  __int128 v17; // [rsp+70h] [rbp+27h]

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 3136);
  if ( v3 )
  {
    v4 = *(_OWORD *)(v3 + 1368);
    *(_OWORD *)a1 = *(_OWORD *)(v3 + 1352);
    v5 = *(_OWORD *)(v3 + 1384);
    *(_OWORD *)(a1 + 16) = v4;
    v6 = *(_OWORD *)(v3 + 1400);
    *(_OWORD *)(a1 + 32) = v5;
    v7 = *(_OWORD *)(v3 + 1416);
    *(_OWORD *)(a1 + 48) = v6;
    v8 = *(_OWORD *)(v3 + 1432);
    *(_OWORD *)(a1 + 64) = v7;
    v9 = *(_OWORD *)(v3 + 1448);
    *(_OWORD *)(a1 + 80) = v8;
    v10 = *(_QWORD *)(v3 + 1464);
  }
  else
  {
    *(_QWORD *)&v14 = 0LL;
    *((_QWORD *)&v12 + 1) = 1LL;
    *(_QWORD *)&v12 = L"RawMouseThrottleEnabled";
    *((_QWORD *)&v13 + 1) = L"RawMouseThrottleForced";
    *(_QWORD *)&v15 = L"RawMouseThrottleDuration";
    *(_OWORD *)a1 = v12;
    *(_QWORD *)&v13 = 1LL;
    *((_QWORD *)&v14 + 1) = 1LL;
    *((_QWORD *)&v15 + 1) = 0x100000008LL;
    *(_OWORD *)(a1 + 16) = v13;
    *(_QWORD *)&v16 = 20LL;
    *(_OWORD *)(a1 + 32) = v14;
    *((_QWORD *)&v16 + 1) = L"RawMouseThrottleLeeway";
    *(_QWORD *)&v17 = 2LL;
    *(_OWORD *)(a1 + 48) = v15;
    *((_QWORD *)&v17 + 1) = 5LL;
    *(_OWORD *)(a1 + 64) = v16;
    v9 = 0x32uLL;
    *(_OWORD *)(a1 + 80) = v17;
    v10 = 0LL;
  }
  *(_OWORD *)(a1 + 96) = v9;
  result = a1;
  *(_QWORD *)(a1 + 112) = v10;
  return result;
}
