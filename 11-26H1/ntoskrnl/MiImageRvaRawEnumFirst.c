/*
 * XREFs of MiImageRvaRawEnumFirst @ 0x140A506F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     MiImageGetRawRvaState @ 0x140A507A0 (MiImageGetRawRvaState.c)
 */

__int64 __fastcall MiImageRvaRawEnumFirst(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  unsigned int i; // ebp
  unsigned int v7; // eax
  __int64 result; // rax

  v2 = 0;
  v3 = a1 + 136;
  for ( i = 0; i < *(_DWORD *)(a1 + 128); v3 += 40LL )
  {
    if ( *(_QWORD *)(v3 + 8) )
    {
      v7 = guard_dispatch_icall_no_overrides(a1, v3 + 24);
      *(_DWORD *)v3 = v7;
      if ( v7 )
      {
        if ( v2 )
        {
          if ( v2 >= v7 )
            v2 = v7;
        }
        else
        {
          v2 = v7;
        }
      }
    }
    ++i;
  }
  if ( a2 && v2 )
    *a2 = MiImageGetRawRvaState(a1, v2);
  result = v2;
  *(_DWORD *)(a1 + 296) = v2;
  return result;
}
