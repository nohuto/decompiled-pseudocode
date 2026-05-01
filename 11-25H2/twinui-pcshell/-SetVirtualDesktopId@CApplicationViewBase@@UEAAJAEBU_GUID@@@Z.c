/*
 * XREFs of ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x180190640
 * Callers:
 *     <none>
 * Callees:
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_d38650e98aaa1c01633db47e65347927___ @ 0x180190720 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_d38650e98aaa1c01633db.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBase::SetVirtualDesktopId(RTL_SRWLOCK *this, const struct _GUID *a2)
{
  RTL_SRWLOCK *v4; // rsi
  char *v5; // rax
  int (__fastcall **Ptr)(RTL_SRWLOCK *, LPVOID *); // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  LPVOID pv[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = this + 6;
  AcquireSRWLockExclusive(this + 6);
  *(struct _GUID *)&this[14].Ptr = *a2;
  v5 = (char *)this[14].Ptr - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v5 )
    v5 = (char *)this[15].Ptr - *(_QWORD *)GUID_NULL.Data4;
  if ( v5 )
  {
    pv[0] = 0LL;
    Ptr = (int (__fastcall **)(RTL_SRWLOCK *, LPVOID *))this[2].Ptr;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    if ( Ptr[4](this + 2, pv) >= 0 )
    {
      v8[0] = pv;
      v8[1] = this;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_d38650e98aaa1c01633db47e65347927___(v8);
    }
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
