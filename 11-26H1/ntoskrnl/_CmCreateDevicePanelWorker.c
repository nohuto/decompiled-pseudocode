/*
 * XREFs of _CmCreateDevicePanelWorker @ 0x140781ACC
 * Callers:
 *     _CmCreateDevicePanel @ 0x140B2D3FC (_CmCreateDevicePanel.c)
 * Callees:
 *     _CmOpenDevicePanelRegKey @ 0x1408A0FBC (_CmOpenDevicePanelRegKey.c)
 *     _CmRaiseCreateEvent @ 0x140AF5644 (_CmRaiseCreateEvent.c)
 */

__int64 __fastcall CmCreateDevicePanelWorker(__int64 a1, __int64 a2, int a3, _QWORD *a4, _BYTE *a5, __int16 a6)
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
    v9 = CmOpenDevicePanelRegKey(a1, a2, a3, (_DWORD)a4, a3, 1, (__int64)a4, (__int64)v11);
    if ( v9 >= 0 )
    {
      if ( v11[0] == 1 )
      {
        *a5 = 1;
        CmRaiseCreateEvent(a1, a2, 6LL, *a4);
      }
      else
      {
        *a5 = 0;
      }
    }
  }
  return (unsigned int)v9;
}
