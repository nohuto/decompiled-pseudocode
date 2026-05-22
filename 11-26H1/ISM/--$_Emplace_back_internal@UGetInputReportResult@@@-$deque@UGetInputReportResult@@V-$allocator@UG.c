/*
 * XREFs of ??$_Emplace_back_internal@UGetInputReportResult@@@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAX$$QEAUGetInputReportResult@@@Z @ 0x1800DC908
 * Callers:
 *     ??$emplace_back@UGetInputReportResult@@@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@QEAAAEAUGetInputReportResult@@$$QEAU2@@Z @ 0x1800DC9C0 (--$emplace_back@UGetInputReportResult@@@-$deque@UGetInputReportResult@@V-$allocator@UGetInputRep.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18004FA00 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Subscript@?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@QEBAAEBUPointerFrame@PointerInputMediator@@_K@Z @ 0x18008B294 (-_Subscript@-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@.c)
 *     ?_Getblock@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEBA_J_K@Z @ 0x1800C7554 (-_Getblock@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMe.c)
 *     ?_Growmap@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAX_K@Z @ 0x1800DD464 (-_Growmap@-$deque@UGetInputReportResult@@V-$allocator@UGetInputReportResult@@@std@@@std@@AEAAX_K.c)
 */

__int64 __fastcall std::deque<GetInputReportResult>::_Emplace_back_internal<GetInputReportResult>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned __int64 size_of; // rax
  __int64 result; // rax
  __int64 v8; // rcx

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<GetInputReportResult>::_Growmap();
  a1[3] &= a1[2] - 1LL;
  v4 = a1[4] + a1[3];
  v5 = std::deque<PointerInputMediator::PointerFrame>::_Getblock((__int64)a1, v4);
  if ( !*(_QWORD *)(a1[1] + 8 * v5) )
  {
    size_of = std::_Get_size_of_n<24>(1uLL);
    *(_QWORD *)(a1[1] + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  }
  result = std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>::_Subscript((__int64)a1, v4);
  *(_DWORD *)result = *(_DWORD *)a2;
  v8 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(result + 8) = v8;
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 16);
  ++a1[4];
  return result;
}
