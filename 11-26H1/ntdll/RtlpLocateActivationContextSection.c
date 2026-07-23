/*
 * XREFs of RtlpLocateActivationContextSection @ 0x18002B600
 * Callers:
 *     RtlpFindNextActivationContextSection @ 0x18002B440 (RtlpFindNextActivationContextSection.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x18005E054 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800DD450 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x1800E2114 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpLocateActivationContextSectionForQuery @ 0x1800E5618 (RtlpLocateActivationContextSectionForQuery.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x1800E59E8 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryRunLevel @ 0x1801021C8 (RtlpQueryRunLevel.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x180108C54 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x180113EA8 (RtlpQueryInformationActivationContextManifestResourceName.c)
 * Callees:
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     bsearch @ 0x180129D50 (bsearch.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpLocateActivationContextSection(_DWORD *a1, _QWORD *a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v6; // r8d
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned int *v11; // rax
  size_t v12; // r10
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  unsigned int v16; // edx
  _DWORD *v17; // rcx
  _DWORD *v18; // rdx
  __int64 v19; // r9
  unsigned int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // r9
  unsigned int v25; // eax
  unsigned int v26; // r11d
  unsigned int j; // r8d
  char *v28; // rsi
  unsigned int i; // r9d
  __int64 v30; // rax
  char *v31; // rcx
  unsigned int v32; // eax
  __int128 Key; // [rsp+40h] [rbp-48h] BYREF

  v6 = a1[3];
  if ( v6 < 0x20 || a1[1] < 0x20u )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS/RTL: Activation context data at %p too small; TotalSize = %lu; HeaderSize = %lu\n",
      a1,
      v6,
      a1[1]);
  }
  else
  {
    v9 = 0;
    if ( a2 )
    {
      v22 = (unsigned int)a1[5];
      if ( !(_DWORD)v22 )
        return (unsigned int)-1072365567;
      if ( (int)v22 + 16 > v6 || (unsigned int)(v22 + 16) < 0x10 || (unsigned int)v22 >= v6 )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS/RTL: Extended TOC offset (%ld) is outside bounds of activation context data (%lu bytes)\n",
          v22,
          v6);
      }
      else
      {
        v23 = *(unsigned int *)((char *)a1 + v22 + 4);
        v24 = *(unsigned int *)((char *)a1 + v22 + 8);
        v25 = 24 * v23;
        if ( (unsigned __int64)(24 * v23) <= 0xFFFFFFFF
          && v25 + (unsigned int)v24 <= v6
          && v25 + (unsigned int)v24 >= v25
          && (unsigned int)v24 < v6 )
        {
          v28 = (char *)a1 + v24;
          for ( i = 0; i < (unsigned int)v23; ++i )
          {
            v30 = *a2 - *(_QWORD *)&v28[24 * i];
            v31 = &v28[24 * i];
            if ( *a2 == *(_QWORD *)v31 )
              v30 = a2[1] - *((_QWORD *)v31 + 1);
            if ( !v30 )
            {
              v32 = *((_DWORD *)v31 + 4);
              if ( v32 + 16 > v6 || v32 + 16 < 0x10 || v32 >= v6 )
              {
                DbgPrintEx(
                  0x33u,
                  0,
                  "SXS/RTL: Extended TOC section TOC %d (offset: %ld, size: %u) is outside activation context data bounds (%lu bytes)\n",
                  i,
                  v32,
                  16,
                  v6);
                return (unsigned int)-1072365565;
              }
              _mm_lfence();
              v10 = *((unsigned int *)v31 + 4);
              goto LABEL_5;
            }
          }
          return (unsigned int)-1072365567;
        }
        DbgPrintEx(
          0x33u,
          0,
          "SXS/RTL: Extended TOC entry array (starting at offset %ld; count = %lu; entry size = %u) is outside bounds of "
          "activation context data (%lu bytes)\n",
          v24,
          v23,
          24,
          v6);
      }
    }
    else
    {
      v10 = (unsigned int)a1[4];
      if ( !(_DWORD)v10 )
        return (unsigned int)-1072365567;
LABEL_5:
      v11 = (_DWORD *)((char *)a1 + v10);
      if ( !v11 )
        return (unsigned int)-1072365567;
      v12 = v11[1];
      if ( !(_DWORD)v12 )
        return (unsigned int)-1072365567;
      v13 = v11[2];
      v14 = 16LL * (unsigned int)v12;
      if ( v14 <= 0xFFFFFFFF
        && (int)v14 + (int)v13 <= v6
        && (int)v14 + (int)v13 >= (unsigned int)v14
        && (unsigned int)v13 < v6 )
      {
        v16 = v11[3];
        v17 = (_DWORD *)((char *)a1 + v13);
        if ( (v16 & 2) == 0 )
        {
          for ( j = 0; j < (unsigned int)v12; ++j )
          {
            v18 = &v17[4 * j];
            if ( *v18 == a3 )
              goto LABEL_18;
          }
          return (unsigned int)-1072365567;
        }
        if ( a3 >= *v17 )
        {
          if ( (v16 & 1) != 0 )
          {
            v26 = a3 - *v17;
            if ( v26 >= (unsigned int)v12 )
              return (unsigned int)-1072365567;
            v18 = &v17[4 * v26];
          }
          else
          {
            Key = 0LL;
            LODWORD(Key) = a3;
            v18 = bsearch(&Key, (char *)a1 + v13, v12, 0x10uLL, RtlpCompareActivationContextDataTOCEntryById);
          }
LABEL_18:
          if ( v18 )
          {
            v19 = (unsigned int)v18[1];
            if ( (_DWORD)v19 )
            {
              v20 = v18[2];
              v21 = a1[3];
              if ( v20 + (unsigned int)v19 <= v21 && v20 + (unsigned int)v19 >= v20 && (unsigned int)v19 < v21 )
              {
                *a4 = (char *)a1 + v19;
                *a5 = v18[2];
                return v9;
              }
              DbgPrintEx(
                0x33u,
                0,
                "SXS/RTL: Section found (offset %ld; length %lu) extends past end of activation context data (%lu bytes)\n",
                v19,
                v20,
                v21);
              return (unsigned int)-1072365565;
            }
          }
        }
        return (unsigned int)-1072365567;
      }
      DbgPrintEx(
        0x33u,
        0,
        "SXS/RTL: TOC entry array (offset: %ld; count = %lu; entry size = %u) is outside bounds of activation context data (%lu bytes)\n",
        v13,
        v12,
        16,
        v6);
    }
  }
  return (unsigned int)-1072365565;
}
