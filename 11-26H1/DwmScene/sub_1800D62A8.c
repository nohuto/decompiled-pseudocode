/*
 * XREFs of sub_1800D62A8 @ 0x1800D62A8
 * Callers:
 *     sub_1800D6984 @ 0x1800D6984 (sub_1800D6984.c)
 * Callees:
 *     sub_1800D72F8 @ 0x1800D72F8 (sub_1800D72F8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800D62A8(int a1, int a2, int a3, int a4, _QWORD *a5, __int64 a6, __int64 a7)
{
  int v7; // r10d
  int v8; // r11d
  unsigned __int8 v9; // bl
  int v10; // ebp
  unsigned int v11; // edi
  __int64 result; // rax
  unsigned int v13; // r14d
  unsigned int v14; // esi
  char v15; // cl

  v7 = a3;
  v8 = a1;
  if ( a4 == 1 )
  {
    v9 = 1;
    v10 = 1;
  }
  else
  {
    v9 = 0;
    v10 = 3;
  }
  v11 = 0;
  result = 2 * (unsigned int)v9;
  v13 = 0;
  v14 = a2 - result;
  if ( a2 != (_DWORD)result )
  {
    do
    {
      if ( *a5 && v13 == 100 * (v13 / 0x64) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a5 + 40LL))(*a5);
        v7 = a3;
        v8 = a1;
      }
      v15 = v9 && (v11 & 1) != 0;
      result = sub_1800D72F8(v8, v7, v11, v11 + 1, v11 + 2, v15, a6, a7);
      v7 = a3;
      v11 += v10;
      v8 = a1;
      ++v13;
    }
    while ( v11 < v14 );
  }
  return result;
}
