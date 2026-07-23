/*
 * XREFs of AdtpBuildMacStrings @ 0x140896214
 * Callers:
 *     AdtpBuildSockAddrString @ 0x140AA9814 (AdtpBuildSockAddrString.c)
 * Callees:
 *     RtlEthernetAddressToStringW @ 0x1404FEE90 (RtlEthernetAddressToStringW.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildMacStrings(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v6; // ebx
  __int64 Pool2; // rax

  if ( *(_WORD *)a1 != 33 )
  {
    v6 = -1073741503;
    if ( !a3 )
      return v6;
    goto LABEL_8;
  }
  if ( !a2 || !a3 )
    return 0;
  *(_WORD *)(a2 + 2) = 36;
  Pool2 = ExAllocatePool2(0x100uLL);
  *(_QWORD *)(a2 + 8) = Pool2;
  if ( Pool2 )
  {
    *a3 = 1;
    *(_WORD *)a2 = 2
                 * ((__int64)((unsigned int)RtlEthernetAddressToStringW((const DL_EUI48 *)(a1 + 2), *(PWSTR *)(a2 + 8))
                            - *(_DWORD *)(a2 + 8)) >> 1);
    return 0;
  }
  v6 = -1073741801;
LABEL_8:
  if ( *a3 )
  {
    *a3 = 0;
    ExFreePoolWithTag(*(PVOID *)(a2 + 8), 0);
  }
  return v6;
}
