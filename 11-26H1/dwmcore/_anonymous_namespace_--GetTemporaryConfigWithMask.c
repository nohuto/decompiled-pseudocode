/*
 * XREFs of _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x18018BFF0
 * Callers:
 *     ?SupportsInteractionType@CInteraction@@UEBAHW4InputType@@I_N@Z @ 0x180185EA0 (-SupportsInteractionType@CInteraction@@UEBAHW4InputType@@I_N@Z.c)
 *     ?SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z @ 0x180185FA0 (-SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::GetTemporaryConfigWithMask(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = 0;
  *a3 = 0;
  if ( *(_BYTE *)a1 )
  {
    *a2 |= *(_DWORD *)(a1 + 8) & *(_DWORD *)(a1 + 4);
    result = *(unsigned int *)(a1 + 8);
    *a3 |= result;
  }
  if ( *(_BYTE *)(a1 + 12) )
  {
    *a2 |= *(_DWORD *)(a1 + 20) & *(_DWORD *)(a1 + 16);
    result = *(unsigned int *)(a1 + 20);
    *a3 |= result;
  }
  if ( *(_BYTE *)(a1 + 24) )
  {
    *a2 |= *(_DWORD *)(a1 + 32) & *(_DWORD *)(a1 + 28);
    result = *(unsigned int *)(a1 + 32);
    *a3 |= result;
  }
  return result;
}
