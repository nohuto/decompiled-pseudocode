/*
 * XREFs of ?SessionUninitialize@UmfdHostLifeTimeManager@@CAXXZ @ 0x14010B4B8
 * Callers:
 *     UmfdSessionUninitialize @ 0x14010B400 (UmfdSessionUninitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall UmfdHostLifeTimeManager::SessionUninitialize(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v3 = *(_QWORD **)(W32GetSessionState(a1, a2, a3) + 96);
  v4 = (void *)v3[3027];
  if ( v4 )
  {
    Win32FreePool(v4);
    v3[3027] = 0LL;
  }
  v5 = (void *)v3[3028];
  if ( v5 )
  {
    Win32FreePool(v5);
    v3[3028] = 0LL;
  }
  v6 = (void *)v3[3029];
  if ( v6 )
  {
    Win32FreePool(v6);
    v3[3029] = 0LL;
  }
  v7 = (void *)v3[3030];
  if ( v7 )
  {
    Win32FreePool(v7);
    v3[3030] = 0LL;
  }
}
