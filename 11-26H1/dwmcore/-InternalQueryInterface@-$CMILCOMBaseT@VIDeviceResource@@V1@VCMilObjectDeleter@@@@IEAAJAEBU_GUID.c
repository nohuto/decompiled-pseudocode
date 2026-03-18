/*
 * XREFs of ?InternalQueryInterface@?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018BE60
 * Callers:
 *     ?QueryInterface@CDeviceTextureTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018BE50 (-QueryInterface@CDeviceTextureTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>::InternalQueryInterface(
        volatile signed __int32 *a1,
        _QWORD *a2,
        volatile signed __int32 **a3)
{
  __int64 v5; // rax
  __int64 result; // rax
  unsigned int v7; // esi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
    return 2147942487LL;
  v5 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v5 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v5 )
  {
    result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 104LL))(a1);
    v7 = result;
    if ( (int)result < 0 )
    {
      *a3 = 0LL;
      return result;
    }
  }
  else
  {
    *a3 = a1;
    v7 = 0;
  }
  if ( _InterlockedAdd(a1 + 2, 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v8);
  return v7;
}
