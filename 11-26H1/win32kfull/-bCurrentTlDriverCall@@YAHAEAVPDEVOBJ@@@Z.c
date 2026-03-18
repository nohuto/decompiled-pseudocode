/*
 * XREFs of ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1400BC27C
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400BC0EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

__int64 __fastcall bCurrentTlDriverCall(struct PDEVOBJ *a1)
{
  unsigned int v2; // edi
  struct _GRETHREAD *CurrentThread; // rbx
  __int64 v4; // rbx

  v2 = 0;
  CurrentThread = GreGetCurrentThread();
  if ( !CurrentThread
    || !PDEVOBJ::bAllowShareAccess(a1)
    || !*((_DWORD *)CurrentThread + 85) && !*((_DWORD *)CurrentThread + 86) )
  {
    return 0LL;
  }
  v4 = *(_QWORD *)a1 + 80LL;
  if ( *(_QWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 32LL) == v4 )
    return **((unsigned int **)GreGetCurrentThread() + 34);
  return v2;
}
