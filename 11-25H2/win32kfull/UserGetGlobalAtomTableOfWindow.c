/*
 * XREFs of UserGetGlobalAtomTableOfWindow @ 0x14005BDF8
 * Callers:
 *     SetRedrawProp @ 0x14005BDA4 (SetRedrawProp.c)
 *     InternalSetProp @ 0x14005BFA8 (InternalSetProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetGlobalAtomTableOfWindow(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) + 648LL);
  if ( result )
    return *(_QWORD *)(result + 168);
  return result;
}
