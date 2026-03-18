/*
 * XREFs of ?vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z @ 0x140116520
 * Callers:
 *     ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14011683C (-GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RECTANGLEPATHOBJ::vInit(RECTANGLEPATHOBJ *this, struct _RECTL *a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx

  *((_DWORD *)this + 104) = 15;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 14) = (char *)this + 400;
  *((_QWORD *)this + 15) = (char *)this + 400;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 1) = (char *)this + 80;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_DWORD *)this + 105) = 4;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 1) = 4;
  *(_DWORD *)this = 0;
  v4 = 16 * a2->left;
  *((_DWORD *)this + 108) = v4;
  *((_DWORD *)this + 110) = v4;
  *((_DWORD *)this + 32) = v4;
  v5 = 16 * a2->right;
  *((_DWORD *)this + 106) = v5;
  *((_DWORD *)this + 112) = v5;
  *((_DWORD *)this + 34) = v5;
  v6 = 16 * a2->top;
  *((_DWORD *)this + 33) = v6;
  v7 = v6;
  v8 = 16 * a2->bottom;
  *((_DWORD *)this + 35) = v8;
  if ( a3 )
  {
    v7 = v8;
    v8 = v6;
  }
  *((_DWORD *)this + 107) = v7;
  *((_DWORD *)this + 109) = v7;
  *((_DWORD *)this + 111) = v8;
  *((_DWORD *)this + 113) = v8;
}
