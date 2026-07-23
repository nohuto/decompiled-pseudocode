/*
 * XREFs of MiGetVadForHotPatchInProgress @ 0x1408763E8
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 *     MiCreatePatchSectionRequest @ 0x140875B58 (MiCreatePatchSectionRequest.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiWriteVadFlags @ 0x14046CF50 (MiWriteVadFlags.c)
 *     MiVadDeleted @ 0x14047A3A8 (MiVadDeleted.c)
 *     MiImageVadHotPatchEligible @ 0x1408769B4 (MiImageVadHotPatchEligible.c)
 */

__int64 __fastcall MiGetVadForHotPatchInProgress(unsigned __int64 a1, int a2, __int64 *a3, int *a4)
{
  unsigned int v4; // ebx
  ULONG_PTR v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned int VadFlags; // edi
  int v13; // edi
  unsigned int v16; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  *a3 = 0LL;
  v16 = 0;
  *a4 = 0;
  v9 = MiObtainReferencedVadEx(a1, 0LL, (int *)&v16);
  v10 = v9;
  if ( !v9 )
    return v16;
  VadFlags = MiReadVadFlags(v9);
  if ( (VadFlags & 0x1C) != 8 || (unsigned int)MiVadDeleted(v11) )
    goto LABEL_3;
  if ( !(unsigned int)MiImageVadHotPatchEligible() )
  {
    v4 = -1073741637;
    goto LABEL_19;
  }
  if ( a1 != (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12 )
  {
LABEL_3:
    v4 = -1073741800;
LABEL_19:
    MiUnlockAndDereferenceVad((volatile signed __int32 *)v10);
    return v4;
  }
  if ( (VadFlags & 0x80000) != 0 )
  {
    v13 = 0;
  }
  else
  {
    v13 = (VadFlags >> 21) & 3;
    if ( v13 == 1 )
    {
      v4 = -1073740682;
      goto LABEL_19;
    }
    if ( v13 )
    {
      if ( !(a2 ? v13 == 3 : v13 == 2) )
      {
        v4 = -1073700861;
        goto LABEL_19;
      }
    }
  }
  MiWriteVadFlags(v10, 4LL, 1LL);
  *a4 = v13;
  *a3 = v10;
  return v4;
}
