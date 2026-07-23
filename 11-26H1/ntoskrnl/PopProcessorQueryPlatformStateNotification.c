/*
 * XREFs of PopProcessorQueryPlatformStateNotification @ 0x1404C7240
 * Callers:
 *     <none>
 * Callees:
 *     PopTranslateDependencyArray @ 0x1404C72EC (PopTranslateDependencyArray.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopProcessorQueryPlatformStateNotification(__int64 a1, ULONG_PTR a2, char a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  ULONG_PTR v6; // rsi
  __int64 v7; // rax

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  if ( v3 && *(_QWORD *)(v3 + 104) )
  {
    v6 = *(_QWORD *)(a1 + 72);
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v6, a3 != 0 ? 22 : 19) )
    {
      v7 = *(_QWORD *)(a2 + 8);
      if ( v7 )
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(v7 + 192);
      PopTranslateDependencyArray(v6, a2, *(_DWORD *)(a2 + 28), a2 + 40);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v4;
}
