/*
 * XREFs of ?NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z @ 0x14011D4E0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x14011D54C (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 */

void __fastcall NormalAPCInvalidateCOMPOSITEDWnd(char *a1, void *a2, void *a3)
{
  struct tagWND *v4; // rax
  __int64 v5; // rcx

  EnterCrit(1LL, 0LL);
  v4 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a1 + 2), 1);
  if ( v4 && (*(_BYTE *)(*((_QWORD *)v4 + 5) + 27LL) & 2) != 0 )
    InvalidateWEFCOMPOSITEDWindow(v4, (const struct tagRECT *)(a1 + 24));
  Win32FreePool(a1 - 88);
  UserSessionSwitchLeaveCrit(v5);
}
