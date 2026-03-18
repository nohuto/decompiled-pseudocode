/*
 * XREFs of ??1DispBrokerClientHandle@@QEAA@XZ @ 0x140063C9C
 * Callers:
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x14005A8AC (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DispBrokerClientHandle::~DispBrokerClientHandle(DispBrokerClientHandle *this)
{
  ZwAlpcDisconnectPort(*((_QWORD *)this + 1), 0LL);
  ZwClose(*((HANDLE *)this + 1));
}
