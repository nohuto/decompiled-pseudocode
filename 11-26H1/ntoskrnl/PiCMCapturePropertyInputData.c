/*
 * XREFs of PiCMCapturePropertyInputData @ 0x14095A1C0
 * Callers:
 *     PiCMSetObjectProperty @ 0x14094E4C8 (PiCMSetObjectProperty.c)
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1409674D0 (PiControlMakeUserModeCallersCopy.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1409675B8 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMCapturePropertyInputData(void *Src, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r10d
  char PreviousMode; // r12
  int UserModeCallersCopy; // edi
  __int64 v8; // r15
  __int64 v9; // rax
  void *Pool2; // rax
  int v12; // r8d
  int v13; // [rsp+34h] [rbp-94h]
  int v14; // [rsp+3Ch] [rbp-8Ch]
  _OWORD v15[3]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v16; // [rsp+90h] [rbp-38h]

  memset(v15, 0, sizeof(v15));
  v16 = 0LL;
  v5 = 0;
  v13 = 0;
  v14 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !Src || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_20;
  }
  if ( a3 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 >= 0x38 && (RtlCopyFromUser(v15, Src, 0x38uLL), v5 = 0, LODWORD(v15[0]) == 56) )
    {
      *(_DWORD *)a4 = 72;
      *(_QWORD *)(a4 + 4) = *(_QWORD *)((char *)v15 + 4);
      *(_QWORD *)(a4 + 16) = HIDWORD(v15[0]);
      *(_DWORD *)(a4 + 24) = v15[1];
      *(_OWORD *)(a4 + 28) = *(_OWORD *)((char *)&v15[1] + 4);
      *(_QWORD *)(a4 + 44) = *(_QWORD *)((char *)&v15[2] + 4);
      *(_QWORD *)(a4 + 56) = HIDWORD(v15[2]);
      *(_QWORD *)(a4 + 64) = v16;
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
    if ( a2 < 0x48 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      RtlCopyFromUser((void *)a4, Src, 0x48uLL);
      if ( *(_DWORD *)a4 != 72 )
        UserModeCallersCopy = -1073741811;
      v5 = 0;
    }
  }
  if ( UserModeCallersCopy < 0 )
    goto LABEL_34;
  v8 = *(_QWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0LL;
  if ( v8 )
  {
    if ( *(_DWORD *)(a4 + 24) < 2u )
      goto LABEL_33;
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
      *(_QWORD *)(a4 + 16) = v8;
      UserModeCallersCopy = 0;
    }
    if ( UserModeCallersCopy < 0 )
    {
      *(_QWORD *)(a4 + 16) = 0LL;
      *(_DWORD *)(a4 + 24) = 0;
      v5 = 0;
    }
    else
    {
      v5 = 1;
      v13 = 1;
      *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 24) >> 1) - 2) = 0;
    }
  }
  else if ( *(_DWORD *)(a4 + 24) )
  {
    goto LABEL_33;
  }
  v9 = *(_QWORD *)(a4 + 56);
  *(_QWORD *)(a4 + 56) = 0LL;
  if ( !v9 )
  {
    if ( !*(_DWORD *)(a4 + 64) )
      goto LABEL_20;
    goto LABEL_33;
  }
  v12 = *(_DWORD *)(a4 + 64);
  if ( v12 )
  {
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy((int)a4 + 56, v9, v12, 1, PreviousMode, 1);
    v5 = v13;
    if ( UserModeCallersCopy < 0 )
    {
      *(_QWORD *)(a4 + 56) = 0LL;
      *(_DWORD *)(a4 + 64) = 0;
    }
    else
    {
      v14 = 1;
    }
LABEL_20:
    if ( UserModeCallersCopy >= 0 )
      return (unsigned int)UserModeCallersCopy;
    goto LABEL_34;
  }
LABEL_33:
  UserModeCallersCopy = -1073741811;
LABEL_34:
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 16));
  if ( v14 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 56));
  memset_0((void *)a4, 0, 0x48uLL);
  return (unsigned int)UserModeCallersCopy;
}
