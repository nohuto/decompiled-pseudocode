/*
 * XREFs of ?UninitializeReferenceTracker@@YAXXZ @ 0x14017E898
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z @ 0x1401FD364 (-Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z.c)
 */

void __fastcall UninitializeReferenceTracker(__int64 a1)
{
  __int64 v1; // rbx
  PVOID *v2; // rdi
  __int64 v3; // rsi

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( *(_QWORD *)(v1 + 24) )
  {
    v2 = (PVOID *)(v1 + 40);
    v3 = 4LL;
    do
    {
      if ( *v2 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::Destroy(*v2);
      v2 += 2;
      --v3;
    }
    while ( v3 );
    ExFreePoolWithTag(*(PVOID *)(v1 + 24), 0);
    *(_QWORD *)(v1 + 24) = 0LL;
  }
}
