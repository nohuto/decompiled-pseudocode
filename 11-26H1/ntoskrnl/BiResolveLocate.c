/*
 * XREFs of BiResolveLocate @ 0x14089933C
 * Callers:
 *     BiConvertRegistryDataToElement @ 0x140B66674 (BiConvertRegistryDataToElement.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x14089757C (BiGetCurrentBootEntryIdentifier.c)
 *     BiEnumerateDiskPartitions @ 0x1408984DC (BiEnumerateDiskPartitions.c)
 *     BiGetBcdDeviceType @ 0x140898600 (BiGetBcdDeviceType.c)
 *     BiGetPhysicalDiskNumber @ 0x140898BE8 (BiGetPhysicalDiskNumber.c)
 *     BiGetLocateTarget @ 0x1408992A8 (BiGetLocateTarget.c)
 *     SyspartEnumerateDisks @ 0x14089AB98 (SyspartEnumerateDisks.c)
 *     BiGetObjectIdentifier @ 0x1409A4F60 (BiGetObjectIdentifier.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiTranslateSymbolicLink @ 0x140B244E4 (BiTranslateSymbolicLink.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiResolveLocate(__int64 a1, void *a2, __int64 a3, unsigned int *a4)
{
  void *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rax
  NTSTATUS ObjectIdentifier; // ebx
  unsigned int v12; // ecx
  void *v13; // rsi
  __int64 v14; // rax
  unsigned int v15; // ebx
  unsigned int v16; // edi
  void *Pool2; // rax
  const wchar_t *v19; // rax
  int LocateTarget; // eax
  const wchar_t *BcdDeviceType; // rax
  int PhysicalDiskNumber; // eax
  int v23; // eax
  __int64 v24; // [rsp+20h] [rbp-E0h] BYREF
  void *Src; // [rsp+28h] [rbp-D8h]
  void *v26; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int *v27; // [rsp+38h] [rbp-C8h]
  __int128 Buf2; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v29[112]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  __int64 v32; // [rsp+D0h] [rbp-30h]
  void *v33; // [rsp+D8h] [rbp-28h]
  char v34; // [rsp+E0h] [rbp-20h]
  char v35; // [rsp+E1h] [rbp-1Fh]
  __int128 Buf1; // [rsp+F0h] [rbp-10h] BYREF

  v27 = a4;
  HIDWORD(v24) = 0;
  LOBYTE(v24) = 0;
  v7 = 0LL;
  v26 = 0LL;
  Src = 0LL;
  Buf2 = 0LL;
  v8 = 0LL;
  Buf1 = 0LL;
  memset_0(v29, 0, 0x98uLL);
  v10 = *(unsigned int *)(a1 + 24);
  if ( !(_DWORD)v10 )
    goto LABEL_26;
  v8 = v10 + a1;
  if ( !a2 )
  {
LABEL_3:
    ObjectIdentifier = -1073741637;
LABEL_21:
    BiLogMessage(3LL, L"BiResolveLocate: Status: %x", (unsigned int)ObjectIdentifier);
    return (unsigned int)ObjectIdentifier;
  }
  if ( !v8 )
  {
LABEL_26:
    LocateTarget = BiGetLocateTarget(a2, a1, &v26, (char *)&v24);
    ObjectIdentifier = LocateTarget;
    if ( LocateTarget < 0 )
    {
      BiLogMessage(2LL, L"BiResolveLocate: Failed to get locate target %x", (unsigned int)LocateTarget);
      v7 = v26;
      goto LABEL_17;
    }
    if ( v8 )
      BcdDeviceType = BiGetBcdDeviceType(*(_DWORD *)v8);
    else
      BcdDeviceType = L"none";
    v7 = v26;
    BiLogMessage(2LL, L"BiResolveLocate: LOCATE=[%ws] ParentType: %ws", v26, BcdDeviceType, v24);
    v30 = v27;
    v32 = v8;
    v31 = a3;
    v33 = v7;
    if ( v8 )
    {
      if ( *(_DWORD *)v8 != 3 )
      {
        PhysicalDiskNumber = BiGetPhysicalDiskNumber((PCWSTR)(v8 + 20), (_DWORD *)&v24 + 1);
        ObjectIdentifier = PhysicalDiskNumber;
        if ( PhysicalDiskNumber < 0 )
        {
          BiLogMessage(
            4LL,
            L"BiResolveLocate: Failed to resolve disk number for %ws. Status %x",
            v8 + 20,
            (unsigned int)PhysicalDiskNumber);
          goto LABEL_17;
        }
        v23 = BiEnumerateDiskPartitions(HIDWORD(v24));
        goto LABEL_38;
      }
      v34 = 1;
    }
    v23 = SyspartEnumerateDisks(BiResolveLocateFileCallback, v29);
LABEL_38:
    ObjectIdentifier = v23;
    if ( v23 < 0 )
      goto LABEL_17;
    if ( !v35 )
    {
      ObjectIdentifier = -1073741275;
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  v12 = *(_DWORD *)v8;
  if ( *(_DWORD *)v8 != 12 )
  {
    if ( v12 != 3 && v12 != 2 )
    {
      ObjectIdentifier = -1073741637;
      v19 = BiGetBcdDeviceType(v12);
      BiLogMessage(4LL, L"BiResolveLocate: Unsupported parent device type %ws. Status: %x", v19, 3221225659LL);
      goto LABEL_21;
    }
    goto LABEL_26;
  }
  if ( ((unsigned __int8)a2 & 1) != 0 )
    goto LABEL_3;
  ObjectIdentifier = BiGetObjectIdentifier(a2, &Buf1, v9);
  if ( ObjectIdentifier < 0 )
    goto LABEL_21;
  ObjectIdentifier = BiGetCurrentBootEntryIdentifier(&Buf2);
  if ( ObjectIdentifier < 0 )
    goto LABEL_21;
  if ( memcmp(&Buf1, &Buf2, 0x10uLL) )
    goto LABEL_3;
  v13 = Src;
  ObjectIdentifier = BiTranslateSymbolicLink(L"\\Device\\BootDevice");
  if ( ObjectIdentifier >= 0 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *((_WORD *)Src + v14) );
    v15 = 2 * v14 + 2;
    v16 = 2 * v14 + 22;
    Pool2 = (void *)ExAllocatePool2(0x102uLL);
    *(_QWORD *)a3 = Pool2;
    if ( !Pool2 )
    {
      ObjectIdentifier = -1073741801;
      goto LABEL_17;
    }
    memset_0(Pool2, 0, v16);
    **(_DWORD **)a3 = 2;
    memmove((void *)(*(_QWORD *)a3 + 20LL), v13, v15);
    *v27 = v16;
    BiLogMessage(2LL, L"BiResolveLocate: {current} entry MEMDISK device resolved");
LABEL_16:
    ObjectIdentifier = 0;
  }
LABEL_17:
  if ( v7 && (_BYTE)v24 )
    ExFreePoolWithTag(v7, 0x4B444342u);
  if ( ObjectIdentifier < 0 )
    goto LABEL_21;
  return (unsigned int)ObjectIdentifier;
}
