/*
 * XREFs of PiCMCaptureRegistryPropertyInputData @ 0x140958558
 * Callers:
 *     PiCMSetRegistryProperty @ 0x14094DCB8 (PiCMSetRegistryProperty.c)
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1409674D0 (PiControlMakeUserModeCallersCopy.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1409675B8 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMCaptureRegistryPropertyInputData(void *Src, unsigned int a2, int a3, __int64 a4)
{
  int v6; // r10d
  char PreviousMode; // r13
  int UserModeCallersCopy; // edi
  __int64 v9; // r12
  _DWORD *v10; // r15
  __int64 v11; // rax
  _DWORD *v12; // r15
  void *Pool2; // rax
  int v15; // r8d
  int v16; // [rsp+30h] [rbp-78h]
  int v17; // [rsp+38h] [rbp-70h]
  __int128 v19; // [rsp+50h] [rbp-58h] BYREF
  __int128 v20; // [rsp+60h] [rbp-48h]
  __int64 v21; // [rsp+70h] [rbp-38h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v6 = 0;
  v16 = 0;
  v17 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !Src || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_22;
  }
  if ( a3 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 >= 0x28 && (RtlCopyFromUser(&v19, Src, 0x28uLL), v6 = 0, (_DWORD)v19 == 40) )
    {
      *(_DWORD *)a4 = 56;
      *(_QWORD *)(a4 + 4) = *(_QWORD *)((char *)&v19 + 4);
      *(_QWORD *)(a4 + 16) = HIDWORD(v19);
      *(_QWORD *)(a4 + 24) = v20;
      *(_DWORD *)(a4 + 32) = DWORD2(v20);
      *(_QWORD *)(a4 + 40) = HIDWORD(v20);
      *(_QWORD *)(a4 + 48) = v21;
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
    if ( a2 < 0x38 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      RtlCopyFromUser((void *)a4, Src, 0x38uLL);
      if ( *(_DWORD *)a4 != 56 )
        UserModeCallersCopy = -1073741811;
      v6 = 0;
    }
  }
  if ( UserModeCallersCopy < 0 )
    goto LABEL_37;
  v9 = *(_QWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0LL;
  if ( v9 )
  {
    v10 = (_DWORD *)(a4 + 24);
    if ( *(_DWORD *)(a4 + 24) >= 2u )
    {
      if ( PreviousMode )
      {
        Pool2 = (void *)ExAllocatePool2(0x101uLL);
        *(_QWORD *)(a4 + 16) = Pool2;
        if ( Pool2 )
        {
          UserModeCallersCopy = PiControlCopyUserModeCallersBuffer(Pool2, PreviousMode, 1);
          if ( UserModeCallersCopy < 0 )
          {
            ExFreePoolWithTag(*(PVOID *)(a4 + 16), 0);
            *(_QWORD *)(a4 + 16) = 0LL;
          }
        }
        else
        {
          UserModeCallersCopy = -1073741670;
        }
      }
      else
      {
        *(_QWORD *)(a4 + 16) = v9;
        UserModeCallersCopy = 0;
      }
      if ( UserModeCallersCopy < 0 )
      {
        *(_QWORD *)(a4 + 16) = 0LL;
        *v10 = 0;
        v6 = 0;
      }
      else
      {
        v6 = 1;
        v16 = 1;
        *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)(unsigned int)*v10 >> 1) - 2) = 0;
      }
      goto LABEL_18;
    }
  }
  else
  {
    v10 = (_DWORD *)(a4 + 24);
  }
  if ( v9 )
  {
    if ( *v10 < 2u )
      goto LABEL_36;
  }
  else if ( *v10 )
  {
    goto LABEL_36;
  }
LABEL_18:
  v11 = *(_QWORD *)(a4 + 40);
  *(_QWORD *)(a4 + 40) = 0LL;
  if ( v11 )
  {
    v12 = (_DWORD *)(a4 + 48);
    v15 = *(_DWORD *)(a4 + 48);
    if ( v15 )
    {
      UserModeCallersCopy = PiControlMakeUserModeCallersCopy((int)a4 + 40, v11, v15, 1, PreviousMode, 1);
      v6 = v16;
      if ( UserModeCallersCopy < 0 )
      {
        *(_QWORD *)(a4 + 40) = 0LL;
        *v12 = 0;
      }
      else
      {
        v17 = 1;
      }
      goto LABEL_22;
    }
  }
  else
  {
    v12 = (_DWORD *)(a4 + 48);
  }
  if ( !v11 )
  {
    if ( !*v12 )
      goto LABEL_22;
    goto LABEL_36;
  }
  if ( *v12 )
  {
LABEL_22:
    if ( UserModeCallersCopy >= 0 )
      return (unsigned int)UserModeCallersCopy;
    goto LABEL_37;
  }
LABEL_36:
  UserModeCallersCopy = -1073741811;
LABEL_37:
  if ( v6 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 16));
  if ( v17 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 40));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_OWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}
