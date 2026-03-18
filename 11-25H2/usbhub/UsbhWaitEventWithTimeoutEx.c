/*
 * XREFs of UsbhWaitEventWithTimeoutEx @ 0x140028E50
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x1400275AC (Usbh_PCE_Suspend_Action.c)
 *     UsbhSshResumePort @ 0x140028064 (UsbhSshResumePort.c)
 *     Usbh_PCE_Disable_Action @ 0x1400283A0 (Usbh_PCE_Disable_Action.c)
 *     UsbhWaitForPortResume @ 0x140035AC8 (UsbhWaitForPortResume.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1400398C0 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhWaitForResetTimeout @ 0x14003A028 (UsbhWaitForResetTimeout.c)
 *     Usbh_PCE_Close_Action @ 0x14004509C (Usbh_PCE_Close_Action.c)
 *     UsbhNotifyPnpOfFailure_Action @ 0x140047D98 (UsbhNotifyPnpOfFailure_Action.c)
 *     UsbhSyncResetDeviceInternal @ 0x1400488F4 (UsbhSyncResetDeviceInternal.c)
 *     UsbhAsyncStop @ 0x14004F794 (UsbhAsyncStop.c)
 * Callees:
 *     UsbhPCE_wRun @ 0x140004C18 (UsbhPCE_wRun.c)
 *     UsbhIncHubBusy @ 0x140007B90 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhTrapFatalTimeout_x9f @ 0x14003E5D8 (UsbhTrapFatalTimeout_x9f.c)
 */

__int64 __fastcall UsbhWaitEventWithTimeoutEx(__int64 a1, void *a2, int a3, int a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  union _LARGE_INTEGER *Timeout; // rax
  NTSTATUS v18; // eax
  NTSTATUS v19; // r14d
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _KEVENT *v26; // r12
  __int64 Signalling; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // r8
  __int64 v31; // rdx
  _QWORD *v32; // rax
  _QWORD *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rdx
  volatile int Lock; // eax
  BOOLEAN v42; // r9
  union _LARGE_INTEGER v43; // [rsp+40h] [rbp-40h] BYREF
  union _LARGE_INTEGER v44; // [rsp+48h] [rbp-38h] BYREF
  PVOID P; // [rsp+50h] [rbp-30h]
  __int64 v46; // [rsp+58h] [rbp-28h]
  PVOID v47; // [rsp+60h] [rbp-20h] BYREF
  __int64 v48; // [rsp+68h] [rbp-18h]
  PVOID Object; // [rsp+70h] [rbp-10h] BYREF
  __int64 v50; // [rsp+78h] [rbp-8h]
  int v52; // [rsp+D0h] [rbp+50h]

  v6 = a3;
  v44.QuadPart = 0LL;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        HIBYTE(v52) = a4;
        LOBYTE(v52) = HIBYTE(a4);
        BYTE1(v52) = BYTE2(a4);
        BYTE2(v52) = BYTE1(a4);
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = v52;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = v6;
        *(_QWORD *)(v10 + 24) = a2;
      }
    }
  }
  v11 = 10000 * v6 + (int)(KeQueryTimeIncrement() - 1);
  v46 = v11;
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
  v43.QuadPart = -v11;
  v14 = MEMORY[0xFFFFF78000000008];
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
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
    v19 = KeWaitForSingleObject(a2, Executive, 0, 0, &v43);
    goto LABEL_53;
  }
  if ( a6 )
  {
    P = (PVOID)UsbhIncHubBusy(a1, a6 + 24, a6, 1465152371, 0);
    v48 = a6 + 496;
    v47 = a2;
    while ( 1 )
    {
      v21 = KeWaitForMultipleObjects(2u, &v47, WaitAny, Executive, 0, 0, &v43, 0LL);
      v19 = v21;
      if ( !v21 )
        break;
      if ( v21 == 1 )
      {
        v19 = KeWaitForSingleObject(a2, Executive, 0, 0, &v44);
        if ( !v19 )
          break;
        v43.QuadPart = MEMORY[0xFFFFF78000000008] - v11 - v14;
        v48 = a6 + 2464;
        v22 = KeWaitForMultipleObjects(2u, &v47, WaitAny, Executive, 0, 0, &v43, 0LL);
        v19 = v22;
        switch ( v22 )
        {
          case 0:
            goto LABEL_42;
          case 1:
            v23 = *(unsigned __int16 *)(a6 + 4);
            if ( (UsbhLogMask & 0x200) != 0 )
            {
              if ( a1 )
              {
                v24 = *(_QWORD *)(a1 + 64);
                if ( v24 )
                {
                  v25 = *(_QWORD *)(v24 + 888)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
                  *(_DWORD *)v25 = 1850889303;
                  *(_QWORD *)(v25 + 8) = 0LL;
                  *(_QWORD *)(v25 + 16) = a6;
                  *(_QWORD *)(v25 + 24) = v23;
                }
              }
            }
            *(_DWORD *)(a6 + 2844) = a5;
            UsbhPCE_wRun(a1, a6 + 24, a6);
            break;
          case 258:
            goto LABEL_42;
        }
        v48 = a6 + 496;
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
      v43.QuadPart = MEMORY[0xFFFFF78000000008] - v14 - v11;
    }
LABEL_42:
    v26 = (struct _KEVENT *)FdoExt(a1);
    v26[142].Header.Type = 1;
    KeWaitForSingleObject(&v26[139], Executive, 0, 0, 0LL);
    Signalling = v26[142].Header.Signalling;
    if ( (UsbhLogMask & 0x10000) != 0 )
    {
      if ( a1 )
      {
        v28 = *(_QWORD *)(a1 + 64);
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
          *(_DWORD *)v29 = 1667581000;
          *(_QWORD *)(v29 + 16) = P;
          *(_QWORD *)(v29 + 8) = 0LL;
          *(_QWORD *)(v29 + 24) = Signalling;
        }
      }
    }
    if ( v26[142].Header.Signalling )
    {
      v30 = P;
      if ( P == (PVOID)1936941672 )
      {
        Lock = v26[130].Header.Lock;
        if ( Lock )
          v26[130].Header.LockNV = Lock - 1;
      }
      else if ( P )
      {
        v31 = *((_QWORD *)P + 1);
        v32 = (char *)P + 8;
        if ( *(PVOID *)(v31 + 8) != (char *)P + 8 || (v33 = (_QWORD *)*((_QWORD *)P + 2), (_QWORD *)*v33 != v32) )
          __fastfail(3u);
        *v33 = v31;
        *(_QWORD *)(v31 + 8) = v33;
        v30[2] = v30 + 1;
        *v32 = v32;
        ExFreePoolWithTag(v30, 0);
      }
    }
    KeSetEvent(v26 + 139, 0, 0);
  }
  else
  {
LABEL_14:
    if ( a5 == 11 )
    {
      Object = a2;
LABEL_16:
      v50 = a6 + 496;
      do
      {
        Timeout = (_DWORD)v6 ? &v43 : 0LL;
        v18 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, Timeout, 0LL);
        v19 = v18;
        if ( !v18 )
          break;
        if ( v18 == 1 )
        {
          v19 = KeWaitForSingleObject(a2, Executive, 0, 0, &v44);
          if ( v19 )
          {
            v50 = a6 + 2464;
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
      Log(a1, 8, 2004112472, 0LL, 0LL);
      v19 = KeWaitForSingleObject(a2, Executive, 0, v42, 0LL);
    }
  }
LABEL_53:
  v34 = MEMORY[0xFFFFF78000000008];
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v35 = *(_QWORD *)(a1 + 64);
      if ( v35 )
      {
        v36 = *(_QWORD *)(v35 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
        *(_DWORD *)v36 = 844395639;
        *(_QWORD *)(v36 + 16) = (unsigned int)v34;
        *(_QWORD *)(v36 + 24) = SHIDWORD(v34);
        *(_QWORD *)(v36 + 8) = 0LL;
      }
    }
  }
  v37 = v34 - v14;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v38 = *(_QWORD *)(a1 + 64);
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
        *(_DWORD *)v39 = 2017809495;
        *(_QWORD *)(v39 + 16) = v19;
        *(_QWORD *)(v39 + 24) = (unsigned int)v37;
        *(_QWORD *)(v39 + 8) = 0LL;
      }
    }
  }
  if ( v19 == 258 )
  {
    if ( v37 < v11 )
    {
      Log(a1, 8, 1465135393, SHIDWORD(v37), (unsigned int)v37);
      Log(a1, 8, 1465135649, SHIDWORD(v46), (unsigned int)v11);
    }
    if ( a5 )
    {
      if ( a5 != 11 )
      {
        v19 = KeWaitForSingleObject(a2, Executive, 0, 0, &v44);
        if ( v19 )
          UsbhTrapFatalTimeout_x9f(a1, a5, a6);
      }
    }
  }
  return (unsigned int)v19;
}
