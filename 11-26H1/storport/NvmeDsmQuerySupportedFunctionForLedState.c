/*
 * XREFs of NvmeDsmQuerySupportedFunctionForLedState @ 0x14008FB0C
 * Callers:
 *     NvmeAdapterQueryLedState @ 0x14008F2B8 (NvmeAdapterQueryLedState.c)
 *     NvmeAdapterSetLedStateByAcpiDsm @ 0x14008F3D4 (NvmeAdapterSetLedStateByAcpiDsm.c)
 * Callees:
 *     RaidEvaluateDsmLedState @ 0x140093F20 (RaidEvaluateDsmLedState.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeDsmQuerySupportedFunctionForLedState(struct _DEVICE_OBJECT *a1)
{
  _DWORD *DeviceExtension; // rbx
  int v3; // edx
  __int64 Src; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+38h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-20h]

  DeviceExtension = a1->DeviceExtension;
  v6 = 0LL;
  v5 = 0LL;
  if ( !DeviceExtension )
    return 3221225473LL;
  if ( (DeviceExtension[36] & 0x10000) != 0 )
    return 0LL;
  LODWORD(Src) = 24;
  v3 = RaidEvaluateDsmLedState(a1, (__int64)&Src);
  if ( v3 >= 0 )
  {
    if ( (unsigned int)Src >= 0x14 && (_DWORD)v5 == 1114596673 && DWORD2(v5) && WORD6(v5) == 2 )
    {
      *(_DWORD *)(*((_QWORD *)DeviceExtension + 74) + 152LL) = v6 & 0xF;
      *((_QWORD *)DeviceExtension + 18) |= 0x10000uLL;
    }
    else
    {
      return (unsigned int)-1072431089;
    }
  }
  return (unsigned int)v3;
}
