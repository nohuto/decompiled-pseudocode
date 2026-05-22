/*
 * XREFs of ??0AlpcPort@@AEAA@G@Z @ 0x180096870
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXPEAPEAVSipcPort@@@Z @ 0x1800750D0 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXPEAPEAVSipcPort@@@Z.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z @ 0x18010FB00 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z.c)
 *     ?CreateClientPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@EEAEBUSipcPrivateNamespaceAttributes@@_KGPEAXPEAIPEAPEAVSipcPort@@@Z @ 0x180110D1C (-CreateClientPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@EEAEBUSipcPrivateNamespaceAtt.c)
 * Callees:
 *     <none>
 */

AlpcPort *__fastcall AlpcPort::AlpcPort(AlpcPort *this, __int16 a2)
{
  AlpcPort *result; // rax

  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 2) = (char *)this + 8;
  *((_QWORD *)this + 1) = (char *)this + 8;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &AlpcPort::`vftable';
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 44) = 1;
  *((_QWORD *)this + 6) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *(_OWORD *)((char *)this + 72) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  result = this;
  *((_WORD *)this + 29) = 40;
  *((_DWORD *)this + 106) = 1610612736;
  *((_WORD *)this + 248) = a2;
  return result;
}
