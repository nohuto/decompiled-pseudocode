/*
 * XREFs of LdrpEnclaveFreeModule @ 0x1801394AC
 * Callers:
 *     LdrpCleanupEnclaveLoadState @ 0x1800C4AE4 (LdrpCleanupEnclaveLoadState.c)
 * Callees:
 *     <none>
 */

int __fastcall LdrpEnclaveFreeModule(char *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  char **v3; // rax

  v1 = *(_QWORD *)a1;
  v2 = *((_QWORD *)a1 + 19);
  if ( *(char **)(*(_QWORD *)a1 + 8LL) != a1 || (v3 = (char **)*((_QWORD *)a1 + 1), *v3 != a1) )
    __fastfail(3u);
  *v3 = (char *)v1;
  *(_QWORD *)(v1 + 8) = v3;
  *(_DWORD *)(v2 + 24) = 0;
  *((_DWORD *)a1 + 69) = 1;
  *(_DWORD *)(v2 + 56) = -2;
  return LdrpDereferenceModule(a1);
}
