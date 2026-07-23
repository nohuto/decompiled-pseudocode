/*
 * XREFs of XmPushPopSegment @ 0x1405AF020
 * Callers:
 *     <none>
 * Callees:
 *     XmSetDestinationValue @ 0x1404A1FE0 (XmSetDestinationValue.c)
 *     XmSetSourceValue @ 0x1404A226C (XmSetSourceValue.c)
 */

__int64 __fastcall XmPushPopSegment(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int16 *v2; // rdx
  unsigned int v3; // r8d

  v1 = *(unsigned __int8 *)(a1 + 81) + 28LL;
  *(_DWORD *)(a1 + 120) = 1;
  v2 = (unsigned __int16 *)(a1 + 2 * v1);
  if ( *(_DWORD *)(a1 + 124) == 36 )
    XmSetSourceValue(a1, v2);
  else
    XmSetDestinationValue(a1, v2);
  return v3;
}
