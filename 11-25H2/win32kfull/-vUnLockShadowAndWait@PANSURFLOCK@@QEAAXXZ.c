/*
 * XREFs of ?vUnLockShadowAndWait@PANSURFLOCK@@QEAAXXZ @ 0x14030C8D8
 * Callers:
 *     ?vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x14022C940 (-vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 * Callees:
 *     ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x14026DF18 (-ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z.c)
 */

void __fastcall PANSURFLOCK::vUnLockShadowAndWait(PANSURFLOCK *this)
{
  _BYTE *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbp

  v2 = (char *)this + 104;
  v3 = 760LL;
  do
  {
    v4 = 9LL;
    do
    {
      if ( *v2 == 1 )
      {
        EngReleaseSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 2) + v3));
        *v2 = 0;
      }
      v3 -= 8LL;
      --v2;
      --v4;
    }
    while ( v4 );
  }
  while ( v3 >= 184 );
  ShadowUnLockWait(*((struct _PANDEV **)this + 2));
}
