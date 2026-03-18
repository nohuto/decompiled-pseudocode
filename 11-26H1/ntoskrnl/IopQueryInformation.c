/*
 * XREFs of IopQueryInformation @ 0x140903288
 * Callers:
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1403B79E0 (MmIsDriverVerifying.c)
 *     FsRtlGetSupportedFeatures @ 0x1404A2990 (FsRtlGetSupportedFeatures.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     FsRtlQueryOpen @ 0x140ABB7B4 (FsRtlQueryOpen.c)
 *     VfFastIoCheckState @ 0x140C47F24 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4824C (VfFastIoSnapState.c)
 */

__int64 __fastcall IopQueryInformation(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _BYTE *a6)
{
  void *v9; // r12
  unsigned int v10; // esi
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  ULONG_PTR FastIoQueryOpen; // r13
  __int64 result; // rax
  __int64 v14; // rcx
  void *v15; // rcx
  int Open; // eax
  struct _DRIVER_OBJECT *DriverObject; // r12
  int v18; // [rsp+30h] [rbp-78h] BYREF
  _QWORD Src[4]; // [rsp+38h] [rbp-70h] BYREF
  int v20; // [rsp+58h] [rbp-50h]
  int v21; // [rsp+5Ch] [rbp-4Ch]

  v9 = 0LL;
  v18 = 0;
  if ( !*(_BYTE *)(a1 + 208) )
  {
    *a6 = 0;
    v10 = 0;
    FastIoDispatch = a2->DriverObject->FastIoDispatch;
    if ( FastIoDispatch )
    {
      if ( FastIoDispatch->SizeOfFastIoDispatch > 0xC0 )
      {
        FastIoQueryOpen = (ULONG_PTR)FastIoDispatch->FastIoQueryOpen;
        if ( FastIoQueryOpen )
        {
          --*(_BYTE *)(a3 + 67);
          *(_QWORD *)(a3 + 184) -= 72LL;
          *(_QWORD *)(a4 + 40) = a2;
          if ( (MmVerifierData & 0x10) != 0 )
          {
            DriverObject = a2->DriverObject;
            if ( MmIsDriverVerifying(DriverObject) )
              v9 = (void *)VfFastIoSnapState(DriverObject);
            else
              v9 = 0LL;
          }
          *a6 = guard_dispatch_icall_no_overrides(a3, *(_QWORD *)(a1 + 104));
          if ( v9 )
            VfFastIoCheckState(v9, FastIoQueryOpen);
          *(_QWORD *)(a1 + 168) = *(_QWORD *)(a3 + 112);
          if ( *a6 )
          {
            *(_DWORD *)(a1 + 32) = -1096154543;
            if ( !*(_BYTE *)(a1 + 139) )
            {
              v21 = 0;
              v14 = *(_QWORD *)(a1 + 104);
              Src[0] = *(_QWORD *)v14;
              Src[1] = *(_QWORD *)(v14 + 8);
              Src[2] = *(_QWORD *)(v14 + 16);
              Src[3] = *(_QWORD *)(v14 + 24);
              v20 = *(_DWORD *)(v14 + 48);
              v15 = *(void **)(a1 + 96);
              if ( a5 )
                RtlCopyToUser(v15, Src, 0x28uLL);
              else
                RtlCopyVolatileMemory(v15, Src, 0x28uLL);
            }
          }
          else
          {
            *(_QWORD *)(a3 + 184) += 72LL;
            ++*(_BYTE *)(a3 + 67);
          }
        }
      }
    }
    return v10;
  }
  result = FsRtlGetSupportedFeatures((__int64)a2, &v18);
  if ( (int)result >= 0 )
  {
    if ( (v18 & 4) == 0 )
    {
      *a6 = 0;
      return 0LL;
    }
    --*(_BYTE *)(a3 + 67);
    *(_QWORD *)(a3 + 184) -= 72LL;
    Open = FsRtlQueryOpen(a2, *(_DWORD *)(a1 + 200));
    v10 = Open;
    ++*(_BYTE *)(a3 + 67);
    *(_QWORD *)(a3 + 184) += 72LL;
    *(_QWORD *)(a1 + 168) = *(_QWORD *)(a3 + 112);
    if ( Open < 0 )
    {
      if ( Open == -1071906812 || Open == -1073741822 )
      {
        v10 = 0;
        *a6 = 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 32) = -1096154543;
      *a6 = 1;
    }
    return v10;
  }
  return result;
}
