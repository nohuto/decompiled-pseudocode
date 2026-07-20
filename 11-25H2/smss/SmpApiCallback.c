/*
 * XREFs of SmpApiCallback @ 0x140005960
 * Callers:
 *     <none>
 * Callees:
 *     SmpReleaseControlBlock @ 0x140005FF0 (SmpReleaseControlBlock.c)
 *     SmpHandleConnectionRequest @ 0x1400061A0 (SmpHandleConnectionRequest.c)
 *     SmpDereferenceKnownSubSys @ 0x140006A10 (SmpDereferenceKnownSubSys.c)
 *     SmpEstablishClientSecurity @ 0x140018A80 (SmpEstablishClientSecurity.c)
 *     SmpNotImplemented @ 0x140018E70 (SmpNotImplemented.c)
 *     SmpUnhandledExceptionFilter @ 0x140019234 (SmpUnhandledExceptionFilter.c)
 *     memset_0 @ 0x14001EFBF (memset_0.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140020010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall SmpApiCallback(__int64 a1, __int64 a2)
{
  int v3; // r15d
  int v4; // r13d
  __int64 v5; // r12
  int v6; // edi
  _BYTE *v7; // rbx
  __int64 v8; // r8
  unsigned int v9; // r14d
  __int64 v10; // rdx
  unsigned int v11; // ebx
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // ecx
  int v15; // eax
  PVOID *v16; // rdi
  HANDLE *v17; // rsi
  unsigned int v18; // ebx
  __int64 MessageAttribute; // rax
  int v21; // [rsp+40h] [rbp-1E8h]
  _BYTE *BaseAddress; // [rsp+48h] [rbp-1E0h]
  _BYTE *v23; // [rsp+58h] [rbp-1D0h]
  __int64 v24; // [rsp+70h] [rbp-1B8h] BYREF
  _OWORD v25[2]; // [rsp+78h] [rbp-1B0h] BYREF
  __int64 v26; // [rsp+98h] [rbp-190h]
  _BYTE v27[4]; // [rsp+A0h] [rbp-188h] BYREF
  unsigned __int16 v28; // [rsp+A4h] [rbp-184h]
  unsigned int v29; // [rsp+C8h] [rbp-160h]
  int v30; // [rsp+CCh] [rbp-15Ch]

  memset_0(v27, 0, 0x148uLL);
  v3 = 0;
  v24 = 0LL;
  v4 = 0;
  RtlSetThreadIsCritical(1u, 0LL, 1u);
  v5 = SmpApiConnectionPort;
  v23 = 0LL;
  memset(v25, 0, sizeof(v25));
  v26 = 0LL;
  AlpcInitializeMessageAttribute(0x20000000LL, v25, 40LL, &v24);
  do
  {
    v24 = 328LL;
    DWORD1(v25[0]) |= 0x20000000u;
    v6 = NtAlpcSendWaitReceivePort(v5, 0x10000LL, 0LL, 0LL, v27, &v24, v25, 0LL, v21);
    v21 = v6;
  }
  while ( v6 < 0 );
  v7 = *(_BYTE **)AlpcGetMessageAttribute(v25, 0x20000000LL);
  BaseAddress = v7;
  v9 = *(_DWORD *)(AlpcGetMessageAttribute(v25, 0x20000000LL) + 16);
  v10 = 255LL;
  switch ( (unsigned __int8)v28 )
  {
    case 1u:
      v23 = v27;
      v10 = (int)v29;
      if ( v29 >= 9 )
      {
        v30 = -1073741822;
        break;
      }
      if ( dword_140021A48[4 * v29] )
      {
        v6 = 0;
        RtlAcquireSRWLockExclusive(a2, (int)v29, v8);
        if ( (unsigned int)(++*(_DWORD *)(a2 + 20) + 1) > *(_DWORD *)(a2 + 16) )
        {
          v18 = *(_DWORD *)(a2 + 20) + 1;
          v6 = TpSetPoolMinThreads(*(_QWORD *)(a2 + 8), v18);
          if ( v6 < 0 )
            --*(_DWORD *)(a2 + 20);
          else
            *(_DWORD *)(a2 + 16) = v18;
        }
        RtlReleaseSRWLockExclusive(a2);
        v21 = v6;
        if ( v6 < 0 )
        {
          v30 = -1073741670;
          v7 = BaseAddress;
          break;
        }
        v4 = 1;
        v10 = v29;
        v7 = BaseAddress;
      }
      v30 = 259;
      if ( (_DWORD)v10 == 8 )
      {
LABEL_7:
        if ( (*v7 & 6) == 0 )
        {
          v6 = SmpEstablishClientSecurity(v27, v7);
          v21 = v6;
          v10 = v29;
        }
        if ( v6 >= 0 )
        {
          if ( (*v7 & 4) != 0 )
          {
            v6 = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64))*(&SmpApiDispatch + 2 * (int)v10))(v27, v7, v5);
            v21 = v6;
            v10 = v29;
          }
          else
          {
            v6 = -1073741790;
            v21 = -1073741790;
          }
        }
        if ( (_DWORD)v10 == 5 && v6 == 259 )
        {
          v23 = 0LL;
LABEL_12:
          if ( v4 )
          {
            RtlAcquireSRWLockExclusive(a2, v10, v8);
            if ( (unsigned int)(*(_DWORD *)(a2 + 20))-- < *(_DWORD *)(a2 + 16) )
            {
              v11 = *(_DWORD *)(a2 + 20) + 1;
              if ( (int)TpSetPoolMinThreads(*(_QWORD *)(a2 + 8), v11) >= 0 )
                *(_DWORD *)(a2 + 16) = v11;
            }
            RtlReleaseSRWLockExclusive(a2);
            v7 = BaseAddress;
          }
          break;
        }
      }
      else
      {
        if ( (_DWORD)v10 != 1 )
        {
          switch ( (int)v10 )
          {
            case 0:
            case 2:
              break;
            case 3:
            case 4:
              goto LABEL_37;
            case 5:
            case 6:
            case 7:
              goto LABEL_7;
            default:
              goto LABEL_11;
          }
        }
        if ( (*v7 & 0x10) != 0 )
        {
LABEL_37:
          v6 = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64))*(&SmpApiDispatch + 2 * (int)v10))(v27, v7, v5);
          v21 = v6;
        }
        else
        {
          v6 = -1073741811;
          v21 = -1073741811;
        }
      }
LABEL_11:
      v30 = v6;
      goto LABEL_12;
    case 0xAu:
      SmpHandleConnectionRequest(v5, v27, v25, v28 >> 15);
      break;
    case 5u:
      v3 = 1;
      break;
    default:
      if ( (v28 & 0x2000) != 0 )
      {
        MessageAttribute = AlpcGetMessageAttribute(v25, 0x20000000LL);
        NtAlpcCancelMessage(v5, 0LL, MessageAttribute);
        v10 = (__int64)v27;
        v23 = v27;
      }
      break;
  }
  if ( v7 )
  {
    RtlAcquireSRWLockExclusive(v7 + 24, v10, v8);
    if ( v3 )
      *(_DWORD *)v7 |= 1u;
    v12 = *((_DWORD *)v7 + 1);
    v13 = *((_DWORD *)v7 + 2);
    if ( v9 <= v12 )
    {
      v14 = v13 - 1;
      *((_DWORD *)v7 + 2) = v14;
    }
    else
    {
      v14 = v9 + v13 - v12 - 1;
      *((_DWORD *)v7 + 2) = v14;
      *((_DWORD *)v7 + 1) = v9;
    }
    v15 = *(_DWORD *)v7;
    if ( (*(_DWORD *)v7 & 1) == 0 || v14 )
    {
      RtlReleaseSRWLockExclusive(v7 + 24);
    }
    else
    {
      v16 = (PVOID *)(v7 + 32);
      if ( (v15 & 0x10) != 0 )
      {
        SmpDereferenceKnownSubSys(*v16);
      }
      else if ( (v15 & 8) != 0 )
      {
        v17 = (HANDLE *)*v16;
        if ( (*(_BYTE *)*v16 & 2) == 0 )
        {
          _m_prefetchw(v17);
          if ( (_InterlockedOr((volatile signed __int32 *)v17, 2u) & 2) == 0 )
            SmpReleaseControlBlock(v17);
          v7 = BaseAddress;
        }
        NtWaitForSingleObject(v17[6], 0, 0LL);
        SmpReleaseControlBlock(*v16);
      }
      else if ( *v16 )
      {
        NtClose(*v16);
      }
      NtAlpcDisconnectPort(*((_QWORD *)v7 + 2), 1LL);
      NtClose(*((HANDLE *)v7 + 2));
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
    }
  }
  if ( v23 )
    NtAlpcSendWaitReceivePort(v5, 0x10000LL, v23, 0LL, 0LL, 0LL, 0LL, 0LL, v21);
  return RtlSetThreadIsCritical(0, 0LL, 1u);
}
