/*
 * XREFs of RaidDsmQuerySupportedFunctionForLedState @ 0x140093CB4
 * Callers:
 *     RaidQueryLedStateByAcpiDsm @ 0x1400958B4 (RaidQueryLedStateByAcpiDsm.c)
 *     RaidSetLedStateByAcpiDsm @ 0x140095E84 (RaidSetLedStateByAcpiDsm.c)
 * Callees:
 *     RaidEvaluateDsmLedState @ 0x140093F20 (RaidEvaluateDsmLedState.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidDsmQuerySupportedFunctionForLedState(struct _DEVICE_OBJECT *a1)
{
  _BYTE *DeviceExtension; // rbx
  __int64 result; // rax
  int v3; // ecx
  int v4; // eax
  __int64 Src; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+38h] [rbp-30h]
  __int64 v7; // [rsp+48h] [rbp-20h]

  DeviceExtension = a1->DeviceExtension;
  result = 0LL;
  v7 = 0LL;
  v6 = 0LL;
  if ( !DeviceExtension )
    return 3221225473LL;
  if ( (DeviceExtension[109] & 0x10) == 0 )
  {
    LODWORD(Src) = 24;
    v3 = RaidEvaluateDsmLedState(a1, (__int64)&Src);
    if ( v3 >= 0 )
    {
      if ( (unsigned int)Src >= 0x14 && (_DWORD)v6 == 1114596673 && DWORD2(v6) && WORD6(v6) == 2 )
      {
        v4 = v7 & 0xF;
        DeviceExtension[109] |= 0x10u;
        *((_DWORD *)DeviceExtension + 1445) = v4;
      }
      else
      {
        return (unsigned int)-1072431089;
      }
    }
    return (unsigned int)v3;
  }
  return result;
}
