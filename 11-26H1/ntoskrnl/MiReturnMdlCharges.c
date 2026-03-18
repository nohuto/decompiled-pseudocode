/*
 * XREFs of MiReturnMdlCharges @ 0x140501A88
 * Callers:
 *     MiReturnMdlExcess @ 0x1406EEC54 (MiReturnMdlExcess.c)
 *     MiFreeBootPageTable @ 0x140CF2B30 (MiFreeBootPageTable.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14028C070 (MiReleaseNonPagedResources.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x1403C2FD8 (MiReleaseNonPagedResourcesNotExposed.c)
 */

unsigned __int64 __fastcall MiReturnMdlCharges(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 result; // rax

  if ( (a3 & 1) != 0 )
    result = MiReleaseNonPagedResourcesNotExposed(a1, a2);
  else
    result = MiReleaseNonPagedResources(a1, a2);
  if ( (a3 & 2) == 0 )
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 23488), -(__int64)a2);
  return result;
}
