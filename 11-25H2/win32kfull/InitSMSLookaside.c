/*
 * XREFs of InitSMSLookaside @ 0x1403EE5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 InitSMSLookaside()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v0 = Win32AllocPagedLookasideList(136LL, 1634497365LL, 1836282709LL, 8LL);
  *(_QWORD *)(W32GetUserSessionState(v2, v1) + 69088) = v0;
  return *(_QWORD *)(W32GetUserSessionState(v4, v3) + 69088) == 0LL ? 0xC0000017 : 0;
}
