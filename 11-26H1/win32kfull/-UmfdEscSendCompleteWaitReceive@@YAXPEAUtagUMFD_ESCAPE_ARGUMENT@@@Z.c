/*
 * XREFs of ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D0C18
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D02BC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1400D0F00 (-UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z.c)
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1401A6804 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 *     ??$GreProbeAndWriteToUntrustedVa@E@@YAXPEAEPEBE_K@Z @ 0x140349B44 (--$GreProbeAndWriteToUntrustedVa@E@@YAXPEAEPEBE_K@Z.c)
 *     ??$GreProbeAndWriteToUntrustedVa@U_ALPC_WORK_ON_BEHALF_TICKET@@@@YAXPEAU_ALPC_WORK_ON_BEHALF_TICKET@@PEBU0@_K@Z @ 0x140349BD8 (--$GreProbeAndWriteToUntrustedVa@U_ALPC_WORK_ON_BEHALF_TICKET@@@@YAXPEAU_ALPC_WORK_ON_BEHALF_TIC.c)
 *     ??$GreProbeAndWriteToUntrustedVa@W4FontDriverDdiKind@@@@YAXPEAW4FontDriverDdiKind@@PEBW40@_K@Z @ 0x140349C0C (--$GreProbeAndWriteToUntrustedVa@W4FontDriverDdiKind@@@@YAXPEAW4FontDriverDdiKind@@PEBW40@_K@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall UmfdEscSendCompleteWaitReceive(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  struct UmfdTls *v8; // rax
  _QWORD *v9; // r12
  _QWORD *v10; // r13
  int *v11; // r15
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  struct UmfdTls *v17; // rax
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  struct UmfdTls *v26; // rdx
  __int64 v27; // r14
  __int64 v28; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v29[12]; // [rsp+38h] [rbp-60h] BYREF
  char v30; // [rsp+A8h] [rbp+10h] BYREF
  int v31; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+20h] BYREF

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v4 = *CurrentThreadWin32Thread;
  else
    v4 = 0LL;
  v5 = v4 + 8;
  v6 = -v4;
  v7 = v5 & -(__int64)(v6 != 0);
  if ( !v7
    || (v8 = *(struct UmfdTls **)((v5 & -(__int64)(v6 != 0)) + 0x138)) == 0LL
    && (v8 = UmfdTls::Create(), (*(_QWORD *)(v7 + 312) = v8) == 0LL) )
  {
    *((_DWORD *)a1 + 2) = -1073741801;
    return;
  }
  v9 = (_QWORD *)((char *)v8 + 48);
  v29[2] = (char *)v8 + 48;
  *((_QWORD *)v8 + 6) = 0LL;
  v10 = (_QWORD *)((char *)v8 + 40);
  v29[3] = (char *)v8 + 40;
  *((_QWORD *)v8 + 5) = 0LL;
  v11 = (int *)((char *)v8 + 32);
  v29[1] = (char *)v8 + 32;
  if ( *((int *)v8 + 8) >= 0 )
  {
    v12 = (__int64 *)PsGetCurrentThreadWin32Thread(v3);
    if ( v12 )
      v13 = *v12;
    else
      v13 = 0LL;
    v14 = v13 + 8;
    v15 = -v13;
    v16 = v14 & -(__int64)(v15 != 0);
    if ( !v16
      || (v17 = *(struct UmfdTls **)((v14 & -(__int64)(v15 != 0)) + 0x138)) == 0LL
      && (v17 = UmfdTls::Create(), (*(_QWORD *)(v16 + 312) = v17) == 0LL) )
    {
      v19 = -1073741801;
      goto LABEL_14;
    }
    v18 = *((_QWORD *)v17 + 3);
    if ( v18 && **(_QWORD **)v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 40LL))(v18);
  }
  v19 = 0;
LABEL_14:
  if ( v19 < 0 )
    goto LABEL_27;
  v19 = UmfdHostSendCompleteWaitReceive(*((unsigned int *)a1 + 10));
  if ( v19 < 0 )
    goto LABEL_27;
  v28 = 0LL;
  v31 = 0;
  v29[0] = 0LL;
  v30 = 0;
  v21 = (_QWORD *)PsGetCurrentThreadWin32Thread(v20);
  v22 = v21 ? *v21 : 0LL;
  v23 = v22 + 8;
  v24 = -v22;
  v25 = v23 & -(__int64)(v24 != 0);
  if ( v25
    && ((v26 = *(struct UmfdTls **)((v23 & -(__int64)(v24 != 0)) + 0x138)) != 0LL
     || (v26 = UmfdTls::Create(), (*(_QWORD *)(v25 + 312) = v26) != 0LL)) )
  {
    v27 = *((_QWORD *)v26 + 3);
    if ( v27 )
    {
      v32 = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64, struct UmfdTls *, __int64 *))(*(_QWORD *)v27 + 32LL))(v27, v26, &v32);
      if ( v19 >= 0 )
      {
        v28 = v32;
        v31 = *(_DWORD *)(v27 + 8);
        v29[0] = *(_QWORD *)(v27 + 24);
        v30 = *(_BYTE *)(v27 + 32);
      }
    }
    else
    {
      v19 = -1073740032;
    }
  }
  else
  {
    v19 = -1073741801;
  }
  if ( v19 < 0 )
  {
LABEL_27:
    *v9 = 0LL;
    *v10 = 0LL;
  }
  else
  {
    GreProbeAndWriteToUntrustedVa(*((void **)a1 + 1), 8uLL, &v28, 8uLL, 4uLL);
    GreProbeAndWriteToUntrustedVa<enum FontDriverDdiKind>(*((_QWORD *)a1 + 2), &v31);
    GreProbeAndWriteToUntrustedVa<unsigned char>(*((_QWORD *)a1 + 4), &v30);
    if ( v30 )
      GreProbeAndWriteToUntrustedVa<_ALPC_WORK_ON_BEHALF_TICKET>(*((_QWORD *)a1 + 3), v29);
  }
  *((_DWORD *)a1 + 2) = v19;
  *v11 = v19;
}
