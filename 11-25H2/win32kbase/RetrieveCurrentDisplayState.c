/*
 * XREFs of RetrieveCurrentDisplayState @ 0x14015B918
 * Callers:
 *     SetProtocolType @ 0x140148C80 (SetProtocolType.c)
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RetrieveCurrentDisplayState(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 UserSessionState; // rdi
  NTSTATUS result; // eax
  NTSTATUS v5; // edx
  int v6; // eax
  int OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  OutputBuffer = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  result = ZwPowerInformation(SystemVideoState, 0LL, 0, &OutputBuffer, 4u);
  v5 = result;
  if ( result >= 0 )
  {
    if ( **(_BYTE **)(UserSessionState + 2712) )
    {
      v6 = 0;
      OutputBuffer = 0;
    }
    else
    {
      v6 = OutputBuffer;
    }
    *(_DWORD *)(UserSessionState + 2888) = v6;
    result = v5;
    LOBYTE(v2) = OutputBuffer != 0;
  }
  else
  {
    *(_DWORD *)(UserSessionState + 2888) = 0;
  }
  *(_DWORD *)(UserSessionState + 2752) = v2;
  return result;
}
