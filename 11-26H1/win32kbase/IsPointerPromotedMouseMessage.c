/*
 * XREFs of IsPointerPromotedMouseMessage @ 0x140089CB8
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPointerPromotedMouseMessage(int a1, _DWORD *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a2 && (unsigned int)(a1 - 512) <= 0xE && (*a2 == 4 || *a2 == 8) )
    return 1;
  return v2;
}
