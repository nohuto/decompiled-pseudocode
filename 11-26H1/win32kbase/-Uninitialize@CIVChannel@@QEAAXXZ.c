/*
 * XREFs of ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1402225A0
 * Callers:
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x140117750 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 *     ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x140117830 (-PreUninitialize@CKeyboardSensor@@EEAAXXZ.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1402198D0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     IVWorkerThread @ 0x14021F9FC (IVWorkerThread.c)
 * Callees:
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall CIVChannel::Uninitialize(CIVChannel *this, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  unsigned int v7; // ebx
  void (__fastcall *v8)(_QWORD); // rax

  if ( isChildPartition((int)this, a2, a3) )
  {
    v7 = *((_DWORD *)this + 2);
    v8 = *(void (__fastcall **)(_QWORD))(W32GetUserSessionState(v5, v4, v6) + 19584);
    if ( v8 )
      v8(v7);
  }
}
