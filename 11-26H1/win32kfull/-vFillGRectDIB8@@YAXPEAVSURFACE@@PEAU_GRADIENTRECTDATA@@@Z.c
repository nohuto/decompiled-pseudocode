/*
 * XREFs of ?vFillGRectDIB8@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x14033EFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1401573AC (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vFillGRectDIB8(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // rdi
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  int v5; // r14d
  char *v6; // r15
  __int64 v7; // rbp
  unsigned __int8 *v8; // r12
  char *v9; // rsi
  __int64 v10; // r13
  unsigned __int8 *v11; // rbx
  int v12; // ecx
  __int64 v13; // r10
  _BYTE *v14; // r10
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // r11
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r9
  _BYTE *v25; // rbp
  __int64 v26; // rsi
  int v27; // ebx
  __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // r11
  __int64 v31; // r8
  unsigned __int64 v32; // r8
  char *v33; // [rsp+20h] [rbp-D8h]
  int v34; // [rsp+28h] [rbp-D0h]
  int v35; // [rsp+2Ch] [rbp-CCh]
  int v36; // [rsp+30h] [rbp-C8h]
  __int64 v37; // [rsp+38h] [rbp-C0h]
  __int64 v38; // [rsp+40h] [rbp-B8h]
  __int64 v39; // [rsp+48h] [rbp-B0h]
  __int64 v40; // [rsp+50h] [rbp-A8h]
  __int64 v41; // [rsp+58h] [rbp-A0h]
  __int64 v42; // [rsp+60h] [rbp-98h]
  __int64 v43; // [rsp+68h] [rbp-90h]
  __int64 v44; // [rsp+70h] [rbp-88h]
  __int64 v45; // [rsp+78h] [rbp-80h]
  __int64 v46; // [rsp+80h] [rbp-78h]
  __int64 v47; // [rsp+88h] [rbp-70h]
  __int64 v48; // [rsp+90h] [rbp-68h]
  __int64 v49; // [rsp+98h] [rbp-60h]
  char *v50; // [rsp+A0h] [rbp-58h]
  unsigned __int8 *Xlate555; // [rsp+A8h] [rbp-50h]
  struct Gre::Base::SESSION_GLOBALS *v52; // [rsp+100h] [rbp+8h]
  unsigned int v53; // [rsp+100h] [rbp+8h]
  int v55; // [rsp+110h] [rbp+18h]
  int v56; // [rsp+118h] [rbp+20h]

  v2 = a2;
  v4 = Gre::Base::Globals(a1);
  v5 = *((_DWORD *)v2 + 9);
  v6 = (char *)&unk_1403711B0;
  v7 = *((_QWORD *)v2 + 20);
  v8 = byte_140371630;
  v9 = (char *)&unk_1403712F0;
  v52 = v4;
  v36 = *((_DWORD *)a1 + 22);
  v43 = *((_QWORD *)v2 + 14);
  v44 = *((_QWORD *)v2 + 15);
  v45 = *((_QWORD *)v2 + 16);
  v47 = *((_QWORD *)v2 + 10);
  v48 = *((_QWORD *)v2 + 11);
  v56 = v5 + *((_DWORD *)v2 + 11);
  v49 = *((_QWORD *)v2 + 12);
  v10 = *((_QWORD *)a1 + 10) + v36 * v5;
  v11 = (unsigned __int8 *)&unk_1403714B0;
  v55 = v5;
  v46 = v10;
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 56) + 24LL) & 0x100000) == 0 )
    v11 = byte_140371630;
  v33 = (char *)&unk_1403711B0;
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 56) + 24LL) & 0x100000) == 0 )
    v9 = (char *)&unk_1403711B0;
  Xlate555 = XLATEOBJ_pGetXlate555(*((struct _XLATEOBJ **)v2 + 20));
  if ( Xlate555 )
  {
    v12 = *(_DWORD *)(v7 + 76);
    if ( (v12 & 0x800) != 0 )
    {
      v13 = *(_QWORD *)(v7 + 56);
      if ( v13 == *((_QWORD *)v52 + 484) )
      {
        v14 = &unk_140370BA4;
      }
      else
      {
        v33 = v9;
        v6 = v9;
        v8 = v11;
        if ( (v12 & 0x1000) != 0 )
          v15 = *(_QWORD *)(v13 + 80);
        else
          v15 = *(_QWORD *)(v13 + 72);
        v14 = (_BYTE *)(v15 + 4);
      }
    }
    else
    {
      v14 = byte_140367280;
      v33 = v9;
      v6 = v9;
      v8 = v11;
    }
    v16 = *((int *)v2 + 45);
    v17 = *((_QWORD *)v2 + 6);
    v18 = *((_QWORD *)v2 + 7);
    v19 = *((_QWORD *)v2 + 8);
    v37 = v17;
    v38 = v18;
    v39 = v19;
    if ( (_DWORD)v16 )
    {
      v17 += v47 * v16;
      v18 += v48 * v16;
      v37 = v17;
      v38 = v18;
      v19 += v49 * v16;
      v39 = v19;
    }
    v35 = *((_DWORD *)v2 + 36);
    v34 = *((_DWORD *)v2 + 37);
    while ( v5 < v56 )
    {
      v20 = *((int *)v2 + 44);
      BYTE6(v21) = BYTE6(v17);
      v40 = v17;
      BYTE6(v22) = BYTE6(v18);
      v41 = v18;
      BYTE6(v23) = BYTE6(v19);
      v42 = v19;
      if ( (_DWORD)v20 )
      {
        v21 = v17 + v43 * v20;
        v22 = v18 + v44 * v20;
        v40 = v21;
        v23 = v19 + v45 * v20;
        v41 = v22;
        v42 = v23;
      }
      v24 = *((int *)v2 + 8);
      v53 = *((_DWORD *)v2 + 10);
      v25 = (_BYTE *)(v24 + v10);
      if ( (int)v24 < (int)(v24 + v53) )
      {
        v26 = v53;
        v27 = v24 + v35;
        v50 = &v6[16 * (((_BYTE)v5 + (_BYTE)v34) & 0xF)];
        v28 = v40;
        v29 = v41;
        v30 = v42;
        do
        {
          v31 = v27++ & 0xF;
          LODWORD(v21) = BYTE6(v23);
          v23 = v30 + v45;
          v30 += v45;
          v32 = ((unsigned __int64)v8[(unsigned __int8)v50[v31] + (unsigned int)v21] >> 3) | (4
                                                                                            * (v8[(unsigned __int8)v50[v31]
                                                                                                + BYTE6(v22)] & 0xF8 | (32LL * (v8[(unsigned __int8)v50[v31] + BYTE6(v21)] & 0xF8))));
          v21 = v43 + v28;
          *v25 = v14[Xlate555[v32]];
          v28 += v43;
          ++v25;
          v22 = v29 + v44;
          v29 += v44;
          --v26;
        }
        while ( v26 );
        v2 = a2;
        v17 = v37;
        v18 = v38;
        v19 = v39;
        v5 = v55;
        v6 = v33;
        v10 = v46;
      }
      v17 += v47;
      v18 += v48;
      v19 += v49;
      v10 += v36;
      v37 = v17;
      ++v5;
      v46 = v10;
      v55 = v5;
      v38 = v18;
      v39 = v19;
    }
  }
}
