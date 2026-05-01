/*
 * XREFs of ?RefreshEnterpriseId@CApplicationViewBase@@UEAAJ_N@Z @ 0x1801AF080
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::RefreshEnterpriseId(RTL_SRWLOCK *this, char a2)
{
  RTL_SRWLOCK *v4; // rsi
  RTL_SRWLOCK *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this + 3;
  AcquireSRWLockExclusive(this + 3);
  v5 = this - 3;
  if ( a2 )
    LOBYTE(v5[7].Ptr) = 1;
  v6 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *))v5->Ptr + 64))(v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)v6);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x125,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)v7);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v7;
}
