/*
 * XREFs of ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1401AF7CC
 * Callers:
 *     EngHTBlt @ 0x14006F20C (EngHTBlt.c)
 * Callees:
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall bSetHTSrcSurfInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // r15d
  unsigned int v8; // esi
  char v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 result; // rax
  _DWORD *v13; // rdi
  int v14; // ecx
  unsigned int v15; // eax
  __int128 v16; // [rsp+20h] [rbp-30h]
  __int128 v17; // [rsp+30h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-10h]

  v7 = *(_DWORD *)(a2 + 24) & 2;
  switch ( *(_DWORD *)(a1 + 72) )
  {
    case 1:
      v8 = 2;
LABEL_3:
      v9 = 4;
      break;
    case 2:
      v8 = 16;
      goto LABEL_3;
    case 3:
      v8 = 256;
      goto LABEL_3;
    case 4:
      v9 = 2;
      v8 = 3;
      v7 = 1;
      break;
    case 5:
      v9 = 3;
      v8 = 0;
      break;
    case 6:
      v8 = 3;
      v7 = 1;
      goto LABEL_3;
    default:
      return 0LL;
  }
  BYTE10(v16) = *(_BYTE *)(a1 + 72);
  HIDWORD(v16) = *(_DWORD *)(a1 + 32);
  LODWORD(v17) = *(_DWORD *)(a1 + 36);
  DWORD1(v17) = *(_DWORD *)(a1 + 64);
  *((_QWORD *)&v17 + 1) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)&v16 = a1;
  BYTE11(v16) = 4;
  WORD4(v16) = (*(_BYTE *)(a1 + 78) & 1) != 0;
  v10 = 3;
  if ( !v7 )
    v10 = *(_DWORD *)(a2 + 28);
  if ( v10 <= v8 )
    v8 = v10;
  v11 = AllocThreadBufferWithTag(4 * v8 + 24, 1668573255LL, 0LL);
  v18 = v11;
  if ( !v11 )
  {
    EngSetLastError(8u);
    return 0LL;
  }
  v13 = (_DWORD *)(v11 + 24);
  *(_BYTE *)v11 = 0;
  *(_QWORD *)(v11 + 16) = v11 + 24;
  *(_BYTE *)(v11 + 3) = 0;
  *(_DWORD *)(v11 + 4) = 0;
  if ( (*(_DWORD *)(a2 + 24) & 8) != 0 )
    *(_BYTE *)(v11 + 3) = 4;
  *(_BYTE *)(v11 + 2) = v9;
  if ( v7 )
  {
    *(_BYTE *)(v11 + 1) = 0;
    *(_DWORD *)(v11 + 8) = 3;
    if ( (*(_DWORD *)(a2 + 24) & 2) != 0 )
    {
      *v13 = **(_DWORD **)(a2 + 112);
      *(_DWORD *)(v11 + 28) = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL);
      v14 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 8LL);
    }
    else
    {
      *(_DWORD *)(v11 + 28) = 65280;
      if ( (*(_DWORD *)(a2 + 24) & 8) != 0 )
      {
        *v13 = 16711680;
        v14 = 255;
      }
      else
      {
        *v13 = 255;
        v14 = 16711680;
      }
    }
    *(_DWORD *)(v11 + 32) = v14;
  }
  else
  {
    *(_BYTE *)(v11 + 1) = 1;
    *(_DWORD *)(v11 + 8) = v8;
    *(_DWORD *)(v11 + 4) = 255;
    if ( v8 )
    {
      if ( (*(_DWORD *)(a2 + 24) & 0x2000) != 0 && a4 && (*(_DWORD *)(a4 + 76) & 0x100) != 0 )
      {
        *v13 = ulColorRefToRGB(*(_QWORD *)(a4 + 48), *(_QWORD *)(a4 + 56), *(unsigned int *)(a4 + 28));
        v13[1] = ulColorRefToRGB(*(_QWORD *)(a4 + 48), *(_QWORD *)(a4 + 56), *(unsigned int *)(a4 + 32));
      }
      else if ( v11 != -24 )
      {
        v15 = *(_DWORD *)(a2 + 28);
        if ( v15 )
        {
          if ( v8 <= v15 )
            v15 = v8;
          memmove(v13, *(const void **)(a2 + 112), 4LL * v15);
        }
      }
    }
  }
  result = 1LL;
  *(_OWORD *)a3 = v16;
  *(_OWORD *)(a3 + 16) = v17;
  *(_QWORD *)(a3 + 32) = v18;
  return result;
}
