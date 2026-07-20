/*
 * XREFs of TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x140001140
 * Callers:
 *     wmain @ 0x140001618 (wmain.c)
 * Callees:
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation()
{
  int v0; // eax
  unsigned int v1; // ebx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_OWORD *)off_14002FE10 - 1);
  if ( qword_14002FE28 )
    __fastfail(5u);
  xmmword_14002FE30 = 0LL;
  v0 = ((__int64 (__fastcall *)(__int128 *, __int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64), int *, __int64 *))EtwEventRegister)(
         &v3,
         tlgEnableCallback,
         &dword_14002FE08,
         &qword_14002FE28);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 > 0 )
      return (unsigned __int16)v0 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(
      qword_14002FE28,
      2LL,
      off_14002FE10,
      *(unsigned __int16 *)off_14002FE10,
      v3,
      *((_QWORD *)&v3 + 1));
  }
  return v1;
}
