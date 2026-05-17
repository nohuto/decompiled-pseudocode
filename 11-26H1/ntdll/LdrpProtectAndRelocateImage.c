/*
 * XREFs of LdrpProtectAndRelocateImage @ 0x1800D8074
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrpCompleteMapModule @ 0x18011C480 (LdrpCompleteMapModule.c)
 *     LdrpLoadCustomNtdllWithSectionHandle @ 0x18015C1CC (LdrpLoadCustomNtdllWithSectionHandle.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpSetProtection @ 0x1800D8238 (LdrpSetProtection.c)
 *     LdrRelocateImageWithBias @ 0x1800D8344 (LdrRelocateImageWithBias.c)
 *     LdrpGenericExceptionFilter @ 0x18015B768 (LdrpGenericExceptionFilter.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpProtectAndRelocateImage(const void *ArgList)
{
  bool v2; // di
  int v3; // eax
  __int64 v4; // rdx
  int v5; // ebx
  int v6; // eax
  int v8; // edx
  const void *v9; // [rsp+48h] [rbp-20h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  v10 = 0LL;
  v2 = 0;
  v9 = ArgList;
  v3 = ZwQueryVirtualMemory(-1LL, 0LL, 4LL, &v9, 16LL, 0LL);
  if ( v3 >= 0 )
  {
    if ( (v10 & 1) != 0 )
      v2 = (v10 & 0x800000) != 0;
  }
  else
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrfind.c",
      1980,
      (__int64)"LdrpProtectAndRelocateImage",
      0,
      "Querying large page info failed with status 0x%08lx\n",
      v3);
  }
  if ( !v2 )
  {
    v6 = LdrpSetProtection(ArgList, 0LL);
    v5 = v6;
    if ( v6 < 0 )
    {
      v8 = 1990;
LABEL_12:
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrfind.c",
        v8,
        (__int64)"LdrpProtectAndRelocateImage",
        0,
        "Changing the protection of the executable at %p failed with status 0x%08lx\n",
        ArgList,
        v6);
      goto LABEL_7;
    }
  }
  v5 = LdrRelocateImageWithBias(ArgList);
  if ( v5 >= 0 && !v2 )
  {
    LOBYTE(v4) = 1;
    v6 = LdrpSetProtection(ArgList, v4);
    v5 = v6;
    if ( v6 < 0 )
    {
      v8 = 2014;
      goto LABEL_12;
    }
  }
LABEL_7:
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrfind.c",
    2054,
    (__int64)"LdrpProtectAndRelocateImage",
    4,
    "Status: 0x%08lx\n",
    v5);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrfind.c", 2055, (__int64)"LdrpProtectAndRelocateImage", 6, "%x\n", v5);
  return (unsigned int)v5;
}
