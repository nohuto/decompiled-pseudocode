/*
 * XREFs of DrvPixelSpaceToUniformSpacePoint @ 0x1400CE830
 * Callers:
 *     <none>
 * Callees:
 *     ?TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z @ 0x1400CE878 (-TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z.c)
 */

__int64 __fastcall DrvPixelSpaceToUniformSpacePoint(int *a1, int *a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return TransformPointWithUniformSpaceMapping(
           *(struct _MDEV **)(*(_QWORD *)(UserSessionState + 56968) + 16LL),
           a1,
           a2,
           0);
}
