/*
 * XREFs of ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x14013908C
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x14016A0DC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     HandleSystemThreadCreationFailure @ 0x1401AF8B0 (HandleSystemThreadCreationFailure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSTPop(unsigned int *a1, void **a2)
{
  __int64 v4; // rax
  __int64 i; // r8
  void *v6; // rcx
  unsigned int v7; // ecx
  __int64 result; // rax

  v4 = W32GetUserSessionState(a1, a2) + 71296;
  for ( i = 0LL; (unsigned int)i < 0x1E; i = (unsigned int)(i + 1) )
  {
    v6 = *(void **)(v4 + 24 * i);
    if ( v6 )
    {
      *(_QWORD *)(v4 + 24 * i) = 0LL;
      *a2 = v6;
      v7 = *(_DWORD *)(v4 + 24 * i + 16);
      *(_DWORD *)(v4 + 24 * i + 16) = 0;
      result = 1LL;
      *a1 = v7;
      return result;
    }
  }
  return 0LL;
}
