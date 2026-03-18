/*
 * XREFs of ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1401C1BA4
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall ESTROBJ::vEudcOpaqueArea(ESTROBJ *this, struct _POINTFIX *a2, int a3)
{
  __int64 *v3; // r9
  int v4; // r10d
  int v5; // r12d
  int v6; // r13d
  int v7; // edi
  int v8; // esi
  int v9; // ebp
  __int64 v10; // r8
  int v11; // r14d
  __int64 v14; // r11
  _DWORD *v15; // rdx
  __int64 v16; // rax
  _DWORD *v17; // rax
  int v18; // r10d
  int v19; // r8d
  int v20; // r9d
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // r10d
  int v25; // edx
  int v26; // r9d
  int v27; // r11d
  int v28; // r8d
  int v29; // edx
  __int128 v30; // [rsp+20h] [rbp-48h] BYREF
  int v31; // [rsp+70h] [rbp+8h]
  __int64 v33; // [rsp+88h] [rbp+20h]

  v3 = (__int64 *)*((_QWORD *)this + 7);
  v4 = 0;
  v5 = 0;
  v31 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = *v3;
  v11 = 0;
  if ( *(_DWORD *)(*v3 + 848) + 4 <= 0 )
    return;
  v14 = -16LL;
  v15 = (_DWORD *)*v3;
  v33 = -16LL;
  do
  {
    switch ( v4 )
    {
      case 0:
        goto LABEL_9;
      case 1:
        if ( !*((_DWORD *)this + 62) )
          goto LABEL_9;
        v17 = *(_DWORD **)(v10 + 728);
        break;
      case 2:
        if ( !*((_DWORD *)this + 63) )
          goto LABEL_9;
        v17 = *(_DWORD **)(v10 + 736);
        break;
      case 3:
        if ( !*((_DWORD *)this + 64) )
          goto LABEL_9;
        v17 = *(_DWORD **)(v10 + 744);
        break;
      default:
        v16 = *((_QWORD *)this + 33);
        if ( !v16 || !*(_DWORD *)(v16 + v14) || !*(_QWORD *)(v10 + 752) )
          goto LABEL_9;
        v17 = *(_DWORD **)(*(_QWORD *)(*v3 + 752) + 8LL * (unsigned int)(v4 - 4));
        break;
    }
    if ( v17 )
    {
      v18 = *(_DWORD *)(v10 + 312) - v17[78];
      v19 = v17[77] - *(_DWORD *)(v10 + 308);
      if ( v19 + v18 )
      {
        v20 = 0;
        if ( v18 >= 0 )
          v20 = v18;
        if ( v19 > 0 )
          goto LABEL_29;
        v21 = 0;
        if ( v19 >= 0 )
          v21 = v19;
        v19 = v21;
        if ( v20 )
        {
LABEL_29:
          if ( v20 > v6 )
          {
            v6 = v20;
            v9 = v17[82] - v15[82];
            v11 = v17[83] - v15[83];
          }
          if ( v19 > v5 )
          {
            v5 = v19;
            v7 = v17[80] - v15[80];
            v8 = v17[81] - v15[81];
          }
        }
      }
    }
LABEL_9:
    *(_QWORD *)&v30 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v30);
    v4 = v31 + 1;
    v3 = (__int64 *)*((_QWORD *)this + 7);
    v14 = v33 + 4;
    v31 = v4;
    v33 += 4LL;
    v15 = (_DWORD *)*v3;
    v10 = *v3;
  }
  while ( v4 < *(_DWORD *)(*v3 + 848) + 4 );
  if ( !v5 && !v6 )
    return;
  v30 = *(_OWORD *)((char *)this + 12);
  if ( v7 < v9 )
  {
    v23 = v7 >> 4;
    goto LABEL_37;
  }
  v22 = v7;
  v23 = v9 >> 4;
  if ( v7 <= v9 )
LABEL_37:
    v22 = v9;
  if ( v8 < v11 )
  {
    v25 = v8 >> 4;
    goto LABEL_42;
  }
  v24 = v8;
  v25 = v11 >> 4;
  if ( v8 <= v11 )
LABEL_42:
    v24 = v11;
  v26 = ((v22 + 15) >> 4) + DWORD2(v30);
  v27 = v23 + v30;
  v28 = v25 + DWORD1(v30);
  v29 = HIDWORD(v30) + ((v24 + 15) >> 4);
  if ( v28 < *((_DWORD *)this + 4) )
    *((_DWORD *)this + 4) = v28;
  if ( v29 > *((_DWORD *)this + 6) )
    *((_DWORD *)this + 6) = v29;
  if ( v27 < *((_DWORD *)this + 3) )
    *((_DWORD *)this + 3) = v27;
  if ( v26 > *((_DWORD *)this + 5) )
    *((_DWORD *)this + 5) = v26;
  if ( a3 )
  {
    if ( v5 )
    {
      a2->x += v7;
      a2->y += v8;
      a2[1].x += v7;
      a2[1].y += v8;
    }
    if ( v6 )
    {
      a2[2].x += v9;
      a2[2].y += v11;
      a2[3].x += v9;
      a2[3].y += v11;
    }
  }
}
