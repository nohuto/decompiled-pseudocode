/*
 * XREFs of ?MultiUserGreDeleteXLATE@@YAXXZ @ 0x140186794
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 * Callees:
 *     FreeThreadBufferWithTag @ 0x140041C20 (FreeThreadBufferWithTag.c)
 */

void __fastcall MultiUserGreDeleteXLATE(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = 0LL;
  v2 = 8LL;
  do
  {
    a1 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + v1 + 4408);
    if ( a1 )
      FreeThreadBufferWithTag(a1, v3, v4, v5);
    v1 += 32LL;
    --v2;
  }
  while ( v2 );
}
