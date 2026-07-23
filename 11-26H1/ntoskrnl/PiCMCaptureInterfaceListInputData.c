/*
 * XREFs of PiCMCaptureInterfaceListInputData @ 0x140B73060
 * Callers:
 *     PiCMGetDeviceInterfaceList @ 0x14095A610 (PiCMGetDeviceInterfaceList.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     Feature_KernelPnP_InterfaceListFilterUpdates__private_IsEnabledDeviceUsageNoInline @ 0x1405DF430 (Feature_KernelPnP_InterfaceListFilterUpdates__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1409674D0 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiCMCaptureInterfaceListInputData(void *Src, unsigned int a2, int a3, __int64 a4)
{
  char PreviousMode; // r13
  int UserModeCallersCopy; // ebx
  _QWORD *v7; // r15
  void *v8; // r12
  int v9; // ecx
  unsigned int v10; // r8d
  int v12; // [rsp+38h] [rbp-70h]
  _OWORD v14[2]; // [rsp+50h] [rbp-58h] BYREF
  int v15; // [rsp+70h] [rbp-38h]

  memset(v14, 0, sizeof(v14));
  v15 = 0;
  v12 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !Src || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_34;
  }
  if ( a3 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 >= 0x24 && (RtlCopyFromUser(v14, Src, 0x24uLL), LODWORD(v14[0]) == 36) )
    {
      *(_DWORD *)a4 = 40;
      *(_DWORD *)(a4 + 4) = DWORD1(v14[0]);
      *(_OWORD *)(a4 + 8) = *(_OWORD *)((char *)v14 + 8);
      *(_QWORD *)(a4 + 24) = DWORD2(v14[1]);
      *(_DWORD *)(a4 + 32) = HIDWORD(v14[1]);
      *(_DWORD *)(a4 + 36) = v15;
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
    if ( a2 >= 0x28 )
    {
      RtlCopyFromUser((void *)a4, Src, 0x28uLL);
      if ( *(_DWORD *)a4 != 40 )
        UserModeCallersCopy = -1073741811;
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy >= 0 )
  {
    v7 = (_QWORD *)(a4 + 24);
    v8 = *(void **)(a4 + 24);
    *(_QWORD *)(a4 + 24) = 0LL;
    if ( (unsigned int)Feature_KernelPnP_InterfaceListFilterUpdates__private_IsEnabledDeviceUsageNoInline() )
    {
      v9 = *(_DWORD *)(a4 + 32);
      if ( v8 )
      {
        if ( (unsigned int)(v9 - 2) <= 0x18E )
        {
          UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 24), v8, v9, 2LL, PreviousMode, 1);
          if ( UserModeCallersCopy < 0 )
          {
            *v7 = 0LL;
            *(_DWORD *)(a4 + 32) = 0;
          }
          else
          {
            v12 = 1;
            *(_WORD *)(*v7 + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 32) >> 1) - 2) = 0;
          }
          goto LABEL_34;
        }
      }
      else if ( !v9 )
      {
        goto LABEL_34;
      }
    }
    else if ( v8 )
    {
      v10 = *(_DWORD *)(a4 + 32);
      if ( v10 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 24), v8, v10, 2LL, PreviousMode, 1);
        if ( UserModeCallersCopy < 0 )
        {
          *v7 = 0LL;
          *(_DWORD *)(a4 + 32) = 0;
        }
        else
        {
          v12 = 1;
          *(_WORD *)(*v7 + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 32) >> 1) - 2) = 0;
        }
LABEL_34:
        if ( UserModeCallersCopy >= 0 )
          return (unsigned int)UserModeCallersCopy;
        goto LABEL_35;
      }
      if ( *(_DWORD *)(a4 + 32) >= 2u )
        goto LABEL_34;
    }
    else if ( !*(_DWORD *)(a4 + 32) )
    {
      goto LABEL_34;
    }
    UserModeCallersCopy = -1073741811;
  }
LABEL_35:
  if ( v12 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 24));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}
