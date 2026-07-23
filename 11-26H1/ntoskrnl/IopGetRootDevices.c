/*
 * XREFs of IopGetRootDevices @ 0x140AA1748
 * Callers:
 *     IopPnPDispatch @ 0x140AA13D0 (IopPnPDispatch.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA1A08 (IopInitializeDeviceInstanceKey.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x140AA2310 (_CmGetMatchingFilteredDeviceList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetRootDevices(_QWORD *a1)
{
  void *Pool2; // r14
  void *v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int inited; // ebx
  unsigned int v6; // r15d
  const WCHAR *v7; // rdi
  int MatchingFilteredDeviceList; // eax
  __int64 v9; // rdi
  _DWORD *v11; // rax
  _DWORD *v12; // r15
  void *v13; // rdx
  __int64 v14; // rax
  PVOID *v15; // r15
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  int v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+64h] [rbp-1Ch]
  int v19; // [rsp+6Ch] [rbp-14h]
  void *Src; // [rsp+70h] [rbp-10h]
  int v21; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF

  *a1 = 0LL;
  v17 = 0;
  v19 = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  Pool2 = 0LL;
  Src = (void *)ExAllocatePool2(0x100uLL);
  v3 = Src;
  if ( !Src )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  v18 = 128LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v21 = 2048;
  inited = -1073741789;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= 5 )
      goto LABEL_14;
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v7 = (const WCHAR *)Pool2;
    if ( !Pool2 )
      break;
    MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                   PiPnpRtlCtx,
                                   (unsigned int)L"Root",
                                   1,
                                   0,
                                   0LL,
                                   (__int64)Pool2,
                                   v21,
                                   (__int64)&v21);
    ++v6;
    inited = MatchingFilteredDeviceList;
    if ( MatchingFilteredDeviceList != -1073741789 )
    {
      if ( MatchingFilteredDeviceList < 0 )
        goto LABEL_14;
      while ( *v7 )
      {
        inited = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v7, 16, 0, 983103, 0, (__int64)&Handle, 0LL);
        if ( inited < 0 )
          goto LABEL_11;
        inited = RtlInitUnicodeStringEx(&DestinationString, v7);
        if ( inited >= 0 && !(unsigned int)IopInitializeDeviceInstanceKey(Handle, &DestinationString) )
        {
          ZwClose(Handle);
          break;
        }
        ZwClose(Handle);
        if ( inited < 0 )
          goto LABEL_11;
        v14 = -1LL;
        do
          ++v14;
        while ( v7[v14] );
        v7 += v14 + 1;
      }
      inited = v17;
      if ( v17 < 0 )
      {
LABEL_11:
        v9 = HIDWORD(v18);
        if ( HIDWORD(v18) )
        {
          if ( inited < 0 )
            goto LABEL_31;
          goto LABEL_13;
        }
      }
      else
      {
        v9 = HIDWORD(v18);
        if ( HIDWORD(v18) )
        {
          v11 = (_DWORD *)ExAllocatePool2(0x100uLL);
          v12 = v11;
          if ( v11 )
          {
            v3 = Src;
            v13 = Src;
            *v11 = v9;
            memmove(v11 + 2, v13, 8 * v9);
            *a1 = v12;
            goto LABEL_14;
          }
          inited = -1073741670;
LABEL_31:
          if ( (_DWORD)v9 )
          {
            v3 = Src;
            v15 = (PVOID *)Src;
            do
            {
              ObfDereferenceObject(*v15++);
              --v9;
            }
            while ( v9 );
            goto LABEL_14;
          }
LABEL_13:
          v3 = Src;
          goto LABEL_14;
        }
      }
      inited = -1073741823;
      goto LABEL_31;
    }
  }
  inited = -1073741670;
LABEL_14:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  ExFreePoolWithTag(v3, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
