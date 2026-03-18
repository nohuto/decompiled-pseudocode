/*
 * XREFs of ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1401C24B0
 * Callers:
 *     Win32UAFMFreeToPagedLookasideList @ 0x1401C2170 (Win32UAFMFreeToPagedLookasideList.c)
 *     ?FreePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1401C24D8 (-FreePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z.c)
 * Callees:
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x14000D3C4 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 */

__int64 __fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(
        ULONG_PTR a1,
        unsigned int a2)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a1 - 4) - 1);
  if ( a2 != (_DWORD)result )
    return NSInstrumentation::PlatformAbort(0, a1, a2);
  return result;
}
