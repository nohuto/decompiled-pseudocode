/*
 * XREFs of InitCreateSystemThreadsMsg @ 0x14012AF00
 * Callers:
 *     ?SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z @ 0x14021A0D4 (-SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z.c)
 * Callees:
 *     CSTPush @ 0x14012B030 (CSTPush.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall InitCreateSystemThreadsMsg(_DWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax

  if ( !(unsigned int)CSTPush(a2, a3) )
    return 0LL;
  memset(a1, 0, 0x3B8uLL);
  result = 1LL;
  *a1 = 62391184;
  a1[12] = 197636;
  return result;
}
