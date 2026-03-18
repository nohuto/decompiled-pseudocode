/*
 * XREFs of ?ulIndexToRGB@XEPALOBJ@@QEAAKK@Z @ 0x1400FD190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::ulIndexToRGB(XEPALOBJ *this, unsigned int a2)
{
  __int64 v2; // r11
  unsigned int v3; // eax
  int v4; // eax
  _DWORD *v5; // r11
  unsigned int v6; // r8d
  unsigned int v7; // r9d
  unsigned int v8; // ebx
  unsigned int v9; // r8d
  unsigned int v10; // edx
  int v11; // ecx
  unsigned int v12; // r11d
  unsigned int v13; // edx
  unsigned int v14; // r8d
  unsigned int v17; // [rsp+10h] [rbp+10h]

  v2 = *(_QWORD *)this;
  v3 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  if ( v3 )
  {
    if ( v3 <= a2 )
      return 0;
    a2 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 4LL * a2);
    return a2 & 0xFFFFFF;
  }
  v4 = *(_DWORD *)(v2 + 24);
  if ( (v4 & 2) == 0 )
  {
    if ( (v4 & 8) != 0 )
    {
      HIWORD(v17) = (unsigned __int8)a2;
      LOBYTE(v17) = BYTE2(a2);
      BYTE1(v17) = BYTE1(a2);
      return v17;
    }
    return a2 & 0xFFFFFF;
  }
  v5 = *(_DWORD **)(v2 + 112);
  v6 = v5[9];
  v7 = (a2 & *v5) >> v5[6];
  if ( v6 < 8 )
    v7 = (v7 << (8 - v6)) | (v7 << (8 - v6) >> v6);
  v8 = v5[10];
  v9 = (a2 & v5[1]) >> v5[7];
  if ( v8 < 8 )
    v9 = (v9 << (8 - v8)) | (v9 << (8 - v8) >> v8);
  v10 = v5[2] & a2;
  v11 = v5[8];
  v12 = v5[11];
  v13 = v10 >> v11;
  v14 = v9 << 8;
  if ( v12 < 8 )
    v13 = (v13 << (8 - v12)) | (v13 << (8 - v12) >> v12);
  return v7 | v14 | (v13 << 16);
}
