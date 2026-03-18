/*
 * XREFs of ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z @ 0x1801A28C0
 * Callers:
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x1801A27F4 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x1801A2BEC (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

void __fastcall CHwLightCollectionBuffer::UpdateLightInfo(
        CHwLightCollectionBuffer *this,
        const struct LightInfo *a2,
        unsigned int a3,
        char a4)
{
  float v6; // xmm0_4
  char v7; // r14
  char *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebp
  unsigned int v11; // r10d
  unsigned int v12; // r11d
  _OWORD *v13; // r9
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  int v21; // xmm2_4
  int v22; // xmm2_4
  int v23; // r11d
  __int128 v24; // [rsp+30h] [rbp-68h] BYREF
  __int128 v25; // [rsp+40h] [rbp-58h]
  __int128 v26; // [rsp+50h] [rbp-48h]
  __int128 v27; // [rsp+60h] [rbp-38h]
  int v28; // [rsp+70h] [rbp-28h]

  if ( a3 )
    v6 = FLOAT_1_0;
  else
    v6 = 0.0;
  *((float *)this + 69) = v6;
  v7 = 0;
  *(_OWORD *)((char *)this + 504) = 0LL;
  if ( a3 )
  {
    v8 = (char *)a2 + 8;
    v9 = a3;
    do
    {
      if ( !*((_DWORD *)v8 - 2) )
      {
        v7 = 1;
        *(__m128 *)((char *)this + 504) = _mm_add_ps(*(__m128 *)(v8 - 4), *(__m128 *)((char *)this + 504));
      }
      v8 += 240;
      --v9;
    }
    while ( v9 );
  }
  v10 = 0;
  *((_DWORD *)this + 4) = -1;
  v11 = 0;
  if ( a3 )
  {
    v12 = 0;
    v13 = (_OWORD *)((char *)a2 + 172);
    do
    {
      if ( v12 >= 8 )
        break;
      if ( *((_DWORD *)v13 - 43) )
      {
        v14 = *(_OWORD *)((char *)v13 - 68);
        v15 = *(_OWORD *)((char *)v13 - 52);
        v28 = *((_DWORD *)v13 - 1);
        v24 = v14;
        v16 = *(_OWORD *)((char *)v13 - 36);
        v25 = v15;
        v17 = *(_OWORD *)((char *)v13 - 20);
        v26 = v16;
        v27 = v17;
        CMILMatrix::Transpose((CMILMatrix *)&v24);
        v18 = v25;
        v19 = 112LL * v10;
        v20 = (unsigned __int64)v10++ << 7;
        *(_OWORD *)((char *)this + v20 + 20) = v24;
        *(_OWORD *)((char *)this + v20 + 36) = v18;
        *(_OWORD *)((char *)this + v20 + 52) = v26;
        *(_OWORD *)((char *)this + v20 + 68) = v27;
        *(_OWORD *)((char *)this + v20 + 84) = *v13;
        *(_OWORD *)((char *)this + v20 + 100) = v13[1];
        *(_OWORD *)((char *)this + v20 + 116) = v13[2];
        *(_OWORD *)((char *)this + v20 + 132) = v13[3];
        LODWORD(v16) = *((_DWORD *)v13 - 41);
        v21 = *((_DWORD *)v13 - 40);
        LODWORD(v18) = *((_DWORD *)v13 - 39);
        *(_DWORD *)((char *)this + v19 + 280) = *((_DWORD *)v13 - 42);
        *(_DWORD *)((char *)this + v19 + 284) = v16;
        *(_DWORD *)((char *)this + v19 + 288) = v21;
        *(_DWORD *)((char *)this + v19 + 292) = v18;
        *(_QWORD *)((char *)this + v19 + 296) = *((_QWORD *)v13 - 17);
        *(_DWORD *)((char *)this + v19 + 304) = *((_DWORD *)v13 - 32);
        *(_DWORD *)((char *)this + v19 + 308) = *((_DWORD *)v13 - 25);
        LODWORD(v16) = *((_DWORD *)v13 - 37);
        LODWORD(v18) = *((_DWORD *)v13 - 36);
        v22 = *((_DWORD *)v13 - 35);
        *(_DWORD *)((char *)this + v19 + 312) = *((_DWORD *)v13 - 38);
        *(_DWORD *)((char *)this + v19 + 316) = v16;
        *(_DWORD *)((char *)this + v19 + 320) = v18;
        *(_DWORD *)((char *)this + v19 + 324) = v22;
        *(_QWORD *)((char *)this + v19 + 328) = *(_QWORD *)((char *)v13 - 124);
        *(_DWORD *)((char *)this + v19 + 336) = *((_DWORD *)v13 - 29);
        *(_DWORD *)((char *)this + v19 + 340) = *((_DWORD *)v13 - 24);
        *(_QWORD *)((char *)this + v19 + 344) = *((_QWORD *)v13 - 14);
        *(_DWORD *)((char *)this + v19 + 352) = *((_DWORD *)v13 - 26);
        *(_DWORD *)((char *)this + v19 + 356) = *((_DWORD *)v13 - 19);
        *(_OWORD *)((char *)this + v19 + 360) = *(_OWORD *)((char *)v13 - 92);
        *(_DWORD *)((char *)this + v19 + 376) = *((_DWORD *)v13 - 18);
        *((_DWORD *)this + 4) = (*((_DWORD *)v13 - 43) << v23) | *((_DWORD *)this + 4) & ~(15 << v23);
        v12 = v23 + 4;
      }
      ++v11;
      v13 += 15;
    }
    while ( v11 < a3 );
  }
  memset_0((char *)this + 128 * (unsigned __int64)v10 + 20, 0, 256 - ((unsigned __int64)v10 << 7));
  memset_0((char *)this + 112 * v10 + 280, 0, 224 - 112LL * v10);
  if ( v7 || !a4 )
    *((_DWORD *)this + 4) &= ~(15 << (4 * v10));
}
