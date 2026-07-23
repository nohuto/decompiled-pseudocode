/*
 * XREFs of MmCommitHotPatchTable @ 0x14087AD88
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiCommitHotPatchTable @ 0x140700C9C (MiCommitHotPatchTable.c)
 *     MiImageVadHotPatchEligible @ 0x1408769B4 (MiImageVadHotPatchEligible.c)
 */

__int64 __fastcall MmCommitHotPatchTable(unsigned __int64 a1, __int64 a2)
{
  ULONG_PTR v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  v4 = MiObtainReferencedVadEx(a1, 0LL, (int *)&v9);
  v5 = v4;
  if ( v4 )
  {
    if ( (MiReadVadFlags(v4) & 0x1C) == 8 )
    {
      if ( !MiImageVadHotPatchEligible(v6) )
      {
        v9 = -1073741637;
LABEL_10:
        MiUnlockAndDereferenceVad((volatile signed __int32 *)v5);
        return v9;
      }
      v7 = (unsigned int)stru_140E2D2D0.ThreadFlags2
         + ((*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12)
         + (unsigned int)(*(_DWORD *)(***(_QWORD ***)(v5 + 80) + 8LL) << 12);
      if ( v7 <= a1 && a1 + (a2 << 12) - v7 <= HIDWORD(stru_140E366D8.SListFaultAddress) )
      {
        v9 = MiCommitHotPatchTable(v5, a1, a2);
        if ( (v9 & 0x80000000) == 0 )
          v9 = 0;
        goto LABEL_10;
      }
    }
    v9 = -1073741800;
    goto LABEL_10;
  }
  return v9;
}
