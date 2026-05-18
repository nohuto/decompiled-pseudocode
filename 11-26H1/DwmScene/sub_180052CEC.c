/*
 * XREFs of sub_180052CEC @ 0x180052CEC
 * Callers:
 *     sub_1800534C8 @ 0x1800534C8 (sub_1800534C8.c)
 *     sub_1800C28E8 @ 0x1800C28E8 (sub_1800C28E8.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 */

__int64 *__fastcall sub_180052CEC(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax

  v4 = sub_18001C514(28LL);
  if ( v4 )
  {
    *(_OWORD *)v4 = *(_OWORD *)a2;
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(v4 + 24) = *(_DWORD *)(a2 + 24);
  }
  *a1 = v4;
  return a1;
}
