/*
 * XREFs of PiCMGetObjectPropertyKeys @ 0x140AB5148
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     PiCMReturnBufferResultData @ 0x140959E10 (PiCMReturnBufferResultData.c)
 *     PiCMCaptureObjectInputData @ 0x140959F08 (PiCMCaptureObjectInputData.c)
 *     _PnpGetObjectPropertyKeys @ 0x140AB554C (_PnpGetObjectPropertyKeys.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetObjectPropertyKeys(void *a1, unsigned int a2, char *a3, unsigned int a4, int a5, _DWORD *a6)
{
  void *Pool2; // rdi
  int v10; // ebx
  int v11; // r15d
  int v12; // ebx
  unsigned int v13; // ecx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  int ObjectPropertyKeys; // eax
  int v17; // r10d
  int v18; // eax
  __int128 v20; // [rsp+50h] [rbp-30h] BYREF
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+70h] [rbp-10h]
  int v23; // [rsp+D8h] [rbp+58h]

  v23 = 0;
  *a6 = 0;
  v20 = 0LL;
  v22 = 0LL;
  Pool2 = 0LL;
  v21 = 0LL;
  v10 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v20);
  if ( v10 < 0 )
    goto LABEL_22;
  v11 = v21;
  if ( !(_QWORD)v21 || DWORD1(v20) || HIDWORD(v21) || !a3 || a4 < 0x14 )
    goto LABEL_18;
  v12 = 6;
  if ( SDWORD2(v20) > 6 )
  {
    switch ( DWORD2(v20) )
    {
      case 0x10001:
        v12 = 7;
        break;
      case 0x10002:
        v12 = 8;
        break;
      case 0x10003:
        v12 = 9;
        break;
      case 0x10004:
        v12 = 10;
        break;
      case 0x10005:
        v12 = 11;
        break;
      default:
        goto LABEL_18;
    }
    if ( PiDrvDbCtx )
      goto LABEL_11;
LABEL_18:
    v17 = -1073741811;
    goto LABEL_19;
  }
  if ( DWORD2(v20) != 6 )
  {
    switch ( DWORD2(v20) )
    {
      case 1:
        v12 = 1;
        goto LABEL_11;
      case 2:
        v12 = 2;
        goto LABEL_11;
      case 3:
        v12 = 4;
        goto LABEL_11;
      case 4:
        v12 = 3;
        goto LABEL_11;
      case 5:
        v12 = 5;
        goto LABEL_11;
    }
    goto LABEL_18;
  }
LABEL_11:
  v13 = 0;
  if ( a4 - 20 >= 0x14 )
    v13 = a4 - 20;
  if ( v13 )
  {
    v14 = v13;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      v17 = -1073741670;
      goto LABEL_19;
    }
    v15 = v14 / 0x14;
  }
  else
  {
    LODWORD(v15) = 0;
  }
  v23 = v15;
  ObjectPropertyKeys = PnpGetObjectPropertyKeys(PiPnpRtlCtx, v11, v12, 0);
  v17 = ObjectPropertyKeys;
  if ( ObjectPropertyKeys >= 0 )
  {
    v18 = PiCMReturnBufferResultData(ObjectPropertyKeys, 20 * v23, 0, Pool2, 20 * v23, v22, a3, a4, a6);
    goto LABEL_20;
  }
LABEL_19:
  v18 = PiCMReturnBufferResultData(v17, 20 * v23, 0, 0LL, 0, v22, a3, a4, a6);
LABEL_20:
  v10 = v18;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_22:
  if ( (_QWORD)v21 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)v21);
  return (unsigned int)v10;
}
