/*
 * XREFs of GenInteger @ 0x140137E48
 * Callers:
 *     GenSetTableColumnParams @ 0x1401336A0 (GenSetTableColumnParams.c)
 *     GenActivateParams @ 0x140134410 (GenActivateParams.c)
 *     GenSetTPerPropertiesParams @ 0x140135910 (GenSetTPerPropertiesParams.c)
 *     GenStartSessionParams @ 0x140135AD0 (GenStartSessionParams.c)
 *     GenCallMethodEnd @ 0x140137D20 (GenCallMethodEnd.c)
 *     GenNamedValueBegin @ 0x140138048 (GenNamedValueBegin.c)
 *     GenNamedValueInt @ 0x1401380EC (GenNamedValueInt.c)
 * Callees:
 *     WPP_SF_DD @ 0x14006F340 (WPP_SF_DD.c)
 *     GenShortInteger @ 0x140138268 (GenShortInteger.c)
 */

__int64 __fastcall GenInteger(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // r9d
  unsigned int v4; // r10d
  __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-18h]

  if ( a2 >= 0x40 )
  {
    return (unsigned int)GenShortInteger(a1, a2, a1);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 8);
    v4 = 0;
    v5 = *(unsigned int *)(a1 + 12);
    if ( (int)v5 + 1 <= v3 )
    {
      *(_BYTE *)(v5 + *(_QWORD *)a1) = a2 & 0x3F;
      ++*(_DWORD *)(a1 + 12);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        v7 = v5 + 1;
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xAu,
          (__int64)&WPP_7125d21b90f93d8abdbf4e6e2db0cd73_Traceguids,
          v3,
          v7);
      }
      return (unsigned int)-1073741789;
    }
  }
  return v4;
}
