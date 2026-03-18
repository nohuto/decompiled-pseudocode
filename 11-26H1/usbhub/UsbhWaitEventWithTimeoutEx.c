/*
 * XREFs of UsbhWaitEventWithTimeoutEx @ 0x140005F40
 * Callers:
 *     UsbhSshResumePort @ 0x1400046E8 (UsbhSshResumePort.c)
 *     Usbh_PCE_Suspend_Action @ 0x140004A34 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x140005470 (Usbh_PCE_Disable_Action.c)
 *     UsbhWaitForPortResume @ 0x140011070 (UsbhWaitForPortResume.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x140038F0C (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhWaitForResetTimeout @ 0x140039A50 (UsbhWaitForResetTimeout.c)
 *     Usbh_PCE_Close_Action @ 0x140044BD0 (Usbh_PCE_Close_Action.c)
 *     UsbhNotifyPnpOfFailure_Action @ 0x1400478E8 (UsbhNotifyPnpOfFailure_Action.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 *     UsbhAsyncStop @ 0x14004FC58 (UsbhAsyncStop.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 *     UsbhPCE_wRun @ 0x14001DD9C (UsbhPCE_wRun.c)
 *     UsbhTrapFatalTimeout_x9f @ 0x14003E084 (UsbhTrapFatalTimeout_x9f.c)
 */

__int64 __fastcall UsbhWaitEventWithTimeoutEx(__int64 a1, void *a2, int a3, int a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  union _LARGE_INTEGER *Timeout; // rax
  NTSTATUS v18; // eax
  NTSTATUS v19; // r15d
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  NTSTATUS v23; // eax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r8
  BOOLEAN v34; // r9
  union _LARGE_INTEGER v35; // [rsp+40h] [rbp-30h] BYREF
  union _LARGE_INTEGER v36; // [rsp+48h] [rbp-28h] BYREF
  __int64 v37; // [rsp+50h] [rbp-20h]
  __int64 v38; // [rsp+58h] [rbp-18h]
  PVOID Object; // [rsp+60h] [rbp-10h] BYREF
  __int64 v40; // [rsp+68h] [rbp-8h]
  int v42; // [rsp+C0h] [rbp+50h]

  v6 = a3;
  v36.QuadPart = 0LL;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        HIBYTE(v42) = a4;
        LOBYTE(v42) = HIBYTE(a4);
        BYTE1(v42) = BYTE2(a4);
        BYTE2(v42) = BYTE1(a4);
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = v42;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = v6;
        *(_QWORD *)(v10 + 24) = a2;
      }
    }
  }
  v11 = 10000 * v6 + (int)(KeQueryTimeIncrement() - 1);
  v38 = v11;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 826627159;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_QWORD *)(v13 + 24) = v6;
      }
    }
  }
  v35.QuadPart = -v11;
  v14 = MEMORY[0xFFFFF78000000008];
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884))
            + *(_QWORD *)(v15 + 888);
        *(_DWORD *)v16 = 827618423;
        *(_QWORD *)(v16 + 16) = (unsigned int)v14;
        *(_QWORD *)(v16 + 24) = SHIDWORD(v14);
        *(_QWORD *)(v16 + 8) = 0LL;
      }
    }
  }
  if ( !(_DWORD)v6 )
    goto LABEL_14;
  if ( !a5 )
  {
    v19 = KeWaitForSingleObject(a2, Executive, 0, 0, &v35);
    goto LABEL_43;
  }
  if ( a6 )
  {
    v37 = UsbhIncHubBusy(a1, (int)a6 + 24, a6, 1465152371, 0);
    v40 = a6 + 496;
    Object = a2;
    while ( 1 )
    {
      v21 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &v35, 0LL);
      v19 = v21;
      if ( !v21 )
        break;
      if ( v21 == 1 )
      {
        v19 = KeWaitForSingleObject(a2, Executive, 0, 0, &v36);
        if ( !v19 )
          break;
        v35.QuadPart = MEMORY[0xFFFFF78000000008] - v11 - v14;
        v40 = a6 + 2464;
        v23 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &v35, 0LL);
        v19 = v23;
        switch ( v23 )
        {
          case 0:
            goto LABEL_42;
          case 1:
            v24 = *(unsigned __int16 *)(a6 + 4);
            if ( (UsbhLogMask & 0x200) != 0 )
            {
              if ( a1 )
              {
                v25 = *(_QWORD *)(a1 + 64);
                if ( v25 )
                {
                  v26 = *(_QWORD *)(v25 + 888)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
                  *(_DWORD *)v26 = 1850889303;
                  *(_QWORD *)(v26 + 8) = 0LL;
                  *(_QWORD *)(v26 + 16) = a6;
                  *(_QWORD *)(v26 + 24) = v24;
                }
              }
            }
            *(_DWORD *)(a6 + 2844) = a5;
            UsbhPCE_wRun(a1, a6 + 24, a6);
            break;
          case 258:
            goto LABEL_42;
        }
        v40 = a6 + 496;
      }
      else if ( v21 == 258 )
      {
        break;
      }
      if ( MEMORY[0xFFFFF78000000008] - v14 >= v11 )
      {
        v19 = 258;
        break;
      }
      v35.QuadPart = MEMORY[0xFFFFF78000000008] - v14 - v11;
    }
LABEL_42:
    UsbhDecHubBusy(a1, v22, v37);
  }
  else
  {
LABEL_14:
    if ( a5 == 11 )
    {
      Object = a2;
LABEL_16:
      v40 = a6 + 496;
      do
      {
        Timeout = (_DWORD)v6 ? &v35 : 0LL;
        v18 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, Timeout, 0LL);
        v19 = v18;
        if ( !v18 )
          break;
        if ( v18 == 1 )
        {
          v19 = KeWaitForSingleObject(a2, Executive, 0, 0, &v36);
          if ( v19 )
          {
            v40 = a6 + 2464;
            v20 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
            v19 = v20;
            if ( v20 )
            {
              if ( v20 == 1 )
              {
                Log(a1, 512, 1465143918, a6, *(unsigned __int16 *)(a6 + 4));
                UsbhPCE_wRun(a1, a6 + 24, a6);
              }
              goto LABEL_16;
            }
          }
          break;
        }
      }
      while ( v18 != 258 );
    }
    else
    {
      Log(a1, 8, 2004112472, 0, 0LL);
      v19 = KeWaitForSingleObject(a2, Executive, 0, v34, 0LL);
    }
  }
LABEL_43:
  v27 = MEMORY[0xFFFFF78000000008];
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v28 = *(_QWORD *)(a1 + 64);
      if ( v28 )
      {
        v29 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884))
            + *(_QWORD *)(v28 + 888);
        *(_DWORD *)v29 = 844395639;
        *(_QWORD *)(v29 + 16) = (unsigned int)v27;
        *(_QWORD *)(v29 + 24) = SHIDWORD(v27);
        *(_QWORD *)(v29 + 8) = 0LL;
      }
    }
  }
  v30 = v27 - v14;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v31 = *(_QWORD *)(a1 + 64);
      if ( v31 )
      {
        v32 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884))
            + *(_QWORD *)(v31 + 888);
        *(_DWORD *)v32 = 2017809495;
        *(_QWORD *)(v32 + 16) = v19;
        *(_QWORD *)(v32 + 24) = (unsigned int)v30;
        *(_QWORD *)(v32 + 8) = 0LL;
      }
    }
  }
  if ( v19 == 258 )
  {
    if ( v30 < v11 )
    {
      Log(a1, 8, 1465135393, HIDWORD(v30), (unsigned int)v30);
      Log(a1, 8, 1465135649, HIDWORD(v38), (unsigned int)v11);
    }
    if ( a5 )
    {
      if ( a5 != 11 )
      {
        v19 = KeWaitForSingleObject(a2, Executive, 0, 0, &v36);
        if ( v19 )
          UsbhTrapFatalTimeout_x9f(a1, a5, a6);
      }
    }
  }
  return (unsigned int)v19;
}
