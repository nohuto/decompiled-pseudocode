/*
 * XREFs of PopBuildMemoryImageHeader @ 0x140BFFC6C
 * Callers:
 *     PopEndMirroring @ 0x140C09F60 (PopEndMirroring.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 *     MmGetHighestPhysicalPage @ 0x1404BD3D0 (MmGetHighestPhysicalPage.c)
 *     Feature_PlutonDynamicUpgrade__private_IsEnabledDeviceUsageNoInline @ 0x140609B7C (Feature_PlutonDynamicUpgrade__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledNoReportingNoInline @ 0x140609C54 (Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledNoReportingNoInline.c)
 *     Feature_SrtmAntiRollback__private_IsEnabledNoReportingNoInline @ 0x140609CEC (Feature_SrtmAntiRollback__private_IsEnabledNoReportingNoInline.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x140BEF388 (PopBootLoaderTraceCopyPfnList.c)
 *     PopAllocatePages @ 0x140C0FF38 (PopAllocatePages.c)
 *     PopCopyFirmwareRuntimeInformationPfnList @ 0x140C133C4 (PopCopyFirmwareRuntimeInformationPfnList.c)
 */

__int64 __fastcall PopBuildMemoryImageHeader(_QWORD *MemoryMap, int a2)
{
  __int64 v3; // rbx
  int v4; // eax
  __int64 HighestPhysicalPage; // rax
  char v6; // dl
  unsigned __int8 v7; // cl
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  __int16 v17; // cx
  _QWORD *v18; // r14
  _QWORD *v19; // r13
  unsigned __int64 v20; // rsi
  void *Pages; // rax
  void *v22; // rbp
  int v23; // ecx
  int IsEnabledNoReportingNoInline; // eax
  int v25; // ecx
  unsigned int v26; // ecx

  if ( !a2 )
  {
    v3 = MemoryMap[27];
    PoSetHiberRange(MemoryMap, 0x8000u, (PVOID)v3, 0x4E0uLL, 0x676D694Du);
    memset_0((void *)v3, 0, 0x1000uLL);
    *(_DWORD *)(v3 + 24) = 4096;
    *(_DWORD *)(v3 + 12) = 1248;
    *(_QWORD *)(v3 + 16) = (unsigned __int64)MmGetPhysicalAddress((PVOID)v3).QuadPart >> 12;
    *(_QWORD *)(v3 + 32) = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v3 + 40) = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(v3 + 64) = *((_QWORD *)&xmmword_140F10908 + 1);
    *(_DWORD *)(v3 + 60) = 10;
    *(_QWORD *)(v3 + 48) = KeFeatureBits;
    *(_DWORD *)(v3 + 4) = (unsigned __int16)KeProcessorArchitecture;
    *(_BYTE *)(v3 + 56) = *(_BYTE *)MemoryMap;
    v4 = *(_DWORD *)(v3 + 1124);
    *(_BYTE *)(v3 + 57) = -54;
    *(_DWORD *)(v3 + 1124) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)byte_140F10920) & 1;
    HighestPhysicalPage = MmGetHighestPhysicalPage(0);
    v6 = PopFasr;
    v7 = 2 * PopSecureLaunched;
    *(_QWORD *)(v3 + 1176) = HighestPhysicalPage;
    v8 = *(_DWORD *)(v3 + 1124) ^ ((unsigned __int8)*(_DWORD *)(v3 + 1124) ^ v7) & 2;
    *(_DWORD *)(v3 + 1124) = v8;
    LODWORD(HighestPhysicalPage) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(4 * *((_BYTE *)MemoryMap + 489))) & 4;
    v9 = HighestPhysicalPage ^ ((unsigned __int8)HighestPhysicalPage ^ (unsigned __int8)(8 * v6)) & 8;
    *(_DWORD *)(v3 + 1124) = v9;
    if ( PopSuppressResumePrompt == -1 )
      v10 = v9 ^ ((unsigned __int16)v9 ^ (unsigned __int16)(*((unsigned __int8 *)MemoryMap + 488) << 8)) & 0x100;
    else
      v10 = (PopSuppressResumePrompt != 0 ? 0x100 : 0) | v9 & 0xFFFFFEFF;
    *(_DWORD *)(v3 + 1124) = v10;
    v11 = MemoryMap[43];
    if ( v11 )
    {
      v12 = (__int64 *)(v3 + 1184);
      v13 = 3LL;
      *(_QWORD *)(v3 + 1184) = v11;
      v14 = (_QWORD *)(v3 + 1192);
      do
      {
        v15 = *v12++;
        *v14++ = v15 + 1;
        --v13;
      }
      while ( v13 );
    }
    v16 = *(_DWORD *)(v3 + 1124);
    v17 = v16 ^ ((_WORD)HvlpFlags << 9);
    *(_QWORD *)(v3 + 1168) = 0LL;
    *(_DWORD *)(v3 + 1124) = v16 ^ v17 & 0x400;
    PopBootLoaderTraceCopyPfnList(MemoryMap, v3);
    PopCopyFirmwareRuntimeInformationPfnList(MemoryMap);
    v18 = (_QWORD *)MemoryMap[10];
    while ( v18 != MemoryMap + 10 )
    {
      v19 = v18;
      v18 = (_QWORD *)*v18;
      v20 = (unsigned __int64)(unsigned int)((*((_DWORD *)v19 + 8) - *((_DWORD *)v19 + 6)) << 12) >> 12;
      Pages = (void *)PopAllocatePages(v20);
      v22 = Pages;
      if ( Pages )
        PoSetHiberRange(MemoryMap, 0x8000u, Pages, v20 << 12, 0x436C6F6Eu);
      else
        *((_DWORD *)MemoryMap + 51) = -1073741670;
      v19[5] = v22;
      if ( !v22 )
        return 3221225626LL;
    }
    v23 = *(_DWORD *)(v3 + 1124) ^ ((unsigned __int16)*(_DWORD *)(v3 + 1124) ^ (unsigned __int16)(*((unsigned __int8 *)MemoryMap
                                                                                                  + 480) << 9)) & 0x200;
    *(_DWORD *)(v3 + 1124) = v23;
    *(_DWORD *)(v3 + 1216) = *((_DWORD *)MemoryMap + 121);
    *(_DWORD *)(v3 + 1124) = v23 ^ ((unsigned __int8)v23 ^ (unsigned __int8)(PopHiberSkipMemoryMapValidation << 7)) & 0x80;
    if ( (unsigned int)Feature_Servicing_HibernateRelaxVBSPolicy__private_IsEnabledNoReportingNoInline() )
      *(_BYTE *)(v3 + 1239) = 1;
    if ( (unsigned int)Feature_PlutonDynamicUpgrade__private_IsEnabledDeviceUsageNoInline() )
      *(_DWORD *)(v3 + 1124) |= 0x1000u;
    IsEnabledNoReportingNoInline = Feature_SrtmAntiRollback__private_IsEnabledNoReportingNoInline();
    v25 = *(_DWORD *)(v3 + 1124);
    if ( IsEnabledNoReportingNoInline )
      v26 = v25 | 0x800;
    else
      v26 = v25 & 0xFFFFF7FF;
    *(_DWORD *)(v3 + 1124) = v26;
  }
  return *((unsigned int *)MemoryMap + 51);
}
