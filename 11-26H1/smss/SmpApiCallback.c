/*
 * XREFs of SmpApiCallback @ 0x140005930
 * Callers:
 *     <none>
 * Callees:
 *     SmpReleaseControlBlock @ 0x140003C60 (SmpReleaseControlBlock.c)
 *     SmpDereferenceKnownSubSys @ 0x140005F60 (SmpDereferenceKnownSubSys.c)
 *     SmpHandleConnectionRequest @ 0x1400060A0 (SmpHandleConnectionRequest.c)
 *     SmpDestroyControlBlock @ 0x1400075E8 (SmpDestroyControlBlock.c)
 *     SmpEstablishClientSecurity @ 0x1400186DC (SmpEstablishClientSecurity.c)
 *     SmpNotImplemented @ 0x140018AF0 (SmpNotImplemented.c)
 *     SmpUnhandledExceptionFilter @ 0x140018EAC (SmpUnhandledExceptionFilter.c)
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x14001F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall SmpApiCallback(__int64 a1, __int64 a2)
{
  int v3; // r12d
  __int64 v4; // r15
  _BYTE *v5; // rsi
  int v6; // edi
  char *v7; // rbx
  __int64 v8; // r8
  unsigned int v9; // r13d
  unsigned __int64 v10; // rdx
  unsigned int v11; // edi
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // ecx
  int v15; // eax
  void *v16; // rcx
  __int64 MessageAttribute; // rax
  __int64 v19; // [rsp+40h] [rbp-1D8h]
  __int64 v20; // [rsp+48h] [rbp-1D0h]
  __int64 v21; // [rsp+50h] [rbp-1C8h] BYREF
  _BYTE *v22; // [rsp+58h] [rbp-1C0h]
  __int128 v23; // [rsp+60h] [rbp-1B8h] BYREF
  __int128 v24; // [rsp+70h] [rbp-1A8h]
  __int64 v25; // [rsp+80h] [rbp-198h]
  _BYTE v26[4]; // [rsp+90h] [rbp-188h] BYREF
  unsigned __int16 v27; // [rsp+94h] [rbp-184h]
  unsigned int v28; // [rsp+B8h] [rbp-160h]
  int v29; // [rsp+BCh] [rbp-15Ch]

  memset_0(v26, 0, 0x148uLL);
  v3 = 0;
  v21 = 0LL;
  HIDWORD(v19) = 0;
  RtlSetThreadIsCritical(1u, 0LL, 1u);
  v4 = SmpApiConnectionPort;
  v5 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  AlpcInitializeMessageAttribute(0x20000000LL, &v23, 40LL, &v21);
  LODWORD(v20) = 0;
  do
  {
    v21 = 328LL;
    DWORD1(v23) |= 0x20000000u;
    v6 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _BYTE *, __int64 *, __int128 *, _QWORD, __int64, __int64))NtAlpcSendWaitReceivePort)(
           v4,
           0x10000LL,
           0LL,
           0LL,
           v26,
           &v21,
           &v23,
           0LL,
           v19,
           v20);
    LODWORD(v19) = v6;
  }
  while ( v6 < 0 );
  v7 = *(char **)AlpcGetMessageAttribute(&v23, 0x20000000LL);
  v9 = *(_DWORD *)(AlpcGetMessageAttribute(&v23, 0x20000000LL) + 16);
  v10 = v27 & 0xFF00;
  LODWORD(v20) = 0;
  switch ( (unsigned __int8)v27 )
  {
    case 1u:
      v5 = v26;
      v22 = v26;
      v10 = (int)v28;
      if ( v28 >= 9 )
      {
        v29 = -1073741822;
        break;
      }
      if ( dword_140020A48[4 * v28] )
      {
        v6 = 0;
        HIDWORD(v20) = 0;
        RtlAcquireSRWLockExclusive(a2, (int)v28, v8);
        if ( (unsigned int)(++*(_DWORD *)(a2 + 20) + 1) > *(_DWORD *)(a2 + 16) )
        {
          HIDWORD(v19) = *(_DWORD *)(a2 + 20) + 1;
          v6 = TpSetPoolMinThreads(*(_QWORD *)(a2 + 8), HIDWORD(v19));
          HIDWORD(v20) = v6;
          if ( v6 < 0 )
            --*(_DWORD *)(a2 + 20);
          else
            *(_DWORD *)(a2 + 16) = HIDWORD(v19);
        }
        RtlReleaseSRWLockExclusive(a2);
        LODWORD(v19) = v6;
        if ( v6 < 0 )
        {
          v29 = -1073741670;
          break;
        }
        HIDWORD(v19) = 1;
        v10 = v28;
      }
      v29 = 259;
      if ( (_DWORD)v10 == 8 )
      {
LABEL_7:
        if ( (*v7 & 6) == 0 )
        {
          v6 = SmpEstablishClientSecurity(v26, v7);
          LODWORD(v19) = v6;
          v10 = v28;
        }
        if ( v6 >= 0 )
        {
          if ( (*v7 & 4) != 0 )
          {
            v6 = ((__int64 (__fastcall *)(_BYTE *, char *, __int64))*(&SmpApiDispatch + 2 * (int)v10))(v26, v7, v4);
            LODWORD(v19) = v6;
            v10 = v28;
          }
          else
          {
            v6 = -1073741790;
            LODWORD(v19) = -1073741790;
          }
        }
        if ( (_DWORD)v10 == 5 && v6 == 259 )
        {
          v5 = 0LL;
          v22 = 0LL;
LABEL_12:
          if ( HIDWORD(v19) )
          {
            RtlAcquireSRWLockExclusive(a2, v10, v8);
            if ( (unsigned int)(*(_DWORD *)(a2 + 20))-- < *(_DWORD *)(a2 + 16) )
            {
              v11 = *(_DWORD *)(a2 + 20) + 1;
              if ( (int)TpSetPoolMinThreads(*(_QWORD *)(a2 + 8), v11) >= 0 )
                *(_DWORD *)(a2 + 16) = v11;
            }
            RtlReleaseSRWLockExclusive(a2);
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
              goto LABEL_36;
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
LABEL_36:
          v6 = ((__int64 (__fastcall *)(_BYTE *, char *, __int64))*(&SmpApiDispatch + 2 * (int)v10))(v26, v7, v4);
          LODWORD(v19) = v6;
        }
        else
        {
          v6 = -1073741811;
          LODWORD(v19) = -1073741811;
        }
      }
LABEL_11:
      v29 = v6;
      goto LABEL_12;
    case 0xAu:
      SmpHandleConnectionRequest(v4, v26, &v23, (unsigned __int16)(v27 & 0xFF00) >> 15);
      break;
    case 5u:
      v3 = 1;
      LODWORD(v20) = 1;
      break;
    default:
      if ( (v27 & 0x2000) != 0 )
      {
        MessageAttribute = AlpcGetMessageAttribute(&v23, 0x20000000LL);
        NtAlpcCancelMessage(v4, 0LL, MessageAttribute);
        v10 = (unsigned __int64)v26;
        v5 = v26;
        v22 = v26;
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
      v16 = (void *)*((_QWORD *)v7 + 4);
      if ( (v15 & 0x10) != 0 )
      {
        SmpDereferenceKnownSubSys(v16);
      }
      else if ( (v15 & 8) != 0 )
      {
        SmpDestroyControlBlock(v16);
        SmpReleaseControlBlock(*((char **)v7 + 4));
      }
      else if ( v16 )
      {
        NtClose(v16);
      }
      NtAlpcDisconnectPort(*((_QWORD *)v7 + 2), 1LL);
      NtClose(*((HANDLE *)v7 + 2));
      RtlReleaseSRWLockExclusive(v7 + 24);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v7);
    }
  }
  if ( v5 )
    NtAlpcSendWaitReceivePort(
      v4,
      0x10000LL,
      v5,
      0LL,
      0LL,
      0LL,
      0LL,
      0LL,
      v19,
      v20,
      v21,
      v22,
      v23,
      *((_QWORD *)&v23 + 1),
      v24);
  return RtlSetThreadIsCritical(0, 0LL, 1u);
}
