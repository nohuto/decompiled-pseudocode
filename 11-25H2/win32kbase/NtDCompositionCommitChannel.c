/*
 * XREFs of NtDCompositionCommitChannel @ 0x1400AF3A0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140020FF4 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x14004F890 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x140056150 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtDCompositionCommitChannel(
        __int64 a1,
        ULONG64 a2,
        ULONG64 a3,
        char a4,
        void *a5,
        void *Src,
        void *a7,
        unsigned int a8)
{
  __int64 v8; // rbx
  __int64 CurrentProcess; // rax
  int v10; // r13d
  PVOID *p_Buffer; // rcx
  __int64 v12; // r15
  int v13; // edi
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
  unsigned int v16; // eax
  const struct DirectComposition::SynchronizationObject *v17; // rbx
  NTSTATUS v18; // edi
  const struct DirectComposition::SynchronizationObject *v19; // rsi
  int v20; // eax
  bool v21; // sf
  _DWORD *v22; // rcx
  _BYTE *v23; // r8
  void *v24; // rbx
  bool v26; // [rsp+40h] [rbp-E8h] BYREF
  int v27; // [rsp+44h] [rbp-E4h]
  PVOID Buffer; // [rsp+48h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD *v30; // [rsp+58h] [rbp-D0h]
  __int64 v31; // [rsp+60h] [rbp-C8h]
  struct DirectComposition::CApplicationChannel *v32; // [rsp+68h] [rbp-C0h] BYREF
  PVOID v33; // [rsp+70h] [rbp-B8h]
  unsigned int v34; // [rsp+78h] [rbp-B0h]
  void *v35; // [rsp+80h] [rbp-A8h]
  void *v36; // [rsp+88h] [rbp-A0h]
  __int128 v37; // [rsp+90h] [rbp-98h]
  size_t Size; // [rsp+A0h] [rbp-88h]
  HANDLE Handle; // [rsp+B0h] [rbp-78h]
  __int128 v40; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v41; // [rsp+D0h] [rbp-58h] BYREF
  size_t v42; // [rsp+E0h] [rbp-48h]

  v34 = a1;
  Handle = a5;
  v35 = Src;
  v36 = a7;
  v32 = 0LL;
  v27 = 0;
  v26 = 0;
  Buffer = 0LL;
  v33 = 0LL;
  if ( !a3 )
  {
LABEL_53:
    v13 = -1073741811;
    goto LABEL_54;
  }
  if ( Src || a7 || a8 )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 70552);
    CurrentProcess = PsGetCurrentProcess();
    v10 = -1073741811;
    if ( CurrentProcess == v8 )
      v10 = 0;
    v30 = 0LL;
    p_Buffer = &Buffer;
    Object = &Buffer;
    v12 = 0LL;
    v31 = 0LL;
    v13 = v10;
    if ( CurrentProcess == v8 && Src )
    {
      v40 = 0LL;
      RtlCopyFromUser(&v40, Src, 0x10uLL);
      v37 = v40;
      v12 = v40;
      v31 = v40;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v13 < 0 )
          goto LABEL_54;
        if ( (void *)v12 == Src )
        {
          if ( v36 && a8 )
          {
            if ( 4 * (unsigned __int64)a8 < a8 )
              goto LABEL_53;
            v33 = (PVOID)Win32AllocPoolWithQuotaImpl((__int64)p_Buffer, 4LL * a8, 0x66624344u);
            if ( !v33 )
            {
              v13 = -1073741801;
              goto LABEL_54;
            }
            RtlCopyFromUser(v33, v36, 4LL * a8);
          }
          goto LABEL_26;
        }
        v37 = 0LL;
        Size = 0LL;
        v41 = 0LL;
        v42 = 0LL;
        RtlCopyFromUser(&v41, (void *)v12, 0x18uLL);
        v37 = v41;
        Size = v42;
        p_Buffer = (PVOID *)v42;
        if ( (v42 & 0x300000000LL) != 0 || HIDWORD(v42) < 8 )
          v13 = -1073741811;
        if ( v13 >= 0 )
          break;
LABEL_19:
        v12 = v37;
        v31 = v37;
      }
      v14 = (_QWORD *)Win32AllocPoolWithQuotaImpl(v42, HIDWORD(Size) + 24, 0x66624344u);
      v15 = v14;
      v30 = v14;
      if ( v14 )
      {
        *(_QWORD *)Object = v14;
        Object = v14;
        *v14 = 0LL;
        v14[1] = 0LL;
        *((_DWORD *)v14 + 4) = 0;
        v16 = HIDWORD(Size);
        *((_DWORD *)v15 + 5) = HIDWORD(Size);
        RtlCopyFromUser(v15 + 3, (void *)(v12 + 24), v16);
        goto LABEL_19;
      }
      v13 = -1073741801;
      v12 = v37;
      v31 = v37;
    }
  }
LABEL_26:
  v13 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(v34, &v32);
  if ( v13 >= 0 )
  {
    v17 = 0LL;
    if ( !Handle )
    {
LABEL_41:
      v13 = DirectComposition::CApplicationChannel::Commit(
              v32,
              &v26,
              a4 & 1,
              (a4 & 2) != 0,
              v17,
              (struct CMilProtocolBlock *)Buffer,
              (unsigned int *)v33,
              a8);
      if ( v13 >= 0 )
        v27 = *((_DWORD *)v32 + 103);
      if ( v17 )
        ObfDereferenceObject(v17);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v32)(v32);
      if ( v13 >= 0 )
      {
        v22 = (_DWORD *)a2;
        if ( a2 )
        {
          if ( a2 >= MmUserProbeAddress )
            v22 = (_DWORD *)MmUserProbeAddress;
          *v22 = v27;
        }
        v23 = (_BYTE *)a3;
        if ( a3 >= MmUserProbeAddress )
          v23 = (_BYTE *)MmUserProbeAddress;
        *v23 = v26;
      }
      goto LABEL_54;
    }
    Object = 0LL;
    v18 = ObReferenceObjectByHandle(Handle, 1u, ExCompositionObjectType, 1, &Object, 0LL);
    v19 = (const struct DirectComposition::SynchronizationObject *)Object;
    if ( v18 >= 0 )
    {
      if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
      {
        v20 = (*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)v19 + 1) + 16LL))(*((_QWORD **)v19 + 1));
        if ( v20 != 3 )
          v18 = -1073741788;
        v17 = v19;
        if ( v20 != 3 )
          v17 = 0LL;
        v21 = v18 < 0;
        if ( v18 >= 0 )
          goto LABEL_39;
      }
      else
      {
        v18 = -1073741816;
      }
      ObfDereferenceObject(v19);
    }
    v21 = v18 < 0;
LABEL_39:
    if ( v21 )
      v17 = 0LL;
    goto LABEL_41;
  }
LABEL_54:
  if ( Buffer )
  {
    do
    {
      v24 = *(void **)Buffer;
      GreDeleteFastMutex((char *)Buffer);
      Buffer = v24;
    }
    while ( v24 );
  }
  if ( v33 )
    GreDeleteFastMutex((char *)v33);
  return (unsigned int)v13;
}
