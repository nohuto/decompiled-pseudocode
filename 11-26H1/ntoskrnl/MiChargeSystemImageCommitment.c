/*
 * XREFs of MiChargeSystemImageCommitment @ 0x140B30FC0
 * Callers:
 *     MiMapSystemImage @ 0x140B20834 (MiMapSystemImage.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14028C070 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x1402F4A50 (MiAcquireNonPagedResources.c)
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 */

__int64 __fastcall MiChargeSystemImageCommitment(__int64 a1)
{
  unsigned __int64 v1; // rax
  int v2; // r8d
  unsigned __int64 v3; // rdx

  v1 = MiSectionControlArea(a1);
  v3 = *(unsigned int *)(*(_QWORD *)v1 + 8LL);
  if ( *(_DWORD *)(*(_QWORD *)v1 + 8LL) )
  {
    if ( v2 == 1 )
    {
      if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, v3, 0LL, 0LL) < 0 )
        return 3221225626LL;
    }
    else
    {
      MiReleaseNonPagedResources((__int64)&MiSystemPartition, v3);
    }
  }
  return 0LL;
}
