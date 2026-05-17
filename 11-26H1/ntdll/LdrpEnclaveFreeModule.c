/*
 * XREFs of LdrpEnclaveFreeModule @ 0x18013973C
 * Callers:
 *     LdrpCleanupEnclaveLoadState @ 0x1800C7324 (LdrpCleanupEnclaveLoadState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpEnclaveFreeModule(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  _QWORD *v3; // rax

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 152);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v3 = *(_QWORD **)(a1 + 8), *v3 != a1) )
    __fastfail(3u);
  *v3 = v1;
  *(_QWORD *)(v1 + 8) = v3;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)(a1 + 276) = 1;
  *(_DWORD *)(v2 + 56) = -2;
  return LdrpDereferenceModule(a1);
}
