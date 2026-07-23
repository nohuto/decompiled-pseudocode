/*
 * XREFs of MiChargeSystemImageCommitment @ 0x140B331C0
 * Callers:
 *     MiMapSystemImage @ 0x140B22C34 (MiMapSystemImage.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
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
