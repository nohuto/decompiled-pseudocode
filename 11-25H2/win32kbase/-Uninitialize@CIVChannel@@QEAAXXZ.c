/*
 * XREFs of ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x14021EE08
 * Callers:
 *     ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1400CEC70 (-PreUninitialize@CKeyboardSensor@@EEAAXXZ.c)
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1400CECC0 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x14018C0E0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     IVWorkerThread @ 0x14021B528 (IVWorkerThread.c)
 * Callees:
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall CIVChannel::Uninitialize(CIVChannel *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  void (__fastcall *v6)(_QWORD); // rax

  if ( isChildPartition((__int64)this, a2) )
  {
    v5 = *((_DWORD *)this + 2);
    v6 = *(void (__fastcall **)(_QWORD))(W32GetUserSessionState(v4, v3) + 19552);
    if ( v6 )
      v6(v5);
  }
}
