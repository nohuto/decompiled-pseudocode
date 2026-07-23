/*
 * XREFs of KiLockExtendedServiceTable @ 0x140542A48
 * Callers:
 *     KiLockServiceTable @ 0x140718194 (KiLockServiceTable.c)
 * Callees:
 *     RtlCaptureImageExceptionValues @ 0x14042B178 (RtlCaptureImageExceptionValues.c)
 *     RtlSectionTableFromVirtualAddress @ 0x14042B410 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     RtlpConvertFunctionEntry @ 0x1404B6FE0 (RtlpConvertFunctionEntry.c)
 *     KiSwInterruptPresent @ 0x140C86394 (KiSwInterruptPresent.c)
 */

void __fastcall KiLockExtendedServiceTable(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rsi
  PIMAGE_NT_HEADERS v5; // r15
  _IMAGE_SECTION_HEADER *v6; // r12
  _IMAGE_SECTION_HEADER *v7; // rbx
  _IMAGE_SECTION_HEADER *v8; // rdi
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  unsigned int v12; // ebx
  _QWORD *v13; // rdi
  PIMAGE_SECTION_HEADER v14; // rax
  char v15; // r11
  unsigned __int64 v16; // rcx
  _QWORD *v17; // r9
  const char *v18; // rax
  unsigned __int64 v19; // r8
  unsigned int i; // r14d
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // ebx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned int *v28; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-38h]
  unsigned __int64 v31; // [rsp+50h] [rbp-30h]
  unsigned __int64 *v32; // [rsp+58h] [rbp-28h]
  ULONG v33; // [rsp+C8h] [rbp+48h] BYREF

  if ( !a4 )
  {
    v4 = (unsigned __int64)&qword_140E0F3C0;
    v5 = RtlImageNtHeader((PVOID)0x140000000LL);
    v6 = 0LL;
    v7 = (_IMAGE_SECTION_HEADER *)((char *)&v5->OptionalHeader + v5->FileHeader.SizeOfOptionalHeader);
    v8 = &v7[v5->FileHeader.NumberOfSections];
    if ( (int)KiSwInterruptPresent() >= 0 )
    {
      while ( v7 != v8 )
      {
        if ( *(_DWORD *)v7->Name == 1346589515 && !*(_DWORD *)&v7->Name[4] )
        {
          v6 = v7;
          break;
        }
        ++v7;
      }
    }
    RtlImageNtHeader((PVOID)0x140000000LL);
    RtlCaptureImageExceptionValues((void *)0x140000000LL, &v29, &v33);
    v9 = v29;
    v30 = 0x140000000uLL;
    v31 = v29 + 12LL * (v33 / 0xC);
    v32 = (unsigned __int64 *)&v28;
    while ( v9 && v9 != v31 )
    {
      v10 = RtlpConvertFunctionEntry(v9, v30);
      *v32 = v10;
      v9 = v29 + 12;
      v29 += 12LL;
      v11 = *v28;
      v12 = v28[1] - v11;
      v13 = (_QWORD *)(0x140000000LL + v11);
      if ( v6 )
      {
        v14 = RtlSectionTableFromVirtualAddress(v5, (PVOID)0x140000000LL, v11);
        v9 = v29;
        if ( v14 == v6 )
          continue;
      }
      v15 = (unsigned __int64)&qword_140E0F3C0 & 0x3F;
      v16 = (unsigned __int64)v13 + v12;
      v17 = v13;
      v18 = (const char *)v13;
      if ( (unsigned __int64)v13 < v16 )
      {
        do
        {
          _mm_prefetch(v18, 0);
          v18 += 64;
        }
        while ( (unsigned __int64)v18 < v16 );
      }
      v19 = v4;
      for ( i = v12 >> 7; i; --i )
      {
        v21 = 8LL;
        do
        {
          v22 = v17[1] ^ __ROL8__(*v17 ^ v19, v15);
          v17 += 2;
          v19 = __ROL8__(v22, v15);
          --v21;
        }
        while ( v21 );
        v23 = __ROL8__(v4 ^ ((char *)v17 - (char *)v13), 17);
        LOBYTE(v23) = v15 ^ (((v23 ^ v4 ^ ((char *)v17 - (char *)v13)) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v23 ^ v4 ^ ((_BYTE)v17 - (_BYTE)v13);
        v15 = 1;
        v24 = v23 & 0x3F;
        if ( v24 )
          v15 = v24;
      }
      v25 = v12 & 0x7F;
      if ( v25 >= 8 )
      {
        v26 = (unsigned __int64)v25 >> 3;
        do
        {
          v19 = __ROL8__(*v17++ ^ v19, v15);
          v25 -= 8;
          --v26;
        }
        while ( v26 );
      }
      for ( ; v25; --v25 )
      {
        v27 = *(unsigned __int8 *)v17;
        v17 = (_QWORD *)((char *)v17 + 1);
        v19 = __ROL8__(v27 ^ v19, v15);
      }
      v4 = v19;
    }
    qword_140E0F3C0 = v4;
  }
}
