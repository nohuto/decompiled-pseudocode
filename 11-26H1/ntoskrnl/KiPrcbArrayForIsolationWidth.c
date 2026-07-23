/*
 * XREFs of KiPrcbArrayForIsolationWidth @ 0x14041CE30
 * Callers:
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403C9D80 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiPrcbArrayForIsolationWidth(__int64 a1, int a2, _QWORD *a3, _DWORD *a4)
{
  unsigned __int8 *v4; // rcx
  __int64 result; // rax

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v4 = *(unsigned __int8 **)(*(_QWORD *)a1 + 36504LL);
      *a3 = v4 + 8;
      result = *v4;
      *a4 = result;
    }
  }
  else
  {
    *a3 = a1;
    *a4 = 1;
  }
  return result;
}
