/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x1800A1030
 * Callers:
 *     AslpPathWildcardAllocMatchNode @ 0x1800A0760 (AslpPathWildcardAllocMatchNode.c)
 *     RtlUnicodeStringCbCatStringN @ 0x1800A0EC8 (RtlUnicodeStringCbCatStringN.c)
 *     RtlUnicodeStringCopy @ 0x1800A0F68 (RtlUnicodeStringCopy.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x1800A1098 (RtlUnicodeStringValidateWorker.c)
 */

__int64 __fastcall RtlUnicodeStringValidateDestWorker(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  unsigned __int64 *v7; // r9
  unsigned __int16 *v8; // r10
  unsigned __int64 *v9; // r11

  *a2 = 0LL;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  result = RtlUnicodeStringValidateWorker(a1, a2, a3, a4);
  if ( (int)result >= 0 && v8 )
  {
    *a2 = *(_QWORD *)(v6 + 8);
    *v9 = (unsigned __int64)v8[1] >> 1;
    if ( v7 )
      *v7 = (unsigned __int64)*v8 >> 1;
  }
  return result;
}
