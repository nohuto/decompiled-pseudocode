/*
 * XREFs of ?QueryInterface@LampArrayRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180083950
 * Callers:
 *     ?QueryInterface@LampArrayRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E4460 (-QueryInterface@LampArrayRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@LampArrayRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E4470 (-QueryInterface@LampArrayRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@LampArrayRawInputProvider@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E4480 (-QueryInterface@LampArrayRawInputProvider@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall LampArrayRawInputProvider::QueryInterface(
        LampArrayRawInputProvider *this,
        const struct _GUID *a2,
        LampArrayRawInputProvider **a3)
{
  LampArrayRawInputProvider *v5; // rdx
  volatile signed __int32 *v6; // rax
  unsigned __int64 v7; // rcx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x125,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)0x80004003LL,
      v8);
    return 2147500035LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    v5 = (LampArrayRawInputProvider *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
    v6 = (volatile signed __int32 *)((char *)this + 32);
LABEL_16:
    _InterlockedIncrement(v6);
    *a3 = v5;
    return 0LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data4 )
  {
    v5 = this;
    v6 = (volatile signed __int32 *)((char *)this + 32);
    goto LABEL_16;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4 )
  {
    v7 = (unsigned __int64)this + 16;
LABEL_15:
    v6 = (volatile signed __int32 *)((char *)this + 32);
    v5 = (LampArrayRawInputProvider *)(v7 & -(__int64)(this != 0LL));
    goto LABEL_16;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a78e6167_d56f_4297_8f03_6a5ea7fe3025.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_a78e6167_d56f_4297_8f03_6a5ea7fe3025.Data4 )
  {
    v7 = (unsigned __int64)this + 8;
    goto LABEL_15;
  }
  *a3 = 0LL;
  return 2147500034LL;
}
