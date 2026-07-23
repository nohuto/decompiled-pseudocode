/*
 * XREFs of HaliRunPlatformDebugTriggers @ 0x1405A4E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HaliRunPlatformDebugTriggers(char a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r14
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = PdttTable;
  if ( PdttTable )
  {
    v5 = 0;
    if ( *(_BYTE *)(PdttTable + 36) )
    {
      do
      {
        v6 = 136LL * v5;
        v7 = v6 + qword_140E10D38 + 8;
        if ( (*(_BYTE *)(*(_QWORD *)(v6 + qword_140E10D38) + 1LL) & 1) != 0 && !a1 && v7 )
        {
          v8 = *(_QWORD *)(v7 + 56);
          result = guard_dispatch_icall_no_overrides(v8, a2);
          if ( (int)result < 0 )
            return result;
          guard_dispatch_icall_no_overrides(v8, 0LL);
        }
        result = *(unsigned __int8 *)(v3 + 36);
        ++v5;
      }
      while ( v5 < (unsigned int)result );
    }
  }
  return result;
}
