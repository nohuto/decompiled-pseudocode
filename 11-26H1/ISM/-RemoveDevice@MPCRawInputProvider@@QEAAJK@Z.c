/*
 * XREFs of ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x1800CF8E4
 * Callers:
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800D06AC (-Unregister@SpectrumListener@@QEAAXXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAPEAUColor@UI@Windows@@QEAU234@AEBU234@@Z @ 0x180083A40 (--$_Emplace_reallocate@AEBUColor@UI@Windows@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180091F84 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800BC6F8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x1800CF99C (-RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::RemoveDevice(MPCRawInputProvider *this, unsigned int a2)
{
  int v4; // ebx
  unsigned int *v5; // rdx
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v4 = *((_DWORD *)this + 22);
  if ( GetCurrentThreadId() == v4 && std::_Atomic_storage<bool,1>::load((__int64)this + 80) )
  {
    MPCRawInputProvider::RemoveDeviceImpl(this, a2);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
    v5 = (unsigned int *)*((_QWORD *)this + 21);
    if ( v5 == *((unsigned int **)this + 22) )
    {
      std::vector<Windows::UI::Color>::_Emplace_reallocate<Windows::UI::Color const &>(
        (__int64 *)this + 20,
        (__int64)v5,
        (int *)&v7);
    }
    else
    {
      *v5 = a2;
      *((_QWORD *)this + 21) += 4LL;
    }
    wil::details::SetEvent(*((wil::details **)this + 9), v5);
    if ( this != (MPCRawInputProvider *)-96LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  }
  return 0LL;
}
