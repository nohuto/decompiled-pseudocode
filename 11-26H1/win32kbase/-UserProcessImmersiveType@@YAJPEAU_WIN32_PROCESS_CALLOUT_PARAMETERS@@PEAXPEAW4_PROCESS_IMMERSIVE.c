/*
 * XREFs of ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAU_PS_PKG_CLAIM@@@Z @ 0x1401D8598
 * Callers:
 *     ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401D885C (-xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z.c)
 *     xxxUserProcessCallout @ 0x1401D8EA0 (xxxUserProcessCallout.c)
 * Callees:
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x14015E530 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 */

int __fastcall UserProcessImmersiveType(
        struct _WIN32_PROCESS_CALLOUT_PARAMETERS *a1,
        void *a2,
        enum _PROCESS_IMMERSIVE_TYPE *a3,
        PVOID *a4,
        struct _PS_PKG_CLAIM *a5)
{
  bool v9; // r15
  bool v10; // di
  struct _PS_PKG_CLAIM *v11; // rbx
  int result; // eax
  __int64 v13; // rdx
  WORD v14; // si
  void *ProcessSectionBaseAddress; // rax
  WORD NumberOfSections; // r13
  PVOID TokenInformation; // [rsp+40h] [rbp-58h] BYREF
  PIMAGE_NT_HEADERS v18; // [rsp+48h] [rbp-50h]
  volatile void *Address[4]; // [rsp+50h] [rbp-48h] BYREF
  char v20; // [rsp+B0h] [rbp+18h] BYREF
  char v21; // [rsp+B8h] [rbp+20h] BYREF

  v21 = 0;
  TokenInformation = 0LL;
  v20 = 0;
  v9 = 0;
  v10 = 0;
  *(_DWORD *)a3 = 0;
  *(_DWORD *)a4 = 0;
  v11 = a5;
  *(_QWORD *)a5 = 0LL;
  result = SeQueryInformationToken(a2, TokenAppContainerNumber, a4);
  if ( result >= 0 )
  {
    result = SeQueryInformationToken(a2, TokenIntegrityLevel, &TokenInformation);
    if ( result >= 0 )
    {
      a5 = 0LL;
      Address[0] = 0LL;
      result = (unsigned __int16)AppModelPolicy_GetPolicy_Internal(
                                   (__int64)a2,
                                   v13,
                                   (_DWORD *)&TokenInformation + 1,
                                   (int *)Address,
                                   &a5);
      if ( (_WORD)result )
        result = (unsigned __int16)result | 0xC0070000;
      if ( result >= 0 )
      {
        PsQueryProcessAttributesByToken(a2, 0LL, &v20);
        if ( v20 )
        {
          result = RtlQueryPackageClaims(a2, 0LL, 0LL, 0LL, 0LL, 0LL, v11, 0LL);
          if ( result < 0 )
            return result;
          v10 = (*(_DWORD *)v11 & 0x800) != 0;
          v9 = (*(_DWORD *)v11 & 0x200) != 0;
        }
        PsQueryProcessAttributesByToken(a2, &v21, 0LL);
        v14 = 0;
        LOBYTE(a5) = v21 != 0;
        if ( (*((_DWORD *)a1 + 6) & 2) != 0 )
        {
          ProcessSectionBaseAddress = (void *)PsGetProcessSectionBaseAddress(*((_QWORD *)a1 + 2));
          v18 = RtlImageNtHeader(ProcessSectionBaseAddress);
          if ( !v18 )
            return -1073741823;
          Address[0] = (char *)&v18->OptionalHeader + v18->FileHeader.SizeOfOptionalHeader;
          NumberOfSections = v18->FileHeader.NumberOfSections;
          while ( v14 < NumberOfSections )
          {
            Address[1] = (volatile void *)1;
            ProbeForRead(Address[0], 1uLL, 4u);
            if ( RtlCompareMemory((const void *)Address[0], ".imrsiv", 8uLL) == 8 )
            {
              if ( *(_DWORD *)a4 )
              {
                *(_DWORD *)a3 = 1;
                return 0;
              }
              else if ( (unsigned int)TokenInformation >= 0x2000 )
              {
                *(_DWORD *)a3 = 2;
                return 0;
              }
              else
              {
                return -1073741823;
              }
            }
            Address[0] = (char *)Address[0] + 40;
            ++v14;
          }
        }
        if ( (_BYTE)a5 && (v10 || *(_DWORD *)a4) && HIDWORD(TokenInformation) != 196608 && !v9 )
          *(_DWORD *)a3 = 1;
        return 0;
      }
    }
  }
  return result;
}
