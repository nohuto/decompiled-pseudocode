/*
 * XREFs of sub_140121C6C @ 0x140121C6C
 * Callers:
 *     sub_1400D86F8 @ 0x1400D86F8 (sub_1400D86F8.c)
 *     sub_1401A6470 @ 0x1401A6470 (sub_1401A6470.c)
 * Callees:
 *     sub_1400887D8 @ 0x1400887D8 (sub_1400887D8.c)
 */

__int64 __fastcall sub_140121C6C(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  __int64 v3; // rax
  unsigned int v4; // r9d
  _DWORD *v5; // r11
  unsigned __int64 v8; // rsi
  unsigned int v9; // ebx
  char v10; // r8
  unsigned int v11; // eax
  _DWORD *v12; // rdx
  unsigned __int64 v13; // r10
  unsigned int v14; // r8d

  v3 = a2[23];
  v4 = 0;
  v5 = (_DWORD *)a2[3];
  *a3 = 1;
  v8 = *(unsigned int *)(v3 + 16);
  v9 = *(_DWORD *)(v3 + 8);
  if ( *v5 == 49 || *v5 == 50 )
  {
    v10 = 0;
    v11 = 72;
  }
  else
  {
    if ( (unsigned int)(*v5 - 67) > 1 )
      return (unsigned int)-1073741585;
    v10 = 1;
    v11 = 80;
  }
  if ( (unsigned int)v8 < v11 )
    return (unsigned int)-1073741585;
  v12 = v5 + 2;
  if ( v10 )
  {
    if ( *v12 != 1 || v5[3] != 72 )
      return (unsigned int)-1073741585;
    v12 = v5 + 4;
  }
  if ( !*v12 )
    return (unsigned int)-1073741585;
  if ( !v12[1] )
    return (unsigned int)-1073741585;
  v13 = (unsigned int)v12[4];
  if ( (_DWORD)v13 )
  {
    if ( v13 < (unsigned __int64)(v10 != 0 ? 0x18 : 0) + 40 || !v12[5] )
      return (unsigned int)-1073741585;
  }
  if ( v9 >= 0x48 )
  {
    v14 = v12[5];
    if ( !v14 || (unsigned __int64)v12 + v13 + v14 - (_QWORD)v5 <= v8 && v14 + (_DWORD)v13 + 8 <= v9 )
      return (unsigned int)sub_1400887D8(a1, (__int64)a2, a3);
    return (unsigned int)-1073741585;
  }
  if ( v9 < 8 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    *v5 = v10 != 0 ? 1 : 48;
    v5[1] = v10 != 0 ? 72 : 48;
    a2[7] = 8LL;
  }
  return v4;
}
