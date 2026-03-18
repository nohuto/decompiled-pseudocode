/*
 * XREFs of ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x14012E0A0
 * Callers:
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x140222A38 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x140222BC8 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x140222C88 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 * Callees:
 *     ?ContainsMotionData@MouseInputDataEx@CMouseProcessor@@QEBA_NXZ @ 0x14012E190 (-ContainsMotionData@MouseInputDataEx@CMouseProcessor@@QEBA_NXZ.c)
 */

__int64 __fastcall CMouseProcessor::MouseInputDataEx::MouseInputDataEx(__int64 a1, __int128 *a2, int a3, int a4)
{
  __int64 v8; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  __int64 result; // rax

  v8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *(_OWORD *)(a1 + 24) = 0uLL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = v8;
  *(LARGE_INTEGER *)(a1 + 56) = PerformanceCounter;
  *(LARGE_INTEGER *)(a1 + 64) = PerformanceCounter;
  v10 = *a2;
  *(_DWORD *)(a1 + 72) = a4;
  v11 = *((_QWORD *)a2 + 2);
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)a1 = v10;
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 16) = v11;
  if ( !CMouseProcessor::MouseInputDataEx::ContainsMotionData((CMouseProcessor::MouseInputDataEx *)a1) )
    *(_DWORD *)(a1 + 72) |= 8u;
  result = a1;
  *(_DWORD *)(a1 + 88) = a3;
  return result;
}
