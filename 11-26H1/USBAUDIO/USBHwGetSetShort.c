/*
 * XREFs of USBHwGetSetShort @ 0x14003B470
 * Callers:
 *     <none>
 * Callees:
 *     USBHwGetSetProperty @ 0x14003B5E0 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBHwGetSetShort(__int64 a1, __int16 a2, __int16 a3, int a4, _WORD *a5, unsigned __int8 a6)
{
  int v6; // r10d
  _DWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 result; // rax
  __int16 v10; // [rsp+20h] [rbp-38h]
  unsigned __int16 v11; // [rsp+60h] [rbp+8h] BYREF

  v6 = a1;
  v7 = a5;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v11 = 0;
  if ( (a6 & 0x80u) == 0 )
    v11 = *a5;
  v10 = a4;
  LOBYTE(a4) = a6;
  result = USBHwGetSetProperty(
             v6,
             27,
             a6 >> 7,
             a4,
             v10,
             a3,
             a2,
             *(unsigned __int8 *)(*(_QWORD *)(v8 + 48) + 2LL),
             (__int64)&v11,
             2);
  if ( (a6 & 0x80u) != 0 && (int)result >= 0 )
    *v7 = v11;
  return result;
}
