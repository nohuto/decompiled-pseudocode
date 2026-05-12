/*
 * XREFs of StorGetPendingIoCount @ 0x14005636C
 * Callers:
 *     GatewayCheckWaitTimeout @ 0x14004C4D8 (GatewayCheckWaitTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorGetPendingIoCount(__int64 a1)
{
  unsigned int v1; // edx
  __int64 i; // r8
  __int64 v4; // rcx

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 1032); v1 += *(_DWORD *)(v4 + *(_QWORD *)(a1 + 1024) + 24) )
  {
    v4 = 320 * i;
    i = (unsigned int)(i + 1);
  }
  return v1;
}
