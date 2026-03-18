/*
 * XREFs of ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x1400B88B4
 * Callers:
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x140190780 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1400B96E8 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     UserIsCurrentThreadDesktopComposed @ 0x1400B9EB0 (UserIsCurrentThreadDesktopComposed.c)
 *     _anonymous_namespace_::PhysicalCursorPointAsLogicalPoint @ 0x1400BA520 (_anonymous_namespace_--PhysicalCursorPointAsLogicalPoint.c)
 */

__int64 __fastcall QHelper::GetPendingMouseMovePoint(__int64 a1, __int64 a2)
{
  __int64 Queue; // rdi
  __int64 v4; // xmm0_8
  int v5; // eax
  __int64 v7; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  Queue = CInputDest::GetQueue(a2, 2LL);
  if ( Queue && (unsigned int)UserIsCurrentThreadDesktopComposed() )
  {
    v4 = *(_QWORD *)(Queue + 192);
    v5 = *(_DWORD *)(Queue + 200);
  }
  else
  {
    v7 = anonymous_namespace_::PhysicalCursorPointAsLogicalPoint(v8);
    v4 = *(_QWORD *)v7;
    v5 = *(_DWORD *)(v7 + 8);
  }
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 8) = v5;
  return a1;
}
