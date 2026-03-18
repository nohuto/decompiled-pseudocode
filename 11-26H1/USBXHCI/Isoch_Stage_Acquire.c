/*
 * XREFs of Isoch_Stage_Acquire @ 0x140012580
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x140010510 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Isoch_Stage_Acquire(__int64 a1)
{
  unsigned int v1; // r10d
  char v3; // dl
  int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // rcx

  v1 = *(unsigned __int8 *)(a1 + 129);
  v3 = *(_BYTE *)(a1 + 130);
  if ( v3 == (_BYTE)v1 )
    return 0LL;
  v4 = *(unsigned __int8 *)(a1 + 131);
  v5 = v4 * (unsigned int)*(unsigned __int8 *)(a1 + 128);
  *(_BYTE *)(a1 + 130) = v3 + 1;
  *(_BYTE *)(a1 + 131) = (v4 + 1) % v1;
  v6 = a1 + v5 + 144;
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(v6 + 16) = v6 + 8;
    *(_QWORD *)(v6 + 8) = v6 + 8;
    *(_QWORD *)(v6 + 32) = v6 + 24;
    *(_QWORD *)(v6 + 24) = v6 + 24;
    *(_DWORD *)(v6 + 40) = -2;
    *(_DWORD *)(v6 + 44) = -2;
    *(_QWORD *)v6 = a1;
    *(_QWORD *)(v6 + 48) = 1LL;
    *(_BYTE *)(v6 + 56) = 0;
    *(_QWORD *)(v6 + 64) = 0LL;
    *(_QWORD *)(v6 + 72) = 0LL;
    *(_QWORD *)(v6 + 80) = *(_QWORD *)(v7 + 176);
    *(_DWORD *)(v6 + 88) = *(_DWORD *)(v7 + 192);
    *(_QWORD *)(v6 + 96) = *(_QWORD *)(v7 + 176);
    *(_DWORD *)(v6 + 104) = *(_DWORD *)(v7 + 192);
    *(_QWORD *)(v6 + 112) = *(_QWORD *)(v7 + 176);
    *(_DWORD *)(v6 + 120) = *(_DWORD *)(v7 + 192);
    *(_DWORD *)(v6 + 160) = 0;
    if ( *(_BYTE *)(v7 + 288) )
    {
      *(_QWORD *)(v6 + 184) = 0LL;
      *(_DWORD *)(v6 + 168) = 1;
      *(_QWORD *)(v6 + 72) = v6 + 168;
      *(_DWORD *)(v6 + 192) = 0;
    }
    *(_OWORD *)(v6 + 128) = 0LL;
    *(_OWORD *)(v6 + 144) = 0LL;
  }
  return v6;
}
