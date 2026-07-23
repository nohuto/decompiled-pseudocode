/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBase @ 0x1800D37E0
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800D376C (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     RtlCompareMemory @ 0x1801630E0 (RtlCompareMemory.c)
 */

int __fastcall WerEscalationReadImageVersionInfoForModuleBase(char *BaseOfImage, __int64 a2)
{
  size_t VirtualAddress; // rax
  PIMAGE_NT_HEADERS v5; // rcx
  __int64 SizeOfImage; // r9
  char *v7; // r8
  char *v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // r11d
  size_t v11; // rdx
  unsigned int i; // edx
  __int64 v13; // rcx
  char *v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // r10d
  size_t v18; // rcx
  char *v19; // rdx
  unsigned int v20; // r11d
  unsigned int v21; // edx
  char *v22; // r10
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  char *v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned int *v27; // rcx
  unsigned int *v28; // rdx
  __int64 v29; // rbp
  char *v30; // rcx
  char *v31; // rbp
  char *v32; // rcx
  char *v33; // rdx
  _WORD *v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int16 v36; // r8
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rsi
  size_t v40; // rcx
  int v41; // edi
  char *v42; // r10
  size_t v43; // rcx
  size_t v44; // rcx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+8h] BYREF

  *(_OWORD *)a2 = 0LL;
  OutHeaders = 0LL;
  LODWORD(VirtualAddress) = RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &OutHeaders);
  if ( (VirtualAddress & 0x80000000) == 0LL )
  {
    v5 = OutHeaders;
    *(_DWORD *)a2 = OutHeaders->FileHeader.TimeDateStamp;
    LODWORD(VirtualAddress) = v5->OptionalHeader.CheckSum;
    *(_DWORD *)(a2 + 4) = VirtualAddress;
    SizeOfImage = v5->OptionalHeader.SizeOfImage;
    if ( v5->OptionalHeader.NumberOfRvaAndSizes > 2 )
    {
      VirtualAddress = v5->OptionalHeader.DataDirectory[2].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        if ( v5->OptionalHeader.DataDirectory[2].Size >= 0x10 )
        {
          v7 = &BaseOfImage[VirtualAddress];
          VirtualAddress += (size_t)(BaseOfImage + 16);
          v8 = &BaseOfImage[SizeOfImage];
          if ( VirtualAddress >= (unsigned __int64)BaseOfImage
            && VirtualAddress <= (unsigned __int64)v8
            && VirtualAddress >= (unsigned __int64)v7
            && v7 >= BaseOfImage
            && v7 <= v8
            && v8 >= BaseOfImage )
          {
            if ( v7 )
            {
              v9 = *((unsigned __int16 *)v7 + 6);
              v10 = *((unsigned __int16 *)v7 + 7);
              LODWORD(VirtualAddress) = v10 + v9;
              if ( (unsigned int)v9 < v10 + (unsigned int)v9 )
              {
                VirtualAddress = (size_t)&v7[8 * v9 + 16];
                v11 = VirtualAddress + 8;
                if ( VirtualAddress + 8 >= (unsigned __int64)BaseOfImage
                  && v11 <= (unsigned __int64)v8
                  && v11 >= VirtualAddress
                  && VirtualAddress >= (unsigned __int64)BaseOfImage
                  && VirtualAddress <= (unsigned __int64)v8
                  && VirtualAddress )
                {
                  for ( i = 0; i < v10; ++i )
                  {
                    if ( *(int *)VirtualAddress >= 0 && (unsigned __int16)*(_DWORD *)VirtualAddress == 16 )
                    {
                      LODWORD(VirtualAddress) = *(_DWORD *)(VirtualAddress + 4);
                      v13 = (unsigned int)VirtualAddress;
                      if ( (VirtualAddress & 0x80000000) != 0LL )
                      {
                        LODWORD(v13) = VirtualAddress & 0x7FFFFFFF;
                        v14 = &BaseOfImage[SizeOfImage];
                        v15 = (unsigned __int64)&v7[v13];
                        VirtualAddress = v15 + 16;
                        if ( v15 + 16 >= (unsigned __int64)BaseOfImage
                          && VirtualAddress <= (unsigned __int64)v14
                          && VirtualAddress >= v15
                          && v15 >= (unsigned __int64)BaseOfImage
                          && v15 <= (unsigned __int64)v14 )
                        {
                          v16 = *(unsigned __int16 *)(v15 + 12);
                          v17 = *(unsigned __int16 *)(v15 + 14);
                          LODWORD(VirtualAddress) = v16 + v17;
                          if ( (unsigned int)v16 < (unsigned int)v16 + v17 )
                          {
                            VirtualAddress = v15 + 16 + 8 * v16;
                            v18 = VirtualAddress + 8;
                            v19 = &BaseOfImage[SizeOfImage];
                            if ( VirtualAddress + 8 >= (unsigned __int64)BaseOfImage
                              && v18 <= (unsigned __int64)v19
                              && v18 >= VirtualAddress
                              && VirtualAddress >= (unsigned __int64)BaseOfImage
                              && VirtualAddress <= (unsigned __int64)v19
                              && VirtualAddress )
                            {
                              v20 = v17;
                              v21 = 0;
                              v22 = &BaseOfImage[SizeOfImage];
                              while ( v21 < v20 )
                              {
                                if ( *(int *)VirtualAddress >= 0 && (unsigned __int16)*(_DWORD *)VirtualAddress == 1 )
                                {
                                  LODWORD(VirtualAddress) = *(_DWORD *)(VirtualAddress + 4);
                                  v23 = (unsigned int)VirtualAddress;
                                  if ( (VirtualAddress & 0x80000000) != 0LL )
                                  {
                                    LODWORD(v23) = VirtualAddress & 0x7FFFFFFF;
                                    v24 = (unsigned __int64)&v7[v23];
                                    VirtualAddress = (size_t)&v7[v23 + 16];
                                    v25 = &BaseOfImage[SizeOfImage];
                                    if ( VirtualAddress >= (unsigned __int64)BaseOfImage
                                      && VirtualAddress <= (unsigned __int64)v25
                                      && VirtualAddress >= v24
                                      && v24 >= (unsigned __int64)BaseOfImage
                                      && v24 <= (unsigned __int64)v25 )
                                    {
                                      LODWORD(VirtualAddress) = *(unsigned __int16 *)(v24 + 12);
                                      if ( (_DWORD)VirtualAddress + *(unsigned __int16 *)(v24 + 14) )
                                      {
                                        v26 = v24 + 16;
                                        VirtualAddress = v26 + 8;
                                        if ( v26 + 8 >= (unsigned __int64)BaseOfImage
                                          && VirtualAddress <= (unsigned __int64)&BaseOfImage[SizeOfImage]
                                          && VirtualAddress >= v26
                                          && v26 >= (unsigned __int64)BaseOfImage )
                                        {
                                          if ( v26 )
                                          {
                                            VirtualAddress = *(unsigned int *)(v26 + 4);
                                            if ( (VirtualAddress & 0x80000000) == 0LL )
                                            {
                                              v27 = (unsigned int *)&v7[VirtualAddress];
                                              VirtualAddress += (size_t)(v7 + 16);
                                              v28 = (unsigned int *)&BaseOfImage[SizeOfImage];
                                              if ( VirtualAddress >= (unsigned __int64)BaseOfImage
                                                && VirtualAddress <= (unsigned __int64)v28
                                                && VirtualAddress >= (unsigned __int64)v27
                                                && v27 >= (unsigned int *)BaseOfImage
                                                && v27 <= v28
                                                && v27[1] >= 0x5C )
                                              {
                                                v29 = *v27;
                                                v30 = &BaseOfImage[SizeOfImage];
                                                v31 = &BaseOfImage[v29];
                                                VirtualAddress = (size_t)(v31 + 92);
                                                if ( v31 + 92 >= BaseOfImage
                                                  && VirtualAddress <= (unsigned __int64)v30
                                                  && VirtualAddress >= (unsigned __int64)v31
                                                  && v31 >= BaseOfImage
                                                  && v31 <= v30 )
                                                {
                                                  if ( v31 )
                                                  {
                                                    VirtualAddress = (size_t)(v31 + 6);
                                                    v32 = v31 + 38;
                                                    v33 = &BaseOfImage[SizeOfImage];
                                                    if ( v31 + 38 >= BaseOfImage
                                                      && v32 <= v33
                                                      && (unsigned __int64)v32 >= VirtualAddress
                                                      && VirtualAddress >= (unsigned __int64)BaseOfImage
                                                      && VirtualAddress <= (unsigned __int64)v33 )
                                                    {
                                                      VirtualAddress = wcslen(L"VS_VERSION_INFO");
                                                      v34 = v31 + 6;
                                                      v35 = 2 * VirtualAddress;
                                                      LODWORD(VirtualAddress) = 65532;
                                                      if ( v35 >= 0xFFFE )
                                                        LOWORD(v35) = -4;
                                                      if ( v31 != (char *)-6LL )
                                                      {
                                                        VirtualAddress = 16LL;
                                                        do
                                                        {
                                                          if ( !*v34 )
                                                            break;
                                                          ++v34;
                                                          --VirtualAddress;
                                                        }
                                                        while ( VirtualAddress );
                                                        if ( VirtualAddress )
                                                        {
                                                          v36 = 2 * (16 - VirtualAddress);
                                                          v37 = (unsigned __int64)(unsigned __int16)v35 >> 1;
                                                          v38 = v37;
                                                          v39 = (unsigned __int64)v36 >> 1;
                                                          if ( v37 > v39 )
                                                            v38 = (unsigned __int64)v36 >> 1;
                                                          VirtualAddress = RtlCompareMemory(
                                                                             L"VS_VERSION_INFO",
                                                                             v31 + 6,
                                                                             2 * v38);
                                                          v40 = VirtualAddress >> 1;
                                                          if ( VirtualAddress >> 1 < v38 )
                                                          {
                                                            LODWORD(VirtualAddress) = *(unsigned __int16 *)&v31[2 * v40 + 6];
                                                            v41 = aVsVersionInfo[v40] - (_DWORD)VirtualAddress;
                                                          }
                                                          else
                                                          {
                                                            v41 = v37 - v39;
                                                          }
                                                          if ( !v41 )
                                                          {
                                                            *(_DWORD *)(a2 + 8) = *((_DWORD *)v31 + 12);
                                                            LODWORD(VirtualAddress) = *((_DWORD *)v31 + 13);
                                                            *(_DWORD *)(a2 + 12) = VirtualAddress;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  return VirtualAddress;
                                }
                                VirtualAddress += 8LL;
                                v44 = VirtualAddress + 8;
                                if ( VirtualAddress + 8 < (unsigned __int64)BaseOfImage
                                  || v44 > (unsigned __int64)v22
                                  || v44 < VirtualAddress
                                  || VirtualAddress < (unsigned __int64)BaseOfImage
                                  || VirtualAddress > (unsigned __int64)v22 )
                                {
                                  return VirtualAddress;
                                }
                                ++v21;
                              }
                            }
                          }
                        }
                      }
                      return VirtualAddress;
                    }
                    VirtualAddress += 8LL;
                    v42 = &BaseOfImage[SizeOfImage];
                    v43 = VirtualAddress + 8;
                    if ( VirtualAddress + 8 < (unsigned __int64)BaseOfImage
                      || v43 > (unsigned __int64)v42
                      || v43 < VirtualAddress
                      || VirtualAddress < (unsigned __int64)BaseOfImage
                      || VirtualAddress > (unsigned __int64)v42 )
                    {
                      return VirtualAddress;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return VirtualAddress;
}
