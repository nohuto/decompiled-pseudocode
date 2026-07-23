/*
 * XREFs of IopInitializeBuiltinDriver @ 0x140D0F138
 * Callers:
 *     PnpInitializeBootStartDriver @ 0x140D0EFCC (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     VfDifCaptureDriverEntry @ 0x1403C1800 (VfDifCaptureDriverEntry.c)
 *     VfDifCaptureIoCallbacks @ 0x1403C186C (VfDifCaptureIoCallbacks.c)
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 *     RtlEqualString @ 0x14049DC00 (RtlEqualString.c)
 *     HeadlessKernelAddLogEntry @ 0x1404E6FF8 (HeadlessKernelAddLogEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObInsertObject @ 0x140906AE0 (ObInsertObject.c)
 *     ObCreateObject @ 0x14090EB60 (ObCreateObject.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     IopReadyDeviceObjects @ 0x140A38514 (IopReadyDeviceObjects.c)
 *     KseDriverLoadImage @ 0x140A38A18 (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x140A39400 (KseShimDriverIoCallbacks.c)
 *     PnpPrepareDriverLoading @ 0x140A39744 (PnpPrepareDriverLoading.c)
 *     ObMakeTemporaryObject @ 0x140B03770 (ObMakeTemporaryObject.c)
 *     PnpDriverLoadingFailed @ 0x140B4858C (PnpDriverLoadingFailed.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     InbvIndicateProgress @ 0x140CC0124 (InbvIndicateProgress.c)
 *     MmReapplyBootPatchImports @ 0x140D01DB4 (MmReapplyBootPatchImports.c)
 */

__int64 __fastcall IopInitializeBuiltinDriver(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        _QWORD *a6)
{
  char v9; // r12
  int inserted; // edi
  char *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID *i; // rdi
  void *v15; // r13
  PVOID v16; // rcx
  ULONG_PTR Pool2; // rax
  ULONG_PTR v18; // rdi
  unsigned __int16 v19; // dx
  __int64 v20; // r15
  unsigned __int64 v21; // rax
  _WORD *v22; // r8
  unsigned __int64 v23; // rax
  _WORD *v24; // rdi
  unsigned __int16 v25; // ax
  void *v26; // rax
  void *v27; // r9
  _WORD *v28; // r12
  PVOID v29; // rax
  __int16 v30; // cx
  __int64 v31; // r15
  UNICODE_STRING *v32; // r8
  int v33; // eax
  int v34; // eax
  __int64 v35; // rdx
  PVOID *NewObject; // [rsp+20h] [rbp-79h]
  PVOID Object; // [rsp+50h] [rbp-49h] BYREF
  int v39; // [rsp+58h] [rbp-41h] BYREF
  int v40; // [rsp+5Ch] [rbp-3Dh] BYREF
  HANDLE v41; // [rsp+60h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-31h] BYREF
  PVOID v43; // [rsp+70h] [rbp-29h] BYREF
  _DWORD v44[2]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v45; // [rsp+80h] [rbp-19h]
  unsigned __int16 *v46; // [rsp+88h] [rbp-11h]
  int v47; // [rsp+90h] [rbp-9h]
  int v48; // [rsp+94h] [rbp-5h]
  __int128 v49; // [rsp+98h] [rbp-1h]
  bool v50; // [rsp+F0h] [rbp+57h] BYREF
  unsigned __int16 *v51; // [rsp+F8h] [rbp+5Fh]

  v51 = a2;
  Handle = 0LL;
  Object = 0LL;
  v44[1] = 0;
  v48 = 0;
  v41 = 0LL;
  *a6 = 0LL;
  v9 = 0;
  v39 = 0;
  v40 = 0;
  v50 = 0;
  HeadlessKernelAddLogEntry();
  v44[0] = 48;
  v45 = 0LL;
  v49 = 0LL;
  v47 = 80;
  v46 = a1;
  inserted = ObCreateObject(
               KeGetCurrentThread()->PreviousMode,
               IoDriverObjectType,
               (__int64)v44,
               0,
               0,
               424,
               0,
               0,
               &Object);
  if ( inserted < 0 )
    goto LABEL_2;
  v11 = (char *)Object;
  memset_0(Object, 0, 0x1A8uLL);
  *((_QWORD *)v11 + 6) = v11 + 336;
  *((_QWORD *)v11 + 42) = v11;
  memset64(v11 + 112, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
  *(_DWORD *)v11 = 22020100;
  *((_QWORD *)v11 + 11) = a3;
  inserted = ObInsertObject(v11, 0LL, 1u, 0, 0LL, &Handle);
  if ( inserted < 0 )
  {
LABEL_2:
    HeadlessKernelAddLogEntry();
    return (unsigned int)inserted;
  }
  ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v43, 0LL);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList && a4; i = (PVOID *)*i )
  {
    if ( RtlEqualString((const STRING *)(a4 + 88), (const STRING *)(i + 11), 1u) )
    {
      *((_QWORD *)v11 + 5) = i;
      InbvIndicateProgress(v13, v12);
      goto LABEL_11;
    }
  }
  InbvIndicateProgress(v13, v12);
  if ( !a4 )
  {
    v15 = 0LL;
    goto LABEL_14;
  }
LABEL_11:
  v15 = *(void **)(a4 + 48);
  Object = 0LL;
  RtlImageNtHeaderEx(1u, v15, 0LL, (PIMAGE_NT_HEADERS *)&Object);
  v16 = Object;
  *((_QWORD *)v11 + 3) = v15;
  *((_DWORD *)v11 + 8) = *((_DWORD *)v16 + 20);
  if ( _bittest16((const signed __int16 *)v16 + 47, 0xDu) )
    goto LABEL_15;
LABEL_14:
  *((_DWORD *)v11 + 4) |= 2u;
LABEL_15:
  Pool2 = ExAllocatePool2(64LL, a1[1] + 2LL, 0x344E6F49u);
  v18 = Pool2;
  if ( Pool2 )
  {
    *((_QWORD *)v11 + 8) = Pool2;
    *((_WORD *)v11 + 29) = a1[1];
    *((_WORD *)v11 + 28) = *a1;
    memmove(*((void **)v11 + 8), *((const void **)a1 + 1), a1[1]);
    *(_WORD *)(v18 + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
  }
  v19 = 0;
  v20 = *((_QWORD *)v11 + 6);
  if ( !v51 || (v21 = *v51, !(_WORD)v21) )
  {
    *(_QWORD *)(v20 + 32) = 0LL;
    *(_DWORD *)(v20 + 24) = 0;
    v31 = (__int64)v51;
    goto LABEL_33;
  }
  v22 = (_WORD *)*((_QWORD *)v51 + 1);
  v23 = v21 >> 1;
  v24 = &v22[v23 - 1];
  if ( *v24 != 92 )
    v24 = &v22[v23];
  while ( --v24 != v22 )
  {
    if ( *v24 == 92 )
    {
      ++v24;
      break;
    }
    v19 += 2;
  }
  v25 = v19 + 2;
  if ( v24 != v22 )
    v25 = v19;
  Object = (PVOID)v25;
  v26 = (void *)ExAllocatePool2(64LL, v25 + 2LL, 0x344E6F49u);
  v43 = v26;
  v27 = v26;
  v28 = (_WORD *)(v20 + 24);
  if ( v26 )
  {
    *(_QWORD *)(v20 + 32) = v26;
    v29 = Object;
    v30 = (_WORD)Object + 2;
    *v28 = (_WORD)Object;
    *(_WORD *)(v20 + 26) = v30;
    memmove(v27, v24, (size_t)v29);
    v31 = (__int64)v51;
    v32 = (UNICODE_STRING *)v51;
    *((_WORD *)v43 + ((unsigned __int64)(unsigned __int16)*v28 >> 1)) = 0;
    inserted = IopOpenRegistryKeyEx(&v41, 0LL, v32, 0xF003Fu);
    if ( inserted >= 0 )
    {
      inserted = PnpPrepareDriverLoading((__int64)v28, v41, v15, a5, &v39, &v50);
      NtClose(v41);
      if ( inserted >= 0 )
      {
        v9 = v39;
LABEL_33:
        if ( (v9 & 1) != 0 )
          *((_DWORD *)v11 + 4) |= 0x100u;
        if ( v50 )
          *((_DWORD *)v11 + 4) |= 0x1000u;
        *((_QWORD *)v11 + 9) = &PspSiloMonitorLock.SavedApcState.Process;
        VfDifCaptureDriverEntry((__int64)v11);
        v33 = KseDriverLoadImage(a4, &v40);
        inserted = v33;
        if ( v33 >= 0 )
        {
          if ( !a4 || !v40 || (inserted = MmReapplyBootPatchImports(*(_QWORD *)(a4 + 48)), inserted >= 0) )
          {
            v34 = guard_dispatch_icall_no_overrides((__int64)v11, v31);
            inserted = v34;
            if ( v34 < 0 )
            {
              if ( v34 == -1073741218 )
              {
                LODWORD(NewObject) = -1073741218;
                DbgPrintEx(
                  0x65u,
                  3u,
                  "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
                  a1,
                  NewObject);
              }
              else
              {
                LODWORD(NewObject) = v34;
                DbgPrintEx(
                  0x65u,
                  0,
                  "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
                  a1,
                  NewObject);
              }
            }
            else
            {
              if ( PnpBootDriverTracking )
                _InterlockedIncrement((volatile signed __int32 *)PnpBootDriverTracking + 98);
              VfDifCaptureIoCallbacks((__int64)v11);
              KseShimDriverIoCallbacks((__int64 *)v11, v35, (const void **)((a4 + 72) & -(__int64)(a4 != 0)));
            }
          }
        }
        else
        {
          LODWORD(NewObject) = v33;
          DbgPrintEx(0x65u, 3u, "IOINIT: Built-in driver %wZ blocked with status - 0x%lX\n", a1, NewObject);
        }
      }
    }
  }
  else
  {
    inserted = -1073741670;
    *(_QWORD *)(v20 + 32) = 0LL;
    *v28 = 0;
  }
  NtClose(Handle);
  if ( inserted < 0 )
  {
    if ( inserted != -1073741218 )
      PnpDriverLoadingFailed(0LL, (UNICODE_STRING *)(*((_QWORD *)v11 + 6) + 24LL));
    HeadlessKernelAddLogEntry();
    ObMakeTemporaryObject(v11);
    ObfDereferenceObjectWithTag(v11, 0x746C6644u);
  }
  else
  {
    IopReadyDeviceObjects((__int64)v11);
    HeadlessKernelAddLogEntry();
    if ( PnpBootDriverTracking )
      _InterlockedIncrement((volatile signed __int32 *)PnpBootDriverTracking + 99);
    *a6 = v11;
  }
  return (unsigned int)inserted;
}
