/*
 * XREFs of ?vGradientFill8@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x140340850
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1401573AC (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vGradientFill8(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // rdi
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // r15
  int v6; // ebp
  char *v7; // r13
  __int64 v8; // rcx
  char *v9; // r12
  struct Gre::Base::SESSION_GLOBALS *v10; // rdx
  unsigned __int8 *v11; // r8
  __int64 v12; // r14
  __int64 v13; // rbx
  int v14; // eax
  _BYTE *v15; // rbx
  __int64 v16; // rbx
  int v17; // esi
  int v18; // r11d
  int v19; // r10d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  char *v23; // r8
  _BYTE *v24; // r13
  int v25; // r9d
  unsigned __int64 v26; // r15
  int v27; // r13d
  _BYTE *v28; // rdi
  char v29; // r8
  int v30; // r10d
  unsigned __int64 v31; // r8
  unsigned __int8 v32; // r11
  unsigned __int64 v33; // r8
  unsigned __int8 v34; // r9
  unsigned __int64 v35; // r8
  int v36; // [rsp+24h] [rbp-B4h]
  int v37; // [rsp+28h] [rbp-B0h]
  __int64 v38; // [rsp+30h] [rbp-A8h]
  __int64 v39; // [rsp+38h] [rbp-A0h]
  __int64 v40; // [rsp+40h] [rbp-98h]
  __int64 v41; // [rsp+48h] [rbp-90h]
  char *v42; // [rsp+50h] [rbp-88h]
  unsigned __int8 *Xlate555; // [rsp+58h] [rbp-80h]
  _BYTE *v44; // [rsp+60h] [rbp-78h]
  unsigned __int8 *v45; // [rsp+68h] [rbp-70h]
  char *v46; // [rsp+70h] [rbp-68h]
  __int64 v47; // [rsp+78h] [rbp-60h]
  char *v48; // [rsp+80h] [rbp-58h]
  int v51; // [rsp+F0h] [rbp+18h]
  int v52; // [rsp+F8h] [rbp+20h]

  v2 = a2;
  v4 = Gre::Base::Globals(a1);
  v5 = *((int *)a1 + 22);
  v6 = *((_DWORD *)v2 + 28);
  v7 = (char *)&unk_1403712F0;
  v8 = *((_QWORD *)v2 + 19);
  v9 = (char *)v2 + 168;
  v10 = v4;
  v51 = v6;
  v38 = *((_QWORD *)v2 + 2);
  v39 = *((_QWORD *)v2 + 3);
  v11 = (unsigned __int8 *)&unk_1403714B0;
  v12 = *((_QWORD *)a1 + 10) + v6 * (int)v5;
  v13 = *(_QWORD *)(v8 + 56);
  v40 = *((_QWORD *)v2 + 4);
  v41 = v12;
  v42 = (char *)v2 + 168;
  v14 = *(_DWORD *)(v8 + 76);
  if ( (*(_DWORD *)(v13 + 24) & 0x100000) == 0 )
    v11 = byte_140371630;
  v45 = v11;
  if ( (*(_DWORD *)(v13 + 24) & 0x100000) == 0 )
    v7 = (char *)&unk_1403711B0;
  v48 = v7;
  if ( (v14 & 0x800) != 0 )
  {
    if ( v13 == *((_QWORD *)v10 + 484) )
    {
      v15 = &unk_140370BA4;
    }
    else
    {
      if ( (v14 & 0x1000) != 0 )
        v16 = *(_QWORD *)(v13 + 80);
      else
        v16 = *(_QWORD *)(v13 + 72);
      v15 = (_BYTE *)(v16 + 4);
    }
  }
  else
  {
    v15 = byte_140367280;
  }
  Xlate555 = XLATEOBJ_pGetXlate555((struct _XLATEOBJ *)v8);
  if ( Xlate555 )
  {
    v17 = *((_DWORD *)v2 + 3);
    if ( v17 >= *((_DWORD *)v2 + 29) )
      v17 = *((_DWORD *)v2 + 29);
    v52 = *((_DWORD *)v2 + 33);
    v37 = v17;
    v36 = *((_DWORD *)v2 + 32);
    if ( v6 < v17 )
    {
      v47 = v5;
      do
      {
        v18 = *(_DWORD *)v9;
        v19 = *((_DWORD *)v9 + 1);
        v20 = *((_QWORD *)v9 + 1);
        if ( *(_DWORD *)v9 <= *(_DWORD *)v2 )
          v18 = *(_DWORD *)v2;
        v21 = *((_QWORD *)v9 + 2);
        v22 = *((_QWORD *)v9 + 3);
        if ( v19 >= *((_DWORD *)v2 + 2) )
          v19 = *((_DWORD *)v2 + 2);
        v23 = &v7[16 * (((_BYTE)v6 + (_BYTE)v52) & 0xF)];
        v24 = (_BYTE *)(v12 + v18);
        v46 = v23;
        v44 = v24;
        if ( *((_QWORD *)a1 + 9) <= (unsigned __int64)v24 && v18 < v19 )
        {
          v25 = *(_DWORD *)v2 - *(_DWORD *)v9;
          v26 = v12 + v19;
          if ( v25 > 0 )
          {
            v20 += v38 * v25;
            v21 += v39 * v25;
            v22 += v40 * v25;
          }
          if ( (unsigned __int64)v24 < v26 )
          {
            v27 = v18 + v36;
            v28 = v44;
            do
            {
              v29 = v27++;
              v30 = (unsigned __int8)v46[v29 & 0xF];
              v31 = HIBYTE(v20);
              v20 += v38;
              v32 = v45[(unsigned int)(v30 + v31)];
              v33 = v21;
              v21 += v39;
              v34 = v45[v30 + HIBYTE(v33)];
              v35 = v22;
              v22 += v40;
              *v28++ = v15[Xlate555[((unsigned __int64)v45[v30 + HIBYTE(v35)] >> 3) | (4
                                                                                     * (v34 & 0xF8 | (32LL * (v32 & 0xF8))))]];
            }
            while ( (unsigned __int64)v28 < v26 );
            v2 = a2;
            v17 = v37;
            v6 = v51;
            v12 = v41;
            v9 = v42;
          }
        }
        v12 += v47;
        v9 += 40;
        v7 = v48;
        ++v6;
        v41 = v12;
        v42 = v9;
        v51 = v6;
      }
      while ( v6 < v17 );
    }
  }
}
