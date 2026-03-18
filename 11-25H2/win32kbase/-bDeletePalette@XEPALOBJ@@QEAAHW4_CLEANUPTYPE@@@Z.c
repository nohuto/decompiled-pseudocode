/*
 * XREFs of ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1401C595C
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x140013640 (NtGdiDeleteObjectApp.c)
 *     GreDeleteObject @ 0x14008B860 (GreDeleteObject.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x14008E750 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     vUnreferencePdevWorker @ 0x140092830 (vUnreferencePdevWorker.c)
 *     bDeletePalette @ 0x1400C0AD0 (bDeletePalette.c)
 *     ?bGarbageCollect@XEPALOBJ2@@QEAA_NXZ @ 0x1401C5B00 (-bGarbageCollect@XEPALOBJ2@@QEAA_NXZ.c)
 * Callees:
 *     HmgRemoveObject @ 0x140019EC0 (HmgRemoveObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x14001B29C (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     XEPALOBJ_FreePaletteMemory @ 0x14001D130 (XEPALOBJ_FreePaletteMemory.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x14008E750 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     GreGetObjectOwner @ 0x1400BC740 (GreGetObjectOwner.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1400D7F20 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall XEPALOBJ::bDeletePalette(XEPALOBJ *a1, int a2)
{
  __int64 SessionState; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v9; // rax
  char *v10; // rcx
  __int64 *v11; // rcx
  __int64 *v12; // rcx
  struct _BASEOBJECT *v13; // [rsp+40h] [rbp+8h] BYREF

  SessionState = W32GetSessionState(a1);
  v5 = *(_QWORD *)a1;
  v6 = 0;
  v7 = *(_QWORD *)(SessionState + 88);
  if ( (*(_QWORD *)a1 == *(_QWORD *)(v7 + 3768) || v5 == *(_QWORD *)(v7 + 3800)) && !*(_DWORD *)(v7 + 3032) )
    return 1LL;
  if ( (*(_DWORD *)(v5 + 24) & 0x100) != 0 )
  {
    if ( *(_DWORD *)(v5 + 56) )
      return 0LL;
    XEPALOBJ::vMakeNoXlate(a1);
  }
  if ( a2 )
  {
    if ( a2 != 1 )
    {
LABEL_27:
      if ( !a2 && (unsigned int)GreGetObjectOwner(**(_QWORD **)a1, 8) )
        *(_WORD *)(*(_QWORD *)a1 + 14LL) |= 0x40u;
      return v6;
    }
    v9 = HmgRemoveObjectImpl(**(struct HOBJ__ ***)a1, 0, 1, 2, 8, 0LL);
  }
  else
  {
    v9 = HmgRemoveObject(**(_QWORD **)a1, 0, 1, 0, 8, 0LL);
  }
  if ( !v9 )
    goto LABEL_27;
  v10 = *(char **)(*(_QWORD *)a1 + 104LL);
  if ( v10 )
  {
    if ( v10 != *(char **)(v7 + 3760) )
      GreDeleteFastMutex(v10);
    *(_QWORD *)(*(_QWORD *)a1 + 104LL) = 0LL;
  }
  if ( !*(_DWORD *)(v7 + 3032) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x800) != 0 )
    {
      v11 = *(__int64 **)(*(_QWORD *)a1 + 48LL);
      if ( v11 )
      {
        v13 = *(struct _BASEOBJECT **)(*(_QWORD *)a1 + 48LL);
        if ( (unsigned int)GreGetObjectOwner(*v11, 8) != -2147483646 )
          XEPALOBJ::vUnrefPalette(&v13);
      }
    }
    v12 = *(__int64 **)(*(_QWORD *)a1 + 120LL);
    if ( *(__int64 **)a1 != v12 )
    {
      v13 = *(struct _BASEOBJECT **)(*(_QWORD *)a1 + 120LL);
      if ( (unsigned int)GreGetObjectOwner(*v12, 8) != -2147483646 )
        XEPALOBJ::vUnrefPalette(&v13);
    }
  }
  XEPALOBJ_FreePaletteMemory((__int64)a1);
  return 1;
}
