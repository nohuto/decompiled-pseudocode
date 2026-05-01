/*
 * XREFs of ?get_AppMemoryUsage@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x18000F210
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 */

signed int __fastcall Windows::System::CMemoryManager::get_AppMemoryUsage(
        Windows::System::CMemoryManager *this,
        unsigned __int64 *a2)
{
  HANDLE CurrentProcess; // rax
  signed int result; // eax
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]

  v5 = 0LL;
  v6 = 0LL;
  if ( !a2 )
    return -2147024809;
  *a2 = 0LL;
  CurrentProcess = GetCurrentProcess();
  if ( (unsigned int)((__int64 (__fastcall *)(HANDLE, __int64, __int128 *, __int64))GetProcessInformation)(
                       CurrentProcess,
                       2LL,
                       &v5,
                       32LL) )
  {
    result = 0;
    *a2 = *((_QWORD *)&v6 + 1);
  }
  else
  {
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
