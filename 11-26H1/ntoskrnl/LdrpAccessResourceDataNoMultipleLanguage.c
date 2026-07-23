/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x140A8EAE0
 * Callers:
 *     LdrpFindMessageInAlternateModule @ 0x1403DDC10 (LdrpFindMessageInAlternateModule.c)
 *     LdrpGetRcConfig @ 0x1403DF8BC (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1403DFC80 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpAccessResourceData @ 0x140A8E9F8 (LdrpAccessResourceData.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     RtlAddressInSectionTable @ 0x14042B3B4 (RtlAddressInSectionTable.c)
 *     RtlSectionTableFromVirtualAddress @ 0x14042B410 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     LdrpGetImageSize @ 0x1404A4648 (LdrpGetImageSize.c)
 */

__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(void *a1, ULONG *a2, unsigned __int64 *a3, _DWORD *a4)
{
  _DWORD *v4; // rbx
  __int64 v6; // rdi
  __int64 result; // rax
  unsigned __int64 v8; // r15
  ULONG *v9; // rcx
  __int64 v10; // r13
  int v11; // eax
  PIMAGE_NT_HEADERS v12; // rax
  _IMAGE_NT_HEADERS64 *v13; // rsi
  unsigned __int16 Magic; // ax
  ULONG VirtualAddress; // r8d
  __int64 v16; // r12
  PIMAGE_SECTION_HEADER v17; // rax
  ULONG v18; // r8d
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  PIMAGE_SECTION_HEADER v21; // rax
  ULONG v22; // ebx
  _BYTE *v23; // rax
  __int64 v24; // [rsp+28h] [rbp-40h] BYREF
  _BYTE *v25; // [rsp+30h] [rbp-38h]

  v4 = a4;
  v6 = (__int64)a1;
  v25 = RtlImageDirectoryEntryToData(a1, 1u, 2u, (PULONG)&v24);
  if ( !v25 )
    return 3221225609LL;
  v24 = 0LL;
  result = LdrpGetImageSize(v6, &v24);
  if ( (int)result >= 0 )
  {
    v8 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
    v9 = a2 + 4;
    if ( (unsigned __int64)a2 < (v6 & 0xFFFFFFFFFFFFFFFCuLL) )
      return 3221225595LL;
    if ( v9 < a2 )
      return 3221225595LL;
    v10 = v24;
    if ( v24 && (unsigned __int64)v9 > v8 + v24 )
    {
      return 3221225595LL;
    }
    else
    {
      v11 = 0;
      if ( (v6 & 2) != 0 || (v6 & 1) != 0 )
      {
        if ( (v6 & 1) != 0 )
          v11 = 1;
        v6 &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( v11 == 1 )
      {
        v12 = RtlImageNtHeader((PVOID)v6);
        v13 = v12;
        if ( !v12 )
          return 3221225609LL;
        Magic = v12->OptionalHeader.Magic;
        if ( Magic == 267 )
        {
          VirtualAddress = v13->OptionalHeader.DataDirectory[0].VirtualAddress;
        }
        else if ( Magic == 523 )
        {
          VirtualAddress = v13->OptionalHeader.DataDirectory[2].VirtualAddress;
        }
        else
        {
          VirtualAddress = 0;
        }
        if ( !VirtualAddress )
          return 3221225609LL;
        v16 = v6 + VirtualAddress - (_QWORD)v25;
        v17 = RtlSectionTableFromVirtualAddress(v13, (PVOID)v6, VirtualAddress);
        if ( !v17 )
          return 3221225609LL;
        _mm_lfence();
        v18 = *a2;
        if ( *a2 > v17->Misc.PhysicalAddress )
        {
          LODWORD(v24) = v17->VirtualAddress;
          v21 = RtlSectionTableFromVirtualAddress(v13, (PVOID)v6, v18);
          if ( !v21 )
            return 3221225609LL;
          v22 = v21->VirtualAddress;
          v23 = RtlAddressInSectionTable(v13, (PVOID)v6, v22);
          v16 += &v25[v22 - (unsigned __int64)(unsigned int)v24] - v23;
          v4 = a4;
        }
      }
      else
      {
        v16 = 0LL;
      }
      if ( a3 )
      {
        v19 = v6 + *a2 - v16;
        v20 = v19 + a2[1];
        if ( v19 < v8 || v20 < v19 || v10 && v20 > v8 + v10 )
          return 3221225595LL;
        *a3 = v19;
      }
      if ( v4 )
        *v4 = a2[1];
      return 0LL;
    }
  }
  return result;
}
