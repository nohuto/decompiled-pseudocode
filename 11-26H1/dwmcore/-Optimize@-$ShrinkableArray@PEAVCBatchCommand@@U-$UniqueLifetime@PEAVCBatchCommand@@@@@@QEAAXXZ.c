/*
 * XREFs of ?Optimize@?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ @ 0x180135D40
 * Callers:
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x1801359A0 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18007F840 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1800C4514 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

void __fastcall ShrinkableArray<CBatchCommand *,UniqueLifetime<CBatchCommand *>>::Optimize(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // esi
  unsigned int v4; // ebx
  __int64 v5; // r14
  void *v6; // rbx
  int v7; // ecx
  unsigned int v8; // r14d
  __int64 v9; // rbx
  __int64 v10; // r15
  CBatchCommand *v11; // rcx
  void *v12[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+40h] [rbp-20h]
  int v14; // [rsp+48h] [rbp-18h]
  __int64 v15; // [rsp+50h] [rbp-10h]

  v1 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 24);
  if ( v1 > 0x10 && *(_DWORD *)(a1 + 36) < v1 / 3 )
  {
    v4 = v1 >> 1;
    v13 = 0LL;
    v14 = 0;
    v15 = 0LL;
    *(_OWORD *)v12 = 0LL;
    if ( (int)DynArrayImpl<0>::Grow((__int64)v12, 8u, v4, 1, 0LL) >= 0 )
    {
      v5 = 0LL;
      if ( v3 > v4 )
      {
        v8 = v3;
        v3 = v4;
        v5 = v8 - v4;
        if ( (_DWORD)v5 )
        {
          v9 = 0LL;
          v10 = (unsigned int)v5;
          do
          {
            v11 = *(CBatchCommand **)(v9 + *(_QWORD *)a1);
            if ( v11 )
              CBatchCommand::`scalar deleting destructor'(v11);
            v9 += 8LL;
            --v10;
          }
          while ( v10 );
        }
      }
      v6 = v12[0];
      memcpy_0(v12[0], (const void *)(*(_QWORD *)a1 + 8 * v5), 8LL * v3);
      v7 = HIDWORD(v13);
      v12[0] = *(void **)a1;
      HIDWORD(v13) = *(_DWORD *)(a1 + 20);
      v14 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v3;
      *(_QWORD *)a1 = v6;
      *(_DWORD *)(a1 + 20) = v7;
    }
    DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v12);
  }
  *(_DWORD *)(a1 + 32) = v3;
  *(_DWORD *)(a1 + 36) = 0;
}
