/*
 * XREFs of ?ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ @ 0x1400C47D8
 * Callers:
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1400C4788 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionIsAppForeground @ 0x1402258C8 (ApiSetEditionIsAppForeground.c)
 */

bool __fastcall CInputDest::ShouldSkipForegroundActivation(CInputDest *this)
{
  int v1; // edx
  bool result; // al

  v1 = *((_DWORD *)this + 26);
  result = 1;
  if ( (v1 & 1) == 0 )
    return (v1 & 2) != 0 && (unsigned int)ApiSetEditionIsAppForeground(*((_QWORD *)this + 10)) != 0;
  return result;
}
