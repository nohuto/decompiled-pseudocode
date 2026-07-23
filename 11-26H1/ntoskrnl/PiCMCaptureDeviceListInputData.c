/*
 * XREFs of PiCMCaptureDeviceListInputData @ 0x140AA1F70
 * Callers:
 *     PiCMGetDeviceIdList @ 0x140AA1B80 (PiCMGetDeviceIdList.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     Feature_KernelPnP_DeviceListFilterUpdates__private_IsEnabledDeviceUsageNoInline @ 0x1405DF3D4 (Feature_KernelPnP_DeviceListFilterUpdates__private_IsEnabledDeviceUsageNoInline.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1409674D0 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiCMCaptureDeviceListInputData(void *Src, unsigned int a2, int a3, __int64 a4)
{
  int UserModeCallersCopy; // ebx
  _QWORD *v7; // r15
  void *v8; // r13
  int v9; // ecx
  _DWORD *v10; // r12
  unsigned int v11; // r8d
  int v13; // [rsp+38h] [rbp-50h]
  __int128 v14; // [rsp+48h] [rbp-40h] BYREF
  int v15; // [rsp+58h] [rbp-30h]
  char PreviousMode; // [rsp+90h] [rbp+8h]

  v14 = 0LL;
  v15 = 0;
  v13 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !Src || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_35;
  }
  if ( a3 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 >= 0x14 && (RtlCopyFromUser(&v14, Src, 0x14uLL), (_DWORD)v14 == 20) )
    {
      *(_DWORD *)a4 = 24;
      *(_DWORD *)(a4 + 4) = DWORD1(v14);
      *(_QWORD *)(a4 + 8) = DWORD2(v14);
      *(_DWORD *)(a4 + 16) = HIDWORD(v14);
      *(_DWORD *)(a4 + 20) = v15;
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  else
  {
    if ( ((unsigned __int8)Src & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 >= 0x18 )
    {
      RtlCopyFromUser((void *)a4, Src, 0x18uLL);
      if ( *(_DWORD *)a4 != 24 )
        UserModeCallersCopy = -1073741811;
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy >= 0 )
  {
    v7 = (_QWORD *)(a4 + 8);
    v8 = *(void **)(a4 + 8);
    *(_QWORD *)(a4 + 8) = 0LL;
    if ( (unsigned int)Feature_KernelPnP_DeviceListFilterUpdates__private_IsEnabledDeviceUsageNoInline() )
    {
      v9 = *(_DWORD *)(a4 + 16);
      if ( v8 )
      {
        if ( (unsigned int)(v9 - 2) <= 0x1FE )
        {
          UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 8), v8, v9, 2LL, PreviousMode, 1);
          if ( UserModeCallersCopy < 0 )
          {
            *v7 = 0LL;
            *(_DWORD *)(a4 + 16) = 0;
          }
          else
          {
            v13 = 1;
            *(_WORD *)(*v7 + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 16) >> 1) - 2) = 0;
          }
          goto LABEL_35;
        }
      }
      else if ( !v9 )
      {
        goto LABEL_35;
      }
    }
    else
    {
      if ( v8 )
      {
        v10 = (_DWORD *)(a4 + 16);
        v11 = *(_DWORD *)(a4 + 16);
        if ( v11 >= 2 )
        {
          UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 8), v8, v11, 2LL, PreviousMode, 1);
          if ( UserModeCallersCopy < 0 )
          {
            *v7 = 0LL;
            *v10 = 0;
          }
          else
          {
            v13 = 1;
            *(_WORD *)(*v7 + 2 * ((unsigned __int64)(unsigned int)*v10 >> 1) - 2) = 0;
          }
LABEL_35:
          if ( UserModeCallersCopy >= 0 )
            return (unsigned int)UserModeCallersCopy;
          goto LABEL_36;
        }
      }
      else
      {
        v10 = (_DWORD *)(a4 + 16);
      }
      if ( v8 )
      {
        if ( *v10 >= 2u )
          goto LABEL_35;
      }
      else if ( !*v10 )
      {
        goto LABEL_35;
      }
    }
    UserModeCallersCopy = -1073741811;
  }
LABEL_36:
  if ( v13 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 8));
  *(_OWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}
