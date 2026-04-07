/*
 * XREFs of ?_GetAndClearAnimatedWhenUncloaked@CTopLevelWindow3D@@AEAA_NXZ @ 0x18009A59C
 * Callers:
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x1800040AC (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow3D::_GetAndClearAnimatedWhenUncloaked(CTopLevelWindow3D *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 36);
  if ( *(_DWORD *)(v1 + 680) != 93 )
    return 0;
  result = 1;
  *(_DWORD *)(v1 + 680) = 4095;
  return result;
}
