/*
 * XREFs of ?PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z @ 0x1402EF2A0
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1402EE9A0 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 * Callees:
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall Protocols::SuperWetInk::PopulatePayloadV1(int a1, __int64 a2, int a3, float a4, __int64 a5)
{
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  int v11; // edi
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // ecx
  char v15; // al
  int v16; // ecx
  char v17; // al
  _OWORD v19[4]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v20; // [rsp+60h] [rbp-28h]

  memset_0(v19, 0, 0x48uLL);
  v8 = v19[1];
  *(_OWORD *)a5 = v19[0];
  v9 = v19[2];
  *(_OWORD *)(a5 + 16) = v8;
  v10 = v19[3];
  *(_OWORD *)(a5 + 32) = v9;
  *(_QWORD *)&v9 = v20;
  *(_OWORD *)(a5 + 48) = v10;
  *(_QWORD *)(a5 + 64) = v9;
  *(_BYTE *)a5 = 1;
  v11 = a1 - 1;
  if ( v11 )
  {
    if ( v11 == 1 && a3 == 4 )
    {
      *(_BYTE *)(a5 + 1) = 2;
      return 0;
    }
  }
  else if ( a3 == 64 )
  {
    *(_BYTE *)(a5 + 1) = 1;
    v12 = 0;
    v13 = *(_DWORD *)(a2 + 4);
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
          return (unsigned int)-1073741811;
        v15 = 2;
      }
      else
      {
        v15 = 1;
      }
    }
    else
    {
      v15 = 0;
    }
    *(_BYTE *)(a5 + 12) = v15;
    *(_BYTE *)(a5 + 13) = *(_BYTE *)(a2 + 8);
    *(_BYTE *)(a5 + 14) = *(_BYTE *)(a2 + 9);
    *(_BYTE *)(a5 + 15) = *(_BYTE *)(a2 + 10);
    *(_BYTE *)(a5 + 16) = *(_BYTE *)(a2 + 11);
    *(float *)(a5 + 17) = a4 * *(float *)(a2 + 12);
    v16 = *(_DWORD *)(a2 + 16);
    if ( v16 )
    {
      if ( v16 != 1 )
        return (unsigned int)-1073741811;
      v17 = 1;
    }
    else
    {
      v17 = 0;
    }
    *(_BYTE *)(a5 + 21) = v17;
    *(_DWORD *)(a5 + 22) = *(_DWORD *)(a2 + 20);
    *(_DWORD *)(a5 + 26) = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(a5 + 30) = *(_DWORD *)(a2 + 28);
    *(_DWORD *)(a5 + 34) = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a5 + 38) = *(_DWORD *)(a2 + 36);
    *(_DWORD *)(a5 + 42) = *(_DWORD *)(a2 + 40);
    *(_BYTE *)(a5 + 62) = *(_DWORD *)(a2 + 60) & 1;
    *(_BYTE *)(a5 + 63) = (*(_DWORD *)(a2 + 60) & 4u) >> 2;
    return v12;
  }
  return (unsigned int)-1073741811;
}
