/*
 * XREFs of ?IsPointOnGripper@TouchEdgeGripperHost@@QEAA_NUtagPOINT@@@Z @ 0x180596550
 * Callers:
 *     ?IsPointOnTouchEdgeGripper@TouchEdgeGestureManager@@UEAA_NUtagPOINT@@@Z @ 0x18058D950 (-IsPointOnTouchEdgeGripper@TouchEdgeGestureManager@@UEAA_NUtagPOINT@@@Z.c)
 *     ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x18058DBA8 (-StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$IsPointOnGripper@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z @ 0x180595504 (--$IsPointOnGripper@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z.c)
 */

char __fastcall TouchEdgeGripperHost::IsPointOnGripper(RTL_SRWLOCK *this, struct tagPOINT a2)
{
  LONG x; // ebx
  bool v4; // cc
  char v5; // bl
  char v7; // [rsp+30h] [rbp+8h] BYREF
  struct tagPOINT v8; // [rsp+38h] [rbp+10h]
  RTL_SRWLOCK *v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = a2;
  x = a2.x;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v9, this + 29);
  if ( HIDWORD(this[3].Ptr) != 4 && HIDWORD(this[3].Ptr) != 8 )
  {
    if ( x >= SLODWORD(this[30].Ptr) )
    {
      v4 = x <= SLODWORD(this[31].Ptr);
      goto LABEL_7;
    }
LABEL_9:
    v5 = 0;
    goto LABEL_10;
  }
  if ( v8.y < SHIDWORD(this[30].Ptr) )
    goto LABEL_9;
  v4 = v8.y <= SHIDWORD(this[31].Ptr);
LABEL_7:
  if ( !v4 )
    goto LABEL_9;
  v5 = 1;
LABEL_10:
  v7 = v5;
  TouchEdgeGestureTelemetry::IsPointOnGripper<bool &>(&v7);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v9);
  return v5;
}
