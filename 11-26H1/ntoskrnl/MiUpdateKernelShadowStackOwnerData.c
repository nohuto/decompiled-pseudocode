/*
 * XREFs of MiUpdateKernelShadowStackOwnerData @ 0x140342BC8
 * Callers:
 *     MiCreateKernelStackFromPrcbCache @ 0x1403D40B8 (MiCreateKernelStackFromPrcbCache.c)
 *     MiCreateKernelStackFromNodeCache @ 0x1403D41A0 (MiCreateKernelStackFromNodeCache.c)
 * Callees:
 *     MiValidateKernelShadowStackPage @ 0x140342C98 (MiValidateKernelShadowStackPage.c)
 */

unsigned __int64 __fastcall MiUpdateKernelShadowStackOwnerData(unsigned __int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  unsigned __int64 result; // rax
  _QWORD *v5; // rbp
  unsigned __int64 *v6; // rbx

  v3 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL)
                - 8 * (*(_QWORD *)(a2 + 16) + *(unsigned int *)(a2 + 64))
                - 0x97FFFFFFFF8LL);
  result = *(_QWORD *)(a2 + 24);
  v5 = &v3[result];
  while ( v3 < v5 )
  {
    v6 = (unsigned __int64 *)(48 * ((*v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    MiValidateKernelShadowStackPage((ULONG_PTR)v3);
    result = 0xFFFFF00000000001uLL;
    *v6 = (*(_QWORD *)(a2 + 40) >> 3) ^ (*v6 ^ (*(_QWORD *)(a2 + 40) >> 3)) & 0xFFFFF00000000001uLL;
    ++v3;
  }
  return result;
}
