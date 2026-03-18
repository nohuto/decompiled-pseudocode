/*
 * XREFs of NtUserGetInteractiveCtrlSupportedWaveforms @ 0x140297F50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z @ 0x1402DFF30 (-GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtUserGetInteractiveCtrlSupportedWaveforms(unsigned __int16 a1, volatile void *a2, int *a3)
{
  int v4; // ebx
  int v5; // ecx
  ULONG64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v10; // rax
  int v11; // r8d
  _DWORD *v12; // rdx
  int v14; // [rsp+20h] [rbp-58h]
  void *Src; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v16[7]; // [rsp+40h] [rbp-38h] BYREF
  int v19; // [rsp+98h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(v16, 1LL);
  v4 = 0;
  v19 = 0;
  Src = 0LL;
  if ( !a3 )
  {
    v5 = 87;
LABEL_3:
    UserSetLastError(v5);
    goto LABEL_21;
  }
  ProbeForRead(a3, 4uLL, 4u);
  v8 = (unsigned int)*a3;
  v14 = *a3;
  if ( a2 && v14 > 0 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8, v7);
    ProbeForWrite(a2, v14, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  v10 = InteractiveControlManager::Instance(v8, v7);
  if ( (int)InteractiveControlManager::GetDeviceSupportedWaveforms(v10, a1, (struct _WAVEFORM_INFO **)&Src, &v19) >= 0 )
  {
    if ( (unsigned __int64)v19 >= 0xFFFFFFF )
    {
      v5 = 534;
      goto LABEL_3;
    }
    v11 = 8 * v19;
    if ( v14 > 0 && v14 < v11 )
    {
      v5 = 122;
      goto LABEL_3;
    }
    v12 = a3;
    v6 = MmUserProbeAddress;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    *v12 = *v12;
    if ( a2 && Src && v14 >= v11 )
    {
      *a3 = v11;
      memmove((void *)a2, Src, v11);
    }
    else
    {
      *a3 = v11;
    }
    v4 = 1;
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
