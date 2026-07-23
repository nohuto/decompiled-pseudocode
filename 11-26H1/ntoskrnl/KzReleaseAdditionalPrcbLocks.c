/*
 * XREFs of KzReleaseAdditionalPrcbLocks @ 0x140231040
 * Callers:
 *     KiHandleDeferredPreemption @ 0x1402300C0 (KiHandleDeferredPreemption.c)
 *     KiTryAcquireAdditionalPrcbLocks @ 0x1404CE81C (KiTryAcquireAdditionalPrcbLocks.c)
 * Callees:
 *     <none>
 */

void __fastcall KzReleaseAdditionalPrcbLocks(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 v4; // r10
  __int64 v5; // r11

  v4 = *a3;
  LODWORD(v5) = 0;
  if ( (_DWORD)a2 )
  {
    a2 = (unsigned int)a2;
    do
    {
      if ( v4 == *(_QWORD *)a1 )
      {
        v5 = (unsigned int)(v5 + 1);
        if ( (_DWORD)v5 == a4 )
          v4 = -1LL;
        else
          v4 = a3[v5];
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)a1 + 48LL), 0LL);
      }
      a1 += 8LL;
      --a2;
    }
    while ( a2 );
  }
}
