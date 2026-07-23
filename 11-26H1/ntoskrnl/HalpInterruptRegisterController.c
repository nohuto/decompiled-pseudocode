/*
 * XREFs of HalpInterruptRegisterController @ 0x14059D384
 * Callers:
 *     HalpApicRegisterIoUnit @ 0x1405A4488 (HalpApicRegisterIoUnit.c)
 *     HalpPicDiscover @ 0x1405A4984 (HalpPicDiscover.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     HalpInterruptLookupController @ 0x140433DA8 (HalpInterruptLookupController.c)
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 *     HalpIsPartitionCpuManager @ 0x140587720 (HalpIsPartitionCpuManager.c)
 *     HalpExtBuildResourceIdString @ 0x14058964C (HalpExtBuildResourceIdString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpInterruptRegisterController(__int64 a1)
{
  __int64 result; // rax
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  __int16 v6; // r8
  unsigned __int16 Length; // r14
  unsigned int v8; // r15d
  void *MemoryInternal; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned int v12; // eax
  const void *v13; // rdx
  __int64 *v14; // rax
  size_t SizeInWords; // [rsp+38h] [rbp-110h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-F0h] BYREF
  WCHAR SourceString[80]; // [rsp+70h] [rbp-D8h] BYREF

  DestinationString = 0LL;
  if ( !HalpInterruptRegistrationAllowed )
  {
    HalpInterruptRegistrationProblem = 2;
    result = 3221225865LL;
    if ( !a1 )
      return result;
    goto LABEL_55;
  }
  if ( !a1 )
  {
    result = 3221225485LL;
    HalpInterruptRegistrationProblem = 1;
    return result;
  }
  if ( *(_DWORD *)a1 != 1 || *(_DWORD *)(a1 + 4) != 256 )
  {
    HalpInterruptRegistrationProblem = 3;
    goto LABEL_54;
  }
  if ( (*(_DWORD *)(a1 + 236) & 0xFFFFF000) != 0 )
  {
    HalpInterruptRegistrationProblem = 17;
    goto LABEL_54;
  }
  v3 = *(_DWORD *)(a1 + 228);
  if ( !v3 )
  {
    HalpInterruptRegistrationProblem = 4;
    goto LABEL_54;
  }
  if ( (unsigned int)(v3 - 1) <= 1 )
  {
    v4 = *(_DWORD *)(a1 + 232);
    if ( v4 == -1 )
    {
      HalpInterruptRegistrationProblem = 5;
      goto LABEL_54;
    }
    if ( !HalpInterruptLookupController(v4) )
    {
      if ( *(_QWORD *)(a1 + 88) )
      {
        if ( *(_QWORD *)(a1 + 96) )
        {
          if ( *(_QWORD *)(a1 + 64) )
          {
            HalpInterruptRegistrationProblem = 16;
          }
          else if ( (v6 & 1) == 0 || *(_QWORD *)(a1 + 8) )
          {
            if ( *(_QWORD *)(a1 + 16) )
            {
              if ( (v6 & 2) != 0 )
              {
                if ( !*(_QWORD *)(a1 + 24) )
                {
                  HalpInterruptRegistrationProblem = 9;
                  goto LABEL_54;
                }
                if ( !*(_DWORD *)(a1 + 240) )
                {
                  HalpInterruptRegistrationProblem = 10;
                  goto LABEL_54;
                }
              }
              if ( !*(_DWORD *)(a1 + 252) || *(_QWORD *)(a1 + 128) && *(_QWORD *)(a1 + 136) )
              {
                if ( (v6 & 0x400) == 0 || *(_QWORD *)(a1 + 176) )
                {
                  LODWORD(SizeInWords) = 75;
                  HalpExtBuildResourceIdString(
                    1413894989,
                    0,
                    0x4000u,
                    *(_WORD *)(a1 + 228),
                    1u,
                    0,
                    v5,
                    SizeInWords,
                    SourceString);
                  RtlInitUnicodeString(&DestinationString, SourceString);
                  if ( (*(_DWORD *)(a1 + 236) & 0x100) != 0 && HalpIsPartitionCpuManager() && qword_140FBB408 )
                    *(_DWORD *)(a1 + 236) ^= 0x100u;
                  Length = DestinationString.Length;
                  v8 = (((*(_DWORD *)(a1 + 224) + 383) & 0xFFFFFFF8) + DestinationString.Length + 9) & 0xFFFFFFF8;
                  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v8, 1u);
                  v10 = (__int64)MemoryInternal;
                  if ( MemoryInternal )
                  {
                    memset_0(MemoryInternal, 0, v8);
                    v11 = (v10 + 383) & 0xFFFFFFFFFFFFFFF8uLL;
                    *(_QWORD *)(v10 + 16) = v11;
                    *(_QWORD *)(v10 + 360) = (*(unsigned int *)(a1 + 224) + 7LL + v11) & 0xFFFFFFFFFFFFFFF8uLL;
                    *(_QWORD *)(v10 + 272) = v10 + 264;
                    *(_QWORD *)(v10 + 264) = v10 + 264;
                    *(_QWORD *)(v10 + 288) = v10 + 280;
                    *(_QWORD *)(v10 + 280) = v10 + 280;
                    *(_DWORD *)(v10 + 24) = *(_DWORD *)(a1 + 224);
                    *(_OWORD *)(v10 + 32) = *(_OWORD *)(a1 + 8);
                    *(_OWORD *)(v10 + 48) = *(_OWORD *)(a1 + 24);
                    *(_OWORD *)(v10 + 64) = *(_OWORD *)(a1 + 40);
                    *(_OWORD *)(v10 + 80) = *(_OWORD *)(a1 + 56);
                    *(_OWORD *)(v10 + 96) = *(_OWORD *)(a1 + 72);
                    *(_OWORD *)(v10 + 112) = *(_OWORD *)(a1 + 88);
                    *(_OWORD *)(v10 + 128) = *(_OWORD *)(a1 + 104);
                    *(_OWORD *)(v10 + 144) = *(_OWORD *)(a1 + 120);
                    *(_OWORD *)(v10 + 160) = *(_OWORD *)(a1 + 136);
                    *(_OWORD *)(v10 + 176) = *(_OWORD *)(a1 + 152);
                    *(_OWORD *)(v10 + 192) = *(_OWORD *)(a1 + 168);
                    *(_OWORD *)(v10 + 208) = *(_OWORD *)(a1 + 184);
                    *(_OWORD *)(v10 + 224) = *(_OWORD *)(a1 + 200);
                    *(_DWORD *)(v10 + 244) = *(_DWORD *)(a1 + 236);
                    *(_DWORD *)(v10 + 240) = *(_DWORD *)(a1 + 228);
                    *(_DWORD *)(v10 + 252) = *(_DWORD *)(a1 + 240);
                    *(_DWORD *)(v10 + 256) = *(_DWORD *)(a1 + 232);
                    *(_DWORD *)(v10 + 304) = *(_DWORD *)(a1 + 244);
                    *(_DWORD *)(v10 + 308) = *(_DWORD *)(a1 + 248);
                    *(_QWORD *)(v10 + 296) = 0LL;
                    *(_DWORD *)(v10 + 312) = *(_DWORD *)(a1 + 252);
                    v12 = *(_DWORD *)(a1 + 224);
                    if ( v12 )
                    {
                      v13 = *(const void **)(a1 + 216);
                      if ( v13 )
                        memmove(*(void **)(v10 + 16), v13, v12);
                    }
                    *(_WORD *)(v10 + 352) = 0;
                    *(_WORD *)(v10 + 354) = Length + 2;
                    RtlCopyUnicodeString((PUNICODE_STRING)(v10 + 352), &DestinationString);
                    v14 = (__int64 *)qword_140FBD138;
                    if ( *(ULONG_PTR **)qword_140FBD138 != &HalpRegisteredInterruptControllers )
                      __fastfail(3u);
                    ++HalpInterruptControllerCount;
                    *(_QWORD *)(v10 + 8) = qword_140FBD138;
                    *(_QWORD *)v10 = &HalpRegisteredInterruptControllers;
                    *v14 = v10;
                    result = 0LL;
                    qword_140FBD138 = v10;
                    HalpInterruptRegistrationProblem = 0;
                  }
                  else
                  {
                    HalpInterruptRegistrationProblem = 6;
                    HalpInterruptRegistrationType = *(_DWORD *)(a1 + 228);
                    result = 3221225626LL;
                  }
                  goto LABEL_55;
                }
                HalpInterruptRegistrationProblem = 24;
              }
              else
              {
                HalpInterruptRegistrationProblem = 14;
              }
              goto LABEL_54;
            }
            HalpInterruptRegistrationProblem = 8;
          }
          else
          {
            HalpInterruptRegistrationProblem = 7;
          }
        }
        else
        {
          HalpInterruptRegistrationProblem = 12;
        }
      }
      else
      {
        HalpInterruptRegistrationProblem = 11;
      }
LABEL_54:
      result = 3221225485LL;
      goto LABEL_55;
    }
    result = 3221225661LL;
    HalpInterruptRegistrationProblem = 5;
  }
  else
  {
    result = 3221225659LL;
    HalpInterruptRegistrationProblem = 23;
  }
LABEL_55:
  HalpInterruptRegistrationType = *(_DWORD *)(a1 + 228);
  return result;
}
