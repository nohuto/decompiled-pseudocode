/*
 * XREFs of ?ShouldChainForAxis@CInteractionTracker@@UEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x1801B48F0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 */

char __fastcall CInteractionTracker::ShouldChainForAxis(__int64 a1, int a2, __int64 a3, unsigned __int8 a4)
{
  __int128 v5; // xmm1
  char v6; // bl
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  bool v17; // zf
  int v18; // ecx
  int v20; // ecx
  bool v21; // zf
  _DWORD Buf2[4]; // [rsp+20h] [rbp-79h] BYREF
  __int128 v23; // [rsp+30h] [rbp-69h]
  _OWORD v24[9]; // [rsp+40h] [rbp-59h] BYREF
  __int128 v25; // [rsp+D0h] [rbp+37h]
  __int64 v26; // [rsp+E0h] [rbp+47h]

  v5 = *(_OWORD *)(a3 + 288);
  v6 = 0;
  v23 = *(_OWORD *)(a3 + 272);
  v7 = *(_OWORD *)(a3 + 304);
  v24[0] = v5;
  v8 = *(_OWORD *)(a3 + 320);
  v24[1] = v7;
  v9 = *(_OWORD *)(a3 + 336);
  v24[2] = v8;
  v10 = *(_OWORD *)(a3 + 352);
  v24[3] = v9;
  v11 = *(_OWORD *)(a3 + 368);
  v24[4] = v10;
  v24[5] = v11;
  v24[6] = *(_OWORD *)(a3 + 384);
  v12 = *(_OWORD *)(a3 + 416);
  v24[7] = *(_OWORD *)(a3 + 400);
  v13 = *(_OWORD *)(a3 + 432);
  v14 = *(_QWORD *)(a3 + 448);
  v24[8] = v12;
  v25 = v13;
  v26 = v14;
  if ( a2 )
  {
    v15 = a2 - 1;
    if ( v15 )
    {
      if ( v15 == 1 )
      {
        Buf2[0] = 1065353216;
        Buf2[1] = 1065353216;
        Buf2[2] = 1065353216;
        if ( memcmp_0((char *)v24 + 8, Buf2, 0xCuLL) )
        {
          v20 = *(_DWORD *)(a3 + 488);
          if ( v20 )
          {
            if ( v20 != 1 )
              return v6;
            v21 = (_DWORD)v26 == 0;
          }
          else
          {
            if ( (v26 & 1) != 0 )
              return 1;
            v21 = (v26 & 2) == 0;
          }
          if ( v21 )
            return v6;
          return 1;
        }
      }
      return v6;
    }
    if ( !(a4 | ((v26 & 0x200000000LL) == 0)) && (_DWORD)v25 != 2 )
      return v6;
    v16 = *(_DWORD *)(a3 + 480);
    if ( v16 )
    {
      if ( v16 != 1 )
        return v6;
      v17 = HIDWORD(v25) == 0;
    }
    else
    {
      if ( (BYTE12(v25) & 1) != 0 )
        return 1;
      v17 = (BYTE12(v25) & 2) == 0;
    }
  }
  else
  {
    if ( !(a4 | ((v26 & 0x100000000LL) == 0)) && (_DWORD)v25 != 1 )
      return v6;
    v18 = *(_DWORD *)(a3 + 472);
    if ( v18 )
    {
      if ( v18 != 1 )
        return v6;
      v17 = DWORD2(v25) == 0;
    }
    else
    {
      if ( (BYTE8(v25) & 1) != 0 )
        return 1;
      v17 = (BYTE8(v25) & 2) == 0;
    }
  }
  if ( !v17 )
    return 1;
  return v6;
}
