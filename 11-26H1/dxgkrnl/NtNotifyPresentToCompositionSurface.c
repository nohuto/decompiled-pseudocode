/*
 * XREFs of NtNotifyPresentToCompositionSurface @ 0x14002FF30
 * Callers:
 *     ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1403CBDB4 (-QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORY.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall NtNotifyPresentToCompositionSurface(HANDLE Handle, char *Src)
{
  NTSTATUS v4; // edi
  void (__fastcall ***v5)(_QWORD); // rsi
  PVOID v6; // r12
  _OWORD *v7; // rax
  _OWORD *v8; // rcx
  __int64 v9; // rdx
  struct DXGSESSIONDATA *SessionData; // rax
  void (__fastcall ***v11)(_QWORD); // r15
  _QWORD *v12; // r14
  _QWORD *v13; // r15
  _QWORD *v15; // r13
  _QWORD *i; // rcx
  _BYTE *v17; // r15
  int v18; // edi
  _QWORD *v19; // r15
  HANDLE CurrentThreadId; // rax
  _QWORD *v21; // rcx
  __int64 v22; // r15
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  _OWORD *v26; // rax
  _OWORD *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // [rsp+60h] [rbp-8B8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-8B0h] BYREF
  NTSTATUS v31; // [rsp+70h] [rbp-8A8h]
  PVOID v32; // [rsp+78h] [rbp-8A0h]
  HANDLE v33; // [rsp+90h] [rbp-888h]
  _BYTE v34[1064]; // [rsp+98h] [rbp-880h] BYREF
  _QWORD v35[132]; // [rsp+4C0h] [rbp-458h] BYREF

  v33 = Handle;
  v4 = 0;
  v5 = 0LL;
  memset(v35, 0, sizeof(v35));
  v6 = 0LL;
  v32 = 0LL;
  if ( Src )
  {
    if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
    {
      LODWORD(v29) = 0;
      RtlCopyFromUser(&v29, Src, 4uLL);
      if ( (_DWORD)v29 != 2 )
        v4 = -1073741811;
      v31 = v4;
      memset(v34, 0, 0x420uLL);
      RtlCopyFromUser(v34, Src + 16, 0x420uLL);
      v7 = v35;
      v8 = v34;
      v9 = 8LL;
      do
      {
        *v7 = *v8;
        v7[1] = v8[1];
        v7[2] = v8[2];
        v7[3] = v8[3];
        v7[4] = v8[4];
        v7[5] = v8[5];
        v7[6] = v8[6];
        v7 += 8;
        *(v7 - 1) = v8[7];
        v8 += 8;
        --v9;
      }
      while ( v9 );
      *v7 = *v8;
      v7[1] = v8[1];
      Object = 0LL;
      RtlCopyFromUser(&Object, Src + 8, 8uLL);
      v6 = Object;
      v32 = Object;
    }
    else
    {
      v26 = Src + 16;
      v27 = v35;
      v28 = 8LL;
      do
      {
        *v27 = *v26;
        v27[1] = v26[1];
        v27[2] = v26[2];
        v27[3] = v26[3];
        v27[4] = v26[4];
        v27[5] = v26[5];
        v27[6] = v26[6];
        v27 += 8;
        *(v27 - 1) = v26[7];
        v26 += 8;
        --v28;
      }
      while ( v28 );
      *v27 = *v26;
      v27[1] = v26[1];
      v6 = (PVOID)*((_QWORD *)Src + 1);
      v4 = -1073741811;
      if ( *(_DWORD *)Src == 2 )
        v4 = 0;
    }
  }
  KeEnterCriticalRegion();
  if ( v4 >= 0 )
  {
    v4 = -1073741823;
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2650;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v24,
            v23,
            v25,
            0LL,
            2,
            -1,
            (__int64)L"m_pGlobal != NULL",
            2650LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    SessionData = DXGGLOBAL::GetSessionData(*(DXGGLOBAL **)&DXGGLOBAL::m_pGlobal);
    if ( SessionData )
    {
      v11 = (void (__fastcall ***)(_QWORD))*((_QWORD *)SessionData + 2344);
      if ( v11 )
      {
        (**v11)(v11);
        v5 = v11;
        v4 = 0;
      }
    }
    if ( v4 >= 0 )
    {
      v12 = 0LL;
      Object = 0LL;
      v4 = ObReferenceObjectByHandle(Handle, 2u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
      if ( v4 >= 0 )
      {
        v13 = Object;
        if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 1 )
        {
          v12 = v13;
        }
        else
        {
          ObfDereferenceObject(v13);
          v4 = -1073741788;
        }
      }
      if ( v4 >= 0 )
      {
        v15 = 0LL;
        v4 = ObReferenceObjectByPointer(v12, 3u, g_pDxgkCompositionObjectType, 0);
        if ( v4 >= 0 )
        {
          v15 = v12 + 5;
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v12 + 6, 0LL);
          v12[7] = PsGetCurrentThreadId();
          v4 = 0;
        }
        if ( v4 >= 0 )
        {
          v29 = 0LL;
          if ( *((_DWORD *)v15 + 30) )
          {
            for ( i = (_QWORD *)v15[13]; i != v15 + 13; i = (_QWORD *)*i )
            {
              v17 = i - 3;
              if ( (PVOID)*(i - 1) == v6 )
              {
                v18 = (*(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)v17 + 8LL))(i - 3);
                v29 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v17 + 32LL))(v17);
                if ( v18 == 2 && v17[40] )
                {
                  v4 = 0;
                  v19 = 0LL;
                  if ( *((_DWORD *)v15 + 30) && *(_BYTE *)(v15[13] - 24LL + 40) )
                    v19 = (_QWORD *)(v15[13] - 24LL);
                  if ( v19 && (PVOID)v19[2] == v6 && (*(unsigned int (__fastcall **)(_QWORD *))(*v19 + 8LL))(v19) == 2 )
                  {
                    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v19 + 64LL))(v19, v35);
                    goto LABEL_37;
                  }
                }
                break;
              }
            }
          }
          v4 = -1073741811;
LABEL_37:
          CurrentThreadId = PsGetCurrentThreadId();
          v21 = v15 + 1;
          if ( CurrentThreadId == (HANDLE)v15[2] )
          {
            v15[2] = 0LL;
            ExReleasePushLockExclusiveEx(v21, 0LL);
          }
          else
          {
            ExReleasePushLockSharedEx(v21, 0LL);
          }
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v15 - 5);
          v22 = v29;
          if ( v4 >= 0 )
          {
            if ( ((unsigned int (__fastcall *)(_QWORD))(*v5)[19])(v5) )
            {
              v4 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD), _QWORD *))(*v5)[14])(v5, v12);
            }
            else
            {
              v4 = -1071775730;
              if ( v22 )
                v4 = -1071775733;
            }
          }
        }
        ObfDereferenceObject(v12);
      }
    }
  }
  if ( v5 )
    (*v5)[1](v5);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
