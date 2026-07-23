/*
 * XREFs of MiProtectSystemImage @ 0x1409E4B80
 * Callers:
 *     MiWriteProtectSystemImages @ 0x14086AA40 (MiWriteProtectSystemImages.c)
 *     MiDriverLoadSucceeded @ 0x1409E4E98 (MiDriverLoadSucceeded.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiActOnLargeKernelHalPages @ 0x14086A38C (MiActOnLargeKernelHalPages.c)
 *     MiComputeDriverProtection @ 0x140B47B54 (MiComputeDriverProtection.c)
 */

__int64 __fastcall MiProtectSystemImage(__int64 a1, int a2)
{
  char *v2; // rdi
  __int64 result; // rax
  PIMAGE_NT_HEADERS v5; // rbp
  int NumberOfSections; // r10d
  _OWORD *v7; // r14
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned int *v10; // r8
  char *v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 PteAddress; // r12
  unsigned __int64 v14; // r15
  int v15; // r11d
  int v16; // r13d
  unsigned int v17; // edx
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r8
  unsigned int v20; // edx
  unsigned int v21; // r9d
  unsigned int v22; // eax
  unsigned int v23; // esi
  unsigned int v24; // eax
  __int64 SectionAlignment; // rcx
  __int64 v26; // rax
  int v27; // edx
  unsigned int v28; // r9d
  unsigned __int64 v29; // r10
  unsigned int v30; // eax
  unsigned __int64 v31; // r10
  int v32; // [rsp+30h] [rbp-A8h]
  unsigned int v33; // [rsp+34h] [rbp-A4h]
  int v35; // [rsp+3Ch] [rbp-9Ch]
  int v36; // [rsp+40h] [rbp-98h]
  unsigned __int64 v37; // [rsp+48h] [rbp-90h]
  PIMAGE_NT_HEADERS v39; // [rsp+58h] [rbp-80h]
  char *v40; // [rsp+60h] [rbp-78h]
  unsigned __int64 v41; // [rsp+68h] [rbp-70h]
  _OWORD v42[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v43; // [rsp+90h] [rbp-48h]

  v2 = *(char **)(a1 + 48);
  memset(v42, 0, sizeof(v42));
  v43 = 0LL;
  result = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v2);
  if ( (_DWORD)result )
  {
    if ( v2 == PsNtosImageBase || v2 == PsHalImageBase )
      return MiActOnLargeKernelHalPages(v2);
  }
  else
  {
    v5 = RtlImageNtHeader(v2);
    v39 = v5;
    v36 = *(_DWORD *)(a1 + 104) & 0x8000000;
    result = v5->FileHeader.SizeOfOptionalHeader;
    NumberOfSections = v5->FileHeader.NumberOfSections;
    v7 = (_OWORD *)((char *)&v5->OptionalHeader.Magic + result);
    v8 = (v5->OptionalHeader.SizeOfImage >> 12) + ((v5->OptionalHeader.SizeOfImage & 0xFFF) != 0);
    v9 = (unsigned __int64)v2;
    v10 = (unsigned int *)v7 + 2;
    while ( NumberOfSections )
    {
      v11 = &v2[v10[1]];
      if ( (unsigned __int64)v11 < v9 )
        return result;
      result = v10[2];
      if ( (unsigned int)result < *v10 )
        result = *v10;
      --NumberOfSections;
      v9 = -(__int64)v5->OptionalHeader.SectionAlignment & (unsigned __int64)&v11[v5->OptionalHeader.SectionAlignment
                                                                                - 1
                                                                                + (unsigned int)result];
      v10 += 10;
    }
    v35 = -1073741824;
    v40 = (char *)v7 + 40 * v5->FileHeader.NumberOfSections - 1;
    PteAddress = MiGetPteAddress((unsigned __int64)v2);
    v32 = 0;
    v14 = 0LL;
    v16 = v15 + 1;
    v41 = PteAddress + 8 * v8;
    do
    {
      if ( v16 == 1 )
      {
        HIDWORD(v43) = 0;
        v7 = v42;
        v37 = 0LL;
        v33 = 0;
        v18 = MiGetPteAddress(v12) + 8;
      }
      else
      {
        v37 = (unsigned __int64)&v2[*((unsigned int *)v7 + 3)];
        v18 = MiGetPteAddress(v37);
        if ( v21 < v20 )
          v21 = v20;
        v17 = v32;
        v33 = v21;
      }
      if ( v14 && v18 > v14 )
      {
        v22 = MiComputeDriverProtection(v17);
        MiSetSystemCodeProtection(a1, v14, v14, v22, a2);
        if ( v14 == PteAddress )
          PteAddress += 8LL;
        v19 = (unsigned __int64)v40;
        v14 = 0LL;
        v32 = 0;
      }
      if ( v18 >= v41 )
      {
        result = (__int64)v42;
        if ( v7 != v42 )
          break;
      }
      v23 = *((_DWORD *)v7 + 9) & 0xE0000000;
      if ( !v36 && ((MiFlags & 0x20000) == 0 || (*((_DWORD *)v7 + 9) & 0x20000000) == 0) )
        v23 = *((_DWORD *)v7 + 9) & 0x60000000 | 0x80000000;
      if ( v23 == v35 && (v24 = v39->OptionalHeader.SectionAlignment, v24 <= 0x1000) )
      {
        SectionAlignment = v24;
      }
      else
      {
        v26 = MiGetPteAddress(v19);
        v29 = v26;
        if ( v26 == v18 )
        {
          v29 = v26 - 8;
          v14 = v18;
          v32 = v28 | v23 | v27;
        }
        if ( v29 >= PteAddress )
        {
          v30 = MiComputeDriverProtection(v28);
          MiSetSystemCodeProtection(a1, PteAddress, v31, v30, a2);
        }
        PteAddress = v18;
        v35 = v23;
        SectionAlignment = v39->OptionalHeader.SectionAlignment;
      }
      v7 = (_OWORD *)((char *)v7 + 40);
      result = SectionAlignment + v33;
      v12 = (-SectionAlignment & (result + v37 - 1)) - 1;
      v40 = (char *)v12;
      --v16;
    }
    while ( v16 );
  }
  return result;
}
