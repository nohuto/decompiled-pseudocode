/*
 * XREFs of ?PbmmGetOnePageFromList@@YAPEAUPBMM_PAGE@@PEAUPBMM_PAGE_LIST@@@Z @ 0x140052D84
 * Callers:
 *     TrimSystemMemoryResources @ 0x140051DE4 (TrimSystemMemoryResources.c)
 *     ReserveAndSplitPage @ 0x1400526A8 (ReserveAndSplitPage.c)
 *     TryReserveOnePageFromLocation @ 0x140052764 (TryReserveOnePageFromLocation.c)
 * Callees:
 *     <none>
 */

struct PBMM_PAGE *__fastcall PbmmGetOnePageFromList(struct PBMM_PAGE_LIST *a1)
{
  struct PBMM_PAGE *result; // rax
  __int64 v2; // rdx

  result = *(struct PBMM_PAGE **)a1;
  if ( *(struct PBMM_PAGE_LIST **)(*(_QWORD *)a1 + 8LL) != a1
    || (v2 = *(_QWORD *)result, *(struct PBMM_PAGE **)(*(_QWORD *)result + 8LL) != result) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(v2 + 8) = a1;
  *(_OWORD *)result = 0LL;
  --*((_DWORD *)a1 + 4);
  return result;
}
