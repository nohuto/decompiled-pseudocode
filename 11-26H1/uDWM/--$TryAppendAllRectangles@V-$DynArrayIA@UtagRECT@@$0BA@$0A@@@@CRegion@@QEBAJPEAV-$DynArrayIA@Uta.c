/*
 * XREFs of ??$TryAppendAllRectangles@V?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@Z @ 0x18005850C
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x180058614 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x18005867C (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800586FC (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 */

__int64 __fastcall CRegion::TryAppendAllRectangles<DynArrayIA<tagRECT,16,0>>(FastRegion::CRegion *a1, __int64 *a2)
{
  __int64 v3; // rbx
  unsigned int RectangleCount; // eax
  unsigned int v5; // edi
  int v6; // ebp
  unsigned __int64 v7; // r14
  int v8; // esi
  char *v9; // r12
  int *v10; // r11
  __int64 v11; // rcx
  int v12; // eax
  int v13; // r9d
  int v14; // r10d
  __int64 v15; // r8
  int v16; // edx
  _DWORD *v17; // rcx
  _DWORD *v18; // rdx
  char v20[8]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]
  int *v22; // [rsp+30h] [rbp-38h]
  char *v23; // [rsp+38h] [rbp-30h]
  int v24; // [rsp+40h] [rbp-28h]
  int v25; // [rsp+44h] [rbp-24h]

  v3 = (__int64)a1;
  RectangleCount = FastRegion::CRegion::GetRectangleCount(a1);
  v5 = *((_DWORD *)a2 + 6);
  v6 = DynArrayImpl<0>::AddMultiple(a2, 16LL, RectangleCount);
  if ( v6 >= 0 )
  {
    FastRegion::CRegion::BeginIterator(v3, v20);
    v7 = v21;
    LODWORD(v3) = v25;
    v8 = v24;
    v9 = v23;
    v10 = v22;
    while ( (unsigned __int64)v10 < v7 )
    {
      v11 = *a2;
      v12 = 2 * v8;
      v13 = *v10;
      ++v8;
      v14 = v10[2];
      v15 = 2LL * v5;
      v16 = *(_DWORD *)&v9[4 * v12 + 4];
      *(_DWORD *)(v11 + 8 * v15) = *(_DWORD *)&v9[4 * v12];
      *(_DWORD *)(v11 + 8 * v15 + 4) = v13;
      *(_DWORD *)(v11 + 8 * v15 + 8) = v16;
      *(_DWORD *)(v11 + 8 * v15 + 12) = v14;
      if ( v8 >= (int)v3 )
      {
        v17 = v10 + 2;
        while ( 1 )
        {
          v9 = (char *)v17 + (int)v17[1];
          v18 = v17;
          v10 = v17;
          v3 = ((int)v17[3] - (__int64)(int)v17[1] + 8) >> 3;
          v17 += 2;
          if ( (_DWORD)v3 )
            break;
          if ( (unsigned __int64)v18 >= v7 )
            goto LABEL_8;
        }
        v8 = 0;
      }
LABEL_8:
      ++v5;
    }
  }
  return (unsigned int)v6;
}
