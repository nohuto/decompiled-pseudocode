/*
 * XREFs of MiReturnMdlCharges @ 0x1404FB278
 * Callers:
 *     MiReturnMdlExcess @ 0x1406F38F4 (MiReturnMdlExcess.c)
 *     MiFreeBootPageTable @ 0x140CF8EB0 (MiFreeBootPageTable.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x1403CCED8 (MiReleaseNonPagedResourcesNotExposed.c)
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
