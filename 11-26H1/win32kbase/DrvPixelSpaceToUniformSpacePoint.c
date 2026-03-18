/*
 * XREFs of DrvPixelSpaceToUniformSpacePoint @ 0x14011D750
 * Callers:
 *     <none>
 * Callees:
 *     ?TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z @ 0x14011D798 (-TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z.c)
 */

__int64 __fastcall DrvPixelSpaceToUniformSpacePoint(int *a1, int *a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3);
  return TransformPointWithUniformSpaceMapping(
           *(struct _MDEV **)(*(_QWORD *)(UserSessionState + 56968) + 16LL),
           a1,
           a2,
           0);
}
