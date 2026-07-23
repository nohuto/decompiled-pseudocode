/*
 * XREFs of PiCMCaptureObjectInputData @ 0x140959F08
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x140776764 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x14077686C (PiCMCreateObject.c)
 *     PiCMDeleteDevice @ 0x140776A24 (PiCMDeleteDevice.c)
 *     PiCMGetDeviceDepth @ 0x14094D0A0 (PiCMGetDeviceDepth.c)
 *     PiCMDeviceAction @ 0x14094D6E4 (PiCMDeviceAction.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1409596C0 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMGetObjectList @ 0x14095A808 (PiCMGetObjectList.c)
 *     PiCMValidateDeviceInstance @ 0x14095AA88 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x140A9FA54 (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectPropertyKeys @ 0x140AB5148 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140B2F2FC (PiCMQueryRemove.c)
 *     PiCMDeleteDeviceKey @ 0x140B69C68 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140B6D64C (PiCMDeleteObject.c)
 *     PiCMUnregisterDeviceInterface @ 0x140B6E20C (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140B6E3E4 (PiCMDeleteClassKey.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1409675B8 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMCaptureObjectInputData(void *Src, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r9d
  char PreviousMode; // r12
  int v7; // ebx
  __int64 v8; // r15
  _DWORD *v9; // r14
  void *Pool2; // rax
  __int128 v13; // [rsp+40h] [rbp-48h] BYREF
  __int64 v14; // [rsp+50h] [rbp-38h]
  int v15; // [rsp+58h] [rbp-30h]

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
    if ( a2 >= 0x1C && (RtlCopyFromUser(&v13, Src, 0x1CuLL), v5 = 0, (_DWORD)v13 == 28) )
    {
      *(_DWORD *)a4 = 40;
      *(_QWORD *)(a4 + 4) = *(_QWORD *)((char *)&v13 + 4);
      *(_QWORD *)(a4 + 16) = HIDWORD(v13);
      *(_QWORD *)(a4 + 24) = v14;
      *(_DWORD *)(a4 + 32) = v15;
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
    if ( a2 < 0x28 )
    {
      v7 = -1073741811;
    }
    else
    {
      RtlCopyFromUser((void *)a4, Src, 0x28uLL);
      if ( *(_DWORD *)a4 != 40 )
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
        goto LABEL_35;
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
LABEL_35:
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 16));
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  return (unsigned int)v7;
}
