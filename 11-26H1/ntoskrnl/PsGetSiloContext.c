/*
 * XREFs of PsGetSiloContext @ 0x140494C00
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageGetObject @ 0x140A84774 (PspStorageGetObject.c)
 */

__int64 __fastcall PsGetSiloContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1536);
  else
    v3 = qword_140FC9E30;
  *a3 = 0LL;
  return PspStorageGetObject(v3);
}
