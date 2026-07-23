/*
 * XREFs of WmipGetSMBiosEventlog @ 0x140828BC8
 * Callers:
 *     WmipQueryWmiDataBlock @ 0x140AC6630 (WmipQueryWmiDataBlock.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     MmUnmapIoSpace @ 0x140345690 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     RtlCopyDeviceMemory @ 0x14055BC1C (RtlCopyDeviceMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     WmipFindSMBiosStructure @ 0x1408289B4 (WmipFindSMBiosStructure.c)
 */

__int64 __fastcall WmipGetSMBiosEventlog(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  int v6; // r11d
  __int128 *v7; // r9
  size_t v8; // r12
  int v9; // r13d
  unsigned int v10; // ebx
  char v11; // r10
  int v12; // edx
  unsigned int v13; // r14d
  char *v14; // rsi
  __int128 v15; // xmm0
  char *v16; // rax
  char *v17; // rbx
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+50h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+58h] BYREF

  BaseAddress = 0LL;
  v18 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  result = WmipFindSMBiosStructure(15, &v18, &BaseAddress, &NumberOfBytes);
  if ( (int)result < 0 )
    return result;
  v5 = v18;
  v6 = *(unsigned __int8 *)(v18 + 1);
  v7 = (__int128 *)(v18 + 4);
  v8 = *(unsigned __int16 *)(v18 + 4);
  v9 = *(unsigned __int8 *)(v18 + 10);
  v10 = *(_DWORD *)(v18 + 16);
  if ( (unsigned __int8)v6 < 0x17u )
  {
    LOWORD(v12) = 0;
    v11 = 0;
  }
  else
  {
    v11 = 1;
    v12 = (unsigned __int16)(*(unsigned __int8 *)(v18 + 21) * *(unsigned __int8 *)(v18 + 22));
    if ( v6 != v12 + 23 )
    {
      if ( BaseAddress )
        MmUnmapIoSpace(BaseAddress, (unsigned int)NumberOfBytes);
      ExReleaseResourceLite(&WmipSMBiosLock);
      KeLeaveCriticalRegion();
      return 3221225473LL;
    }
  }
  v13 = (unsigned __int16)v12 + v8 + 23;
  if ( *a2 < v13 )
  {
    if ( BaseAddress )
      MmUnmapIoSpace(BaseAddress, (unsigned int)NumberOfBytes);
    ExReleaseResourceLite(&WmipSMBiosLock);
    KeLeaveCriticalRegion();
    result = 3221225507LL;
  }
  else
  {
    *(_BYTE *)(a1 + 3) = 0;
    *(_WORD *)a1 = v12;
    v14 = (char *)(a1 + (unsigned __int16)v12 + 23LL);
    *(_BYTE *)(a1 + 2) = v11;
    if ( v11 == 1 )
    {
      memmove((void *)(a1 + 4), v7, *(unsigned __int8 *)(v5 + 1) - 4LL);
    }
    else
    {
      v15 = *v7;
      *(_WORD *)(a1 + 20) = 0;
      *(_OWORD *)(a1 + 4) = v15;
      *(_BYTE *)(a1 + 22) = 0;
    }
    if ( BaseAddress )
      MmUnmapIoSpace(BaseAddress, (unsigned int)NumberOfBytes);
    ExReleaseResourceLite(&WmipSMBiosLock);
    KeLeaveCriticalRegion();
    if ( v9 == 3 && (NumberOfBytes = v10, v16 = (char *)MmMapIoSpaceEx(v10, v8, 4u), v17 = v16, v14) && v16 )
    {
      RtlCopyDeviceMemory(v14, v16, v8);
      MmUnmapIoSpace(v17, v8);
      result = 0LL;
    }
    else
    {
      result = 3221225473LL;
    }
  }
  *a2 = v13;
  return result;
}
