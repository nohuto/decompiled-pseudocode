/*
 * XREFs of ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180180540
 * Callers:
 *     ?QueryInterface@?$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180180530 (-QueryInterface@-$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface(
        volatile signed __int32 *a1,
        _QWORD *a2,
        volatile signed __int32 **a3)
{
  __int64 v5; // rax
  unsigned int v6; // edi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
    return 2147942487LL;
  v5 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v5 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 40LL))(a1);
    if ( (v6 & 0x80000000) != 0 )
    {
      *a3 = 0LL;
      return v6;
    }
  }
  else
  {
    *a3 = a1;
    v6 = 0;
  }
  if ( _InterlockedAdd(a1 + 2, 1u) > 0 )
    return v6;
  wil::details::in1diag3::Log_Hr(
    retaddr,
    (void *)0x18,
    (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
    (const char *)0x8007029CLL,
    v8);
  return v6;
}
