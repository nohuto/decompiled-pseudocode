/*
 * XREFs of sub_1800C28E8 @ 0x1800C28E8
 * Callers:
 *     sub_1800C31E8 @ 0x1800C31E8 (sub_1800C31E8.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180052CEC @ 0x180052CEC (sub_180052CEC.c)
 */

__int64 **__fastcall sub_1800C28E8(__int64 **a1, __int64 a2, int *a3, int *a4)
{
  __int64 *v8; // rax
  __int64 *v9; // rsi
  int v10; // edi
  int v11; // ebx
  __int64 **result; // rax

  v8 = (__int64 *)sub_18001C514(16LL);
  v9 = v8;
  if ( v8 )
  {
    v10 = *a4;
    v11 = *a3;
    sub_180052CEC(v8, a2);
    *((_DWORD *)v9 + 2) = v11;
    *((_DWORD *)v9 + 3) = v10;
  }
  else
  {
    v9 = 0LL;
  }
  result = a1;
  *a1 = v9;
  return result;
}
