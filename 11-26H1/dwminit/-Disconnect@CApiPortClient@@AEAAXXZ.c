/*
 * XREFs of ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x18000F4C8
 * Callers:
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x18000C780 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ??1CApiPortClient@@QEAA@XZ @ 0x18000F41C (--1CApiPortClient@@QEAA@XZ.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000F50C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CApiPortClient::Disconnect(CApiPortClient *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 40), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
    *((_QWORD *)this + 1) = 0LL;
  }
}
