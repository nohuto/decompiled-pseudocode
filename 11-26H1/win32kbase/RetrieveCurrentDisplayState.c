/*
 * XREFs of RetrieveCurrentDisplayState @ 0x14017D4FC
 * Callers:
 *     SetProtocolType @ 0x14017D3E0 (SetProtocolType.c)
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RetrieveCurrentDisplayState(int a1, int a2, int a3)
{
  int v3; // ebx
  __int64 UserSessionState; // rdi
  NTSTATUS result; // eax
  NTSTATUS v6; // edx
  int v7; // eax
  int OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  OutputBuffer = 0;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  result = ZwPowerInformation(SystemVideoState, 0LL, 0, &OutputBuffer, 4u);
  v6 = result;
  if ( result < 0 )
  {
    *(_DWORD *)(UserSessionState + 2888) = 0;
  }
  else
  {
    if ( **(_BYTE **)(UserSessionState + 2712) )
    {
      v7 = 0;
      OutputBuffer = 0;
    }
    else
    {
      v7 = OutputBuffer;
    }
    *(_DWORD *)(UserSessionState + 2888) = v7;
    result = v6;
    LOBYTE(v3) = OutputBuffer != 0;
  }
  *(_DWORD *)(UserSessionState + 2748) = v3;
  return result;
}
