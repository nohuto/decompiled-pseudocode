/*
 * XREFs of IntersectWithParents @ 0x14003192C
 * Callers:
 *     xxxGetUpdateRgn @ 0x14004DED0 (xxxGetUpdateRgn.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x140050078 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     xxxGetUpdateRect @ 0x140051110 (xxxGetUpdateRect.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1401562B8 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRect @ 0x140032CD0 (PhysicalToLogicalInPlaceRect.c)
 */

__int64 __fastcall IntersectWithParents(__int64 a1, int *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  char v5; // al
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 27LL) & 0x20) == 0 )
  {
    while ( 1 )
    {
      v3 = *(_QWORD *)(v3 + 104);
      if ( !v3 )
        break;
      v4 = *(_QWORD *)(v3 + 40);
      v5 = *(_BYTE *)(v4 + 31);
      if ( (v5 & 0x10) == 0 || (v5 & 0x20) != 0 )
        return 0LL;
      v13 = *(_OWORD *)(v4 + 104);
      PhysicalToLogicalInPlaceRect(a1, &v13);
      v6 = v13;
      v7 = DWORD2(v13);
      if ( *a2 > (int)v13 )
        v6 = *a2;
      v8 = a2[2];
      *a2 = v6;
      if ( v8 < v7 )
        v7 = v8;
      a2[2] = v7;
      if ( v6 >= v7 )
        goto LABEL_15;
      v9 = DWORD1(v13);
      v10 = HIDWORD(v13);
      if ( a2[1] > SDWORD1(v13) )
        v9 = a2[1];
      v11 = a2[3];
      a2[1] = v9;
      if ( v11 < v10 )
        v10 = v11;
      a2[3] = v10;
      if ( v9 >= v10 )
      {
LABEL_15:
        *(_OWORD *)a2 = 0LL;
        return 0LL;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 27LL) & 0x20) != 0 )
        return 1LL;
      a1 = v3;
    }
  }
  return 1LL;
}
