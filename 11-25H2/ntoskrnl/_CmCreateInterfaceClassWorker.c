/*
 * XREFs of _CmCreateInterfaceClassWorker @ 0x140A71788
 * Callers:
 *     _CmCreateInterfaceClass @ 0x140A715F4 (_CmCreateInterfaceClass.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1408CA33C (_CmOpenCommonClassRegKey.c)
 *     _CmRaiseCreateEvent @ 0x14094F02C (_CmRaiseCreateEvent.c)
 */

__int64 __fastcall CmCreateInterfaceClassWorker(_QWORD *a1, const WCHAR *a2, int a3, __int64 a4, _BYTE *a5, __int16 a6)
{
  int v8; // ebx
  _DWORD v10[6]; // [rsp+40h] [rbp-18h] BYREF

  v10[0] = 0;
  if ( a6 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v8 = CmOpenCommonClassRegKey(a1, a2, 64, 0, a3, 1, a4, v10);
    if ( v8 >= 0 )
    {
      if ( v10[0] == 1 )
      {
        *a5 = 1;
        CmRaiseCreateEvent((__int64)a1, (__int64)a2, 4u);
      }
      else
      {
        *a5 = 0;
      }
    }
  }
  return (unsigned int)v8;
}
