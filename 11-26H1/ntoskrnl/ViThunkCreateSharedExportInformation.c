/*
 * XREFs of ViThunkCreateSharedExportInformation @ 0x140C4407C
 * Callers:
 *     VfThunkAddTargetNotify @ 0x140C43FA0 (VfThunkAddTargetNotify.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x140356550 (RtlNumberOfClearBits.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ViThunkFreeSharedThunksArray @ 0x140C4404C (ViThunkFreeSharedThunksArray.c)
 *     ViThunkSnapSharedExports @ 0x140C44130 (ViThunkSnapSharedExports.c)
 */

__int64 __fastcall ViThunkCreateSharedExportInformation(__int64 a1, __int64 a2, __int64 a3, RTL_BITMAP *a4, void **a5)
{
  unsigned int v8; // ebx
  ULONG v9; // eax
  ULONG v10; // esi
  ULONG_PTR Pool2; // rax

  v8 = 1;
  v9 = RtlNumberOfClearBits(a4);
  v10 = v9;
  if ( v9 )
  {
    Pool2 = ExAllocatePool2(64LL, 24LL * v9, 0x54496656u);
    *a5 = (void *)Pool2;
    if ( Pool2 )
    {
      if ( !(unsigned int)ViThunkSnapSharedExports(a1, a2, 56LL, a4, v10, Pool2) )
        ViThunkFreeSharedThunksArray(a5);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *a5 = 0LL;
  }
  return v8;
}
