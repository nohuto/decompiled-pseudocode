/*
 * XREFs of PiCMCaptureCreateDeviceInputData @ 0x140B5E128
 * Callers:
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1409674D0 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiCMCaptureCreateDeviceInputData(void *Src, unsigned int a2, int a3, __int64 a4)
{
  int v6; // r11d
  char PreviousMode; // r9
  int UserModeCallersCopy; // edi
  _QWORD *v9; // r12
  void *v10; // rax
  _DWORD *v11; // r15
  unsigned int v12; // r8d
  _QWORD *v13; // r12
  void *v14; // rax
  _DWORD *v15; // r15
  unsigned int v16; // r8d
  char v17; // r14
  int v19; // [rsp+34h] [rbp-64h]
  int v20; // [rsp+3Ch] [rbp-5Ch]
  __int128 v22; // [rsp+50h] [rbp-48h] BYREF
  __int64 v23; // [rsp+60h] [rbp-38h]
  int v24; // [rsp+68h] [rbp-30h]
  char v25; // [rsp+A0h] [rbp+8h]

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  v6 = 0;
  v19 = 0;
  v20 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v25 = PreviousMode;
  UserModeCallersCopy = 0;
  if ( !Src || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    v17 = PreviousMode;
    goto LABEL_40;
  }
  if ( a3 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 >= 0x1C && (RtlCopyFromUser(&v22, Src, 0x1CuLL), PreviousMode = v25, v6 = 0, (_DWORD)v22 == 28) )
    {
      *(_DWORD *)a4 = 40;
      *(_DWORD *)(a4 + 4) = DWORD1(v22);
      *(_QWORD *)(a4 + 8) = DWORD2(v22);
      *(_DWORD *)(a4 + 16) = HIDWORD(v22);
      *(_QWORD *)(a4 + 24) = (unsigned int)v23;
      *(_DWORD *)(a4 + 32) = HIDWORD(v23);
      *(_DWORD *)(a4 + 36) = v24;
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
      PreviousMode = v25;
      v6 = 0;
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy < 0 )
    goto LABEL_39;
  v9 = (_QWORD *)(a4 + 8);
  v10 = *(void **)(a4 + 8);
  *(_QWORD *)(a4 + 8) = 0LL;
  if ( v10 )
  {
    v11 = (_DWORD *)(a4 + 16);
    v12 = *(_DWORD *)(a4 + 16);
    if ( v12 >= 2 )
    {
      UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 8), v10, v12, 2LL, PreviousMode, 1);
      if ( UserModeCallersCopy < 0 )
      {
        *v9 = 0LL;
        *v11 = 0;
        v6 = 0;
      }
      else
      {
        v6 = 1;
        v19 = 1;
        *(_WORD *)(*v9 + 2 * ((unsigned __int64)(unsigned int)*v11 >> 1) - 2) = 0;
      }
      goto LABEL_22;
    }
  }
  else
  {
    v11 = (_DWORD *)(a4 + 16);
  }
  if ( v10 )
  {
    if ( *v11 < 2u )
      goto LABEL_32;
  }
  else if ( *v11 )
  {
    goto LABEL_32;
  }
LABEL_22:
  v13 = (_QWORD *)(a4 + 24);
  v14 = *(void **)(a4 + 24);
  *(_QWORD *)(a4 + 24) = 0LL;
  if ( v14 )
  {
    v15 = (_DWORD *)(a4 + 32);
    v16 = *(_DWORD *)(a4 + 32);
    if ( v16 >= 2 )
    {
      v17 = v25;
      UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 24), v14, v16, 2LL, v25, 1);
      v6 = v19;
      if ( UserModeCallersCopy < 0 )
      {
        *v13 = 0LL;
        *v15 = 0;
      }
      else
      {
        v20 = 1;
        *(_WORD *)(*v13 + 2 * ((unsigned __int64)(unsigned int)*v15 >> 1) - 2) = 0;
      }
LABEL_40:
      if ( UserModeCallersCopy >= 0 )
        return (unsigned int)UserModeCallersCopy;
      goto LABEL_41;
    }
  }
  else
  {
    v15 = (_DWORD *)(a4 + 32);
  }
  if ( v14 )
  {
    if ( *v15 < 2u )
      goto LABEL_32;
LABEL_39:
    v17 = v25;
    goto LABEL_40;
  }
  if ( !*v15 )
    goto LABEL_39;
LABEL_32:
  UserModeCallersCopy = -1073741811;
  v17 = v25;
LABEL_41:
  if ( v6 )
    PiControlFreeUserModeCallersBuffer(v17, *(void **)(a4 + 8));
  if ( v20 )
    PiControlFreeUserModeCallersBuffer(v17, *(void **)(a4 + 24));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}
