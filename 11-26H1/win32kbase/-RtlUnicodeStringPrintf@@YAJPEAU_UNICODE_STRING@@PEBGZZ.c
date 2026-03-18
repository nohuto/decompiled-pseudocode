/*
 * XREFs of ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x14018F72C
 * Callers:
 *     RIMIDECreateDeviceInstancePath @ 0x14018F42C (RIMIDECreateDeviceInstancePath.c)
 * Callees:
 *     _vsnwprintf @ 0x1401C742C (_vsnwprintf.c)
 */

__int64 RtlUnicodeStringPrintf(struct _UNICODE_STRING *a1, const unsigned __int16 *a2, ...)
{
  USHORT Length; // cx
  unsigned __int64 MaximumLength; // rax
  unsigned int v5; // ebx
  unsigned __int64 v6; // rsi
  int v7; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, a2);
  Length = a1->Length;
  if ( (Length & 1) != 0 )
    return (unsigned int)-1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( Length > (unsigned __int16)MaximumLength )
    return (unsigned int)-1073741811;
  if ( (_WORD)MaximumLength == 0xFFFF )
    return (unsigned int)-1073741811;
  v5 = 0;
  if ( !a1->Buffer && (Length || (_WORD)MaximumLength) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v6 = MaximumLength >> 1;
    v7 = vsnwprintf(a1->Buffer, MaximumLength >> 1, a2, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      LOWORD(v7) = v6;
      v5 = -2147483643;
    }
    a1->Length = 2 * v7;
  }
  return v5;
}
