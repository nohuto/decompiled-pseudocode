/*
 * XREFs of PiCMCaptureInterfaceListInputData @ 0x140AB1EA4
 * Callers:
 *     PiCMGetDeviceInterfaceList @ 0x140999BB0 (PiCMGetDeviceInterfaceList.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140474950 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1409A6A70 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiCMCaptureInterfaceListInputData(void *Src, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r15d
  char PreviousMode; // r12
  int UserModeCallersCopy; // ebx
  _QWORD *v8; // r14
  void *v9; // rcx
  unsigned int v11; // r8d
  _OWORD v12[2]; // [rsp+48h] [rbp-60h] BYREF
  int v13; // [rsp+68h] [rbp-40h]

  memset(v12, 0, sizeof(v12));
  v13 = 0;
  v5 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !Src || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_14;
  }
  if ( a3 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 >= 0x24 && (RtlCopyFromUser(v12, Src, 0x24uLL), LODWORD(v12[0]) == 36) )
    {
      *(_DWORD *)a4 = 40;
      *(_DWORD *)(a4 + 4) = DWORD1(v12[0]);
      *(_OWORD *)(a4 + 8) = *(_OWORD *)((char *)v12 + 8);
      *(_QWORD *)(a4 + 24) = DWORD2(v12[1]);
      *(_DWORD *)(a4 + 32) = HIDWORD(v12[1]);
      *(_DWORD *)(a4 + 36) = v13;
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
    if ( a2 < 0x28 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      RtlCopyFromUser((void *)a4, Src, 0x28uLL);
      if ( *(_DWORD *)a4 != 40 )
        UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy < 0 )
    goto LABEL_27;
  v8 = (_QWORD *)(a4 + 24);
  v9 = *(void **)(a4 + 24);
  *(_QWORD *)(a4 + 24) = 0LL;
  if ( !v9 )
  {
    if ( !*(_DWORD *)(a4 + 32) )
      goto LABEL_14;
    goto LABEL_26;
  }
  v11 = *(_DWORD *)(a4 + 32);
  if ( v11 >= 2 )
  {
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 24), v9, v11, 2LL, PreviousMode, 1);
    if ( UserModeCallersCopy < 0 )
    {
      *v8 = 0LL;
      *(_DWORD *)(a4 + 32) = 0;
    }
    else
    {
      v5 = 1;
      *(_WORD *)(*v8 + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 32) >> 1) - 2) = 0;
    }
LABEL_14:
    if ( UserModeCallersCopy >= 0 )
      return (unsigned int)UserModeCallersCopy;
    goto LABEL_27;
  }
LABEL_26:
  UserModeCallersCopy = -1073741811;
LABEL_27:
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 24));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}
