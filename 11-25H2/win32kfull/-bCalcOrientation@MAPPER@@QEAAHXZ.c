/*
 * XREFs of ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x140106858
 * Callers:
 *     ?bGetFaceName@MAPPER@@QEAAHXZ @ 0x1400B8B00 (-bGetFaceName@MAPPER@@QEAAHXZ.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x140105190 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MAPPER::bCalcOrientation(MAPPER *this)
{
  int v1; // ebx
  int v2; // r11d
  int v4; // r8d
  __int64 result; // rax
  __int64 v6; // rax
  float v7; // xmm0_4
  bool v8; // dl
  bool v9; // cf
  bool v10; // zf
  float v11; // xmm0_4
  __int64 v12; // rcx
  float v13; // xmm0_4
  bool v14; // di
  float v15; // xmm0_4
  int v16; // edi
  bool v17; // si
  float v18; // xmm0_4
  int v19; // esi
  int v20; // r9d
  float v21; // xmm0_4
  char v22; // cl
  BOOL v23; // r14d
  int v24; // r8d
  int v25; // ebp
  int v26; // r14d
  int v27; // r8d
  int v28; // eax

  v1 = *((_DWORD *)this + 61);
  v2 = 0;
  if ( (v1 & 0x1000) != 0 )
  {
    v4 = *(_DWORD *)(*((_QWORD *)this + 1) + 8LL);
    *((_DWORD *)this + 44) = v4;
    if ( v4 )
    {
      v6 = *(_QWORD *)this;
      if ( *(_BYTE *)(*(_QWORD *)this + 75LL) )
      {
        if ( !*(_BYTE *)(v6 + 76) )
        {
          v7 = *(float *)(v6 + 8);
          v8 = v7 > 0.0;
          v9 = v7 > 0.0;
          v10 = v7 == 0.0;
          v11 = *(float *)(v6 + 20);
          LOBYTE(v2) = v11 < 0.0;
          if ( v8 - (!v9 && !v10) != (v11 > 0.0) - v2 )
            *((_DWORD *)this + 44) = -v4;
        }
      }
    }
    goto LABEL_3;
  }
  v12 = *(_QWORD *)this;
  if ( *(_BYTE *)(v12 + 74) || *(_BYTE *)(v12 + 85) )
  {
    *((_DWORD *)this + 44) = *(_DWORD *)(*((_QWORD *)this + 1) + 12LL);
LABEL_3:
    result = 1LL;
    *((_DWORD *)this + 61) = v1 | 0x80000;
    return result;
  }
  v13 = *(float *)(v12 + 8);
  v20 = 0;
  v14 = v13 > 0.0;
  v9 = v13 > 0.0;
  v10 = v13 == 0.0;
  v15 = *(float *)(v12 + 12);
  v16 = v14 - (!v9 && !v10);
  v17 = v15 > 0.0;
  v9 = v15 > 0.0;
  v10 = v15 == 0.0;
  v18 = *(float *)(v12 + 16);
  v19 = v17 - (!v9 && !v10);
  LOBYTE(v20) = v18 > 0.0;
  v9 = v18 > 0.0;
  v10 = v18 == 0.0;
  v21 = *(float *)(v12 + 20);
  v22 = *(_BYTE *)(v12 + 79);
  v23 = !v9 && !v10;
  v24 = (unsigned __int8)v20 - v23;
  v25 = (__PAIR64__(v21 < 0.0, 0.0) - LODWORD(v21)) >> 32;
  if ( !v22 )
    v25 = (__PAIR64__(v21 > 0.0, LODWORD(v21)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  v26 = v23 - v20;
  if ( !v22 )
    v26 = v24;
  v27 = *(_DWORD *)(*((_QWORD *)this + 1) + 12LL);
  if ( v27 == 900 * (v27 / 900)
    && !((v26 + v19) | (v16 - v25) | ((unsigned __int8)v16 ^ (unsigned __int8)~(_BYTE)v19) & 1) )
  {
    v28 = (v19 & 0x384) + (v26 & 0xA8C) + v27 + (v16 & 0x708);
    *((_DWORD *)this + 44) = v28;
    if ( v28 >= 3600 )
      *((_DWORD *)this + 44) = v28 - 3600;
    goto LABEL_3;
  }
  return 0LL;
}
