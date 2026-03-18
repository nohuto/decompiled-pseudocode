/*
 * XREFs of ?ProcessInput@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@PEAUTemporaryConfiguration@@@Z @ 0x180227CB8
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x180227F40 (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_.c)
 * Callees:
 *     ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x1801C59F4 (-ConfigureInteractionContextIfNecessary@-$CInputTypeContext@UDwmMousewheelInteractionConfigurati.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ProcessInput(
        _QWORD *a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v9; // edi
  int v10; // r10d
  __int64 v11; // rcx
  int v12; // ecx
  _BYTE v14[64]; // [rsp+30h] [rbp-78h] BYREF

  if ( *a1 )
  {
    if ( (*(_BYTE *)(a3 + 12) & 4) == 0 && (*(_DWORD *)(a3 + 12) & 0x180000) == 0
      || (v9 = CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
                 a1,
                 a2,
                 a5),
          v9 >= 0) )
    {
      v10 = a2[2];
      v11 = *a1;
      *((_DWORD *)a1 + 36) = v10;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, int *, int))(*(_QWORD *)v11 + 24LL))(
             v11,
             a3,
             a4,
             a2 + 82,
             v10);
      if ( v9 >= 0 )
      {
        v12 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a1 + 40LL))(*a1, v14) + 20);
        if ( v12 )
          *((_DWORD *)a1 + 38) = v12;
        *((_BYTE *)a1 + 148) |= 8u;
      }
    }
  }
  else
  {
    return (unsigned int)-2147019873;
  }
  return (unsigned int)v9;
}
