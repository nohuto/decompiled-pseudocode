/*
 * XREFs of PiCMCaptureDeviceListInputData @ 0x140AA05E0
 * Callers:
 *     PiCMGetDeviceIdList @ 0x140AA01F0 (PiCMGetDeviceIdList.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140474950 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1409A6A70 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiCMCaptureDeviceListInputData(void *Src, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r12d
  char PreviousMode; // r13
  int UserModeCallersCopy; // ebx
  _QWORD *v8; // r15
  void *v9; // rdx
  _DWORD *v10; // r14
  unsigned int v11; // r8d
  __int128 v14; // [rsp+40h] [rbp-48h] BYREF
  int v15; // [rsp+50h] [rbp-38h]

  v14 = 0LL;
  v15 = 0;
  v5 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !Src || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_16;
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
    if ( a2 < 0x18 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      RtlCopyFromUser((void *)a4, Src, 0x18uLL);
      if ( *(_DWORD *)a4 != 24 )
        UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy >= 0 )
  {
    v8 = (_QWORD *)(a4 + 8);
    v9 = *(void **)(a4 + 8);
    *(_QWORD *)(a4 + 8) = 0LL;
    if ( v9 )
    {
      v10 = (_DWORD *)(a4 + 16);
      v11 = *(_DWORD *)(a4 + 16);
      if ( v11 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 8), v9, v11, 2LL, PreviousMode, 1);
        if ( UserModeCallersCopy < 0 )
        {
          *v8 = 0LL;
          *v10 = 0;
        }
        else
        {
          v5 = 1;
          *(_WORD *)(*v8 + 2 * ((unsigned __int64)(unsigned int)*v10 >> 1) - 2) = 0;
        }
LABEL_16:
        if ( UserModeCallersCopy >= 0 )
          return (unsigned int)UserModeCallersCopy;
        goto LABEL_30;
      }
    }
    else
    {
      v10 = (_DWORD *)(a4 + 16);
    }
    if ( v9 )
    {
      if ( *v10 >= 2u )
        goto LABEL_16;
    }
    else if ( !*v10 )
    {
      goto LABEL_16;
    }
    UserModeCallersCopy = -1073741811;
  }
LABEL_30:
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 8));
  *(_OWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}
