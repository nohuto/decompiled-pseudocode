/*
 * XREFs of inflateStateCheck @ 0x140627754
 * Callers:
 *     inflate @ 0x14062664C (inflate.c)
 *     inflateReset @ 0x1406275F4 (inflateReset.c)
 *     inflateReset2 @ 0x140627624 (inflateReset2.c)
 *     inflateResetKeep @ 0x1406276C4 (inflateResetKeep.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall inflateStateCheck(_QWORD *a1)
{
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = 1;
  if ( a1 )
  {
    if ( a1[6] )
    {
      if ( a1[7] )
      {
        v1 = a1[5];
        if ( v1 )
        {
          if ( *(_QWORD **)v1 == a1 && (unsigned int)(*(_DWORD *)(v1 + 8) - 16180) <= 0x1F )
            return 0;
        }
      }
    }
  }
  return result;
}
