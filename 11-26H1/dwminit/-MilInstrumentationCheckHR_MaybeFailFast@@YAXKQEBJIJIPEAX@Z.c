/*
 * XREFs of ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000EE20
 * Callers:
 *     ?AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180007DE4 (-AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180009CF0 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 *     DwmpTerminateSessionProcess @ 0x18000E330 (DwmpTerminateSessionProcess.c)
 *     ?WilResultLoggingCallback_MaybeFailFast@@YAXAEBUFailureInfo@wil@@@Z @ 0x18000F050 (-WilResultLoggingCallback_MaybeFailFast@@YAXAEBUFailureInfo@wil@@@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000F50C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000F740 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x18000F9DC (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG@Z @ 0x18000FBF8 (-ConnectWithName@CPortClient@@QEAAJPEBG@Z.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x18000FD7C (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 * Callees:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x18000EBE4 (-DoStackCapture@@YAXJIPEAX@Z.c)
 */

void __fastcall MilInstrumentationCheckHR_MaybeFailFast(
        char a1,
        const int *const a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        void *a6)
{
  void *v7; // r9
  char v8; // bl
  _DWORD *v9; // rax
  unsigned int v10; // r10d
  unsigned int v11; // eax
  unsigned int v12; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v7 = a6;
  if ( !a6 )
    v7 = retaddr;
  v8 = 0;
  v9 = &unk_180014DF0;
  v10 = 0;
  while ( *v9 != a4 )
  {
    ++v10;
    ++v9;
    if ( v10 >= 9 )
      goto LABEL_8;
  }
  v8 = 1;
LABEL_8:
  if ( (a1 & 0x10) != 0 && v8 )
  {
    if ( !a2 || !a3 )
    {
LABEL_22:
      MilInstrumentationHandleFailure_MaybeFailFast(a4, a1, a5, v7);
      return;
    }
    v11 = 0;
    while ( a4 != *a2 )
    {
      ++v11;
      ++a2;
      if ( v11 >= a3 )
        goto LABEL_22;
    }
  }
  else
  {
    if ( a2 && a3 )
    {
      v12 = 0;
    }
    else
    {
      v12 = 0;
      a2 = (const int *const)&unk_180014E18;
      a3 = 10;
    }
    while ( a4 != *a2 )
    {
      ++v12;
      ++a2;
      if ( v12 >= a3 )
        goto LABEL_22;
    }
  }
  if ( (a1 & 4) != 0 )
  {
    if ( v8 )
      DoStackCapture(a4, a5, (unsigned __int64)v7);
  }
}
