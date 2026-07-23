/*
 * XREFs of deflateStateCheck @ 0x14062AD64
 * Callers:
 *     deflate @ 0x14062A8EC (deflate.c)
 *     deflateResetKeep @ 0x14062AC74 (deflateResetKeep.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall deflateStateCheck(_QWORD *a1)
{
  __int64 v1; // rax
  int v2; // ecx
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
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
          if ( *(_QWORD **)v1 == a1 )
          {
            v2 = *(_DWORD *)(v1 + 8);
            if ( v2 == 42 )
              return 0;
            v3 = (unsigned int)(v2 - 69);
            if ( (unsigned int)v3 <= 0x2C )
            {
              v4 = 0x100400400011LL;
              if ( _bittest64(&v4, v3) )
                return 0;
            }
            if ( v2 == 666 )
              return 0;
          }
        }
      }
    }
  }
  return result;
}
