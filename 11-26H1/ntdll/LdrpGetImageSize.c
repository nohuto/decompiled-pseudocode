/*
 * XREFs of LdrpGetImageSize @ 0x18001C940
 * Callers:
 *     LdrpAccessResourceData @ 0x18001B110 (LdrpAccessResourceData.c)
 * Callees:
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18001D0F0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpGetImageSize(__int64 a1, __int64 *a2)
{
  NTSTATUS v4; // edi
  void *v5; // rbp
  __int64 SizeOfImage; // rbx
  unsigned __int16 Magic; // cx
  __int128 MemoryInformation; // [rsp+30h] [rbp-48h] BYREF
  __int128 v10; // [rsp+40h] [rbp-38h]
  __int128 v11; // [rsp+50h] [rbp-28h]
  PIMAGE_NT_HEADERS v12; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (void *)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  v12 = 0LL;
  SizeOfImage = 0LL;
  RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &v12);
  if ( !v12 )
    goto LABEL_10;
  if ( (a1 & 1) == 0 )
  {
    Magic = v12->OptionalHeader.Magic;
    if ( Magic == 267 || Magic == 523 )
    {
      SizeOfImage = v12->OptionalHeader.SizeOfImage;
      goto LABEL_6;
    }
LABEL_10:
    v4 = -1073741701;
    goto LABEL_6;
  }
  SizeOfImage = LdrpGetFileSizeFromLoadAsDataTable(a1);
  if ( !SizeOfImage )
  {
    MemoryInformation = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v4 = ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           v5,
           MemoryRegionInformation,
           &MemoryInformation,
           0x30uLL,
           0LL);
    if ( v4 < 0 )
      v4 = -1073741793;
    else
      SizeOfImage = v10;
  }
LABEL_6:
  *a2 = SizeOfImage;
  return (unsigned int)v4;
}
