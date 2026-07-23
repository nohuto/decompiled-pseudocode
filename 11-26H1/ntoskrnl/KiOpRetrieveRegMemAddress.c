/*
 * XREFs of KiOpRetrieveRegMemAddress @ 0x1404A851C
 * Callers:
 *     KiOp_Div @ 0x1404A83D0 (KiOp_Div.c)
 *     KiOp_SGDTSIDT @ 0x1405FAF50 (KiOp_SGDTSIDT.c)
 *     KiOp_SLDTSTRSMSW @ 0x1405FB110 (KiOp_SLDTSTRSMSW.c)
 * Callees:
 *     KiOpComputeLinearAddress @ 0x1405FAA04 (KiOpComputeLinearAddress.c)
 */

__int64 __fastcall KiOpRetrieveRegMemAddress(__int64 a1, __int64 *a2, _BYTE *a3, int *a4)
{
  char v4; // bp
  unsigned __int8 v6; // cl
  __int64 v7; // r11
  __int64 v8; // rdi
  int v12; // ebx
  unsigned int v13; // ecx
  __int64 v14; // r11
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned int v20; // r8d
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_BYTE *)(a1 + 81);
  v6 = *(_BYTE *)(a1 + 65);
  v7 = 0LL;
  v8 = 0LL;
  if ( (v6 & 0xC0) == 0xC0 )
  {
    v12 = 1;
    v13 = v6 & 7;
    v14 = v13 + 8;
    if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
      v14 = v13;
    v4 = 0;
    v7 = *(_QWORD *)(a1 + 24) + 120LL + 8 * v14;
  }
  else
  {
    if ( (v6 & 7) == 4 )
    {
      v20 = *(unsigned __int8 *)(a1 + 66);
      if ( (*(_BYTE *)(a1 + 66) & 7) != 5 || v6 >= 0x40u )
      {
        v22 = (v20 & 7) + 8;
        if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
          v22 = v20 & 7;
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v22 + 120);
      }
      v23 = ((v20 >> 3) & 7) + 8;
      if ( (*(_BYTE *)(a1 + 64) & 2) == 0 )
        v23 = (v20 >> 3) & 7;
      if ( v23 != 4 )
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v23 + 120) << (*(_BYTE *)(a1 + 66) >> 6);
    }
    else
    {
      v18 = v6 & 7;
      if ( v6 < 0x40u && v18 == 5 )
      {
        if ( !*(_BYTE *)(a1 + 58) )
          v7 = *(_QWORD *)(a1 + 16);
      }
      else
      {
        v19 = v18 + 8;
        if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
          v19 = v18;
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v19 + 120);
      }
    }
    v12 = 0;
  }
  v15 = 0;
  v16 = v7 + v8 + *(int *)(a1 + 68);
  v24 = v16;
  if ( !v12 && (*(_DWORD *)(a1 + 52) & 1) != 0 )
  {
    v21 = KiOpComputeLinearAddress(a1, &v24);
    v16 = v24;
    v15 = v21;
  }
  *a2 = v16;
  *a3 = v4;
  if ( a4 )
    *a4 = v12;
  return v15;
}
