/*
 * XREFs of ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x1401590C0
 * Callers:
 *     GreSfmDwmShutdown @ 0x140158FF0 (GreSfmDwmShutdown.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall SfmTokenArray::DeInitialize(SfmTokenArray *this, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rcx

  v5 = *(char **)this;
  if ( v5 )
  {
    GreDeleteFastMutex(v5, a2, a3, a4);
    *(_QWORD *)this = 0LL;
  }
  *(_QWORD *)((char *)this + 12) = 0LL;
  *((_DWORD *)this + 2) = 0;
}
