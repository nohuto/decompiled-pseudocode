/*
 * XREFs of RtlDoesRequireFunctionOverrideFixups @ 0x1409CF294
 * Callers:
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x140809D84 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     MiInitializePrivateFixupBitmap @ 0x1409CE834 (MiInitializePrivateFixupBitmap.c)
 *     MiRelocateImagePfn @ 0x1409CEA4C (MiRelocateImagePfn.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x14047FF64 (-terminate@details@gsl@@YAXXZ.c)
 */

bool __fastcall RtlDoesRequireFunctionOverrideFixups(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // eax
  __int64 v4; // rax
  __int64 v6; // r10
  unsigned int v7; // eax

  v2 = *(_DWORD *)(a1 + 32);
  if ( (unsigned int)a2 >= v2 && (v3 = *(_DWORD *)(a1 + 36), (unsigned int)a2 <= v3) )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = v3 - v2 + 1;
    if ( !v6 && v7 || (a2 = (unsigned int)a2 - v2, (unsigned int)a2 >= (unsigned __int64)v7) )
    {
      gsl::details::terminate((gsl::details *)a1, a2);
      __debugbreak();
    }
    v4 = *(_QWORD *)(v6 + 8 * a2);
  }
  else
  {
    v4 = 0LL;
  }
  return v4 != 0;
}
