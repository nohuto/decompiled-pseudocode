/*
 * XREFs of ?NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z @ 0x140152600
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x140152674 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 */

void __fastcall NormalAPCInvalidateCOMPOSITEDWnd(char *a1, void *a2, void *a3)
{
  __int64 v4; // rdx
  struct tagWND *v5; // rax
  __int64 v6; // rcx

  EnterCrit(1LL, 0LL);
  LOBYTE(v4) = 1;
  v5 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a1 + 2), v4);
  if ( v5 && (*(_BYTE *)(*((_QWORD *)v5 + 5) + 27LL) & 2) != 0 )
    InvalidateWEFCOMPOSITEDWindow(v5, (const struct tagRECT *)(a1 + 24));
  Win32FreePool(a1 - 88);
  UserSessionSwitchLeaveCrit(v6);
}
