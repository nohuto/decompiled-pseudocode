/*
 * XREFs of IopSymlinkApplyToOpenedName @ 0x1409353A0
 * Callers:
 *     IopGraftName @ 0x140934204 (IopGraftName.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     IopSymlinkUpdateECP @ 0x1409347F8 (IopSymlinkUpdateECP.c)
 *     IopReplaceSymlinkPath @ 0x140935534 (IopReplaceSymlinkPath.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSymlinkApplyToOpenedName(__int64 a1, __int64 a2, __int64 a3, IRP *a4, PVOID P, __int16 a6)
{
  void *v6; // r13
  void *Pool2; // r14
  UNICODE_STRING *v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int16 v14; // dx
  int v15; // esi

  v6 = *(void **)(a1 + 96);
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  v12 = (UNICODE_STRING *)(a1 + 88);
  v13 = *(unsigned __int16 *)(a1 + 88);
  if ( (unsigned int)v13 > 2 && *(_WORD *)(*(_QWORD *)(a1 + 96) + 2 * (v13 >> 1) - 2) == 92 )
  {
    if ( *(_WORD *)(a3 + 6) < 2u )
    {
      ExFreePoolWithTag(Pool2, 0);
      return 3221225485LL;
    }
    v12->Length = v13 - 2;
    *(_WORD *)(a3 + 6) -= 2;
  }
  memmove(P, *(const void **)(a2 + 24), *(unsigned __int16 *)(a2 + 4));
  memmove(
    Pool2,
    (const void *)(*(_QWORD *)(a2 + 24) + *(unsigned __int16 *)(a2 + 4)),
    *(unsigned __int16 *)(a2 + 16) - (unsigned __int64)*(unsigned __int16 *)(a2 + 4));
  *(_QWORD *)(a1 + 96) = Pool2;
  v14 = *(_WORD *)(a2 + 16) - *(_WORD *)(a2 + 4);
  *(_WORD *)(a1 + 90) = v14;
  v12->Length = v14;
  ExFreePoolWithTag(v6, 0);
  v15 = IopReplaceSymlinkPath(
          (int)P,
          *(unsigned __int16 *)(a2 + 4) >> 1,
          a1,
          a3,
          *(_WORD *)(a2 + 4) >> 1,
          *(_WORD *)(a2 + 4),
          a6);
  if ( v15 < 0 )
    ExFreePoolWithTag(P, 0);
  else
    return (unsigned int)IopSymlinkUpdateECP(
                           a4,
                           (UNICODE_STRING *)a2,
                           0,
                           v12,
                           *(_WORD *)(a2 + 4),
                           *(_WORD *)(a2 + 2) & 0xFFFE);
  return (unsigned int)v15;
}
