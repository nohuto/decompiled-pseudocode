/*
 * XREFs of ?FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z @ 0x14017F348
 * Callers:
 *     EditionHandleRawInputThrottlingTimer @ 0x14017F2C0 (EditionHandleRawInputThrottlingTimer.c)
 *     ?ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x140237898 (-ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_.c)
 *     EditionPostRawMouseInputMessage @ 0x1402386D0 (EditionPostRawMouseInputMessage.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x14006739C (HMValidateHandleNoRip.c)
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x14011F944 (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     ?FlushThrottledRawInput@Mouse@InputTraceLogging@@SAXPEAUHWND__@@_KK@Z @ 0x1401C9DC0 (-FlushThrottledRawInput@Mouse@InputTraceLogging@@SAXPEAUHWND__@@_KK@Z.c)
 *     Feature_RawMouseFlush__private_IsEnabledDeviceUsageNoInline @ 0x1402770F8 (Feature_RawMouseFlush__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall FlushThrottledRawMouseInput(struct tagPROCESS_HID_TABLE *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  HWND v9; // rcx
  unsigned int v10; // r8d
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  int v15; // [rsp+38h] [rbp-18h]
  int v16; // [rsp+3Ch] [rbp-14h]
  int v17; // [rsp+40h] [rbp-10h]
  int v18; // [rsp+44h] [rbp-Ch]

  if ( (unsigned int)Feature_RawMouseFlush__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (*((_DWORD *)a1 + 25) & 1) == 0 )
      goto LABEL_19;
    if ( *((_DWORD *)a1 + 28) != 2 )
      goto LABEL_19;
    v5 = *((_QWORD *)a1 + 8);
    if ( !v5 )
      goto LABEL_19;
    v6 = *(_QWORD *)(v5 + 40);
    if ( *(char *)(v6 + 20) < 0 )
      goto LABEL_19;
    if ( *(char *)(v6 + 19) < 0 )
      goto LABEL_19;
    v7 = *((_QWORD *)a1 + 17);
    if ( v7 )
    {
      LOBYTE(v4) = 19;
      if ( !HMValidateHandleNoRip(v7, v4) )
        goto LABEL_19;
    }
    v8 = *((_DWORD *)a1 + 36);
    v14 = 0LL;
    v15 = 0;
    v9 = (HWND)*((_QWORD *)a1 + 8);
    v10 = *((_DWORD *)a1 + 42);
    v11 = *((_QWORD *)a1 + 20);
    v16 = v8;
    v17 = *((_DWORD *)a1 + 37);
    v18 = *((_DWORD *)a1 + 38);
    if ( !v9 )
    {
LABEL_18:
      InputTraceLogging::Mouse::FlushThrottledRawInput(v9, v11, v10);
      PostRawMouseInputToBackgroundListener(
        a1,
        *((void **)a1 + 17),
        (const struct tagRAWMOUSE *)&v14,
        *((_QWORD *)a1 + 20),
        a2);
LABEL_19:
      *((_DWORD *)a1 + 28) = 0;
      return;
    }
LABEL_17:
    v9 = *(HWND *)v9;
    goto LABEL_18;
  }
  if ( (*((_DWORD *)a1 + 25) & 1) != 0 && *((_DWORD *)a1 + 28) == 2 )
  {
    v9 = (HWND)*((_QWORD *)a1 + 8);
    if ( v9 )
    {
      v12 = *((_QWORD *)v9 + 5);
      if ( *(char *)(v12 + 20) >= 0 && *(char *)(v12 + 19) >= 0 )
      {
        v13 = *((_DWORD *)a1 + 36);
        v14 = 0LL;
        v15 = 0;
        v10 = *((_DWORD *)a1 + 42);
        v11 = *((_QWORD *)a1 + 20);
        v16 = v13;
        v17 = *((_DWORD *)a1 + 37);
        v18 = *((_DWORD *)a1 + 38);
        goto LABEL_17;
      }
    }
  }
}
