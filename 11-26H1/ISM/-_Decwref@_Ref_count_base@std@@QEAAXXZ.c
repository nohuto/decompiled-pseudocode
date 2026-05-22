/*
 * XREFs of ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BE0C
 * Callers:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x180073418 (-TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA-AV-$weak_ptr@VGestureHandler@@@std.c)
 *     std::make_shared_GestureHandler_enum_GestureProcessorType_&_unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd__&_ @ 0x180092DD4 (std--make_shared_GestureHandler_enum_GestureProcessorType_-_unsigned_short_const___ISystemInputR.c)
 *     ??1?$enable_shared_from_this@VGestureHandler@@@std@@IEAA@XZ @ 0x18009306C (--1-$enable_shared_from_this@VGestureHandler@@@std@@IEAA@XZ.c)
 *     ??$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA?AV?$shared_ptr@VSystemCursorService2@@@0@$$QEAPEAVSystemCursorController2@@@Z @ 0x1800F7D18 (--$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA-AV-$shared_ptr@VSyst.c)
 *     ??1CustomCursorApplication2@@QEAA@XZ @ 0x1800F7E44 (--1CustomCursorApplication2@@QEAA@XZ.c)
 *     ??1SystemCursor2@@QEAA@XZ @ 0x1800FA9CC (--1SystemCursor2@@QEAA@XZ.c)
 *     ??1SystemCursorService2@@UEAA@XZ @ 0x1800FAA24 (--1SystemCursorService2@@UEAA@XZ.c)
 *     ??1SystemCursorShape2@@QEAA@XZ @ 0x1800FAAB0 (--1SystemCursorShape2@@QEAA@XZ.c)
 *     ??1SystemCursorShapeBitmap2@@QEAA@XZ @ 0x1800FAAE0 (--1SystemCursorShapeBitmap2@@QEAA@XZ.c)
 *     ?CreatePermanentCursors@SystemCursorService2@@AEAAJXZ @ 0x1800FB80C (-CreatePermanentCursors@SystemCursorService2@@AEAAJXZ.c)
 *     ??1GestureHandler@@QEAA@XZ @ 0x1801449F8 (--1GestureHandler@@QEAA@XZ.c)
 *     ??1HandlerContext@ShellGesturesProcessor@@QEAA@XZ @ 0x18015C624 (--1HandlerContext@ShellGesturesProcessor@@QEAA@XZ.c)
 *     ??4?$weak_ptr@VGestureHandler@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18015C6DC (--4-$weak_ptr@VGestureHandler@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z @ 0x18015C8DC (-CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Ref_count_base::_Decwref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
}
