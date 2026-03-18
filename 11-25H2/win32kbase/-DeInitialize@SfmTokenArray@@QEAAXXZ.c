/*
 * XREFs of ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x140117EE0
 * Callers:
 *     GreSfmDwmShutdown @ 0x1401D1E20 (GreSfmDwmShutdown.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall SfmTokenArray::DeInitialize(char **this)
{
  char *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    GreDeleteFastMutex(v2);
    *this = 0LL;
  }
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = 0;
}
