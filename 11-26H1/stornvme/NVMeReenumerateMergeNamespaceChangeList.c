/*
 * XREFs of NVMeReenumerateMergeNamespaceChangeList @ 0x140028398
 * Callers:
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x140029670 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall NVMeReenumerateMergeNamespaceChangeList(__int64 a1, _DWORD *a2)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rcx
  unsigned int v5; // esi
  unsigned int v6; // ebx
  __int64 i; // rcx
  __int64 v8; // r9
  unsigned int v9; // r11d
  __int64 j; // r10
  __int64 v11; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( a2 )
  {
    result = &retaddr;
    if ( a1 )
    {
      if ( *a2 != -1 )
      {
        if ( *(_DWORD *)(a1 + 4092) )
        {
LABEL_24:
          *a2 = -1;
        }
        else
        {
          v4 = 0LL;
          v5 = 1024;
          while ( (unsigned int)v4 < 0x400 )
          {
            if ( !*(_DWORD *)(a1 + 4 * v4) )
            {
              v5 = v4;
              break;
            }
            v4 = (unsigned int)(v4 + 1);
          }
          v6 = 1024;
          for ( i = 0LL; (unsigned int)i < 0x400; i = (unsigned int)(i + 1) )
          {
            if ( !a2[i] )
            {
              v6 = i;
              break;
            }
          }
          v8 = 0LL;
          v9 = v6;
          while ( (unsigned int)v8 < v5 )
          {
            for ( j = 0LL; (unsigned int)j < v6; j = (unsigned int)(j + 1) )
            {
              if ( *(_DWORD *)(a1 + 4 * v8) == a2[j] )
                goto LABEL_23;
            }
            if ( v9 >= 0x400 )
              goto LABEL_24;
            result = (_UNKNOWN **)*(unsigned int *)(a1 + 4 * v8);
            v11 = v9++;
            a2[v11] = (_DWORD)result;
LABEL_23:
            v8 = (unsigned int)(v8 + 1);
          }
        }
      }
    }
  }
  return result;
}
