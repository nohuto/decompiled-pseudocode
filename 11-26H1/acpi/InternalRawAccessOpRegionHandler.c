/*
 * XREFs of InternalRawAccessOpRegionHandler @ 0x14001CFF0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetFieldUnitRegionObj @ 0x14001D2F0 (AMLIGetFieldUnitRegionObj.c)
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     AMLIGetParent @ 0x14001E8A8 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qq @ 0x14002F0B4 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall InternalRawAccessOpRegionHandler(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // rdi
  __int64 v10; // r12
  int v11; // edx
  __int64 v12; // r13
  int v13; // eax
  _DWORD *v14; // r14
  unsigned int v15; // ebp
  __int64 Pool2; // rax
  _QWORD *v17; // rdi
  size_t v18; // r8
  KIRQL v19; // bp
  _QWORD *v20; // rbx
  int v21; // edx
  unsigned int v22; // ebp
  int v24; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v25[8]; // [rsp+48h] [rbp-40h] BYREF

  v25[0] = 0LL;
  if ( (unsigned int)AMLIGetFieldUnitRegionObj(a3, v25) )
    return 3221225473LL;
  v9 = v25[0];
  if ( !v25[0] )
    return 3221225473LL;
  v10 = AMLIGetParent(v25[0]);
  AMLIDereferenceHandleEx(v9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_qq(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      3,
      10,
      (__int64)&WPP_88a6901df60130b0fb02f0148765b5c1_Traceguids,
      a3,
      v10);
  }
  if ( !a5 || !*(_QWORD *)(a5 + 16) )
    return 3221225473LL;
  if ( *(_WORD *)(a4 + 2) == 1 )
  {
    v12 = a4 + 16;
    v13 = 8;
  }
  else
  {
    v12 = *(_QWORD *)(a4 + 32);
    v13 = *(_DWORD *)(a4 + 24);
  }
  v14 = (_DWORD *)(a3 + 36);
  v24 = v13;
  if ( !*(_DWORD *)(a3 + 28) || (v15 = *v14 + 56, v15 <= 0x40) )
    v15 = 64;
  Pool2 = ExAllocatePool2(64LL, v15, 1332765505LL);
  v17 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)(Pool2 + 4) = v15;
  *(_DWORD *)Pool2 = 1;
  *(_BYTE *)(Pool2 + 8) = a1;
  *(_BYTE *)(Pool2 + 9) = *(_BYTE *)(a3 + 20) & 0xF;
  *(_BYTE *)(Pool2 + 12) = (*(_DWORD *)(a3 + 20) >> 4) & 6;
  *(_BYTE *)(Pool2 + 10) = BYTE1(*(_DWORD *)(a3 + 20));
  *(_QWORD *)(Pool2 + 16) = a2;
  *(_DWORD *)(Pool2 + 24) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(Pool2 + 28) = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(Pool2 + 32) = *(_DWORD *)(a3 + 16);
  *(_BYTE *)(Pool2 + 11) = *(_BYTE *)(a3 + 24);
  if ( *(_DWORD *)(a3 + 28) )
  {
    *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a3 + 32);
    v18 = (unsigned int)*v14;
    *(_DWORD *)(Pool2 + 52) = *v14;
    memmove((void *)(Pool2 + 56), (const void *)(a3 + 40), v18);
  }
  v19 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v20 = *(_QWORD **)(*(_QWORD *)v10 + 104LL);
  if ( v20 )
  {
    v20 = (_QWORD *)v20[96];
    if ( v20 )
      ObfReferenceObject(v20);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v19);
  v17[5] = v20;
  v22 = (*(__int64 (__fastcall **)(_QWORD *, __int64, int *, _QWORD, __int64, __int64))(a5 + 16))(
          v17,
          v12,
          &v24,
          *(_QWORD *)(a5 + 24),
          a6,
          a7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v21,
      3,
      11,
      (__int64)&WPP_88a6901df60130b0fb02f0148765b5c1_Traceguids,
      v22);
  }
  if ( v20 )
    ObfDereferenceObject(v20);
  if ( v22 == -1073741789 )
  {
    *(_DWORD *)(a4 + 16) = v24;
    *(_WORD *)(a4 + 2) = 1;
  }
  ExFreePoolWithTag(v17, 0x4F706341u);
  AMLIDereferenceHandleEx(v10);
  return v22;
}
