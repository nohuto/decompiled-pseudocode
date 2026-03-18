/*
 * XREFs of ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x140054290
 * Callers:
 *     PostDeviceNotification @ 0x140171974 (PostDeviceNotification.c)
 * Callees:
 *     ?GetInputDelegate@@YAPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1400543E4 (-GetInputDelegate@@YAPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     CalcWakeMask @ 0x140055540 (CalcWakeMask.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x140055DDC (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 */

__int64 __fastcall PostHidNotification(struct tagPROCESS_HID_REQUEST *a1, struct DEVICEINFO *a2)
{
  struct tagWND *v2; // rbx
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  int v7; // r15d
  struct tagQ *v8; // r14
  unsigned int v9; // eax
  struct tagTHREADINFO *InputDelegate; // rax
  __int64 v11; // r11
  struct tagTHREADINFO *v12; // rdi
  __int64 v13; // rax

  v2 = (struct tagWND *)*((_QWORD *)a1 + 4);
  if ( !v2 )
    return 1LL;
  if ( (*((_DWORD *)a1 + 5) & 4) == 0 )
    return 1LL;
  v5 = *((_QWORD *)v2 + 5);
  if ( *(char *)(v5 + 20) < 0 || *(char *)(v5 + 19) < 0 )
    return 1LL;
  v6 = *((_QWORD *)v2 + 2);
  v7 = 0;
  v8 = *(struct tagQ **)(v6 + 464);
  v9 = CalcWakeMask(254LL, 254LL, 0LL);
  InputDelegate = GetInputDelegate(v2, v9);
  v12 = InputDelegate;
  if ( InputDelegate )
  {
    vAdjustDelegatePriority(InputDelegate);
    v7 = 1;
    v8 = (struct tagQ *)*((_QWORD *)v12 + 58);
    v6 = (__int64)v12;
    v11 = (*((_QWORD *)v12 + 170) >> 37) & 1LL;
  }
  v13 = a2 ? *(_QWORD *)a2 : 0LL;
  result = PostInputMessage(v8, v2, 0xFEu, v13, 0, 0LL, 0LL, 0, 0LL, 0LL, 0LL, v7, v11, v6);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
