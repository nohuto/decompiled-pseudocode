/*
 * XREFs of MmPrepareImagePagesForHotPatch @ 0x14087B034
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140701500 (MiPrepareImagePagesForHotPatch.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiImageVadHotPatchEligible @ 0x1408769B4 (MiImageVadHotPatchEligible.c)
 *     MiReleaseHotPatchResources @ 0x140B57DDC (MiReleaseHotPatchResources.c)
 *     MiInitializeImageHotPatchContext @ 0x140B6429C (MiInitializeImageHotPatchContext.c)
 */

__int64 __fastcall MmPrepareImagePagesForHotPatch(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  ULONG_PTR v6; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // rcx
  __int64 v10[7]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v11; // [rsp+58h] [rbp-21h]
  unsigned int v12; // [rsp+F0h] [rbp+77h] BYREF

  v12 = 0;
  memset_0(v10, 0, 0xA0uLL);
  *a3 = 0LL;
  MiInitializeImageHotPatchContext(v10, 0LL, 0LL);
  v6 = MiObtainReferencedVadEx(a1, 0LL, (int *)&v12);
  v7 = v6;
  if ( v6 )
  {
    if ( (MiReadVadFlags(v6) & 0x1C) == 8 )
    {
      if ( !MiImageVadHotPatchEligible(v8) )
      {
        v12 = -1073741637;
LABEL_9:
        MiUnlockAndDereferenceVad((volatile signed __int32 *)v7);
        goto LABEL_10;
      }
      if ( (((*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12) | 0xFFF) >= a1 + (a2 << 12) - 1 )
      {
        MiInitializeImageHotPatchContext(v10, 34404LL, v7);
        v12 = MiPrepareImagePagesForHotPatch(v10, a1, a2);
        if ( (v12 & 0x80000000) == 0 )
        {
          *a3 = v11;
          v11 = 0LL;
          v12 = 0;
        }
        goto LABEL_9;
      }
    }
    v12 = -1073741800;
    goto LABEL_9;
  }
LABEL_10:
  MiReleaseHotPatchResources(v10);
  return v12;
}
