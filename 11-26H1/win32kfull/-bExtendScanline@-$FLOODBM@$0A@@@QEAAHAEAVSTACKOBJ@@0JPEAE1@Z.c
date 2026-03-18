/*
 * XREFs of ?bExtendScanline@?$FLOODBM@$0A@@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x140332ED0
 * Callers:
 *     ??$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z @ 0x140331F58 (--$NtGdiExtFloodFillImpl@$0A@@@YAHPEAUHDC__@@HHKI@Z.c)
 * Callees:
 *     ?bPopPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1401DF788 (-bPopPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1401DF7B0 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 *     ?bSearchAllSpans@?$FLOODBM@$0A@@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x14033312C (-bSearchAllSpans@-$FLOODBM@$0A@@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z.c)
 */

__int64 __fastcall FLOODBM<0>::bExtendScanline(int a1, STACKOBJ *a2, STACKOBJ *a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // r10
  int v8; // ebx
  __int64 v9; // r11
  __int64 v10; // r14
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rax
  int v14; // r15d
  int v15; // r13d
  int v16; // ebx
  int v17; // esi
  int v18; // ebx
  int v20; // [rsp+40h] [rbp-18h] BYREF
  int v21; // [rsp+44h] [rbp-14h] BYREF
  int v22; // [rsp+48h] [rbp-10h]
  STACKOBJ *v24; // [rsp+A8h] [rbp+50h]
  int v26; // [rsp+B8h] [rbp+60h] BYREF

  v24 = a2;
  v6 = *((_QWORD *)a2 + 1);
  v7 = *((_QWORD *)a3 + 2);
  v8 = a1;
  v9 = *((_QWORD *)a2 + 2);
  v10 = 0LL;
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v7 + 20) = *(_DWORD *)(v6 + 20);
  *(_DWORD *)(v9 + 20) = a4;
  v11 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL);
  if ( v11 && *(_DWORD *)(v11 + 20) == a4 )
    v10 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL);
  v12 = 1;
  v13 = 0LL;
  v22 = 0;
  if ( *(_DWORD *)(v6 + 16) )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(v6 + 8 * v13 + 28);
      v15 = *(_DWORD *)(v6 + 8 * v13 + 32);
      v26 = 0;
      v20 = 0;
      v12 = FLOODBM<0>::bSearchAllSpans(v8, v14, v15, (int)&v26, (__int64)&v20, a6, a2, v10);
      if ( !v12 )
        break;
      v16 = v26;
      v17 = v20;
      if ( v26 != v20 )
      {
        while ( 1 )
        {
          if ( v16 >= v14 - 1 )
            goto LABEL_15;
          v21 = v14 - 1;
          v12 &= FLOODBM<0>::bSearchAllSpans(a1, v16, v14 - 1, (int)&v26, (__int64)&v21, a5, a3, v6);
          if ( !v12 )
            return v12;
          v14 = v26;
          if ( v26 == v21 || v26 >= v16 - 1 )
          {
            do
            {
LABEL_15:
              if ( v17 <= v15 + 1 )
                break;
              v12 &= FLOODBM<0>::bSearchAllSpans(a1, v15 + 1, v17, (int)&v26, (__int64)&v20, a5, a3, v6);
              if ( !v12 )
                return v12;
              v15 = v20;
              if ( v26 == v20 || v20 <= v17 + 1 )
                break;
              v12 &= FLOODBM<0>::bSearchAllSpans(a1, v17 + 1, v20, (int)&v26, (__int64)&v20, a6, v24, v10);
              if ( !v12 )
                return v12;
              v17 = v20;
            }
            while ( v26 != v20 );
            break;
          }
          v21 = v16 - 1;
          v12 &= FLOODBM<0>::bSearchAllSpans(a1, v26, v16 - 1, (int)&v26, (__int64)&v21, a6, v24, v10);
          if ( !v12 )
            return v12;
          v16 = v26;
          if ( v26 == v21 )
            goto LABEL_15;
        }
      }
      v8 = a1;
      v13 = (unsigned int)(v22 + 1);
      v22 = v13;
      if ( (unsigned int)v13 >= *(_DWORD *)(v6 + 16) )
        goto LABEL_22;
      a2 = v24;
    }
  }
  else
  {
LABEL_22:
    v18 = STACKOBJ::bPushMergeScrScan(a3);
    v12 &= v18 & STACKOBJ::bPopPushMergeScrScan(v24);
  }
  return v12;
}
