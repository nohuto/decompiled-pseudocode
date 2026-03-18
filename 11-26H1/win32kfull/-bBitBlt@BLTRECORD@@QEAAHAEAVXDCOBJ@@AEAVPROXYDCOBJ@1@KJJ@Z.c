/*
 * XREFs of ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KJJ@Z @ 0x140215C74
 * Callers:
 *     ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x14007F744 (-bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 * Callees:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z @ 0x14006AB54 (-bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z.c)
 */

__int64 __fastcall BLTRECORD::bBitBlt(
        BLTRECORD *this,
        struct XDCOBJ *a2,
        struct BLTRECORD::PROXYDCOBJ *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  __int128 v10; // xmm7
  __int128 v11; // xmm6
  int v12; // eax
  int v13; // ecx
  int v14; // ebx
  int v15; // ecx
  __int128 v17; // xmm7
  __int128 v18; // xmm6
  int v19; // eax
  int v20; // ecx
  __int128 v21; // xmm7
  __int128 v22; // xmm6
  int v23; // eax
  int v24; // ecx
  int v25; // ebx
  int v26; // eax
  int v27; // ecx
  int v28; // edi
  int v29; // eax
  int v30; // ecx
  int v31; // ebx
  int v32; // eax

  switch ( a5 )
  {
    case -1:
      --*((_DWORD *)this + 40);
LABEL_3:
      if ( a6 == 1 )
      {
        --*((_DWORD *)this + 35);
        v10 = *((_OWORD *)this + 8);
        v11 = *(_OWORD *)((char *)this + 152);
        v12 = BLTRECORD::bBitBlt(this, a2, a3, a4);
        *((_OWORD *)this + 8) = v10;
        v13 = *((_DWORD *)this + 35);
        v14 = v12;
        *((_DWORD *)this + 33) = v13;
        *((_DWORD *)this + 35) = v13 + 1;
        *(_OWORD *)((char *)this + 152) = v11;
        v15 = *((_DWORD *)this + 41) - 1;
        goto LABEL_5;
      }
      *((_DWORD *)this + 41) += a6;
      return BLTRECORD::bBitBlt(this, a2, a3, a4);
    case 0:
      goto LABEL_3;
    case 1:
      --*((_DWORD *)this + 34);
      if ( a6 != 1 )
      {
        *((_DWORD *)this + 41) += a6;
        v17 = *((_OWORD *)this + 8);
        v18 = *(_OWORD *)((char *)this + 152);
        v19 = BLTRECORD::bBitBlt(this, a2, a3, a4);
        *((_OWORD *)this + 8) = v17;
        v20 = *((_DWORD *)this + 34);
        v14 = v19;
        *((_DWORD *)this + 32) = v20;
        *(_OWORD *)((char *)this + 152) = v18;
        *((_DWORD *)this + 34) = v20 + 1;
        *((_DWORD *)this + 38) = *((_DWORD *)this + 40) - 1;
        return v14 & (unsigned int)BLTRECORD::bBitBlt(this, a2, a3, a4);
      }
      --*((_DWORD *)this + 35);
      v21 = *((_OWORD *)this + 8);
      v22 = *(_OWORD *)((char *)this + 152);
      v23 = BLTRECORD::bBitBlt(this, a2, a3, a4);
      *((_OWORD *)this + 8) = v21;
      v24 = *((_DWORD *)this + 34);
      *((_DWORD *)this + 32) = v24;
      *(_OWORD *)((char *)this + 152) = v22;
      *((_DWORD *)this + 34) = v24 + 1;
      v25 = v23;
      *((_DWORD *)this + 38) = *((_DWORD *)this + 40) - 1;
      v26 = BLTRECORD::bBitBlt(this, a2, a3, a4);
      *((_OWORD *)this + 8) = v21;
      v27 = *((_DWORD *)this + 35);
      *((_DWORD *)this + 33) = v27;
      v28 = v25 & v26;
      *((_DWORD *)this + 35) = v27 + 1;
      *(_OWORD *)((char *)this + 152) = v22;
      *((_DWORD *)this + 39) = *((_DWORD *)this + 41) - 1;
      v29 = BLTRECORD::bBitBlt(this, a2, a3, a4);
      *((_OWORD *)this + 8) = v21;
      v30 = *((_DWORD *)this + 35);
      v31 = v29;
      v32 = *((_DWORD *)this + 34);
      v14 = v28 & v31;
      *((_DWORD *)this + 33) = v30;
      *(_OWORD *)((char *)this + 152) = v22;
      *((_DWORD *)this + 32) = v32;
      *((_DWORD *)this + 35) = v30 + 1;
      v15 = *((_DWORD *)this + 41) - 1;
      *((_DWORD *)this + 34) = v32 + 1;
      *((_DWORD *)this + 38) = *((_DWORD *)this + 40) - 1;
LABEL_5:
      *((_DWORD *)this + 39) = v15;
      return v14 & (unsigned int)BLTRECORD::bBitBlt(this, a2, a3, a4);
  }
  return 0LL;
}
