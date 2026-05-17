/*
 * XREFs of LdrpTouchThreadStack @ 0x1800CED2C
 * Callers:
 *     _LdrpInitialize @ 0x1800CEF48 (_LdrpInitialize.c)
 * Callees:
 *     LdrpGenericExceptionFilter @ 0x18015B768 (LdrpGenericExceptionFilter.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpTouchThreadStack(unsigned __int64 a1)
{
  struct _TEB *v2; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  _QWORD v6[8]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v7; // [rsp+88h] [rbp+10h] BYREF

  memset(v6, 0, 48);
  v7 = 0LL;
  v2 = NtCurrentTeb();
  result = ZwQueryVirtualMemory(-1LL, v2->NtTib.StackLimit, 0LL, v6, 48LL, &v7);
  if ( (int)result >= 0 )
  {
    v4 = (unsigned __int64)v2->NtTib.StackBase - 4096;
    if ( v4 > a1 )
    {
      v5 = v4 - a1;
      if ( v4 - a1 <= v6[1] + 12288LL )
        v5 = v6[1] + 12288LL;
    }
    else
    {
      v5 = v6[1] + 12288LL;
    }
    while ( v4 >= v5 )
      v4 -= 4096LL;
    return 0LL;
  }
  return result;
}
