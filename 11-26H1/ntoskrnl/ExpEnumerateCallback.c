/*
 * XREFs of ExpEnumerateCallback @ 0x1404C5D00
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall ExpEnumerateCallback(__int64 a1, __int64 ***a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v5; // al
  __int64 **v6; // r8
  __int64 *v7; // r9
  __int64 v8; // rbx
  __int64 **v9; // rcx
  KIRQL v10; // bp
  __int64 *i; // rdx
  int v12; // eax
  bool v13; // zf

  v2 = (KSPIN_LOCK *)(a1 + 8);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
  v6 = *a2;
  v7 = (__int64 *)(a1 + 16);
  v8 = 0LL;
  v9 = (__int64 **)v7;
  v10 = v5;
  if ( *a2 )
    v9 = *a2;
  for ( i = *v9; i != v7; i = (__int64 *)*i )
  {
    if ( !*((_BYTE *)i + 44) )
    {
      ++*((_DWORD *)i + 10);
      v8 = i[3];
      *a2 = (__int64 **)i;
      break;
    }
  }
  if ( v6 )
  {
    v12 = *((_DWORD *)v6 + 10) - 1;
    v13 = *((_BYTE *)v6 + 44) == 0;
    *((_DWORD *)v6 + 10) = v12;
    if ( !v13 && !v12 )
      KeSetEvent(&word_140EFF2A0, 0, 0);
  }
  KeReleaseSpinLock(v2, v10);
  return v8;
}
