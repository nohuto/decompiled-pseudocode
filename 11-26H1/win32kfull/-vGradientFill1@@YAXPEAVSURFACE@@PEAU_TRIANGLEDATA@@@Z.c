/*
 * XREFs of ?vGradientFill1@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x14033FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1401573AC (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vGradientFill1(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  __int64 v2; // r15
  char *v3; // r14
  int v4; // edi
  struct _TRIANGLEDATA *v5; // rbx
  __int64 v6; // rbp
  int v7; // esi
  int v8; // edx
  int v9; // r15d
  int v10; // r12d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  int v14; // ecx
  int v15; // r13d
  _BYTE *v16; // rsi
  char v17; // dl
  int v18; // edx
  unsigned __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // ecx
  _BYTE *v22; // rax
  int v23; // eax
  int v24; // [rsp+20h] [rbp-A8h]
  __int64 v25; // [rsp+28h] [rbp-A0h]
  __int64 v26; // [rsp+30h] [rbp-98h]
  int v27; // [rsp+38h] [rbp-90h]
  __int64 v28; // [rsp+40h] [rbp-88h]
  __int64 v29; // [rsp+48h] [rbp-80h]
  char *v30; // [rsp+50h] [rbp-78h]
  unsigned __int8 *Xlate555; // [rsp+60h] [rbp-68h]
  char *v32; // [rsp+68h] [rbp-60h]
  __int64 v33; // [rsp+70h] [rbp-58h]
  int v34; // [rsp+D0h] [rbp+8h]
  int v36; // [rsp+E0h] [rbp+18h]
  int v37; // [rsp+E8h] [rbp+20h]

  v2 = *((int *)a1 + 22);
  v3 = (char *)a2 + 168;
  v4 = *((_DWORD *)a2 + 28);
  v5 = a2;
  v34 = v4;
  v30 = (char *)a2 + 168;
  v6 = *((_QWORD *)a1 + 10) + v4 * *((_DWORD *)a1 + 22);
  v25 = *((_QWORD *)a2 + 2);
  v26 = *((_QWORD *)a2 + 3);
  v28 = *((_QWORD *)a2 + 4);
  v29 = v6;
  Xlate555 = XLATEOBJ_pGetXlate555(*((struct _XLATEOBJ **)a2 + 19));
  if ( Xlate555 )
  {
    v7 = *((_DWORD *)v5 + 3);
    v8 = *((_DWORD *)v5 + 33);
    if ( v7 >= *((_DWORD *)v5 + 29) )
      v7 = *((_DWORD *)v5 + 29);
    v37 = v7;
    v24 = *((_DWORD *)v5 + 33);
    v36 = *((_DWORD *)v5 + 32);
    if ( v4 < v7 )
    {
      v33 = v2;
      do
      {
        v9 = *(_DWORD *)v3;
        v10 = *((_DWORD *)v3 + 1);
        v11 = *((_QWORD *)v3 + 1);
        v12 = *((_QWORD *)v3 + 2);
        if ( *(_DWORD *)v3 <= *(_DWORD *)v5 )
          v9 = *(_DWORD *)v5;
        v13 = *((_QWORD *)v3 + 3);
        if ( v10 >= *((_DWORD *)v5 + 2) )
          v10 = *((_DWORD *)v5 + 2);
        v32 = (char *)&unk_1403711B0 + 16 * (((_BYTE)v8 + (_BYTE)v4) & 0xFu);
        if ( v9 < v10 )
        {
          v14 = *(_DWORD *)v5 - *(_DWORD *)v3;
          v15 = v9 & 7;
          if ( v14 > 0 )
          {
            v11 += v25 * v14;
            v12 += v26 * v14;
            v13 += v28 * v14;
          }
          v16 = (_BYTE *)(v6 + v9 / 8);
          v17 = v9 + v36;
          v27 = v9 + v36;
          do
          {
            v18 = (unsigned __int8)(2 * v32[v17 & 0xF]);
            v19 = (v18 + HIBYTE(v12) >= 0xFFu ? 0x3E0 : 0) | (unsigned __int64)(v18 + HIBYTE(v11) >= 0xFFu ? 0x7C00 : 0);
            v20 = v18 + HIBYTE(v13);
            v13 += v28;
            ++v9;
            v11 += v25;
            v12 += v26;
            LOBYTE(v18) = *v16 & ~(1 << (7 - v15)) | (byte_140367280[Xlate555[(v20 >= 0xFF ? 0x1F : 0) | v19]] << (7 - v15));
            v21 = v15 + 1;
            *v16 = v18;
            v22 = v16 + 1;
            v17 = ++v27;
            if ( v15 != 7 )
              v22 = v16;
            v16 = v22;
            v23 = v15;
            v15 = 0;
            if ( v23 != 7 )
              v15 = v21;
          }
          while ( v9 < v10 );
          v5 = a2;
          v4 = v34;
          v7 = v37;
          v6 = v29;
          v3 = v30;
          LOBYTE(v8) = v24;
        }
        v6 += v33;
        v3 += 40;
        ++v4;
        v29 = v6;
        v30 = v3;
        v34 = v4;
      }
      while ( v4 < v7 );
    }
  }
}
