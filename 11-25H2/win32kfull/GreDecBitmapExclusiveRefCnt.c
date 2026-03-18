/*
 * XREFs of GreDecBitmapExclusiveRefCnt @ 0x1400E1A10
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1400E1C54 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxRealDrawMenuItem @ 0x1401910EC (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

void __fastcall GreDecBitmapExclusiveRefCnt(__int64 a1, __int64 a2)
{
  OBJECT *v2; // rax
  OBJECT *v3; // rbx

  LOBYTE(a2) = 5;
  v2 = (OBJECT *)HmgLock(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    OBJECT::InterlockedDecrementExclusiveLockCount(v2);
    OBJECT::InterlockedDecrementExclusiveLockCount(v3);
  }
}
