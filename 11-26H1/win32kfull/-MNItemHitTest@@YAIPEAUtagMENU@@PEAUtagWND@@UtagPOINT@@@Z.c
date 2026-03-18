/*
 * XREFs of ?MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z @ 0x14008B510
 * Callers:
 *     xxxMNFindWindowFromPoint @ 0x14008B6DC (xxxMNFindWindowFromPoint.c)
 *     ?FindNCMNItemHitEx@@YAHPEAUtagWND@@HAEBUtagPOINT@@@Z @ 0x14018DF78 (-FindNCMNItemHitEx@@YAHPEAUtagWND@@HAEBUtagPOINT@@@Z.c)
 *     xxxMenuItemFromPoint @ 0x14020D12C (xxxMenuItemFromPoint.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x14000D208 (MNGetpItemFromIndex.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall MNItemHitTest(struct tagMENU *a1, struct tagWND *a2, struct tagPOINT a3)
{
  unsigned int v3; // r10d
  __int64 v4; // rax
  unsigned int v5; // ebp
  __int64 v6; // rdx
  int v7; // r9d
  int v8; // r8d
  __int64 v9; // r11
  int v10; // edx
  int v11; // ebx
  __int64 v13; // rax
  unsigned int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int v17; // r10d
  __int64 v18; // r11
  __int64 v19; // rbx
  int v20; // edi
  int v21; // esi

  v3 = 0;
  if ( !a1 )
    return 0xFFFFFFFFLL;
  v4 = *((_QWORD *)a1 + 5);
  v5 = *(_DWORD *)(v4 + 44);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  v6 = *((_QWORD *)a2 + 5);
  if ( (*(_DWORD *)(v4 + 40) & 1) == 0 )
  {
    if ( (*(_BYTE *)(v6 + 26) & 0x40) != 0 )
      v7 = *(_DWORD *)(v6 + 96) - a3.x;
    else
      v7 = a3.x - *(_DWORD *)(v6 + 88);
    v8 = a3.y - *(_DWORD *)(v6 + 92);
LABEL_12:
    if ( (*((_DWORD *)a1 + 31) & 3) != 0 )
    {
      v13 = MNGetpItemFromIndex((__int64)a1, *((_DWORD *)a1 + 29));
      v19 = v13;
      if ( v13 )
      {
        v20 = v17;
        v21 = v17;
        while ( v14 < v5 && v20 < *(_DWORD *)(v18 + 68) )
        {
          v21 += *(_DWORD *)(*(_QWORD *)v19 + 76LL);
          if ( v16 >= 0 && v15 < v21 && v16 < *(_DWORD *)(*(_QWORD *)v13 + 72LL) && v15 >= v20 )
            return v14;
          ++v14;
          v20 = v21;
          v19 += 96LL;
        }
      }
    }
    else
    {
      v9 = *((_QWORD *)a1 + 11);
      while ( v3 < v5 )
      {
        v10 = *(_DWORD *)(*(_QWORD *)v9 + 64LL);
        v11 = *(_DWORD *)(*(_QWORD *)v9 + 68LL);
        if ( v8 < v11 + *(_DWORD *)(*(_QWORD *)v9 + 76LL)
          && v7 < v10 + *(_DWORD *)(*(_QWORD *)v9 + 72LL)
          && v8 >= v11
          && v7 >= v10 )
        {
          return v3;
        }
        ++v3;
        v9 += 96LL;
      }
    }
    return 0xFFFFFFFFLL;
  }
  if ( a3.x >= *(_DWORD *)(v6 + 96) - 3
    || a3.x < *(_DWORD *)(v6 + 88) + 3
    || a3.y < *(_DWORD *)(v6 + 92) + 3
    || a3.y >= *(_DWORD *)(v6 + 100) - 3 )
  {
    return 0xFFFFFFFFLL;
  }
  if ( (*(_BYTE *)(v6 + 26) & 0x40) != 0 )
    v7 = *(_DWORD *)(v6 + 112) - a3.x;
  else
    v7 = a3.x - *(_DWORD *)(v6 + 104);
  v8 = a3.y - *(_DWORD *)(v6 + 108);
  if ( v8 < 0 )
    return 4294967293LL;
  if ( v8 < *((_DWORD *)a1 + 17) )
    goto LABEL_12;
  return 4294967292LL;
}
