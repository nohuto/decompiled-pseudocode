/*
 * XREFs of ?netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU3@33PEA_W@Z @ 0x14014ACBC
 * Callers:
 *     ndisIsLwfBindingEnabled @ 0x14014E6C0 (ndisIsLwfBindingEnabled.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x14014E764 (ndisIsLwfBindingEnabled_0.c)
 *     ndisIsProtocolBindingEnabled @ 0x14014E7F4 (ndisIsProtocolBindingEnabled.c)
 * Callees:
 *     ??$swprintf_s@$0CI@@@YAHAEAY0CI@_WPEB_WZZ @ 0x1400E6024 (--$swprintf_s@$0CI@@@YAHAEAY0CI@_WPEB_WZZ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

errno_t __fastcall netsetupBuildBindingRegistryPath(
        int a1,
        __int64 a2,
        unsigned int *a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int *a6,
        wchar_t *a7)
{
  _DWORD *v8; // rdx
  const wchar_t *v9; // rcx
  errno_t result; // eax
  unsigned int v11; // r14d
  unsigned int v12; // r9d
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // r14d
  unsigned int v16; // r9d
  unsigned int v17; // r14d
  unsigned int v18; // r9d
  __int64 v19; // [rsp+20h] [rbp-198h]
  __int64 v20; // [rsp+28h] [rbp-190h]
  __int64 v21; // [rsp+30h] [rbp-188h]
  __int64 v22; // [rsp+38h] [rbp-180h]
  __int64 v23; // [rsp+40h] [rbp-178h]
  __int64 v24; // [rsp+48h] [rbp-170h]
  __int64 v25; // [rsp+50h] [rbp-168h]
  __int64 v26; // [rsp+58h] [rbp-160h]
  __int64 v27; // [rsp+60h] [rbp-158h]
  int v28; // [rsp+80h] [rbp-138h]
  unsigned int v29; // [rsp+88h] [rbp-130h]
  unsigned int v30; // [rsp+90h] [rbp-128h]
  unsigned int v31; // [rsp+98h] [rbp-120h]
  unsigned int v32; // [rsp+A0h] [rbp-118h]
  wchar_t Src[40]; // [rsp+120h] [rbp-98h] BYREF

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v8 = a4;
      if ( !a4 )
        v8 = a5;
      v9 = L"Protocols";
      if ( !a4 )
        v9 = L"Filters";
      v28 = *((unsigned __int16 *)v8 + 2);
      v29 = *((unsigned __int16 *)v8 + 3);
      v30 = *((unsigned __int8 *)v8 + 8);
      v31 = *((unsigned __int8 *)v8 + 9);
      v32 = *((unsigned __int8 *)v8 + 10);
      result = swprintf_s(
                 a7,
                 0x100uLL,
                 L"\\Registry\\Machine\\DEVICES\\Networking\\NetAdapters\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02"
                  "x}\\Bindings\\%ws\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                 *a3,
                 *((unsigned __int16 *)a3 + 2),
                 *((unsigned __int16 *)a3 + 3),
                 *((unsigned __int8 *)a3 + 8),
                 *((unsigned __int8 *)a3 + 9),
                 *((unsigned __int8 *)a3 + 10),
                 *((unsigned __int8 *)a3 + 11),
                 *((unsigned __int8 *)a3 + 12),
                 *((unsigned __int8 *)a3 + 13),
                 *((unsigned __int8 *)a3 + 14),
                 *((unsigned __int8 *)a3 + 15),
                 v9,
                 *v8,
                 v28,
                 v29,
                 v30,
                 v31,
                 v32,
                 *((unsigned __int8 *)v8 + 11),
                 *((unsigned __int8 *)v8 + 12),
                 *((unsigned __int8 *)v8 + 13),
                 *((unsigned __int8 *)v8 + 14),
                 *((unsigned __int8 *)v8 + 15),
                 __PAIR64__(v31, v32),
                 __PAIR64__(v29, v30),
                 v28);
      if ( a6 )
      {
        LODWORD(v27) = *((unsigned __int8 *)a6 + 15);
        LODWORD(v26) = *((unsigned __int8 *)a6 + 14);
        LODWORD(v25) = *((unsigned __int8 *)a6 + 13);
        LODWORD(v24) = *((unsigned __int8 *)a6 + 12);
        LODWORD(v23) = *((unsigned __int8 *)a6 + 11);
        LODWORD(v22) = *((unsigned __int8 *)a6 + 10);
        LODWORD(v21) = *((unsigned __int8 *)a6 + 9);
        LODWORD(v20) = *((unsigned __int8 *)a6 + 8);
        LODWORD(v19) = *((unsigned __int16 *)a6 + 3);
        swprintf_s<40>(
          Src,
          L"-{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
          *a6,
          *((unsigned __int16 *)a6 + 2),
          v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        return wcscat_s(a7, 0x100uLL, Src);
      }
    }
  }
  else
  {
    v11 = *a3;
    v12 = a3[1];
    v13 = a3[2];
    v14 = a3[3] ^ *a3;
    if ( a4 )
    {
      v11 = *a4 ^ a3[1];
      v13 = a4[2] ^ v14;
      v12 = a4[1] ^ a3[2];
      v14 = a4[3] ^ v11;
    }
    if ( a5 )
    {
      v15 = v12;
      v16 = v13;
      v11 = *a5 ^ v15;
      v13 = a5[2] ^ v14;
      v12 = a5[1] ^ v16;
      v14 = a5[3] ^ v11;
    }
    if ( a6 )
    {
      v17 = v12;
      v18 = v13;
      v11 = *a6 ^ v17;
      v13 = a6[2] ^ v14;
      v12 = a6[1] ^ v18;
      v14 = a6[3] ^ v11;
    }
    return swprintf_s(
             a7,
             0x100uLL,
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\BindPaths\\{%08x-%04x-%04x-%02x%02x"
              "-%02x%02x%02x%02x%02x%02x}\\Properties",
             v11,
             (unsigned __int16)v12,
             HIWORD(v12),
             v13 & 0x1F | 0xC0,
             BYTE1(v13),
             BYTE2(v13),
             HIBYTE(v13),
             (unsigned __int8)v14,
             BYTE1(v14),
             BYTE2(v14),
             HIBYTE(v14));
  }
  return result;
}
