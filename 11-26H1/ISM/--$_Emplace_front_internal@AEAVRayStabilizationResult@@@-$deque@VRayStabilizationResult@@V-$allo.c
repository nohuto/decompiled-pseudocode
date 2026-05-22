/*
 * XREFs of ??$_Emplace_front_internal@AEAVRayStabilizationResult@@@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x180073038
 * Callers:
 *     ??$emplace_front@AEAVRayStabilizationResult@@@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAAAEAVRayStabilizationResult@@AEAV2@@Z @ 0x1800C6354 (--$emplace_front@AEAVRayStabilizationResult@@@-$deque@VRayStabilizationResult@@V-$allocator@VRay.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Subscript@?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@QEBAAEBUPointerFrame@PointerInputMediator@@_K@Z @ 0x18008B294 (-_Subscript@-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@.c)
 *     ?_Getblock@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEBA_J_K@Z @ 0x1800C7554 (-_Getblock@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMe.c)
 *     ?_Growmap@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAX_K@Z @ 0x1800C7568 (-_Growmap@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@AEA.c)
 */

__int64 __fastcall std::deque<RayStabilizationResult>::_Emplace_front_internal<RayStabilizationResult &>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  bool v5; // zf
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 result; // rax

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<RayStabilizationResult>::_Growmap();
  v4 = a1[2];
  v5 = ((v4 - 1) & a1[3]) == 0;
  a1[3] &= v4 - 1;
  v6 = a1[3];
  if ( v5 )
    v6 = v4;
  v7 = v6 - 1;
  v8 = std::deque<PointerInputMediator::PointerFrame>::_Getblock(a1, v7);
  if ( !*(_QWORD *)(a1[1] + 8 * v8) )
    *(_QWORD *)(a1[1] + 8 * v8) = std::_Allocate<16,std::_Default_allocate_traits>(100LL);
  v9 = std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>::_Subscript(a1, v7);
  *(_OWORD *)v9 = *(_OWORD *)a2;
  *(_OWORD *)(v9 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v9 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v9 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(v9 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(v9 + 80) = *(_OWORD *)(a2 + 80);
  result = *(unsigned int *)(a2 + 96);
  *(_DWORD *)(v9 + 96) = result;
  a1[3] = v7;
  ++a1[4];
  return result;
}
