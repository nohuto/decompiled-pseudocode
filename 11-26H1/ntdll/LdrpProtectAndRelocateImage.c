/*
 * XREFs of LdrpProtectAndRelocateImage @ 0x1800D5034
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     LdrpCompleteMapModule @ 0x18011C230 (LdrpCompleteMapModule.c)
 *     LdrpLoadCustomNtdllWithSectionHandle @ 0x18015C08C (LdrpLoadCustomNtdllWithSectionHandle.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpSetProtection @ 0x1800D51F8 (LdrpSetProtection.c)
 *     LdrRelocateImageWithBias @ 0x1800D5304 (LdrRelocateImageWithBias.c)
 *     LdrpGenericExceptionFilter @ 0x18015B628 (LdrpGenericExceptionFilter.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpProtectAndRelocateImage(PVOID BaseOfImage)
{
  bool v2; // di
  NTSTATUS v3; // eax
  LONGLONG v4; // rdx
  CHAR *v5; // r8
  NTSTATUS v6; // r9d
  NTSTATUS v7; // ebx
  int v8; // eax
  int v10; // edx
  NTSTATUS Conflict; // [rsp+20h] [rbp-48h]
  NTSTATUS Invalid; // [rsp+28h] [rbp-40h]
  PVOID v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v14 = 0LL;
  v2 = 0;
  v13 = BaseOfImage;
  v3 = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, MemoryWorkingSetExInformation, &v13, 0x10uLL, 0LL);
  if ( v3 >= 0 )
  {
    if ( (v14 & 1) != 0 )
      v2 = (v14 & 0x800000) != 0;
  }
  else
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrfind.c",
      1980,
      (__int64)"LdrpProtectAndRelocateImage",
      0,
      "Querying large page info failed with status 0x%08lx\n",
      v3);
  }
  if ( !v2 )
  {
    v8 = LdrpSetProtection(BaseOfImage);
    v7 = v8;
    if ( v8 < 0 )
    {
      v10 = 1990;
LABEL_12:
      LdrpLogInternal(
        "minkernel\\ldr\\ldrfind.c",
        v10,
        (__int64)"LdrpProtectAndRelocateImage",
        0,
        "Changing the protection of the executable at %p failed with status 0x%08lx\n",
        BaseOfImage,
        v8);
      goto LABEL_7;
    }
  }
  v7 = LdrRelocateImageWithBias(BaseOfImage, v4, v5, v6, Conflict, Invalid);
  if ( v7 >= 0 && !v2 )
  {
    v8 = LdrpSetProtection(BaseOfImage);
    v7 = v8;
    if ( v8 < 0 )
    {
      v10 = 2014;
      goto LABEL_12;
    }
  }
LABEL_7:
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 2054, (__int64)"LdrpProtectAndRelocateImage", 4, "Status: 0x%08lx\n", v7);
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 2055, (__int64)"LdrpProtectAndRelocateImage", 6, "%x\n", v7);
  return (unsigned int)v7;
}
