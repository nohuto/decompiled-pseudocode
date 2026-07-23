/*
 * XREFs of MiReferenceCloneProto @ 0x14036C348
 * Callers:
 *     MiReferenceExistingCloneProto @ 0x14036C9B4 (MiReferenceExistingCloneProto.c)
 * Callees:
 *     MiGetCloneCharges @ 0x14036B234 (MiGetCloneCharges.c)
 *     MiLockCloneBlockAtDpc @ 0x14036C5A0 (MiLockCloneBlockAtDpc.c)
 */

__int64 __fastcall MiReferenceCloneProto(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  unsigned int v6; // edi
  int v7; // esi
  int v10; // edx
  __int64 v11; // r14

  v6 = 1;
  v7 = a4 & 1;
  MiLockCloneBlockAtDpc(a3);
  if ( !*(_QWORD *)(a3 + 24) )
    goto LABEL_13;
  v10 = 0;
  v11 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
  if ( v11 != a2 && !*(_QWORD *)(a3 + 8) )
    v10 = 5;
  if ( v7 && (*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFE0LL) == 0 )
    v10 |= 2u;
  if ( !v10 || (unsigned int)MiGetCloneCharges(a2, v10) )
  {
    if ( v11 != a2 )
      ++*(_QWORD *)(a3 + 8);
    if ( v7 )
      *(_QWORD *)(a3 + 16) = ((*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFE0uLL) + 32) ^ (*(_QWORD *)(a3 + 16) ^ ((*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFE0uLL) + 32)) & 0xF00000000000001FuLL;
    ++*(_QWORD *)(a3 + 24);
    if ( v7 )
      ++*a5;
  }
  else
  {
LABEL_13:
    v6 = 0;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 16), 0x7FFFFFFFFFFFFFFFuLL);
  return v6;
}
