/*
 * XREFs of KiQueryProcessorNode @ 0x1405F25AC
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     HvlGetApicIdFromLpIndex @ 0x1405BBA90 (HvlGetApicIdFromLpIndex.c)
 *     HvlpGetLpcbByApicId @ 0x1405BCA4C (HvlpGetLpcbByApicId.c)
 *     KiIsNodeFull @ 0x1405F2504 (KiIsNodeFull.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiQueryProcessorNode(unsigned int a1, int *a2, unsigned __int16 *a3)
{
  __int64 v7; // rbp
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned __int16 i; // r11
  __int64 v11; // rcx
  _DWORD *LpcbByApicId; // rax

  if ( a1 < (unsigned int)KeNumberProcessors_0 )
  {
    _mm_lfence();
    *a3 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[a1] + 192) + 138LL);
    return 0LL;
  }
  v7 = *a3;
  if ( KiNumaQueryProcessorNode )
  {
    v8 = guard_dispatch_icall_no_overrides(a1, a2);
    v9 = v8;
    if ( !v8 )
    {
      if ( *a3 != 0xFFFF )
      {
LABEL_21:
        if ( (*(_BYTE *)(KeNodeBlock[*a3] + 10) & 2) == 0 )
          v9 = -1073741275;
        if ( *a2 == -1 )
          HvlGetApicIdFromLpIndex(a1, a2);
        if ( (HvlpFlags & 2) != 0 )
        {
          LpcbByApicId = HvlpGetLpcbByApicId(*a2);
          if ( !LpcbByApicId || !*((_BYTE *)LpcbByApicId + 1) )
            return (unsigned int)-1073741275;
        }
        return v9;
      }
      for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
      {
        v11 = KeNodeBlock[i];
        if ( (*(_BYTE *)(v11 + 10) & 2) != 0 && !KiIsNodeFull((_WORD *)v11) )
        {
          *a3 = i;
          goto LABEL_19;
        }
      }
      goto LABEL_12;
    }
    if ( v8 != -1073741275 || (_WORD)v7 == 0xFFFF || KiIsNodeFull((_WORD *)KeNodeBlock[v7]) )
      return v9;
    *a3 = v7;
  }
  else
  {
    if ( a1 >= (unsigned int)KiMaximumGroupSize )
    {
LABEL_12:
      v9 = -1073741275;
      goto LABEL_20;
    }
    *a3 = 0;
  }
LABEL_19:
  v9 = 0;
LABEL_20:
  if ( !v9 )
    goto LABEL_21;
  return v9;
}
