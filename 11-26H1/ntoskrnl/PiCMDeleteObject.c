/*
 * XREFs of PiCMDeleteObject @ 0x140B6D64C
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     _PnpDeleteObject @ 0x14089E810 (_PnpDeleteObject.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     PiCMCaptureObjectInputData @ 0x140959F08 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x14095AF34 (PiCMReturnBasicResultData.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 */

__int64 __fastcall PiCMDeleteObject(void *a1, unsigned int a2, void *a3, unsigned int a4, int a5, _DWORD *a6)
{
  _DWORD *v6; // r12
  char *v9; // rdi
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rsi
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp-10h]

  v6 = a6;
  v18 = 0LL;
  v9 = 0LL;
  *a6 = 0;
  v16 = 0LL;
  a6 = 0LL;
  v17 = 0LL;
  v10 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v16);
  if ( v10 >= 0 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      v11 = -1073741790;
LABEL_33:
      v10 = PiCMReturnBasicResultData(v11, v18, a3, a4, v6);
      goto LABEL_34;
    }
    v12 = v17;
    if ( !(_QWORD)v17 )
      goto LABEL_32;
    if ( DWORD1(v16) )
      goto LABEL_32;
    if ( HIDWORD(v17) )
      goto LABEL_32;
    if ( !a3 )
      goto LABEL_32;
    v13 = 8;
    if ( a4 < 8 )
      goto LABEL_32;
    if ( SDWORD2(v16) > 6 )
    {
      if ( DWORD2(v16) == 65537 )
      {
        v13 = 7;
      }
      else if ( DWORD2(v16) != 65538 )
      {
        switch ( DWORD2(v16) )
        {
          case 0x10003:
            v13 = 9;
            break;
          case 0x10004:
            v13 = 10;
            break;
          case 0x10005:
            v13 = 11;
            break;
          default:
            goto LABEL_32;
        }
      }
      if ( !PiDrvDbCtx )
        goto LABEL_32;
      if ( v13 - 5 < 2 )
        goto LABEL_15;
    }
    else
    {
      switch ( DWORD2(v16) )
      {
        case 6:
        case 1:
          goto LABEL_15;
        case 2:
          v13 = 2;
          break;
        case 3:
          v13 = 4;
          break;
        default:
          if ( (unsigned int)(DWORD2(v16) - 4) <= 1 )
          {
LABEL_15:
            v11 = -1073741637;
            goto LABEL_33;
          }
LABEL_32:
          v11 = -1073741811;
          goto LABEL_33;
      }
    }
    v11 = PiPnpRtlBeginOperation(&a6);
    if ( v11 >= 0 )
      v11 = PnpDeleteObject(v14, v12, v13);
    v9 = (char *)a6;
    goto LABEL_33;
  }
LABEL_34:
  if ( (_QWORD)v17 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)v17);
  if ( v9 )
    PiPnpRtlEndOperation(v9);
  return (unsigned int)v10;
}
