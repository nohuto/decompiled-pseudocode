/*
 * XREFs of ExtEnvRegisterIommu @ 0x140CB6E30
 * Callers:
 *     HalpIommuProcessIvhdEntry @ 0x1405AAB6C (HalpIommuProcessIvhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405B12F8 (HalpIvtProcessDrhdEntry.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 *     HalpExtBuildResourceIdString @ 0x14058964C (HalpExtBuildResourceIdString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ExtEnvRegisterIommu(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // edx
  unsigned int v6; // ebx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  bool v9; // bp
  unsigned int v10; // ecx
  unsigned __int16 Length; // r15
  unsigned int v12; // r14d
  void *MemoryInternal; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  void *v16; // r9
  __int64 v17; // rax
  _OWORD *v18; // rcx
  unsigned int v19; // eax
  const void *v20; // rdx
  int v21; // eax
  __int64 *v22; // rax
  size_t SizeInWords; // [rsp+38h] [rbp-110h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-F8h] BYREF
  WCHAR SourceString[80]; // [rsp+60h] [rbp-E8h] BYREF

  DestinationString = 0LL;
  if ( *(_DWORD *)a1 == 1
    && *(_DWORD *)(a1 + 4) == 104
    && (v5 = *(_DWORD *)(a1 + 20), (v5 & 0xC0000000) == 0)
    && (v6 = 0, *(_DWORD *)(a1 + 72))
    && (v7 = *(_QWORD **)(a1 + 56), v7[1])
    && ((v5 & 2) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 64) + 72LL))
    && ((v5 & 0x40) == 0 || v7[15] && v7[16] && v7[17])
    && ((v5 & 0xA0) == 0
     || (v8 = *(_QWORD **)(a1 + 64), v8[1])
     && v8[2]
     && v8[3]
     && v8[4]
     && v8[5]
     && ((v5 & 0x20) == 0 || v8[7] && v8[8] && v8[10] && v8[11] && v8[12])) )
  {
    v9 = 0;
    if ( !*(_DWORD *)(a1 + 16) )
      v9 = *(_QWORD *)(a1 + 8) != 0LL;
    LODWORD(SizeInWords) = 75;
    HalpExtBuildResourceIdString(
      1413894989,
      0,
      0x4300u,
      *(_WORD *)(a1 + 72),
      1u,
      0,
      *(_DWORD *)(a1 + 96),
      SizeInWords,
      SourceString);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v10 = 536;
    if ( !v9 )
      v10 = (*(_DWORD *)(a1 + 16) + 543) & 0xFFFFFFF8;
    Length = DestinationString.Length;
    v12 = (v10 + DestinationString.Length + 9) & 0xFFFFFFF8;
    MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v12, 1u);
    v14 = (__int64)MemoryInternal;
    if ( MemoryInternal )
    {
      memset_0(MemoryInternal, 0, v12);
      v15 = (v14 + 543) & 0xFFFFFFFFFFFFFFF8uLL;
      v16 = (void *)v15;
      if ( v9 )
      {
        v16 = *(void **)(a1 + 8);
        *(_QWORD *)(v14 + 16) = v16;
      }
      else
      {
        *(_QWORD *)(v14 + 16) = v15;
        v15 = (*(unsigned int *)(a1 + 16) + 7LL + v15) & 0xFFFFFFFFFFFFFFF8uLL;
      }
      *(_QWORD *)(v14 + 520) = v15;
      *(_BYTE *)(v14 + 40) = 12;
      v17 = *(_QWORD *)(a1 + 56);
      *(_OWORD *)(v14 + 56) = *(_OWORD *)v17;
      *(_OWORD *)(v14 + 72) = *(_OWORD *)(v17 + 16);
      *(_OWORD *)(v14 + 88) = *(_OWORD *)(v17 + 32);
      *(_OWORD *)(v14 + 104) = *(_OWORD *)(v17 + 48);
      *(_OWORD *)(v14 + 120) = *(_OWORD *)(v17 + 64);
      *(_OWORD *)(v14 + 136) = *(_OWORD *)(v17 + 80);
      *(_OWORD *)(v14 + 152) = *(_OWORD *)(v17 + 96);
      *(_OWORD *)(v14 + 168) = *(_OWORD *)(v17 + 112);
      *(_OWORD *)(v14 + 184) = *(_OWORD *)(v17 + 128);
      *(_QWORD *)(v14 + 200) = *(_QWORD *)(v17 + 144);
      v18 = *(_OWORD **)(a1 + 64);
      if ( v18 )
      {
        *(_OWORD *)(v14 + 208) = *v18;
        *(_OWORD *)(v14 + 224) = v18[1];
        *(_OWORD *)(v14 + 240) = v18[2];
        *(_OWORD *)(v14 + 256) = v18[3];
        *(_OWORD *)(v14 + 272) = v18[4];
        *(_OWORD *)(v14 + 288) = v18[5];
        *(_OWORD *)(v14 + 304) = v18[6];
        *(_OWORD *)(v14 + 320) = v18[7];
        *(_OWORD *)(v14 + 336) = v18[8];
        *(_OWORD *)(v14 + 352) = v18[9];
        *(_OWORD *)(v14 + 368) = v18[10];
      }
      *(_DWORD *)(v14 + 24) = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(v14 + 464) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(v14 + 44) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v14 + 52) = *(_DWORD *)(a1 + 48);
      *(_DWORD *)(v14 + 48) = *(_DWORD *)(a1 + 44);
      *(_DWORD *)(v14 + 468) = *(_DWORD *)(a1 + 72);
      *(_DWORD *)(v14 + 472) = *(_DWORD *)(a1 + 76);
      *(_DWORD *)(v14 + 476) = *(_DWORD *)(a1 + 80);
      *(_DWORD *)(v14 + 480) = *(_DWORD *)(a1 + 84);
      *(_DWORD *)(v14 + 504) = *(_DWORD *)(a1 + 88);
      *(_DWORD *)(v14 + 432) = *(_DWORD *)(a1 + 92);
      *(_QWORD *)(v14 + 416) = *(_QWORD *)(v14 + 272);
      *(_QWORD *)(v14 + 424) = *(_QWORD *)(v14 + 264);
      *(_QWORD *)(v14 + 400) = 0LL;
      *(_QWORD *)(v14 + 392) = 0LL;
      *(_DWORD *)(v14 + 408) = 0;
      v19 = *(_DWORD *)(a1 + 16);
      if ( v19 )
      {
        v20 = *(const void **)(a1 + 8);
        if ( v20 )
          memmove(v16, v20, v19);
      }
      v21 = *(_DWORD *)(a1 + 96);
      *(_WORD *)(v14 + 512) = 0;
      *(_WORD *)(v14 + 514) = Length + 2;
      *(_DWORD *)(v14 + 508) = v21;
      RtlCopyUnicodeString((PUNICODE_STRING)(v14 + 512), &DestinationString);
      v22 = (__int64 *)qword_140FBABD8;
      if ( *(ULONG_PTR **)qword_140FBABD8 != &HalpIommuList )
        __fastfail(3u);
      ++HalpIommuCount;
      *(_QWORD *)v14 = &HalpIommuList;
      *(_QWORD *)(v14 + 8) = v22;
      *v22 = v14;
      qword_140FBABD8 = v14;
      if ( a3 )
        *a3 = *(_QWORD *)(v14 + 16);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
