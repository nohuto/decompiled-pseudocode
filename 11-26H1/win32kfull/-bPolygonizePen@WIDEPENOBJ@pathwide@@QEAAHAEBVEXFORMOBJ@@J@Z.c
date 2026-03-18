/*
 * XREFs of ?bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z @ 0x14010A140
 * Callers:
 *     ??0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x140109C68 (--0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140107558 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?bPenFlatten@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z @ 0x140107C90 (-bPenFlatten@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?bTurnLeftRandom@pathwide@@YAHPEAVEVECTORFX@@0@Z @ 0x1401086AC (-bTurnLeftRandom@pathwide@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?bBeginFigure@WIDEPATHOBJ@pathwide@@QEAAHXZ @ 0x140109AD8 (-bBeginFigure@WIDEPATHOBJ@pathwide@@QEAAHXZ.c)
 *     ?vEndFigure@WIDEPATHOBJ@pathwide@@QEAAXXZ @ 0x140109C18 (-vEndFigure@WIDEPATHOBJ@pathwide@@QEAAXXZ.c)
 *     ?bThicken@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z @ 0x14010B334 (-bThicken@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ @ 0x14010B9CC (-bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ.c)
 *     ?vHalve@pathwide@@YAXAEAVEVECTORFX@@@Z @ 0x14010C2E0 (-vHalve@pathwide@@YAXAEAVEVECTORFX@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall pathwide::WIDEPENOBJ::bPolygonizePen(pathwide::WIDEPENOBJ *this, const struct EXFORMOBJ *a2, int a3)
{
  int v4; // eax
  int v5; // r8d
  int v6; // eax
  bool v7; // sf
  int v8; // eax
  const struct _POINTFIX **v9; // rbx
  unsigned int *v10; // rdi
  const struct _POINTFIX *v11; // rbx
  const struct _POINTFIX *v12; // rdi
  struct _POINTFIX *v13; // rcx
  const struct _POINTFIX *v14; // rax
  struct EVECTORFX *v16; // r8
  struct EVECTORFX *v17; // rdx
  struct EVECTORFX *v18; // rdx
  int v19; // ebx
  int v20; // r11d
  int v21; // r10d
  int v22; // r9d
  __int128 v23; // [rsp+30h] [rbp-50h] BYREF
  struct _POINTFIX v24; // [rsp+40h] [rbp-40h] BYREF
  int v25; // [rsp+48h] [rbp-38h]
  int v26; // [rsp+4Ch] [rbp-34h]
  int v27; // [rsp+50h] [rbp-30h]
  int v28; // [rsp+54h] [rbp-2Ch]
  __int64 v29; // [rsp+58h] [rbp-28h]
  int v30; // [rsp+60h] [rbp-20h]
  int v31; // [rsp+64h] [rbp-1Ch]
  int v32; // [rsp+68h] [rbp-18h]
  int v33; // [rsp+6Ch] [rbp-14h]
  int v34; // [rsp+70h] [rbp-10h]
  int v35; // [rsp+74h] [rbp-Ch]

  LODWORD(v23) = a3;
  *(_QWORD *)((char *)&v23 + 4) = 0LL;
  HIDWORD(v23) = -a3;
  EXFORMOBJ::bXform(a2, (const struct _VECTORL *)&v23, (struct _VECTORFX *)&v23, 2uLL, 0);
  if ( (_QWORD)v23 == __PAIR64__(-DWORD2(v23), HIDWORD(v23)) || (_QWORD)v23 == __PAIR64__(DWORD2(v23), -HIDWORD(v23)) )
  {
    v4 = v23;
    if ( (int)v23 < 0 )
      v4 = -(int)v23;
    v5 = DWORD1(v23);
    if ( SDWORD1(v23) < 0 )
      v5 = -DWORD1(v23);
    if ( v4 <= v5 )
    {
      v6 = DWORD1(v23);
      v7 = SDWORD1(v23) < 0;
    }
    else
    {
      v6 = v23;
      v7 = (int)v23 < 0;
    }
    if ( v7 )
      v6 = -v6;
    if ( v6 < 104 )
    {
      v8 = DWORD1(v23) * DWORD1(v23) + v23 * v23;
      if ( v8 < 10816 )
      {
        if ( v8 < 576 )
        {
          v9 = (const struct _POINTFIX **)&off_140358B70;
          v10 = (unsigned int *)&unk_140358B78;
        }
        else if ( v8 >= 1600 )
        {
          if ( v8 < 3136 )
          {
            v9 = (const struct _POINTFIX **)&off_140358B90;
            v10 = (unsigned int *)&unk_140358B98;
          }
          else if ( v8 >= 5184 )
          {
            if ( v8 < 7744 )
            {
              v9 = (const struct _POINTFIX **)&off_140358BB0;
              v10 = (unsigned int *)&unk_140358BB8;
            }
            else
            {
              v9 = (const struct _POINTFIX **)&off_140358BC0;
              v10 = (unsigned int *)&unk_140358BC8;
            }
          }
          else
          {
            v9 = (const struct _POINTFIX **)&off_140358BA0;
            v10 = (unsigned int *)&unk_140358BA8;
          }
        }
        else
        {
          v9 = (const struct _POINTFIX **)&off_140358B80;
          v10 = (unsigned int *)&unk_140358B88;
        }
        if ( (unsigned int)pathwide::WIDEPATHOBJ::bBeginFigure(this) )
        {
          v11 = *v9;
          v12 = &v11[*v10];
          while ( v11 < v12 )
          {
            v13 = (struct _POINTFIX *)*((_QWORD *)this + 16);
            v14 = v11++;
            if ( (unsigned __int64)v13 >= *((_QWORD *)this + 17) )
            {
              pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(this, v14, 0LL, 0);
            }
            else
            {
              *v13 = *v14;
              *((_QWORD *)this + 16) += 8LL;
            }
          }
          pathwide::WIDEPATHOBJ::vEndFigure(this);
          *((_DWORD *)this + 38) = 1;
          return 1LL;
        }
      }
      if ( !(unsigned int)pathwide::WIDEPATHOBJ::bValid(this) )
        return 0LL;
    }
  }
  if ( (unsigned int)pathwide::WIDEPENOBJ::bThicken(this, (struct _POINTFIX *)&v23) )
    return 1LL;
  if ( !(unsigned int)pathwide::WIDEPATHOBJ::bValid(this) )
    return 0LL;
  if ( !pathwide::bTurnLeftRandom((pathwide *)&v23, (struct EVECTORFX *)((char *)&v23 + 8), v16) )
  {
    DWORD2(v23) = -DWORD2(v23);
    HIDWORD(v23) = -HIDWORD(v23);
  }
  pathwide::vHalve((pathwide *)&v23, v17);
  pathwide::vHalve((pathwide *)((char *)&v23 + 8), v18);
  v19 = v23 - ((unsigned __int64)(1922922357LL * (int)v23) >> 32);
  v20 = DWORD1(v23) - ((unsigned __int64)(1922922357LL * SDWORD1(v23)) >> 32);
  v35 = -DWORD1(v23);
  v31 = HIDWORD(v23) - v20;
  v28 = v20 + HIDWORD(v23);
  v29 = *((_QWORD *)&v23 + 1);
  v21 = DWORD2(v23) - ((unsigned __int64)(1922922357LL * SDWORD2(v23)) >> 32);
  v24 = (struct _POINTFIX)v23;
  v22 = HIDWORD(v23) - ((unsigned __int64)(1922922357LL * SHIDWORD(v23)) >> 32);
  v26 = v22 + DWORD1(v23);
  v34 = -(int)v23;
  v33 = v22 - DWORD1(v23);
  v32 = v21 - v23;
  v30 = DWORD2(v23) - v19;
  v27 = v19 + DWORD2(v23);
  v25 = v21 + v23;
  return pathwide::WIDEPENOBJ::bPenFlatten((struct _POINTFIX **)this, &v24);
}
