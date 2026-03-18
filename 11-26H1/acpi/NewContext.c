/*
 * XREFs of NewContext @ 0x14000B4B8
 * Callers:
 *     AMLILoadDDB @ 0x1400DC2B4 (AMLILoadDDB.c)
 * Callees:
 *     InitContext @ 0x14000A6D8 (InitContext.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall NewContext(char **a1)
{
  unsigned int v2; // ebx
  char *v3; // rax
  KIRQL v4; // dl
  int v5; // eax
  KIRQL v6; // al
  _QWORD *v7; // rcx
  _UNKNOWN **v8; // rax

  v2 = 0;
  v3 = (char *)ExAllocateFromNPagedLookasideList(&AMLIContextLookAsideList);
  *a1 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x238uLL);
    v4 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
    v5 = gdwcCTObjs + 1;
    gdwcCTObjs = v5;
    if ( v5 > 0 && v5 > (unsigned int)gdwcCTObjsMax )
      gdwcCTObjsMax = v5;
    KeReleaseSpinLock(&gdwGContextSpinLock, v4);
    InitContext(*a1);
    v6 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
    v7 = off_14008CA60[0];
    NewIrql = v6;
    v8 = (_UNKNOWN **)(*a1 + 16);
    if ( *(_UNKNOWN ***)off_14008CA60[0] != &glistCtxtHead )
      __fastfail(3u);
    *((_UNKNOWN ***)*a1 + 3) = off_14008CA60[0];
    *v8 = &glistCtxtHead;
    *v7 = v8;
    off_14008CA60[0] = v8;
    KeReleaseSpinLock(&gmutCtxtList, NewIrql);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
