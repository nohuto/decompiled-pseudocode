/*
 * XREFs of FreeHidData @ 0x1400C7E10
 * Callers:
 *     ?FreePreviouslyReturnedHidData@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400C9AC4 (-FreePreviouslyReturnedHidData@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x14011C948 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x14011CC7C (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x14011F944 (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?DeleteHidDataIfAlreadyHandledByGRIB@@YA_NPEAUtagTHREADINFO@@_J@Z @ 0x1401958D4 (-DeleteHidDataIfAlreadyHandledByGRIB@@YA_NPEAUtagTHREADINFO@@_J@Z.c)
 *     EditionPostRawMouseInputMessage @ 0x1402386D0 (EditionPostRawMouseInputMessage.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z @ 0x1402746D8 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z.c)
 *     ?PostHidInput_old@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z @ 0x140274A2C (-PostHidInput_old@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??1IdentifyPrimaryDestroyTarget@@QEAA@XZ @ 0x1401850D8 (--1IdentifyPrimaryDestroyTarget@@QEAA@XZ.c)
 */

void __fastcall FreeHidData(__int64 a1)
{
  __int64 v2; // rsi
  bool v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  bool v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = 0;
  v2 = _HMPheFromObjectWorker(a1);
  v3 = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(v5, v4) + 19760) && IS_USERCRIT_OWNED_EXCLUSIVE() )
  {
    v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19768);
    v3 = v9 == 0;
    v15 = v9 == 0;
    if ( v9 )
    {
      if ( v2 != *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19768) )
      {
        UserSessionState = W32GetUserSessionState(v13, v12);
        ++*(_DWORD *)(UserSessionState + 19776);
      }
    }
    else
    {
      *(_QWORD *)(W32GetUserSessionState(0LL, v8) + 19768) = v2;
    }
  }
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    HMAssignmentUnlock(a1 + 24);
    HMFreeObject(a1);
    if ( v3 )
      *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19768) = 0LL;
  }
  else
  {
    IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v15);
  }
}
