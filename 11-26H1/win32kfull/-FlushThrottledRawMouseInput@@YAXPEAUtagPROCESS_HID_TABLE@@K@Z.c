/*
 * XREFs of ?FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z @ 0x1401ABC8C
 * Callers:
 *     EditionHandleRawInputThrottlingTimer @ 0x1401AB950 (EditionHandleRawInputThrottlingTimer.c)
 *     ?ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x1401AB9D8 (-ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_.c)
 *     EditionPostRawMouseInputMessage @ 0x1402706C0 (EditionPostRawMouseInputMessage.c)
 * Callees:
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x14009023C (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     ?FlushThrottledRawInput@Mouse@InputTraceLogging@@SAXPEAUHWND__@@_KK@Z @ 0x140091920 (-FlushThrottledRawInput@Mouse@InputTraceLogging@@SAXPEAUHWND__@@_KK@Z.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 */

void __fastcall FlushThrottledRawMouseInput(struct tagPROCESS_HID_TABLE *a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  HWND v9; // rcx
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+3Ch] [rbp-1Ch]
  int v15; // [rsp+40h] [rbp-18h]
  int v16; // [rsp+44h] [rbp-14h]

  if ( (*((_DWORD *)a1 + 25) & 1) != 0 && *((_DWORD *)a1 + 28) == 2 )
  {
    v6 = *((_QWORD *)a1 + 8);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 40);
      if ( *(char *)(v7 + 20) >= 0 && *(char *)(v7 + 19) >= 0 )
      {
        v8 = *((_QWORD *)a1 + 17);
        if ( !v8 || HMValidateHandleNoRip(v8, 19) )
        {
          v9 = (HWND)*((_QWORD *)a1 + 8);
          v10 = *((_DWORD *)a1 + 42);
          v11 = *((_QWORD *)a1 + 20);
          v14 = *((_DWORD *)a1 + 36);
          v15 = *((_DWORD *)a1 + 37);
          v16 = *((_DWORD *)a1 + 38);
          v12 = 0LL;
          v13 = 0;
          if ( v9 )
            v9 = *(HWND *)v9;
          InputTraceLogging::Mouse::FlushThrottledRawInput(v9, v11, v10, a4);
          PostRawMouseInputToBackgroundListener(
            a1,
            *((void **)a1 + 17),
            (const struct tagRAWMOUSE *)&v12,
            *((_QWORD *)a1 + 20),
            a2);
        }
      }
    }
  }
  *((_DWORD *)a1 + 28) = 0;
}
