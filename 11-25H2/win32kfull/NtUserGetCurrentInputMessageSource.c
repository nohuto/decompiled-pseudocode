/*
 * XREFs of NtUserGetCurrentInputMessageSource @ 0x140249640
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140247BD4 (-_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline @ 0x140281BE4 (Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetCurrentInputMessageSource(unsigned __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  int CurrentInputMessageSource; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  _BYTE *v11; // rdx
  __int64 Src; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h]
  char v15; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0LL;
  Src = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v15, 1LL);
  if ( !a1 )
  {
    UserSetLastError(87);
    CurrentInputMessageSource = 0;
    goto LABEL_21;
  }
  CurrentInputMessageSource = _GetCurrentInputMessageSource(0LL, (struct tagINPUT_MESSAGE_SOURCE *)&Src);
  if ( !CurrentInputMessageSource )
    goto LABEL_21;
  if ( !(unsigned int)Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline(v3, v5, v6, v7) )
  {
    v9 = (unsigned int)Src;
    if ( (((_DWORD)Src - 18) & 0xFFFFFFEF) == 0 )
      v9 = 2LL;
    LODWORD(Src) = v9;
    goto LABEL_13;
  }
  if ( (_DWORD)Src == 34 )
    goto LABEL_9;
  if ( (_DWORD)Src == 18 )
  {
    v10 = PtiCurrent(v9, v8);
    if ( (unsigned int)IsTouchpadCapable(v10, 0LL) )
    {
      LODWORD(Src) = 16;
      goto LABEL_13;
    }
LABEL_9:
    LODWORD(Src) = 2;
  }
LABEL_13:
  if ( PsGetCurrentProcessWow64Process(v9, v8) )
  {
    v14 = 1LL;
  }
  else
  {
    v14 = 4LL;
    v2 = 3LL;
  }
  if ( (v2 & a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (_BYTE *)MmUserProbeAddress;
  *v11 = *v11;
  v11[7] = v11[7];
  RtlCopyVolatileMemory((void *)a1, &Src, 8uLL);
LABEL_21:
  UserSessionSwitchLeaveCrit(v3);
  return CurrentInputMessageSource;
}
