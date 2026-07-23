/*
 * XREFs of MiPageAttributeBatchChangeNeeded @ 0x1402A13B0
 * Callers:
 *     MiUpdateCacheAttributeListsForPage @ 0x1402A12B8 (MiUpdateCacheAttributeListsForPage.c)
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 * Callees:
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 */

__int64 __fastcall MiPageAttributeBatchChangeNeeded(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v6; // rax
  unsigned int v7; // edx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 32);
  if ( ((v3 >> 22) & 3) == a2 )
    return 0LL;
  if ( (v3 & 0xC00000) != 0x400000 )
  {
    if ( (v3 & 0xC00000) == 0xC00000 )
    {
LABEL_11:
      MiChangePageAttribute(a1, a2, a3);
      return 0LL;
    }
    v6 = (*(_QWORD *)(a1 + 24) >> 59) & 7LL;
    if ( ((*(_QWORD *)(a1 + 24) >> 59) & 7) != 0 )
    {
      _InterlockedOr(v8, 0);
      v7 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v6) & 7;
      if ( v7 > 2 || (v6 & 1) == 0 && v7 >= 2 )
      {
        a3 = (unsigned int)a3 | 4;
        goto LABEL_11;
      }
    }
  }
  return 1LL;
}
