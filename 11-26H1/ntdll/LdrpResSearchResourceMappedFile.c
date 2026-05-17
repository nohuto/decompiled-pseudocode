/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x1800A80C0
 * Callers:
 *     LdrResGetRCConfig @ 0x1800A77A0 (LdrResGetRCConfig.c)
 *     LdrResSearchResource @ 0x1800AB1B0 (LdrResSearchResource.c)
 * Callees:
 *     RtlLcidToLocaleName @ 0x180005EB0 (RtlLcidToLocaleName.c)
 *     LdrResFallbackLangList @ 0x1800094E0 (LdrResFallbackLangList.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     LdrIsResItemExist @ 0x18002C970 (LdrIsResItemExist.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpFindMessageInAlternateModule @ 0x1800320E0 (LdrpFindMessageInAlternateModule.c)
 *     LdrResGetRCConfig @ 0x1800A77A0 (LdrResGetRCConfig.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A7CD0 (LdrpTraceLoadMUIDll.c)
 *     LdrpResGetMappingSize @ 0x1800A7DC0 (LdrpResGetMappingSize.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800A8A50 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x1800A9D20 (LdrpResGetResourceDirectory.c)
 *     LdrpResCompareServiceChecksum @ 0x1800AA28C (LdrpResCompareServiceChecksum.c)
 *     LdrpIsReparsePoint @ 0x1800C5E78 (LdrpIsReparsePoint.c)
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int **a6,
        unsigned __int64 *a7,
        void *a8,
        unsigned int *a9)
{
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // di
  _DWORD *SharedData; // rcx
  __int64 v15; // rcx
  unsigned __int16 v16; // r12
  int v17; // ebx
  int v18; // r13d
  int v19; // r14d
  __int64 v20; // rdi
  bool v21; // bl
  int v22; // esi
  __int64 result; // rax
  __int64 v24; // rdx
  bool v25; // cl
  bool v26; // r12
  int MappingSize; // esi
  unsigned int v28; // edi
  unsigned __int16 *v29; // r10
  int v30; // r11d
  unsigned __int64 *v31; // rax
  __int64 v32; // rdx
  int v33; // r9d
  int v34; // r8d
  int v35; // ecx
  unsigned int *v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rdi
  __int16 v39; // cx
  int RCConfig; // eax
  int v41; // ecx
  int v42; // eax
  unsigned int v43; // r13d
  __int64 v44; // rcx
  unsigned __int64 v45; // r8
  char v46; // [rsp+70h] [rbp-3C8h]
  char v47; // [rsp+71h] [rbp-3C7h]
  unsigned __int16 v48; // [rsp+74h] [rbp-3C4h] BYREF
  __int64 v49; // [rsp+78h] [rbp-3C0h] BYREF
  __int64 v50; // [rsp+80h] [rbp-3B8h]
  bool v51; // [rsp+88h] [rbp-3B0h]
  size_t v52; // [rsp+90h] [rbp-3A8h] BYREF
  __int64 v53; // [rsp+98h] [rbp-3A0h]
  int v54; // [rsp+A0h] [rbp-398h]
  int v55; // [rsp+A4h] [rbp-394h]
  unsigned __int64 v56; // [rsp+A8h] [rbp-390h] BYREF
  const wchar_t **v57; // [rsp+B0h] [rbp-388h]
  unsigned int **v58; // [rsp+B8h] [rbp-380h]
  unsigned int *v59; // [rsp+C0h] [rbp-378h]
  __int64 v60; // [rsp+C8h] [rbp-370h] BYREF
  __int64 v61; // [rsp+D0h] [rbp-368h] BYREF
  __int64 v62; // [rsp+D8h] [rbp-360h] BYREF
  __int64 v63; // [rsp+E0h] [rbp-358h] BYREF
  unsigned __int64 *v64; // [rsp+E8h] [rbp-350h]
  void *v65; // [rsp+F0h] [rbp-348h]
  _QWORD v66[2]; // [rsp+F8h] [rbp-340h] BYREF
  __int128 v67; // [rsp+108h] [rbp-330h] BYREF
  _QWORD v68[3]; // [rsp+118h] [rbp-320h] BYREF
  unsigned __int16 v69[2]; // [rsp+130h] [rbp-308h] BYREF
  _WORD v70[262]; // [rsp+134h] [rbp-304h]
  _WORD Src[88]; // [rsp+340h] [rbp-F8h] BYREF

  v57 = (const wchar_t **)a4;
  v53 = a2;
  v50 = a1;
  v64 = a7;
  v58 = a6;
  v65 = a8;
  v59 = a9;
  v52 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v69[1] = 0;
  memset_thunk_772440563353939046(v69, 0, 0x206uLL);
  v48 = 0;
  v49 = 0LL;
  v13 = 0;
  v54 = a3 & 0x40;
  v56 = 0LL;
  v46 = 0;
  v67 = 0LL;
  v47 = 0;
  v66[0] = 4980810LL;
  v66[1] = L"LdrpResSearchResourceMappedFile Enter";
  v68[0] = 4849736LL;
  v68[1] = L"LdrpResSearchResourceMappedFile Exit";
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v15 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v15 = 2147353477LL;
  if ( (*(_BYTE *)v15 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v44 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v44 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v66, *(unsigned __int8 *)v44);
  }
  v16 = 0;
  v17 = a3 & 0x80;
  v18 = a5;
  if ( a5 == 3 )
  {
    v16 = *(_WORD *)(a4 + 16);
    v13 = (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp(*(const wchar_t **)a4, L"MUI");
    v51 = v13;
  }
  v19 = a3 & 0x80;
  if ( (a3 & 0x10) == 0 )
  {
    v19 = a3 & 0x80;
    if ( a5 >= 1 && a5 <= 3 )
    {
      if ( a5 == 3 )
        v39 = *(_WORD *)(a4 + 16);
      else
        v39 = 0;
      if ( (a3 & 0x1000000) == 0
        && (((*(_QWORD *)a4 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v13
         || (~(_BYTE)a3 & 8) == 0
         || (v39 & 0xF3FF) != 0
         || v39 == 3072) )
      {
        v20 = v50;
        RCConfig = LdrResGetRCConfig(v50, v53, 0LL, a3, 1);
        MappingSize = RCConfig;
        if ( RCConfig >= 0 )
        {
          v19 = v17 | LdrIsResItemExist(v50, v57, v11, a3);
        }
        else
        {
          if ( RCConfig != -1073741686 )
            goto LABEL_37;
          v19 = v17 | 0x80000;
        }
        goto LABEL_7;
      }
      a3 |= 0x10u;
      v19 = v17;
    }
  }
  v20 = v50;
LABEL_7:
  if ( (v19 & 0x60000) == 0x60000 )
  {
    MappingSize = -1073741686;
    goto LABEL_37;
  }
  v21 = (~(_BYTE)a3 & 0x10) != 0 && (~v19 & 0xA0000) == 655360;
  v69[0] = 1;
  v70[0] = 0;
  if ( !v21 && a5 != 3 || (a3 & 0x10) != 0 && (a3 & 0x20) != 0 )
  {
    v22 = v53;
  }
  else
  {
    if ( (a3 & 4) != 0 )
      v19 |= 4u;
    v22 = v53;
    result = LdrResFallbackLangList(v20, v53, v16, v19, v69);
    if ( (int)result < 0 && (a3 & 0x1000) != 0 )
      return result;
  }
  if ( (a3 & 0x10) != 0 || (~v19 & 0x40000) != 0 || (v19 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(v20, v22, a3, (unsigned int)&v62, (__int64)&v60);
    if ( (int)result < 0 )
      return result;
  }
  do
  {
    v24 = 0LL;
    v25 = 0;
    if ( (v19 & 0x20000) == 0 )
      v25 = v21;
    v21 = v25;
    v26 = v25;
    MappingSize = 0;
    v49 = 0LL;
    v48 = 0;
    v28 = 0;
    while ( v28 < v69[0] )
    {
      if ( v21 )
      {
        v52 = 0LL;
        v49 = 0LL;
        v41 = *(_DWORD *)&v70[4 * v28 + 2];
        if ( v70[4 * v28] )
        {
          if ( v41 == 10 )
          {
            MappingSize = -1073741811;
            ++v28;
            v24 = 0LL;
          }
          else
          {
            v48 = v70[4 * v28];
            v42 = LdrLoadAlternateResourceModuleEx(v50, v48, &v52, &v49, v19 | 0x1000u);
            MappingSize = v42;
            if ( v42 >= 0 )
            {
              v46 = 1;
              v24 = v49;
              if ( !v49 )
              {
                MappingSize = LdrpResGetMappingSize(v52, (unsigned __int64 *)&v49, 512, 1);
                v24 = v49;
              }
              if ( (a3 & 0x1000) != 0 && MappingSize < 0 )
                goto LABEL_46;
              MappingSize = LdrpResGetResourceDirectory(v52, v24, a3, (unsigned int)&v63, (__int64)&v61);
              if ( MappingSize < 0 )
                goto LABEL_45;
              goto LABEL_18;
            }
            if ( v42 != -1073741766 && v42 != -1073741772 )
              goto LABEL_45;
            MappingSize = -1073020927;
            ++v28;
            v24 = 0LL;
          }
        }
        else
        {
          if ( v41 == 2 )
            goto LABEL_45;
          MappingSize = -1073741811;
          ++v28;
          v24 = 0LL;
        }
      }
      else
      {
LABEL_18:
        v56 = 0LL;
        v29 = &v48;
        if ( v21 )
          v29 = 0LL;
        v30 = a3;
        if ( v21 )
          v30 = a3 | 0x20;
        v31 = &v56;
        if ( v64 )
          v31 = v64;
        v32 = v60;
        if ( v21 )
          v32 = v61;
        v33 = v62;
        if ( v21 )
          v33 = v63;
        v34 = v53;
        if ( v21 )
          v34 = v49;
        v35 = v50;
        if ( v21 )
          v35 = v52;
        MappingSize = LdrpResSearchResourceInsideDirectory(
                        v35,
                        0,
                        v34,
                        v33,
                        v32,
                        0LL,
                        (__int64)v57,
                        v18,
                        (__int64)v69,
                        (__int64)v58,
                        (__int64)v31,
                        v30,
                        (__int64)v29);
        if ( v54 && (~v19 & 0x40000) != 0 && MappingSize >= 0 && v58 && v21 )
        {
          if ( v64 )
            v45 = *v64;
          else
            v45 = v56;
          MappingSize = LdrpFindMessageInAlternateModule(v52, *v58, v45, *((_DWORD *)v57 + 6), 1);
          v24 = 0LL;
          if ( MappingSize < 0 )
          {
            *v58 = 0LL;
            if ( MappingSize == -1073741701 )
              goto LABEL_37;
          }
        }
        else
        {
          v24 = 0LL;
        }
        if ( MappingSize >= 0 )
        {
          v36 = v59;
          if ( v59 )
          {
            if ( v48 )
            {
              *((_QWORD *)&v67 + 1) = Src;
              WORD1(v67) = 172;
              MappingSize = RtlLcidToLocaleName(v48, (__int64)&v67, 2, 0);
              if ( MappingSize < 0 )
                goto LABEL_37;
              v43 = (unsigned __int16)v67 >> 1;
              v36 = v59;
            }
            else
            {
              Src[0] = 0;
              v43 = 0;
            }
            if ( v43 >= *v36 || !v65 )
            {
              *v36 = v43 + 1;
              MappingSize = -1073741789;
              v55 = -1073741789;
              v37 = 2147353477LL;
              v38 = 2147353476LL;
              goto LABEL_38;
            }
            memmove(v65, Src, 2LL * v43);
            *v59 = v43 + 1;
            *((_WORD *)v65 + v43) = 0;
            v18 = a5;
          }
          break;
        }
        if ( !v21 )
          goto LABEL_46;
        if ( (unsigned __int8)LdrpResCompareServiceChecksum(v50, v53, v52, v49) )
          break;
LABEL_45:
        ++v28;
        v24 = 0LL;
      }
    }
    if ( MappingSize >= 0 )
      break;
LABEL_46:
    if ( v26 )
    {
      if ( v47 || v46 || (int)LdrpIsReparsePoint(v50, v24, v11, v12) < 0 )
      {
        if ( (v19 & 0x40000) != 0 )
        {
          v21 = 0;
        }
        else
        {
          v19 |= 0x20000u;
          v21 = v26;
        }
      }
      else
      {
        v19 |= 0x400000u;
        v47 = 1;
        v21 = v26;
      }
    }
  }
  while ( v21 );
LABEL_37:
  v37 = 2147353477LL;
  v38 = 2147353476LL;
LABEL_38:
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v37 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v37 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v38 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v68, *(unsigned __int8 *)v38);
  }
  return (unsigned int)MappingSize;
}
