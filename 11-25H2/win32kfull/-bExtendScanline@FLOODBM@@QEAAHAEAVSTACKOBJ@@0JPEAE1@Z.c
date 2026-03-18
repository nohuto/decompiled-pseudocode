/*
 * XREFs of ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x14016061C
 * Callers:
 *     NtGdiExtFloodFill @ 0x14015F420 (NtGdiExtFloodFill.c)
 * Callees:
 *     ?bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x14015F1D4 (-bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z.c)
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1401608A4 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall FLOODBM::bExtendScanline(
        FLOODBM *this,
        struct STACKOBJ *a2,
        struct STACKOBJ *a3,
        int a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6)
{
  __int64 v6; // r10
  FLOODBM *v8; // rsi
  char *v9; // rdx
  struct SCANLINE *v10; // r15
  __int64 v11; // r11
  struct SCANLINE *v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // rax
  int v16; // r13d
  int v17; // r12d
  int v18; // esi
  int v19; // r14d
  __int64 v20; // rcx
  int v21; // ebx
  int v23; // [rsp+40h] [rbp-18h] BYREF
  int v24; // [rsp+44h] [rbp-14h]
  struct SCANLINE *v25; // [rsp+48h] [rbp-10h]
  int v27; // [rsp+A8h] [rbp+50h] BYREF
  STACKOBJ *v28; // [rsp+B0h] [rbp+58h]
  int v29; // [rsp+B8h] [rbp+60h] BYREF

  v28 = a3;
  v6 = *((_QWORD *)a3 + 2);
  v8 = this;
  v9 = (char *)a2 + 8;
  v10 = 0LL;
  v11 = *((_QWORD *)a2 + 2);
  v12 = *(struct SCANLINE **)v9;
  *(_DWORD *)(v6 + 16) = 0;
  v25 = v12;
  *(_DWORD *)(v11 + 16) = 0;
  *(_DWORD *)(v6 + 20) = *((_DWORD *)v12 + 5);
  *(_DWORD *)(v11 + 20) = a4;
  v13 = *(_QWORD *)(*(_QWORD *)v9 + 8LL);
  if ( v13 && *(_DWORD *)(v13 + 20) == a4 )
    v10 = *(struct SCANLINE **)(*(_QWORD *)v9 + 8LL);
  v14 = 1;
  v15 = 0LL;
  v24 = 0;
  if ( *((_DWORD *)v12 + 4) )
  {
    while ( 1 )
    {
      v16 = *((_DWORD *)v12 + 2 * v15 + 7);
      v17 = *((_DWORD *)v12 + 2 * v15 + 8);
      v29 = 0;
      v27 = 0;
      v14 = FLOODBM::bSearchAllSpans(v8, v16, v17, &v29, &v27, a6, a2, v10);
      if ( !v14 )
        break;
      v18 = v29;
      v19 = v27;
      if ( v29 != v27 )
      {
        while ( 1 )
        {
          if ( v18 >= v16 - 1 )
            goto LABEL_8;
          v23 = v16 - 1;
          v14 &= FLOODBM::bSearchAllSpans(this, v18, v16 - 1, &v29, &v23, a5, v28, v25);
          if ( !v14 )
            return v14;
          v16 = v29;
          if ( v29 == v23 || v29 >= v18 - 1 )
          {
            do
            {
LABEL_8:
              if ( v19 <= v17 + 1 )
                break;
              v14 &= FLOODBM::bSearchAllSpans(this, v17 + 1, v19, &v29, &v27, a5, v28, v25);
              if ( !v14 )
                return v14;
              v17 = v27;
              if ( v29 == v27 || v27 <= v19 + 1 )
                break;
              v14 &= FLOODBM::bSearchAllSpans(this, v19 + 1, v27, &v29, &v27, a6, a2, v10);
              if ( !v14 )
                return v14;
              v19 = v27;
            }
            while ( v29 != v27 );
            break;
          }
          v23 = v18 - 1;
          v14 &= FLOODBM::bSearchAllSpans(this, v29, v18 - 1, &v29, &v23, a6, a2, v10);
          if ( !v14 )
            return v14;
          v18 = v29;
          if ( v29 == v23 )
            goto LABEL_8;
        }
      }
      v12 = v25;
      v15 = (unsigned int)(v24 + 1);
      v8 = this;
      v24 = v15;
      if ( (unsigned int)v15 >= *((_DWORD *)v25 + 4) )
      {
        v9 = (char *)a2 + 8;
        goto LABEL_11;
      }
    }
  }
  else
  {
LABEL_11:
    v20 = *((_QWORD *)a2 + 1);
    *((_DWORD *)a2 + 1) -= *(_DWORD *)v20;
    *(_QWORD *)v9 = *(_QWORD *)(v20 + 8);
    v21 = STACKOBJ::bPushMergeScrScan(a2);
    v14 &= v21 & STACKOBJ::bPushMergeScrScan(v28);
  }
  return v14;
}
