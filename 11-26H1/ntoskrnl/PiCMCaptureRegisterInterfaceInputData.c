/*
 * XREFs of PiCMCaptureRegisterInterfaceInputData @ 0x14094D350
 * Callers:
 *     PiCMRegisterDeviceInterface @ 0x14094D1B4 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1409674D0 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiCMCaptureRegisterInterfaceInputData(void *Src, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r10d
  char PreviousMode; // r13
  int UserModeCallersCopy; // esi
  _QWORD *v8; // r15
  __int64 v9; // rax
  unsigned int v10; // r8d
  _QWORD *v11; // r15
  __int64 v12; // rax
  unsigned int v13; // r8d
  int v15; // [rsp+34h] [rbp-84h]
  int v16; // [rsp+3Ch] [rbp-7Ch]
  _OWORD v17[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v18; // [rsp+70h] [rbp-48h]
  int v19; // [rsp+78h] [rbp-40h]

  memset(v17, 0, sizeof(v17));
  v18 = 0LL;
  v19 = 0;
  v5 = 0;
  v15 = 0;
  v16 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !Src || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_39;
  }
  if ( a3 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 >= 0x2C && (RtlCopyFromUser(v17, Src, 0x2CuLL), v5 = 0, LODWORD(v17[0]) == 44) )
    {
      *(_DWORD *)a4 = 56;
      *(_DWORD *)(a4 + 4) = DWORD1(v17[0]);
      *(_OWORD *)(a4 + 8) = *(_OWORD *)((char *)v17 + 8);
      *(_QWORD *)(a4 + 24) = DWORD2(v17[1]);
      *(_DWORD *)(a4 + 32) = HIDWORD(v17[1]);
      *(_QWORD *)(a4 + 40) = (unsigned int)v18;
      *(_DWORD *)(a4 + 48) = HIDWORD(v18);
      *(_DWORD *)(a4 + 52) = v19;
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
    if ( a2 >= 0x38 )
    {
      RtlCopyFromUser((void *)a4, Src, 0x38uLL);
      if ( *(_DWORD *)a4 != 56 )
        UserModeCallersCopy = -1073741811;
      v5 = 0;
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy >= 0 )
  {
    v8 = (_QWORD *)(a4 + 24);
    v9 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)(a4 + 24) = 0LL;
    if ( v9 )
    {
      v10 = *(_DWORD *)(a4 + 32);
      if ( v10 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((int)a4 + 24, v9, v10, 2, PreviousMode, 1);
        if ( UserModeCallersCopy < 0 )
        {
          *v8 = 0LL;
          *(_DWORD *)(a4 + 32) = 0;
          v5 = 0;
        }
        else
        {
          v5 = 1;
          v15 = 1;
          *(_WORD *)(*v8 + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 32) >> 1) - 2) = 0;
        }
LABEL_22:
        v11 = (_QWORD *)(a4 + 40);
        v12 = *(_QWORD *)(a4 + 40);
        *(_QWORD *)(a4 + 40) = 0LL;
        if ( v12 )
        {
          v13 = *(_DWORD *)(a4 + 48);
          if ( v13 >= 2 )
          {
            UserModeCallersCopy = PiControlMakeUserModeCallersCopy((int)a4 + 40, v12, v13, 2, PreviousMode, 1);
            v5 = v15;
            if ( UserModeCallersCopy < 0 )
            {
              *v11 = 0LL;
              *(_DWORD *)(a4 + 48) = 0;
            }
            else
            {
              v16 = 1;
              *(_WORD *)(*v11 + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 48) >> 1) - 2) = 0;
            }
LABEL_39:
            if ( UserModeCallersCopy >= 0 )
              return (unsigned int)UserModeCallersCopy;
            goto LABEL_40;
          }
          if ( *(_DWORD *)(a4 + 48) >= 2u )
            goto LABEL_39;
        }
        else if ( !*(_DWORD *)(a4 + 48) )
        {
          goto LABEL_39;
        }
        goto LABEL_31;
      }
      if ( *(_DWORD *)(a4 + 32) >= 2u )
        goto LABEL_22;
    }
    else if ( !*(_DWORD *)(a4 + 32) )
    {
      goto LABEL_22;
    }
LABEL_31:
    UserModeCallersCopy = -1073741811;
  }
LABEL_40:
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 24));
  if ( v16 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 40));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_OWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}
