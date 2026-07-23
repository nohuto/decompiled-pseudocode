/*
 * XREFs of PiSwValidatePropertyArray @ 0x140A195A0
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x1409ADB7C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x1409AE6BC (PiSwIrpInterfacePropertySet.c)
 *     PiSwValidateCreateData @ 0x140A8D068 (PiSwValidateCreateData.c)
 *     PiSwIrpPropertySet @ 0x140B071FC (PiSwIrpPropertySet.c)
 * Callees:
 *     _PnpValidatePropertyData @ 0x140A19604 (_PnpValidatePropertyData.c)
 */

__int64 __fastcall PiSwValidatePropertyArray(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 i; // rbx

  result = 0LL;
  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
  {
    if ( !*(_DWORD *)(a1 + 48 * i + 20) )
    {
      result = PnpValidatePropertyData(*(STRSAFE_PCUNZWCH *)(a1 + 48 * i + 40), *(_DWORD *)(a1 + 48 * i + 36));
      if ( (int)result >= 0 )
        continue;
    }
    return 3221225485LL;
  }
  return result;
}
