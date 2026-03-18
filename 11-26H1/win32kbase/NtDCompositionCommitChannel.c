/*
 * XREFs of NtDCompositionCommitChannel @ 0x1400A6DC0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1400A7400 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x1400A77FC (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x140119238 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     RtlWriteUCharToUser @ 0x1402D22D4 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtDCompositionCommitChannel(
        PVOID *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *Src,
        void *a7,
        unsigned int a8)
{
  const struct DirectComposition::SynchronizationObject *v8; // r14
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 CurrentProcess; // rax
  __int64 v13; // r13
  DirectComposition::CApplicationChannel *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // r15
  _QWORD *CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v18; // rdi
  _QWORD *v19; // rax
  struct _ERESOURCE *v20; // rdi
  DirectComposition::CApplicationChannel *v21; // rdi
  _QWORD *v23; // rax
  _QWORD *v24; // r12
  unsigned int v25; // eax
  void *v26; // rdi
  void *v27; // rax
  bool v28; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-F4h]
  PVOID v30; // [rsp+48h] [rbp-F0h] BYREF
  PVOID *v31; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD *v32; // [rsp+58h] [rbp-E0h]
  __int64 v33; // [rsp+60h] [rbp-D8h]
  unsigned int v34; // [rsp+68h] [rbp-D0h]
  void *v35; // [rsp+70h] [rbp-C8h]
  void *Buffer[2]; // [rsp+78h] [rbp-C0h] BYREF
  DirectComposition::CApplicationChannel *v37; // [rsp+88h] [rbp-B0h]
  PVOID v38; // [rsp+90h] [rbp-A8h]
  __int128 v39; // [rsp+A0h] [rbp-98h] BYREF
  size_t Size; // [rsp+B0h] [rbp-88h]
  __int64 v41; // [rsp+C0h] [rbp-78h]
  __int64 v42; // [rsp+C8h] [rbp-70h]
  __int64 v43; // [rsp+D0h] [rbp-68h]
  __int128 v44; // [rsp+D8h] [rbp-60h] BYREF
  size_t v45; // [rsp+E8h] [rbp-50h]
  char v46; // [rsp+158h] [rbp+20h]

  v46 = a4;
  v34 = (unsigned int)a1;
  v42 = a2;
  v43 = a3;
  v41 = a5;
  v35 = Src;
  Buffer[0] = a7;
  v8 = 0LL;
  v9 = 0;
  v37 = 0LL;
  v29 = 0;
  v28 = 0;
  v30 = 0LL;
  v38 = 0LL;
  if ( !a3 )
  {
    v9 = -1073741811;
    goto LABEL_36;
  }
  if ( Src || a8 || a7 )
  {
    v10 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 70544);
    CurrentProcess = PsGetCurrentProcess(v11);
    a3 = 3221225485LL;
    if ( CurrentProcess != v10 )
      v9 = -1073741811;
    v32 = 0LL;
    a1 = &v30;
    v31 = &v30;
    v13 = 0LL;
    v33 = 0LL;
    if ( CurrentProcess == v10 && Src )
    {
      v39 = 0LL;
      RtlCopyFromUser(&v39, Src, 0x10uLL);
      v13 = v39;
      v33 = v39;
      a3 = 3221225485LL;
    }
    while ( v9 >= 0 )
    {
      if ( (void *)v13 == Src )
      {
        if ( Buffer[0] && a8 )
        {
          if ( 4 * (unsigned __int64)a8 < a8 )
          {
            v9 = -1073741811;
            goto LABEL_36;
          }
          v27 = Win32AllocPoolWithQuotaImpl((unsigned __int64)a1, 4LL * a8, 0x66624344u);
          v38 = v27;
          if ( !v27 )
          {
            v9 = -1073741801;
            goto LABEL_36;
          }
          RtlCopyFromUser(v27, Buffer[0], 4LL * a8);
        }
        break;
      }
      v39 = 0LL;
      Size = 0LL;
      v44 = 0LL;
      v45 = 0LL;
      RtlCopyFromUser(&v44, (void *)v13, 0x18uLL);
      v39 = v44;
      Size = v45;
      a1 = (PVOID *)HIDWORD(v45);
      if ( (v45 & 0x300000000LL) != 0 || HIDWORD(v45) < 8 )
        v9 = -1073741811;
      a2 = 0LL;
      if ( v9 >= 0 )
      {
        v23 = Win32AllocPoolWithQuotaImpl((unsigned __int64)a1, HIDWORD(Size) + 24, 0x66624344u);
        v24 = v23;
        v32 = v23;
        if ( v23 )
        {
          *v31 = v23;
          v31 = (PVOID *)v23;
          *v23 = 0LL;
          v23[1] = 0LL;
          *((_DWORD *)v23 + 4) = 0;
          v25 = HIDWORD(Size);
          *((_DWORD *)v24 + 5) = HIDWORD(Size);
          RtlCopyFromUser(v24 + 3, (void *)(v13 + 24), v25);
          a3 = 3221225485LL;
          goto LABEL_57;
        }
        v9 = -1073741801;
      }
      a3 = 3221225485LL;
LABEL_57:
      v13 = v39;
      v33 = v39;
    }
  }
  if ( v9 >= 0 )
  {
    v14 = 0LL;
    v9 = 0;
    v15 = 0LL;
    v16 = 0LL;
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
      v16 = CurrentProcessWin32Process[32];
    if ( v16 )
    {
      v18 = *(struct _ERESOURCE **)(v16 + 8);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v18, 1u);
      Buffer[0] = (void *)v34;
      Buffer[1] = 0LL;
      v19 = RtlLookupElementGenericTable(*(PRTL_GENERIC_TABLE *)v16, Buffer);
      if ( v19 )
        v15 = v19[1];
      if ( v15 )
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      else
        v9 = -1073741790;
      ExReleaseResourceLite(*(PERESOURCE *)(v16 + 8));
      KeLeaveCriticalRegion();
    }
    else
    {
      v9 = -1073741823;
    }
    if ( v15 )
    {
      v20 = *(struct _ERESOURCE **)(v15 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v20, 1u);
      v14 = (DirectComposition::CApplicationChannel *)v15;
    }
    if ( v9 >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)v14 + 8LL))(v14) == 1 )
      {
        v37 = v14;
      }
      else
      {
        v9 = -1073741811;
        (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v14)(v14);
      }
      if ( v9 >= 0 )
      {
        if ( v41 )
        {
          v31 = 0LL;
          LOBYTE(a3) = 1;
          if ( (int)CompositionObject::ResolveHandle(v41, 1LL, a3, 3LL, &v31) >= 0 )
            v8 = (const struct DirectComposition::SynchronizationObject *)v31;
        }
        v21 = v37;
        v9 = DirectComposition::CApplicationChannel::Commit(
               v37,
               &v28,
               v46 & 1,
               (v46 & 2) != 0,
               v8,
               (struct CMilProtocolBlock *)v30,
               (unsigned int *)v38,
               a8);
        if ( v9 >= 0 )
          v29 = *((_DWORD *)v21 + 103);
        if ( v8 )
          ObfDereferenceObject(v8);
        (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v21)(v21);
        if ( v9 >= 0 )
        {
          if ( v42 )
            RtlWriteULongToUser(v42, v29);
          RtlWriteUCharToUser(v43, v28);
        }
      }
    }
  }
LABEL_36:
  if ( v30 )
  {
    do
    {
      v26 = *(void **)v30;
      GreDeleteFastMutex((char *)v30, a2, a3, a4);
      v30 = v26;
    }
    while ( v26 );
  }
  if ( v38 )
    GreDeleteFastMutex((char *)v38, a2, a3, a4);
  return (unsigned int)v9;
}
