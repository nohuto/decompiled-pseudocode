/*
 * XREFs of ?vNextPoint@LINER@pathwide@@AEAAXXZ @ 0x140109714
 * Callers:
 *     ?vNextEvent@LINER@pathwide@@QEAAXXZ @ 0x14010959C (-vNextEvent@LINER@pathwide@@QEAAXXZ.c)
 * Callees:
 *     ?vInit@BEZIER@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z @ 0x140107E88 (-vInit@BEZIER@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z.c)
 *     ?bNextPoint@READER@pathwide@@IEAAHAEAU_POINTFIX@@@Z @ 0x140107F04 (-bNextPoint@READER@pathwide@@IEAAHAEAU_POINTFIX@@@Z.c)
 *     ?bNext@BEZIER@@QEAAHPEAU_POINTFIX@@@Z @ 0x140108390 (-bNext@BEZIER@@QEAAHPEAU_POINTFIX@@@Z.c)
 *     ?bNextFigure@READER@pathwide@@IEAAHXZ @ 0x14010A090 (-bNextFigure@READER@pathwide@@IEAAHXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall pathwide::LINER::vNextPoint(pathwide::LINER *this)
{
  __int64 v2; // rax
  int v3; // edx
  int v4; // r8d
  __int64 *v5; // rsi
  __int64 *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int *v13; // rbx
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // edx
  __int64 *v18; // rcx
  struct _RECTFX *v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // r8d
  __int64 v24; // rax
  __int64 v25; // xmm1_8
  struct _POINTFIX v26; // [rsp+20h] [rbp-30h] BYREF
  __int64 v27; // [rsp+28h] [rbp-28h]
  struct _POINTFIX v28; // [rsp+30h] [rbp-20h] BYREF
  struct _POINTFIX v29; // [rsp+38h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( *((pathwide::LINER **)this + 88) == (pathwide::LINER *)((char *)this + 328) )
    v2 = 88LL;
  v3 = *((_DWORD *)this + 126);
  *((_QWORD *)this + 89) = (char *)this + v2 + 328;
  if ( !v3 )
  {
    v11 = 3;
    goto LABEL_11;
  }
  if ( v3 == 1 )
  {
    *((_DWORD *)this + 126) = 0;
    v11 = 0;
LABEL_11:
    *((_DWORD *)this + 172) = v11;
    v5 = (__int64 *)((char *)this + 224);
    v6 = (__int64 *)*((_QWORD *)this + 3);
    if ( (unsigned __int64)v6 >= *((_QWORD *)this + 4) )
    {
      v12 = *((_DWORD *)this + 2);
      if ( (v12 & 2) != 0 )
      {
        *((_DWORD *)this + 126) = 2;
        *v5 = *((_QWORD *)this + 29);
        if ( (v12 & 8) == 0 )
        {
          *((_DWORD *)this + 172) = 1;
          return;
        }
        *((_DWORD *)this + 172) = 3;
        goto LABEL_14;
      }
      v16 = EPATHOBJ::bEnum(*(EPATHOBJ **)this, (struct _PATHDATA *)((char *)this + 8));
      v17 = *((_DWORD *)this + 10) | 1;
      if ( !v16 )
        v17 = *((_DWORD *)this + 10) & 0xFFFFFFFE;
      v18 = (__int64 *)*((_QWORD *)this + 2);
      *((_DWORD *)this + 10) = v17;
      *v5 = *v18;
      *((_QWORD *)this + 3) = v18 + 1;
      v8 = *((_DWORD *)this + 2);
      *((_QWORD *)this + 4) = &v18[*((unsigned int *)this + 3)];
    }
    else
    {
      v7 = *v6;
      *((_QWORD *)this + 3) = v6 + 1;
      *v5 = v7;
      v8 = *((_DWORD *)this + 2);
    }
    if ( (v8 & 0x10) != 0 )
    {
      v26 = *(struct _POINTFIX *)((char *)this + 692);
      v27 = *v5;
      pathwide::READER::bNextPoint(this, &v28);
      pathwide::READER::bNextPoint(this, &v29);
      BEZIER::vInit((pathwide::LINER *)((char *)this + 48), &v26, v19, gpeqErrorLow);
      v20 = BEZIER::bNext((pathwide::LINER *)((char *)this + 48), (struct _POINTFIX *)this + 28);
      v21 = *((_QWORD *)this + 89);
      *(_DWORD *)v21 = 0;
      v22 = *(_DWORD *)v5;
      *(_DWORD *)(v21 + 40) = *(_DWORD *)v5;
      v23 = *((_DWORD *)this + 57);
      *(_DWORD *)(v21 + 44) = v23;
      *(_DWORD *)(v21 + 40) = v22 - *((_DWORD *)this + 173);
      *(_DWORD *)(v21 + 44) = v23 - *((_DWORD *)this + 174);
      *(_QWORD *)(v21 + 48) = *(_QWORD *)(v21 + 40);
      if ( v20 )
      {
        v24 = *((_QWORD *)this + 89);
        *(_OWORD *)((char *)this + 600) = *(_OWORD *)v24;
        *(_OWORD *)((char *)this + 616) = *(_OWORD *)(v24 + 16);
        *(_OWORD *)((char *)this + 632) = *(_OWORD *)(v24 + 32);
        *(_OWORD *)((char *)this + 648) = *(_OWORD *)(v24 + 48);
        *(_OWORD *)((char *)this + 664) = *(_OWORD *)(v24 + 64);
        v25 = *(_QWORD *)(v24 + 80);
        LODWORD(v24) = v27 - v26.x;
        *((_QWORD *)this + 85) = v25;
        *((_DWORD *)this + 162) = v24;
        *((_DWORD *)this + 163) = HIDWORD(v27) - v26.y;
        LODWORD(v24) = v29.x - v28.x;
        *((_DWORD *)this + 128) = 0;
        *((_DWORD *)this + 138) = v24;
        *((_DWORD *)this + 139) = v29.y - v28.y;
        *((_QWORD *)this + 70) = *((_QWORD *)this + 69);
        *((_QWORD *)this + 89) = (char *)this + 600;
        *((_DWORD *)this + 126) = 3;
      }
      else
      {
        *((_DWORD *)this + 126) = 0;
      }
      return;
    }
LABEL_14:
    v9 = *((_QWORD *)this + 89);
    *(_DWORD *)v9 = 0;
    v10 = *((_DWORD *)this + 56);
    *(_DWORD *)(v9 + 40) = v10;
    *(_DWORD *)(v9 + 44) = *((_DWORD *)this + 57);
    *(_DWORD *)(v9 + 40) = v10 - *((_DWORD *)this + 173);
    *(_DWORD *)(v9 + 44) -= *((_DWORD *)this + 174);
    *(_QWORD *)(v9 + 48) = *(_QWORD *)(v9 + 40);
    return;
  }
  if ( v3 != 2 )
  {
    if ( v3 == 3 )
    {
      v13 = (int *)((char *)this + 224);
      *((_DWORD *)this + 172) = 4;
      if ( !BEZIER::bNext((pathwide::LINER *)((char *)this + 48), (struct _POINTFIX *)this + 28) )
      {
        v14 = *((_QWORD *)this + 89);
        *((_DWORD *)this + 126) = 0;
        *(_DWORD *)v14 = 0;
        v15 = *v13;
        *(_DWORD *)(v14 + 40) = *v13;
        *(_DWORD *)(v14 + 44) = *((_DWORD *)this + 57);
        *(_DWORD *)(v14 + 40) = v15 - *((_DWORD *)this + 173);
        *(_DWORD *)(v14 + 44) -= *((_DWORD *)this + 174);
        *(_QWORD *)(v14 + 48) = *(_QWORD *)(v14 + 40);
        *(_QWORD *)(*((_QWORD *)this + 89) + 48LL) = *((_QWORD *)this + 70);
        return;
      }
    }
    else if ( v3 == 4 )
    {
      *((_DWORD *)this + 172) = 9;
      return;
    }
    goto LABEL_14;
  }
  *((_DWORD *)this + 172) = (*((_DWORD *)this + 2) & 8) != 0 ? 2 : 8;
  *((_QWORD *)this + 89) = (char *)this + 240;
  if ( (unsigned int)pathwide::READER::bNextFigure(this) )
  {
    pathwide::READER::bNextPoint(this, (struct _POINTFIX *)this + 28);
    v4 = 1;
    *((_QWORD *)this + 29) = *((_QWORD *)this + 28);
  }
  else
  {
    v4 = 4;
  }
  *((_DWORD *)this + 126) = v4;
}
