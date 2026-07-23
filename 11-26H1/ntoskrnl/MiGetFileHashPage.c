/*
 * XREFs of MiGetFileHashPage @ 0x1404D5A28
 * Callers:
 *     MiMapPageFileHash @ 0x140499D94 (MiMapPageFileHash.c)
 * Callees:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiGetFileHashPage(__int64 a1, unsigned int a2)
{
  ULONG *v2; // rdi
  __int64 Page; // rbx

  v2 = *(ULONG **)(a1 + 224);
  if ( (int)MiAcquireNonPagedResources(v2, 1uLL, 128LL, 2LL) < 0 )
  {
    ++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[24];
    return -1LL;
  }
  else
  {
    Page = MiGetPage((__int64)v2, a2, 0x30u);
    if ( Page == -1 )
    {
      ++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[24];
      MiReleaseNonPagedResources((__int64)v2, 1LL);
    }
    else
    {
      _InterlockedIncrement64(&qword_140E37A28);
    }
    return Page;
  }
}
