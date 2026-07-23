/*
 * XREFs of PopNetDisconnectedStandbyModeCallback @ 0x1407DE3D0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopNetDisconnectedStandbyModeCallback(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-8h]

  if ( a3 == 4 && *a2 <= 1u )
  {
    v4 = 0;
    PopAcquirePolicyLock(a1, a2);
    HIDWORD(PpmIdlePolicyLock.InGlobalForegroundList) = *a2;
    PopReleasePolicyLock(v6, v5, v7, v8, v10);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
