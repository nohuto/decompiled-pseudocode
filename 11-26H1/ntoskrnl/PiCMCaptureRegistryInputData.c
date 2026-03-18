/*
 * XREFs of PiCMCaptureRegistryInputData @ 0x1409FFECC
 * Callers:
 *     PiCMOpenClassKey @ 0x140916DFC (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1409FF7B4 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1409FFA20 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140ABE0C4 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140474950 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1409A6B58 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMCaptureRegistryInputData(void *Src, unsigned int a2, int a3, __int64 a4)
{
  int v5; // r9d
  char PreviousMode; // r13
  int v7; // ebx
  void *v8; // r15
  _DWORD *v9; // r14
  unsigned int v10; // r12d
  void *Pool2; // rax
  __int128 v14; // [rsp+40h] [rbp-58h] BYREF
  __int128 v15; // [rsp+50h] [rbp-48h]
  int v16; // [rsp+60h] [rbp-38h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
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
    if ( a2 >= 0x24 && (RtlCopyFromUser(&v14, Src, 0x24uLL), v5 = 0, (_DWORD)v14 == 36) )
    {
      *(_DWORD *)a4 = 48;
      *(_QWORD *)(a4 + 4) = *(_QWORD *)((char *)&v14 + 4);
      *(_QWORD *)(a4 + 16) = HIDWORD(v14);
      *(_OWORD *)(a4 + 24) = v15;
      *(_DWORD *)(a4 + 40) = v16;
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
    v8 = *(void **)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    if ( v8 )
    {
      v9 = (_DWORD *)(a4 + 24);
      v10 = *(_DWORD *)(a4 + 24);
      if ( v10 >= 2 )
      {
        if ( PreviousMode )
        {
          Pool2 = (void *)ExAllocatePool2(0x101uLL);
          *(_QWORD *)(a4 + 16) = Pool2;
          if ( Pool2 )
          {
            v7 = PiControlCopyUserModeCallersBuffer(Pool2, v8, v10, 2, PreviousMode, 1);
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
