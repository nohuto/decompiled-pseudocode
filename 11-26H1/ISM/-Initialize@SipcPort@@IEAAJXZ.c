/*
 * XREFs of ?Initialize@SipcPort@@IEAAJXZ @ 0x18009528C
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXPEAPEAVSipcPort@@@Z @ 0x1800750D0 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXPEAPEAVSipcPort@@@Z.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z @ 0x18010FB00 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z.c)
 *     ?CreateClientPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@EEAEBUSipcPrivateNamespaceAttributes@@_KGPEAXPEAIPEAPEAVSipcPort@@@Z @ 0x180110D1C (-CreateClientPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@EEAEBUSipcPrivateNamespaceAtt.c)
 * Callees:
 *     ?Attach@SipcWin32Handle@@QEAAXPEAX@Z @ 0x1800952F8 (-Attach@SipcWin32Handle@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall SipcPort::Initialize(SipcPort *this)
{
  SipcWin32Handle *v1; // rbx
  HANDLE EventW; // rax
  signed int LastError; // eax
  signed int v4; // ecx
  __int64 result; // rax

  v1 = (SipcPort *)((char *)this + 32);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  SipcWin32Handle::Attach(v1, EventW);
  if ( *(_QWORD *)v1 )
    return 0LL;
  LastError = GetLastError();
  v4 = LastError;
  if ( LastError > 0 )
    v4 = (unsigned __int16)LastError | 0x80070000;
  result = 2147549183LL;
  if ( v4 < 0 )
    return (unsigned int)v4;
  return result;
}
