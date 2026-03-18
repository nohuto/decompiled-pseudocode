/*
 * XREFs of ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1400CA7D0
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1400C8780 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bGetFaceName@MAPPER@@QEAAHXZ @ 0x1400CA000 (-bGetFaceName@MAPPER@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MAPPER::bCalcOrientation(MAPPER *this)
{
  int v1; // ebx
  int v2; // r11d
  int v4; // r8d
  __int64 result; // rax
  __int64 v6; // rcx
  float v7; // xmm0_4
  bool v8; // di
  bool v9; // cf
  bool v10; // zf
  float v11; // xmm0_4
  int v12; // edi
  bool v13; // si
  float v14; // xmm0_4
  int v15; // esi
  int v16; // r9d
  float v17; // xmm0_4
  char v18; // cl
  BOOL v19; // r14d
  int v20; // r8d
  int v21; // ebp
  int v22; // r14d
  int v23; // r8d
  __int64 v24; // rax
  float v25; // xmm0_4
  bool v26; // dl
  float v27; // xmm0_4
  int v28; // eax

  v1 = *((_DWORD *)this + 61);
  v2 = 0;
  if ( (v1 & 0x1000) != 0 )
  {
    v4 = *(_DWORD *)(*((_QWORD *)this + 1) + 8LL);
    *((_DWORD *)this + 44) = v4;
    if ( v4 )
    {
      v24 = *(_QWORD *)this;
      if ( *(_BYTE *)(*(_QWORD *)this + 75LL) )
      {
        if ( !*(_BYTE *)(v24 + 76) )
        {
          v25 = *(float *)(v24 + 8);
          v26 = v25 > 0.0;
          v9 = v25 > 0.0;
          v10 = v25 == 0.0;
          v27 = *(float *)(v24 + 20);
          LOBYTE(v2) = v27 < 0.0;
          if ( v26 - (!v9 && !v10) != (v27 > 0.0) - v2 )
            *((_DWORD *)this + 44) = -v4;
        }
      }
    }
    goto LABEL_3;
  }
  v6 = *(_QWORD *)this;
  if ( *(_BYTE *)(v6 + 74) || *(_BYTE *)(v6 + 85) )
  {
    *((_DWORD *)this + 44) = *(_DWORD *)(*((_QWORD *)this + 1) + 12LL);
LABEL_3:
    result = 1LL;
    *((_DWORD *)this + 61) = v1 | 0x80000;
    return result;
  }
  v7 = *(float *)(v6 + 8);
  v16 = 0;
  v8 = v7 > 0.0;
  v9 = v7 > 0.0;
  v10 = v7 == 0.0;
  v11 = *(float *)(v6 + 12);
  v12 = v8 - (!v9 && !v10);
  v13 = v11 > 0.0;
  v9 = v11 > 0.0;
  v10 = v11 == 0.0;
  v14 = *(float *)(v6 + 16);
  v15 = v13 - (!v9 && !v10);
  LOBYTE(v16) = v14 > 0.0;
  v9 = v14 > 0.0;
  v10 = v14 == 0.0;
  v17 = *(float *)(v6 + 20);
  v18 = *(_BYTE *)(v6 + 79);
  v19 = !v9 && !v10;
  v20 = (unsigned __int8)v16 - v19;
  v21 = (__PAIR64__(v17 < 0.0, 0.0) - LODWORD(v17)) >> 32;
  if ( !v18 )
    v21 = (__PAIR64__(v17 > 0.0, LODWORD(v17)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  v22 = v19 - v16;
  if ( !v18 )
    v22 = v20;
  v23 = *(_DWORD *)(*((_QWORD *)this + 1) + 12LL);
  if ( v23 == 900 * (v23 / 900)
    && !((v22 + v15) | (v12 - v21) | ((unsigned __int8)v12 ^ (unsigned __int8)~(_BYTE)v15) & 1) )
  {
    v28 = (v15 & 0x384) + (v22 & 0xA8C) + v23 + (v12 & 0x708);
    *((_DWORD *)this + 44) = v28;
    if ( v28 >= 3600 )
      *((_DWORD *)this + 44) = v28 - 3600;
    goto LABEL_3;
  }
  return 0LL;
}
