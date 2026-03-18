/*
 * XREFs of GreMarkPendingDestroyDC @ 0x14011E2F8
 * Callers:
 *     DestroyCacheDC @ 0x14016CCA0 (DestroyCacheDC.c)
 * Callees:
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140016E40 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 */

int __fastcall GreMarkPendingDestroyDC(__int64 a1)
{
  __int64 v2; // rax
  HDC v3; // rbx
  int v5; // [rsp+38h] [rbp+10h] BYREF

  W32GetSessionState(a1);
  v2 = HmgShareLockEx(a1, 1, 0);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) |= 0x80000u;
    v3 = *(HDC *)v2;
    v5 = 0;
    LODWORD(v2) = HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)v2, &v5);
    if ( v5 )
      LODWORD(v2) = GrepDeleteDC(v3, 0x2000000u);
  }
  return v2;
}
