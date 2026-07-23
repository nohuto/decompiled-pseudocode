/*
 * XREFs of MiValidateKernelShadowStackPage @ 0x140342C98
 * Callers:
 *     MiDeleteShadowStackPtes @ 0x140342874 (MiDeleteShadowStackPtes.c)
 *     MiUpdateKernelShadowStackOwnerData @ 0x140342BC8 (MiUpdateKernelShadowStackOwnerData.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiValidateKernelShadowStackPage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = *(unsigned int *)(a2 + 32);
  if ( (_WORD)result != 2 )
  {
    v3 = (__int64)((unsigned __int128)((a2 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    KeBugCheckEx(0x1Au, 0x3405uLL, BugCheckParameter2, v3 + (v3 >> 63), (unsigned __int16)result);
  }
  return result;
}
