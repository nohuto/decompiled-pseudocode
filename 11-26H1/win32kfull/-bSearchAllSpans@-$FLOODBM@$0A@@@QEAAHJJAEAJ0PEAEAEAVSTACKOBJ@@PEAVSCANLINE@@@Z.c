/*
 * XREFs of ?bSearchAllSpans@?$FLOODBM@$0A@@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x14033312C
 * Callers:
 *     ?bExtendScanline@?$FLOODBM@$0A@@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x140332ED0 (-bExtendScanline@-$FLOODBM@$0A@@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 * Callees:
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x14026A0D0 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?iColorGet@?$FLOODBM@$0A@@@QEAAKJ@Z @ 0x140333340 (-iColorGet@-$FLOODBM@$0A@@@QEAAKJ@Z.c)
 *     ?vFindExtent@?$FLOODBM@$0A@@@QEAAXJAEAJ0@Z @ 0x140333438 (-vFindExtent@-$FLOODBM@$0A@@@QEAAXJAEAJ0@Z.c)
 */

__int64 __fastcall FLOODBM<0>::bSearchAllSpans(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        __int64 a6,
        STACKOBJ *a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  int v10; // edi
  unsigned int *v12; // rsi
  __int64 v13; // r12
  unsigned int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  int *v20; // rax
  unsigned int v21; // edx
  int v22; // eax
  unsigned int *v23; // r8
  __int64 v24; // rax
  unsigned int v25; // r8d
  unsigned int v27; // edx
  unsigned int v28; // r11d
  unsigned int *v29; // r9
  signed int v30; // r10d
  int *v31; // rdi
  int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // r8
  _DWORD *v35; // [rsp+68h] [rbp+20h]

  v35 = a4;
  v8 = 0;
  v10 = a2;
  v12 = (unsigned int *)*((_QWORD *)a7 + 2);
  v13 = v12[4];
  *(_QWORD *)(a1 + 24) = a6;
  v14 = 8 * v13 + 28;
  if ( a2 < a3 )
  {
    while ( 1 )
    {
      v15 = (unsigned int)v10;
      v16 = a1;
      if ( *(_DWORD *)(a1 + 32) )
      {
        while ( (unsigned int)FLOODBM<0>::iColorGet(v16, v15) != *(_DWORD *)(a1 + 20) )
        {
          v17 = ++v10 == a3;
          if ( v10 >= a3 )
            goto LABEL_12;
          v15 = (unsigned int)v10;
          v16 = a1;
        }
      }
      else
      {
        while ( (unsigned int)FLOODBM<0>::iColorGet(v16, v15) == *(_DWORD *)(a1 + 20) )
        {
          v17 = ++v10 == a3;
          if ( v10 >= a3 )
            goto LABEL_12;
          v15 = (unsigned int)v10;
          v16 = a1;
        }
      }
      v17 = v10 == a3;
LABEL_12:
      if ( v17 )
      {
LABEL_28:
        a4 = v35;
        break;
      }
      if ( a8 )
      {
        v18 = *(_DWORD *)(a8 + 16);
        v19 = 0;
        if ( v18 )
        {
          v20 = (int *)(a8 + 32);
          while ( v10 >= *(v20 - 1) )
          {
            if ( v10 < *v20 )
            {
              v10 = *v20;
              goto LABEL_27;
            }
            ++v19;
            v20 += 2;
            if ( v19 >= v18 )
              break;
          }
        }
      }
      v21 = v12[4];
      v22 = 0;
      if ( v21 )
      {
        while ( v10 < (int)v12[2 * v22 + 7] || v10 >= (int)v12[2 * v22 + 8] )
        {
          if ( ++v22 >= v21 )
            goto LABEL_23;
        }
        v10 = v12[2 * v22 + 8];
      }
      else
      {
LABEL_23:
        v14 += 8;
        if ( v14 > *v12 )
        {
          if ( !(unsigned int)STACKOBJ::bExpandScanline(a7, v14, 0LL) )
            return 0LL;
          v12 = (unsigned int *)*((_QWORD *)a7 + 2);
        }
        v23 = &v12[2 * v12[4] + 7];
        FLOODBM<0>::vFindExtent(a1, (unsigned int)v10, v23, v23 + 1);
        v24 = v12[4];
        v10 = v12[2 * v24 + 8] + 1;
        v12[4] = v24 + 1;
      }
LABEL_27:
      if ( v10 >= a3 )
        goto LABEL_28;
    }
  }
  v25 = v12[4];
  if ( (_DWORD)v13 == v25 )
  {
    *a5 = 0;
    *a4 = 0;
  }
  else
  {
    *a4 = v12[2 * v13 + 7];
    *a5 = v12[2 * v25 + 6];
    if ( v25 != 1 )
    {
      do
      {
        v27 = v8;
        v28 = v8;
        v29 = &v12[2 * v8];
        v30 = v29[7];
        if ( v8 < v25 )
        {
          v31 = (int *)(v29 + 7);
          do
          {
            v32 = *v31;
            v33 = v28;
            v31 += 2;
            if ( v32 >= v30 )
              v33 = v27;
            ++v28;
            v27 = v33;
            if ( v32 >= v30 )
              v32 = v30;
            v30 = v32;
          }
          while ( v28 < v25 );
          if ( v8 != (_DWORD)v33 )
          {
            v34 = *(_QWORD *)(v29 + 7);
            *(_QWORD *)(v29 + 7) = *(_QWORD *)&v12[2 * v33 + 7];
            *(_QWORD *)&v12[2 * v33 + 7] = v34;
          }
        }
        v25 = v12[4];
        ++v8;
      }
      while ( v8 < v25 - 1 );
    }
  }
  return 1LL;
}
