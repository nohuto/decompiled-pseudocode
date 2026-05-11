/*
 * XREFs of USBCntrlMuxSource @ 0x1400395B0
 * Callers:
 *     <none>
 * Callees:
 *     USBHwGetSetProperty @ 0x14003B5E0 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBCntrlMuxSource(__int64 a1, __int64 a2, char a3, unsigned __int8 *a4)
{
  int v4; // r10d
  __int64 v6; // rcx
  int v7; // ebx
  __int64 result; // rax
  unsigned __int8 v9; // [rsp+70h] [rbp+18h] BYREF

  v4 = a1;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v9 = 0;
  v7 = a3 & 0x80;
  if ( (a3 & 0x80) == 0 )
    v9 = *a4;
  result = USBHwGetSetProperty(
             v4,
             27,
             v7 != 0,
             a3,
             0,
             0,
             *(_WORD *)(a2 + 80),
             *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 2LL),
             (__int64)&v9,
             1);
  if ( (int)result >= 0 )
  {
    if ( v7 )
      *(_DWORD *)a4 = v9;
  }
  return result;
}
