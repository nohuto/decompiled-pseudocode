/*
 * XREFs of CpcFindResourcePriorityDescriptor @ 0x140008984
 * Callers:
 *     InitCpcStatesInternal @ 0x140036530 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CpcFindResourcePriorityDescriptor(_DWORD *a1)
{
  _QWORD *v1; // rdx
  unsigned int v2; // r9d
  unsigned int v3; // eax
  __int64 v4; // r8
  _QWORD *v5; // rcx
  unsigned int i; // r10d

  v1 = 0LL;
  if ( a1 )
  {
    v2 = *a1;
    v3 = 0;
    if ( *a1 )
    {
      v4 = 0LL;
      v5 = a1 + 2;
      do
      {
        for ( i = 0; i < *(_DWORD *)*v5; ++i )
        {
          if ( *(_DWORD *)(*v5 + v4 + 4) == 2 )
          {
            v1 = v5;
            if ( v5 )
              return v1;
            break;
          }
        }
        ++v3;
        v5 += 13;
        v4 += 4LL;
      }
      while ( v3 < v2 );
    }
  }
  return v1;
}
