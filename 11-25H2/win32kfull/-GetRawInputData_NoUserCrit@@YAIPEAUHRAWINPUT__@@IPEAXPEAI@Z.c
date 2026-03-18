/*
 * XREFs of ?GetRawInputData_NoUserCrit@@YAIPEAUHRAWINPUT__@@IPEAXPEAI@Z @ 0x140186B94
 * Callers:
 *     NtUserGetRawInputData @ 0x140186B60 (NtUserGetRawInputData.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetRawInputData@RawInput@InputTraceLogging@@SAXPEAXIPEAUtagHIDDATA@@@Z @ 0x140189670 (-GetRawInputData@RawInput@InputTraceLogging@@SAXPEAXIPEAUtagHIDDATA@@@Z.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x140275110 (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GRID_CopyHidData@@YAIQEAUtagHIDDATA@@IREAXPEAI@Z @ 0x1402928F4 (-GRID_CopyHidData@@YAIQEAUtagHIDDATA@@IREAXPEAI@Z.c)
 */

__int64 __fastcall GetRawInputData_NoUserCrit(struct HRAWINPUT__ *a1, __int64 a2, void *a3, unsigned int *a4)
{
  unsigned int v6; // r14d
  __int64 v8; // rbx
  __int64 v9; // rdx
  struct tagTHREADINFO *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v15; // ebx

  v6 = a2;
  v8 = 0LL;
  v10 = PtiCurrent((__int64)a1, a2);
  v13 = *((_QWORD *)v10 + 143);
  if ( v13 && *(struct HRAWINPUT__ **)v13 == a1 )
  {
LABEL_12:
    v8 = v13;
  }
  else
  {
    IsEnabledDeviceUsageNoInline = Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline(
                                     v13,
                                     v9,
                                     v11,
                                     v12);
    v13 = *((_QWORD *)v10 + 146);
    if ( IsEnabledDeviceUsageNoInline )
    {
      v8 = *((_QWORD *)v10 + 146);
      if ( v13 )
      {
        while ( *(struct HRAWINPUT__ **)v8 != a1 )
        {
          v8 = *(_QWORD *)(v8 + 32);
          if ( !v8 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        v8 = 0LL;
      }
    }
    else
    {
      while ( v13 )
      {
        if ( *(struct HRAWINPUT__ **)v13 == a1 )
          goto LABEL_12;
        v13 = *(_QWORD *)(v13 + 32);
      }
    }
  }
  if ( a3 )
    InputTraceLogging::RawInput::GetRawInputData(a1, v6, (struct tagHIDDATA *)v8);
  if ( v8 )
  {
    return GRID_CopyHidData((struct tagHIDDATA *const)v8, v6, a3, a4);
  }
  else
  {
    v15 = -1;
    UserSetLastError(6);
  }
  return v15;
}
