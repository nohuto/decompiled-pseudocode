/*
 * XREFs of HandleSystemThreadCreationFailure @ 0x1401D52F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1401746CC (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 */

__int64 __fastcall HandleSystemThreadCreationFailure(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  int v3; // r8d
  struct _KEVENT *v4; // rcx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v7 = 0LL;
  v1 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
  if ( PsGetCurrentProcess(v2) == v1 )
  {
    if ( (unsigned int)CSTPop(&v6, &v7, v3) )
    {
      if ( v6 == 4 )
      {
        v4 = (struct _KEVENT *)*((_QWORD *)v7 + 1);
        if ( v4 )
          KeSetEvent(v4, 1, 0);
      }
    }
  }
  return 1LL;
}
