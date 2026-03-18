/*
 * XREFs of NtUserThunkedMenuItemInfo @ 0x1402A2A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$?0VSmartObjStackRef@@@?$Win32HMThreadLock@UtagMENU@@@@QEAA@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1400350BC (--$-0VSmartObjStackRef@@@-$Win32HMThreadLock@UtagMENU@@@@QEAA@AEAV-$SmartObjStackRef@UtagMENU@@@.c)
 *     xxxSetMenuItemInfo @ 0x1400468EC (xxxSetMenuItemInfo.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxInsertMenuItem @ 0x140048320 (xxxInsertMenuItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     AccessMaskFromMenuItemInfo @ 0x1401DEAB4 (AccessMaskFromMenuItemInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtUserThunkedMenuItemInfo(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        ULONG64 a5,
        ULONG64 a6)
{
  __int64 v10; // rdx
  _OWORD *v11; // rcx
  unsigned int *v12; // rdx
  int v13; // ebx
  __int64 v14; // rcx
  WCHAR *v15; // rdx
  ULONG64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  bool v19; // zf
  int inserted; // eax
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  int v26; // [rsp+30h] [rbp-A8h]
  __int64 *v27[2]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-90h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-88h] BYREF
  _OWORD v30[5]; // [rsp+60h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+B8h] [rbp-20h] BYREF

  memset_0(v30, 0, sizeof(v30));
  DestinationString = 0LL;
  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v27, v10);
  v11 = (_OWORD *)a5;
  if ( a5 >= MmUserProbeAddress )
    v11 = (_OWORD *)MmUserProbeAddress;
  v30[0] = *v11;
  v30[1] = v11[1];
  v30[2] = v11[2];
  v30[3] = v11[3];
  v30[4] = v11[4];
  v12 = (unsigned int *)a6;
  v13 = 0;
  if ( a6 )
  {
    if ( a6 >= MmUserProbeAddress )
      v12 = (unsigned int *)MmUserProbeAddress;
    v14 = *v12;
    v26 = *v12;
    *(_DWORD *)&DestinationString.Length = *v12;
    v15 = (WCHAR *)*((_QWORD *)v12 + 1);
    DestinationString.Buffer = v15;
    if ( ((unsigned __int8)v15 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = (ULONG64)v15 + (unsigned __int16)v14 + 2;
    if ( v16 <= (unsigned __int64)v15 || v16 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v14 > HIWORD(v26) || (v14 & 1) != 0 )
    {
      if ( (v14 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5012);
      ExRaiseAccessViolation();
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  v17 = DWORD1(v30[0]);
  if ( (BYTE4(v30[0]) & 1) == 0 || (HIDWORD(v30[0]) & 0xFFFFEF74) == 0 )
  {
    if ( a4 )
    {
      v18 = ValidateHmenu(a1, 16LL);
      v28 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v27, v18);
      if ( SmartObjStackRef<tagMENU>::operator==((__int64)v27)
        || (*(_DWORD *)(*(_QWORD *)(*v27[0] + 40) + 40LL) & 0x40) != 0 )
      {
        goto LABEL_19;
      }
      v19 = (*(_DWORD *)(*(_QWORD *)(*v27[0] + 40) + 40LL) & 0x200) == 0;
    }
    else
    {
      v22 = AccessMaskFromMenuItemInfo(v14, SBYTE4(v30[0]), SWORD6(v30[0]));
      v23 = ValidateHmenu(a1, v22);
      v28 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v27, v23);
      if ( SmartObjStackRef<tagMENU>::operator==((__int64)v27) )
        goto LABEL_19;
      v19 = (*(_DWORD *)(*(_QWORD *)(*v27[0] + 40) + 40LL) & 0x40) == 0;
    }
    if ( v19 )
    {
      Win32HMThreadLock<tagMENU>::Win32HMThreadLock<tagMENU>(BugCheckParameter3, v27);
      if ( a4 )
        inserted = xxxInsertMenuItem(v27, a2, a3, (__int64)v30, (__int64)&DestinationString);
      else
        inserted = xxxSetMenuItemInfo(v27, a2, a3, (__int64)v30, (__int64)&DestinationString);
      v13 = inserted;
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v21);
    }
  }
LABEL_19:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v27, v17);
  UserSessionSwitchLeaveCrit(v24);
  return v13;
}
