/*
 * XREFs of ?CreateVirtualDesktop@CVirtualDesktopFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E2310
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CVirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E235C (-CVirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock.c)
 */

__int64 __fastcall CVirtualDesktopFactory::CreateVirtualDesktop(
        struct IVirtualDesktopVisibilityPolicy **this,
        const struct _GUID *a2,
        void **a3)
{
  int Instance; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = CVirtualDesktop_CreateInstance(this[2], this[3], a2, a3);
  v4 = Instance;
  if ( Instance < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopfactory.cpp",
      (const char *)(unsigned int)Instance);
  return v4;
}
