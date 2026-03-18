/*
 * XREFs of DxgkEngLockVisRgn @ 0x1401A8D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngLockVisRgn(Gre::Base *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 *v4; // rax
  __int64 v5; // rbx
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  Gre::Base::Globals(a1);
  LOBYTE(v3) = 1;
  v4 = (__int64 *)HmgShareLockEx(a1, v3, 0LL);
  if ( v4 )
  {
    v2 = v4[6];
    v7 = 0;
    v5 = *v4;
    HmgDecrementShareReferenceCountEx(v4, &v7);
    if ( v7 )
      GrepDeleteDC(v5, 0x2000000LL);
  }
  return v2;
}
