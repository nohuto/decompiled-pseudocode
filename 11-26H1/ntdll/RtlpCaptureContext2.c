/*
 * XREFs of RtlpCaptureContext2 @ 0x180126B70
 * Callers:
 *     RtlRaiseException @ 0x18002B180 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpCaptureContext2(__int64 a1)
{
  __int128 v1; // xmm6
  __int128 v2; // xmm7
  __int128 v3; // xmm8
  __int128 v4; // xmm9
  __int128 v5; // xmm10
  __int128 v6; // xmm11
  __int128 v7; // xmm12
  __int128 v8; // xmm13
  __int128 v9; // xmm14
  __int128 v10; // xmm15

  *(_DWORD *)(a1 + 258) = 0;
  *(_OWORD *)(a1 + 512) = v1;
  *(_OWORD *)(a1 + 528) = v2;
  *(_OWORD *)(a1 + 544) = v3;
  *(_OWORD *)(a1 + 560) = v4;
  *(_OWORD *)(a1 + 576) = v5;
  *(_OWORD *)(a1 + 592) = v6;
  *(_OWORD *)(a1 + 608) = v7;
  *(_OWORD *)(a1 + 624) = v8;
  *(_OWORD *)(a1 + 640) = v9;
  *(_OWORD *)(a1 + 656) = v10;
  *(_DWORD *)(a1 + 280) = _mm_getcsr();
  JUMPOUT(0x180126C2CLL);
}
