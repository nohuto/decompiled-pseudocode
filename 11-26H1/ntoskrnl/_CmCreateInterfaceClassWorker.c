/*
 * XREFs of _CmCreateInterfaceClassWorker @ 0x140AF2B74
 * Callers:
 *     _CmCreateInterfaceClass @ 0x140AF29E0 (_CmCreateInterfaceClass.c)
 * Callees:
 *     _CmOpenInterfaceClassRegKey @ 0x140917D00 (_CmOpenInterfaceClassRegKey.c)
 *     _CmRaiseCreateEvent @ 0x140AF2E58 (_CmRaiseCreateEvent.c)
 */

__int64 __fastcall CmCreateInterfaceClassWorker(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _BYTE *a5, __int16 a6)
{
  int v9; // ebx
  _DWORD v11[6]; // [rsp+40h] [rbp-18h] BYREF

  v11[0] = 0;
  if ( a6 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = CmOpenInterfaceClassRegKey(a1, a2, a3, (__int64)a4, a3, 1, (__int64)a4, v11);
    if ( v9 >= 0 )
    {
      if ( v11[0] == 1 )
      {
        *a5 = 1;
        CmRaiseCreateEvent(a1, a2, 4LL, *a4);
      }
      else
      {
        *a5 = 0;
      }
    }
  }
  return (unsigned int)v9;
}
