/*
 * XREFs of ?vGradientFill4@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x140340560
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1401573AC (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vGradientFill4(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // rdi
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  int v5; // esi
  char *v6; // r12
  __int64 v7; // r14
  struct Gre::Base::SESSION_GLOBALS *v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  _BYTE *v12; // rbx
  __int64 v13; // rbx
  int v14; // ebp
  int v15; // r13d
  int v16; // eax
  int v17; // r14d
  int v18; // edx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  __int64 v22; // r15
  int v23; // r10d
  _BYTE *v24; // r13
  int v25; // ebp
  char v26; // di
  int v27; // r10d
  char v28; // dl
  char v29; // r10
  char v30; // dl
  int v31; // [rsp+20h] [rbp-98h]
  int v32; // [rsp+24h] [rbp-94h]
  int v33; // [rsp+28h] [rbp-90h]
  __int64 v34; // [rsp+30h] [rbp-88h]
  __int64 v35; // [rsp+38h] [rbp-80h]
  __int64 v36; // [rsp+40h] [rbp-78h]
  __int64 v37; // [rsp+48h] [rbp-70h]
  char *v38; // [rsp+50h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+58h] [rbp-60h]
  char *v40; // [rsp+60h] [rbp-58h]
  __int64 v41; // [rsp+68h] [rbp-50h]
  int v42; // [rsp+C0h] [rbp+8h]
  _BYTE *v44; // [rsp+D8h] [rbp+20h]

  v2 = a2;
  v4 = Gre::Base::Globals(a1);
  v5 = *((_DWORD *)v2 + 28);
  v6 = (char *)v2 + 168;
  v7 = *((int *)a1 + 22);
  v8 = v4;
  v9 = *((_QWORD *)v2 + 19);
  v35 = *((_QWORD *)v2 + 2);
  v36 = *((_QWORD *)v2 + 3);
  v37 = *((_QWORD *)v2 + 4);
  v10 = *(_DWORD *)(v9 + 76);
  v42 = v5;
  v34 = *((_QWORD *)a1 + 10) + v5 * *((_DWORD *)a1 + 22);
  v38 = (char *)v2 + 168;
  if ( (v10 & 0x800) != 0 )
  {
    v11 = *(_QWORD *)(v9 + 56);
    if ( v11 == *((_QWORD *)v8 + 484) )
    {
      v12 = &unk_140370BA4;
    }
    else
    {
      if ( (v10 & 0x1000) != 0 )
        v13 = *(_QWORD *)(v11 + 80);
      else
        v13 = *(_QWORD *)(v11 + 72);
      v12 = (_BYTE *)(v13 + 4);
    }
  }
  else
  {
    v12 = byte_140367280;
  }
  Xlate555 = XLATEOBJ_pGetXlate555((struct _XLATEOBJ *)v9);
  if ( Xlate555 )
  {
    v14 = *((_DWORD *)v2 + 3);
    v15 = *((_DWORD *)v2 + 33);
    if ( v14 >= *((_DWORD *)v2 + 29) )
      v14 = *((_DWORD *)v2 + 29);
    v32 = v14;
    v33 = *((_DWORD *)v2 + 33);
    v16 = *((_DWORD *)v2 + 32);
    if ( v5 < v14 )
    {
      v41 = v7;
      do
      {
        v17 = *(_DWORD *)v6;
        v18 = *((_DWORD *)v6 + 1);
        v19 = *((_QWORD *)v6 + 1);
        v20 = *((_QWORD *)v6 + 2);
        if ( *(_DWORD *)v6 <= *(_DWORD *)v2 )
          v17 = *(_DWORD *)v2;
        v21 = *((_QWORD *)v6 + 3);
        if ( v18 >= *((_DWORD *)v2 + 2) )
          v18 = *((_DWORD *)v2 + 2);
        v31 = v18;
        v22 = v34;
        v40 = (char *)&unk_1403711B0 + 16 * (((_BYTE)v5 + (_BYTE)v15) & 0xFu);
        if ( v17 < v18 )
        {
          v23 = *(_DWORD *)v2 - *(_DWORD *)v6;
          v24 = (_BYTE *)(v34 + v17 / 2);
          if ( v23 > 0 )
          {
            v19 += v35 * v23;
            v20 += v36 * v23;
            v21 += v37 * v23;
          }
          v25 = v17 & 1;
          v26 = v17 + v16;
          do
          {
            v44 = v24;
            v27 = (unsigned __int8)v40[v26 & 0xF];
            v28 = *v24;
            v29 = v12[Xlate555[((unsigned __int64)byte_140371630[v27 + HIBYTE(v21)] >> 3) | (4
                                                                                           * (byte_140371630[v27 + HIBYTE(v20)] & 0xF8 | (32LL * (byte_140371630[v27 + HIBYTE(v19)] & 0xF8))))]];
            if ( v25 )
            {
              v25 = 0;
              ++v24;
              v30 = v29 | v28 & 0xF0;
            }
            else
            {
              v30 = v28 & 0xF | (16 * v29);
              v25 = 1;
            }
            ++v17;
            v20 += v36;
            ++v26;
            v21 += v37;
            v19 += v35;
            *v44 = v30;
          }
          while ( v17 < v31 );
          v2 = a2;
          v5 = v42;
          v14 = v32;
          v22 = v34;
          v6 = v38;
          LOBYTE(v15) = v33;
        }
        v6 += 40;
        ++v5;
        v34 = v41 + v22;
        v38 = v6;
        v42 = v5;
      }
      while ( v5 < v14 );
    }
  }
}
