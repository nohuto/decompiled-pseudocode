/*
 * XREFs of SfnOUTLBOXSTRING @ 0x140061E20
 * Callers:
 *     xxxDefWindowProc @ 0x1400C36C0 (xxxDefWindowProc.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1400C4340 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxHkCallHook @ 0x1400C5590 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x14012B834 (xxxSendMessageCallback.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140283430 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ClientGetListboxString @ 0x140061F10 (ClientGetListboxString.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall SfnOUTLBOXSTRING(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  unsigned int v10; // r14d
  __int64 v11; // rbx
  int v12; // edi
  __int64 result; // rax
  int v14; // ecx
  unsigned int ListboxString; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-18h] BYREF

  v10 = a2;
  v11 = (__int64)a1;
  if ( a1 )
    a1 = (_QWORD *)*a1;
  v12 = 1;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2);
  if ( result )
  {
    v14 = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 28LL);
    if ( (v14 & 0x40) != 0 || (v14 & 0x30) == 0 )
      v12 = 0;
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, v11);
    ListboxString = ClientGetListboxString(v11, v10, a3, a4, a5, a6, a7, v12, a8);
    v18 = PtiCurrent(v17, v16);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v18, BugCheckParameter3);
    return ListboxString;
  }
  return result;
}
