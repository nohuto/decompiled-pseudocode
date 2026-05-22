/*
 * XREFs of ?QueryInterface@InjectionRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E2C50
 * Callers:
 *     ?QueryInterface@InjectionRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E2CF0 (-QueryInterface@InjectionRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall InjectionRawInputProvider::QueryInterface(
        InjectionRawInputProvider *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  char *v5; // rax
  volatile signed __int32 *v6; // rax
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v4 )
  {
    v5 = (char *)this + 8;
    this = (InjectionRawInputProvider *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    v6 = (volatile signed __int32 *)(v5 + 8);
LABEL_11:
    _InterlockedIncrement(v6);
    *a3 = this;
    return 0LL;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data4;
  if ( !v7 )
  {
    v6 = (volatile signed __int32 *)((char *)this + 16);
    goto LABEL_11;
  }
  *a3 = 0LL;
  return 2147500034LL;
}
