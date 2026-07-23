/*
 * XREFs of PiCMCaptureRegistryInputData @ 0x14091CC68
 * Callers:
 *     PiCMOpenDeviceInterfaceKey @ 0x14091B4B8 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMOpenDeviceKey @ 0x14091C550 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x14091C7BC (PiCMOpenObjectKey.c)
 *     PiCMOpenClassKey @ 0x140971868 (PiCMOpenClassKey.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1409675B8 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMCaptureRegistryInputData(void *Src, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r9d
  char PreviousMode; // r13
  int v7; // ebx
  __int64 v8; // r15
  _DWORD *v9; // r14
  void *Pool2; // rax
  __int128 v13; // [rsp+40h] [rbp-58h] BYREF
  __int128 v14; // [rsp+50h] [rbp-48h]
  int v15; // [rsp+60h] [rbp-38h]

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v5 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = 0;
  if ( !Src || !a2 )
  {
    v7 = -1073741811;
    goto LABEL_18;
  }
  if ( a3 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 >= 0x24 && (RtlCopyFromUser(&v13, Src, 0x24uLL), v5 = 0, (_DWORD)v13 == 36) )
    {
      *(_DWORD *)a4 = 48;
      *(_QWORD *)(a4 + 4) = *(_QWORD *)((char *)&v13 + 4);
      *(_QWORD *)(a4 + 16) = HIDWORD(v13);
      *(_OWORD *)(a4 + 24) = v14;
      *(_DWORD *)(a4 + 40) = v15;
    }
    else
    {
      v7 = -1073741811;
    }
  }
  else
  {
    if ( ((unsigned __int8)Src & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 < 0x30 )
    {
      v7 = -1073741811;
    }
    else
    {
      RtlCopyFromUser((void *)a4, Src, 0x30uLL);
      if ( *(_DWORD *)a4 != 48 )
        v7 = -1073741811;
      v5 = 0;
    }
  }
  if ( v7 >= 0 )
  {
    v8 = *(_QWORD *)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    if ( v8 )
    {
      v9 = (_DWORD *)(a4 + 24);
      if ( *(_DWORD *)(a4 + 24) >= 2u )
      {
        if ( PreviousMode )
        {
          Pool2 = (void *)ExAllocatePool2(0x101uLL);
          *(_QWORD *)(a4 + 16) = Pool2;
          if ( Pool2 )
          {
            v7 = PiControlCopyUserModeCallersBuffer(Pool2, PreviousMode, 1);
            if ( v7 < 0 )
            {
              ExFreePoolWithTag(*(PVOID *)(a4 + 16), 0);
              *(_QWORD *)(a4 + 16) = 0LL;
            }
          }
          else
          {
            v7 = -1073741670;
          }
        }
        else
        {
          *(_QWORD *)(a4 + 16) = v8;
          v7 = 0;
        }
        if ( v7 < 0 )
        {
          *(_QWORD *)(a4 + 16) = 0LL;
          *v9 = 0;
          v5 = 0;
        }
        else
        {
          v5 = 1;
          *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)(unsigned int)*v9 >> 1) - 2) = 0;
        }
LABEL_18:
        if ( v7 >= 0 )
          return (unsigned int)v7;
        goto LABEL_38;
      }
    }
    else
    {
      v9 = (_DWORD *)(a4 + 24);
    }
    if ( v8 )
    {
      if ( *v9 >= 2u )
        goto LABEL_18;
    }
    else if ( !*v9 )
    {
      goto LABEL_18;
    }
    v7 = -1073741811;
  }
LABEL_38:
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 16));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_OWORD *)(a4 + 32) = 0LL;
  return (unsigned int)v7;
}
