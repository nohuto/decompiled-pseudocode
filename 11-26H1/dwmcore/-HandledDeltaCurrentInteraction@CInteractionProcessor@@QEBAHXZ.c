/*
 * XREFs of ?HandledDeltaCurrentInteraction@CInteractionProcessor@@QEBAHXZ @ 0x1801D4ED8
 * Callers:
 *     ?HandledDeltaCurrentInteraction@CInteraction@@UEBAHXZ @ 0x180219630 (-HandledDeltaCurrentInteraction@CInteraction@@UEBAHXZ.c)
 *     ?HandledDeltaCurrentInteraction@CInteractionRoot@@UEBAHXZ @ 0x180226FC0 (-HandledDeltaCurrentInteraction@CInteractionRoot@@UEBAHXZ.c)
 * Callees:
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180179C38 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 */

__int64 __fastcall CInteractionProcessor::HandledDeltaCurrentInteraction(CInteractionProcessor *this)
{
  int v2; // ecx
  __int64 result; // rax
  int v4; // ecx
  _BYTE *v5; // rbx
  bool v6; // zf

  switch ( *((_DWORD *)this + 197) )
  {
    case 2:
      v2 = *((_DWORD *)this + 4);
      goto LABEL_4;
    case 3:
      v2 = *((_DWORD *)this + 44);
      goto LABEL_4;
    case 4:
      if ( CInteractionProcessor::AllowPenGestureDetection(this) )
      {
        v4 = *((_DWORD *)this + 84);
        result = 1LL;
        v5 = (char *)this + 808;
        if ( (v4 & 3) != 0 && (*v5 & 1) != 0 || (v4 & 0xC) != 0 && (*v5 & 2) != 0 )
          return result;
        if ( (v4 & 0x30) != 0 )
        {
          v6 = (*v5 & 4) == 0;
          goto LABEL_27;
        }
        return 0LL;
      }
      return CInteractionProcessor::SupportsPointerType(this, *((_DWORD *)this + 197), 1u);
    case 5:
      return CInteractionProcessor::SupportsPointerType(this, *((_DWORD *)this + 197), 1u);
  }
  if ( *((_DWORD *)this + 197) != 6 )
    return 0LL;
  v2 = *((_DWORD *)this + 124);
LABEL_4:
  result = 1LL;
  if ( (v2 & 3) != 0 && (*((_BYTE *)this + 808) & 1) != 0 || (v2 & 0xC) != 0 && (*((_BYTE *)this + 808) & 2) != 0 )
    return result;
  if ( (v2 & 0x30) == 0 )
    return 0LL;
  v6 = (*((_BYTE *)this + 808) & 4) == 0;
LABEL_27:
  if ( v6 )
    return 0LL;
  return result;
}
