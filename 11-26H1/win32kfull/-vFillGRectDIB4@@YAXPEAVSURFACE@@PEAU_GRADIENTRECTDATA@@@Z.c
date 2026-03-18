/*
 * XREFs of ?vFillGRectDIB4@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x140297740
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1401573AC (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vFillGRectDIB4(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // rdi
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  int v5; // esi
  struct Gre::Base::SESSION_GLOBALS *v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r13
  __int64 v11; // rbx
  _BYTE *v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // r15
  int v18; // ecx
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // r12d
  int v26; // eax
  _BYTE *v27; // rdi
  char v28; // si
  int v29; // ebp
  int v30; // r10d
  char v31; // dl
  char v32; // al
  char v33; // al
  int v34; // [rsp+20h] [rbp-C8h]
  char v35; // [rsp+24h] [rbp-C4h]
  __int64 v36; // [rsp+28h] [rbp-C0h]
  __int64 v37; // [rsp+30h] [rbp-B8h]
  __int64 v38; // [rsp+38h] [rbp-B0h]
  __int64 v39; // [rsp+40h] [rbp-A8h]
  __int64 v40; // [rsp+48h] [rbp-A0h]
  __int64 v41; // [rsp+50h] [rbp-98h]
  __int64 v42; // [rsp+58h] [rbp-90h]
  __int64 v43; // [rsp+60h] [rbp-88h]
  __int64 v44; // [rsp+68h] [rbp-80h]
  __int64 v45; // [rsp+70h] [rbp-78h]
  char *v46; // [rsp+80h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+88h] [rbp-60h]
  __int64 v48; // [rsp+90h] [rbp-58h]
  int v49; // [rsp+F0h] [rbp+8h]
  int v51; // [rsp+100h] [rbp+18h]
  _BYTE *v52; // [rsp+108h] [rbp+20h]

  v2 = a2;
  v4 = Gre::Base::Globals(a1);
  v5 = *((_DWORD *)v2 + 9);
  v6 = v4;
  v7 = *((int *)a1 + 22);
  v8 = *((_QWORD *)v2 + 20);
  v51 = v5 + *((_DWORD *)v2 + 11);
  v36 = *((_QWORD *)v2 + 14);
  v37 = *((_QWORD *)v2 + 15);
  v41 = *((_QWORD *)v2 + 16);
  v43 = *((_QWORD *)v2 + 10);
  v44 = *((_QWORD *)v2 + 11);
  v45 = *((_QWORD *)v2 + 12);
  v9 = *(_DWORD *)(v8 + 76);
  v10 = *((_QWORD *)a1 + 10) + (int)v7 * v5;
  v49 = v5;
  v42 = v10;
  if ( (v9 & 0x800) != 0 )
  {
    v11 = *(_QWORD *)(v8 + 56);
    if ( v11 == *((_QWORD *)v6 + 484) )
    {
      v12 = &unk_140370BA4;
    }
    else
    {
      if ( (v9 & 0x1000) != 0 )
        v13 = *(_QWORD *)(v11 + 80);
      else
        v13 = *(_QWORD *)(v11 + 72);
      v12 = (_BYTE *)(v13 + 4);
    }
  }
  else
  {
    v12 = &unk_140367280;
  }
  Xlate555 = XLATEOBJ_pGetXlate555((struct _XLATEOBJ *)v8);
  if ( Xlate555 )
  {
    v14 = *((int *)v2 + 45);
    v15 = *((_QWORD *)v2 + 6);
    v16 = *((_QWORD *)v2 + 7);
    v17 = *((_QWORD *)v2 + 8);
    v38 = v15;
    v39 = v16;
    v40 = v17;
    if ( (_DWORD)v14 )
    {
      v16 += v44 * v14;
      v15 += v43 * v14;
      v38 = v15;
      v39 = v16;
      v17 += v45 * v14;
      v40 = v17;
    }
    v18 = *((_DWORD *)v2 + 37);
    v35 = v18;
    v34 = *((_DWORD *)v2 + 36);
    if ( v5 < v51 )
    {
      v19 = v36;
      v20 = v37;
      v48 = v7;
      do
      {
        v21 = v15;
        v22 = v16;
        v23 = *((int *)v2 + 44);
        v46 = (char *)&unk_1403711B0 + 16 * (((_BYTE)v5 + (_BYTE)v18) & 0xFu);
        v24 = v17;
        if ( (_DWORD)v23 )
        {
          v21 = v15 + v19 * v23;
          v22 = v16 + v20 * v23;
          v24 = v17 + v41 * v23;
        }
        v25 = *((_DWORD *)v2 + 8);
        v26 = v25 + *((_DWORD *)v2 + 10);
        if ( v25 < v26 )
        {
          v27 = (_BYTE *)(v10 + *((_DWORD *)v2 + 8) / 2);
          v28 = v25 + v34;
          v29 = v26;
          do
          {
            v52 = v27;
            v30 = (unsigned __int8)v46[v28 & 0xF];
            v31 = v12[Xlate555[((unsigned __int64)byte_140371630[v30 + BYTE6(v24)] >> 3) | (4
                                                                                          * (byte_140371630[v30 + BYTE6(v22)] & 0xF8 | (32LL * (byte_140371630[v30 + BYTE6(v21)] & 0xF8))))]];
            v32 = *v27;
            if ( (v25 & 1) != 0 )
            {
              ++v27;
              v33 = v32 & 0xF0;
            }
            else
            {
              v33 = v32 & 0xF;
              v31 *= 16;
            }
            v22 += v37;
            ++v25;
            v24 += v41;
            ++v28;
            v21 += v36;
            *v52 = v31 | v33;
          }
          while ( v25 < v29 );
          v2 = a2;
          v5 = v49;
          v15 = v38;
          v16 = v39;
          v17 = v40;
          v10 = v42;
          v19 = v36;
          v20 = v37;
        }
        v10 += v48;
        ++v5;
        v15 += v43;
        v16 += v44;
        v17 += v45;
        LOBYTE(v18) = v35;
        v42 = v10;
        v38 = v15;
        v39 = v16;
        v40 = v17;
        v49 = v5;
      }
      while ( v5 < v51 );
    }
  }
}
