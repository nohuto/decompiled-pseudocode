/*
 * XREFs of xxxMNButtonDown @ 0x14016D560
 * Callers:
 *     xxxHandleMenuMessages @ 0x1400439DC (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxMNSelectItem @ 0x14003DFC0 (xxxMNSelectItem.c)
 *     ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x14016D664 (-xxxMNHideNextHierarchy@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1402BF250 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 */

__int64 __fastcall xxxMNButtonDown(__int64 **a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 *v8; // rax
  int v9; // edi
  __int64 result; // rax

  if ( *(_DWORD *)(**a1 + 80) == a3 )
  {
    if ( a4 )
      *(_DWORD *)**a1 |= 0x80u;
    result = xxxMNHideNextHierarchy(a1);
    if ( (_DWORD)result )
    {
LABEL_10:
      if ( !a4 )
        return result;
      goto LABEL_11;
    }
    if ( a4 )
    {
      if ( xxxMNOpenHierarchy(a1, a2) )
        *(_DWORD *)**a1 &= ~0x80u;
LABEL_11:
      *(_DWORD *)(a2 + 8) |= 8u;
      return xxxMNDoScroll(a1, a3, 1LL);
    }
  }
  else
  {
    v8 = *a1;
    if ( a4 )
    {
      v9 = 1;
      *(_DWORD *)*v8 &= ~0x80u;
    }
    else
    {
      v9 = (*(_DWORD *)*v8 >> 10) & 1;
    }
    result = xxxMNSelectItem(a1, a2, a3);
    if ( !result )
      goto LABEL_10;
    if ( !*(_QWORD *)(result + 16) )
      goto LABEL_10;
    result = *(_QWORD *)result;
    if ( (*(_DWORD *)(result + 4) & 3) != 0 )
      goto LABEL_10;
    if ( !v9 )
      goto LABEL_10;
    result = xxxMNOpenHierarchy(a1, a2);
    if ( result != -1 )
      goto LABEL_10;
  }
  return result;
}
