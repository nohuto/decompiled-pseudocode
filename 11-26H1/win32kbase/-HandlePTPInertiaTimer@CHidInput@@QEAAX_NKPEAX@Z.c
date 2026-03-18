/*
 * XREFs of ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x140126404
 * Callers:
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x140126090 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x14019FDF0 (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CHidInput::HandlePTPInertiaTimer(CHidInput *this, char a2, int a3, void *a4)
{
  void *v4; // r10
  union _LARGE_INTEGER v7; // [rsp+50h] [rbp+8h] BYREF

  v4 = (void *)*((_QWORD *)this + 60);
  if ( a2 )
  {
    ZwCancelTimer(*((HANDLE *)this + 60), 0LL);
  }
  else
  {
    v7.QuadPart = -10000LL * a3;
    ZwSetTimer(v4, &v7, 0LL, 0LL, 0, 0, 0LL);
    *((_QWORD *)this + 167) = a4;
  }
}
