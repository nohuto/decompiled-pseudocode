/*
 * XREFs of ?DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z @ 0x140266404
 * Callers:
 *     ?DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z @ 0x140127364 (-DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z.c)
 *     ?FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z @ 0x1403026D4 (-FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GrePolyPatBlt @ 0x140126C64 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall DrawDiagonalLine(HDC a1, struct tagRECT *a2, int a3, __int64 a4, __int16 a5)
{
  __int64 *v7; // rdx
  int v8; // r9d
  __int64 v10; // r14
  __int64 v11; // r10
  int v12; // r11d
  int v13; // r8d
  int v14; // r12d
  int v15; // eax
  int v16; // r12d
  int *v17; // rcx
  char *v18; // rdi
  int v19; // r15d
  int v20; // r14d
  int v21; // esi
  int v22; // eax
  LONG top; // ecx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  LONG left; // ecx
  int v28; // r14d
  int v29; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+34h] [rbp-CCh] BYREF
  int v31; // [rsp+38h] [rbp-C8h]
  __int128 v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+50h] [rbp-B0h]
  HDC v34; // [rsp+58h] [rbp-A8h]
  _DWORD v35[48]; // [rsp+60h] [rbp-A0h] BYREF

  v34 = a1;
  v33 = a3;
  if ( IsRectEmptyInl(a2) )
    return 0LL;
  v10 = v7[1];
  v11 = *v7;
  v12 = v10 - *v7;
  v13 = HIDWORD(v10) - HIDWORD(*v7);
  v32 = *(_OWORD *)v7;
  if ( v13 < v12 )
  {
    v30 = 1;
    v14 = 1;
    v15 = v12 / v13;
    v31 = v12 / v13;
    v29 = v12 / v13;
  }
  else
  {
    v31 = 1;
    v29 = 1;
    v14 = v13 / v12;
    v30 = v13 / v12;
    v15 = v13 / v12;
  }
  v16 = a3 * v14;
  v17 = &v29;
  v18 = (char *)&v32 + 12;
  if ( v13 >= v12 )
    v17 = &v30;
  *v17 = v15;
  v19 = v29;
  v20 = v10 - v29;
  v21 = v30;
  v22 = HIDWORD(v32) - v30;
  DWORD2(v32) = v20;
  if ( v33 < v8 )
    v18 = (char *)&v32 + 4;
  HIDWORD(v32) -= v30;
  if ( (int)v11 <= v20 )
  {
    while ( 1 )
    {
      if ( SDWORD1(v32) > v22 )
      {
LABEL_28:
        if ( v8 )
          GrePolyPatBlt(v34, 15728673, (struct _POLYPATBLT *)v35, v8);
        return (unsigned __int16)v19 | ((unsigned __int16)v21 << 16);
      }
      if ( (a5 & 0x800) != 0 )
      {
        if ( v21 > 1 )
        {
          v35[6 * v8] = v11;
          v35[6 * v8 + 2] = v19;
          if ( (a5 & 1) != 0 )
          {
            top = a2->top;
            v24 = v21 + *(_DWORD *)v18 - top;
          }
          else
          {
            top = *(_DWORD *)v18;
            v24 = a2->bottom - *(_DWORD *)v18;
          }
          v35[6 * v8 + 1] = top;
          v35[6 * v8 + 3] = v24;
          v25 = 1;
          *(_QWORD *)&v35[6 * v8 + 4] = 0LL;
          goto LABEL_24;
        }
        *(_QWORD *)&v35[6 * v8 + 4] = 0LL;
        v35[6 * v8 + 1] = *(_DWORD *)v18;
        if ( (a5 & 2) != 0 )
        {
          v26 = a2->right - v11;
          v35[6 * v8] = v11;
        }
        else
        {
          left = a2->left;
          v35[6 * v8] = a2->left;
          v26 = v19 + v11 - left;
        }
        v35[6 * v8 + 2] = v26;
      }
      else
      {
        v35[6 * v8 + 1] = *(_DWORD *)v18;
        v35[6 * v8] = v11;
        v35[6 * v8 + 2] = v19;
        *(_QWORD *)&v35[6 * v8 + 4] = 0LL;
      }
      v25 = v8;
      v35[6 * v8 + 3] = v21;
      v8 = 1;
LABEL_24:
      v8 += v25;
      v28 = v11 + v31;
      LODWORD(v32) = v11 + v31;
      *(_DWORD *)v18 -= v16;
      if ( v8 == 8 )
      {
        GrePolyPatBlt(v34, 15728673, (struct _POLYPATBLT *)v35, 8);
        v8 = 0;
      }
      if ( v28 > SDWORD2(v32) )
        goto LABEL_28;
      v22 = HIDWORD(v32);
      LODWORD(v11) = v32;
    }
  }
  return (unsigned __int16)v19 | ((unsigned __int16)v21 << 16);
}
