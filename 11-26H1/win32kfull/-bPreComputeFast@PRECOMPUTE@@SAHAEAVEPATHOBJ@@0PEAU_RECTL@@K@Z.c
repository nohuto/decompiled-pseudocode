/*
 * XREFs of ?bPreComputeFast@PRECOMPUTE@@SAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x14033DA84
 * Callers:
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400A2640 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 * Callees:
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ?bAddPreComputedFastFillRects@PRECOMPUTE@@SAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x14033D88C (-bAddPreComputedFastFillRects@PRECOMPUTE@@SAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@SAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x14033D988 (-bAddPreComputedFastStrokeRects@PRECOMPUTE@@SAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall PRECOMPUTE::bPreComputeFast(struct EPATHOBJ *a1, struct EPATHOBJ *a2, struct _RECTL *a3, char a4)
{
  __int64 v6; // r8
  _BYTE *v7; // r12
  unsigned int v8; // ebx
  unsigned __int64 v9; // rcx
  struct _RECTL *v10; // r15
  unsigned int v11; // r14d
  __int128 *v12; // r9
  __int128 v13; // xmm0
  int v14; // esi
  _QWORD *v15; // rdi
  unsigned int v16; // r13d
  __int64 v17; // rax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  LONG v21; // edx
  LONG v22; // ecx
  int v23; // eax
  _BYTE *v25; // [rsp+20h] [rbp-E0h]
  int v27; // [rsp+2Ch] [rbp-D4h]
  __int128 v29; // [rsp+38h] [rbp-C8h]
  _QWORD v31[8]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v32[8]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v33; // [rsp+D0h] [rbp-30h] BYREF
  struct _RECTL v34; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v35[1280]; // [rsp+220h] [rbp+120h] BYREF

  memset_0(v31, 0, sizeof(v31));
  memset_0(v32, 0, sizeof(v32));
  if ( *((_DWORD *)a1 + 1) > 0x14u )
  {
    v9 = (unsigned __int64)*((unsigned int *)a1 + 1) << 6;
    if ( v9 > 0xFFFFFFFF )
      return 0LL;
    v8 = 0;
    v25 = (_BYTE *)PALLOCNOZ(v9, 1734632775LL, v6);
    v7 = v25;
    if ( !v25 )
      return 0LL;
    v27 = 1;
  }
  else
  {
    v7 = v35;
    v8 = 0;
    v25 = v35;
    v27 = 0;
  }
  v10 = &v34;
  v11 = 0;
  v29 = 0LL;
  v33 = 0LL;
  if ( a3 )
  {
    v12 = &v33;
    v13 = (__int128)*a3;
    DWORD1(v33) = 16 * a3->top;
    HIDWORD(v33) = 16 * a3->bottom;
    v29 = v13;
  }
  else
  {
    v12 = 0LL;
  }
  if ( (unsigned int)bConstructGET(a1, v32, v7, v12) )
  {
    v15 = v31;
    *(_QWORD *)((char *)&v31[1] + 4) = 0x7FFFFFFFLL;
    v31[0] = v31;
    v14 = 0;
    v16 = 0x80000000;
LABEL_12:
    if ( v15 == v31 || (vAdvanceAETEdges(v31), v15 = (_QWORD *)v31[0], (_QWORD *)v31[0] == v31) )
    {
      v17 = v32[0];
      if ( (_QWORD *)v32[0] == v32 )
      {
        if ( v11 )
        {
          if ( (a4 & 2) != 0 )
          {
            LOBYTE(v14) = (unsigned int)PRECOMPUTE::bAddPreComputedFastStrokeRects(a2, &v34, v11) == 0;
          }
          else if ( !(unsigned int)PRECOMPUTE::bAddPreComputedFastFillRects(a2, &v34, v11) )
          {
            v14 = 1;
          }
        }
LABEL_50:
        v7 = v25;
        goto LABEL_51;
      }
      v16 = *(_DWORD *)(v32[0] + 16LL);
    }
    else
    {
      if ( *(_QWORD **)v31[0] != v31 )
      {
        vXSortAETEdges(v31);
        v15 = (_QWORD *)v31[0];
      }
      v17 = v32[0];
    }
    if ( *(_DWORD *)(v17 + 16) == v16 )
    {
      vMoveNewEdges(v32, v31, v16);
      v15 = (_QWORD *)v31[0];
    }
    while ( 1 )
    {
      v18 = *((_DWORD *)v15 + 3);
      if ( (a4 & 2) != 0 )
      {
        v19 = *((_DWORD *)v15 + 14);
        do
        {
          v15 = (_QWORD *)*v15;
          v19 += *((_DWORD *)v15 + 14);
        }
        while ( v19 );
      }
      else
      {
        v15 = (_QWORD *)*v15;
      }
      v20 = *((_DWORD *)v15 + 3);
      if ( v18 >= v20 )
        goto LABEL_42;
      v10->top = v16;
      if ( !a3 )
        break;
      v21 = v29;
      if ( v18 >= (int)v29 )
        v21 = v18;
      v22 = DWORD2(v29);
      v10->left = v21;
      if ( v20 <= SDWORD2(v29) )
        v22 = v20;
      v10->bottom = v16 + 1;
      v10->right = v22;
      if ( v21 < v22 )
        goto LABEL_35;
LABEL_36:
      if ( v11 == 20 )
      {
        if ( (a4 & 2) != 0 )
          v23 = PRECOMPUTE::bAddPreComputedFastStrokeRects(a2, &v34, 20LL);
        else
          v23 = PRECOMPUTE::bAddPreComputedFastFillRects(a2, &v34, 20LL);
        if ( !v23 )
        {
          v14 = 1;
          goto LABEL_50;
        }
        v10 = &v34;
        v11 = 0;
      }
LABEL_42:
      v15 = (_QWORD *)*v15;
      if ( v15 == v31 )
      {
        v15 = (_QWORD *)v31[0];
        ++v16;
        goto LABEL_12;
      }
    }
    v10->right = v20;
    v10->bottom = v16 + 1;
    v10->left = v18;
LABEL_35:
    ++v11;
    ++v10;
    goto LABEL_36;
  }
  v14 = 1;
LABEL_51:
  if ( v27 )
    Win32FreePool(v7);
  LOBYTE(v8) = v14 == 0;
  return v8;
}
