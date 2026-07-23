/*
 * XREFs of LdrResGetRCConfig @ 0x1800A68D0
 * Callers:
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1800A601C (LdrpVerifyAlternateResourceModuleEx.c)
 *     RtlpResUltimateFallbackInfo @ 0x1800A6560 (RtlpResUltimateFallbackInfo.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A71F0 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResCompareServiceChecksum @ 0x1800A93BC (LdrpResCompareServiceChecksum.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800175C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x180018D20 (LdrpGetFromMUIMemCache.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A6E00 (LdrpTraceLoadMUIDll.c)
 *     LdrpResGetMappingSize @ 0x1800A6EF0 (LdrpResGetMappingSize.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A71F0 (LdrpResSearchResourceMappedFile.c)
 *     CheckOneBitValidFlag @ 0x1800E8998 (CheckOneBitValidFlag.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrResGetRCConfig(__int64 DllHandle, __int64 a2, _QWORD *a3, unsigned int a4, char a5)
{
  int v6; // r13d
  int v7; // edi
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r15
  _DWORD *v12; // rax
  int v13; // edi
  _DWORD *v14; // rax
  __int64 result; // rax
  __int64 v16; // rcx
  int v17; // eax
  _DWORD *v18; // r8
  __int64 v19; // rdx
  unsigned int v20; // ecx
  unsigned int v21; // r9d
  unsigned int v22; // ecx
  unsigned int v23; // r9d
  unsigned int v24; // ecx
  unsigned int v25; // r9d
  unsigned int v26; // ecx
  unsigned int v27; // r9d
  unsigned int v28; // ecx
  unsigned int v29; // r9d
  unsigned int v30; // ecx
  unsigned int v31; // r9d
  unsigned int v32; // ecx
  unsigned int v33; // r9d
  unsigned int v34; // ecx
  unsigned int v35; // r9d
  __int64 v36; // rcx
  int v37; // r9d
  char v38; // r9
  __int64 v39; // rcx
  char v40; // al
  __int64 v41; // r9
  _DWORD *v42; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A8h]
  unsigned int v44; // [rsp+68h] [rbp-A0h]
  __int64 v45; // [rsp+70h] [rbp-98h] BYREF
  __int64 v46; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v47; // [rsp+80h] [rbp-88h]
  _QWORD v48[2]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v49[3]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v50[3]; // [rsp+B0h] [rbp-58h] BYREF

  v44 = a4;
  v47 = a3;
  v43 = a2;
  v49[2] = DllHandle;
  v50[0] = L"MUI";
  v50[1] = 1LL;
  v50[2] = 0LL;
  v46 = 0LL;
  v45 = a2;
  v42 = 0LL;
  v48[0] = 3145774LL;
  v48[1] = L"LdrResGetRCConfig Enter";
  v49[0] = 3014700LL;
  v49[1] = L"LdrResGetRCConfig Exit";
  v6 = a4 & 0x2000;
  v7 = 4144;
  if ( (a4 & 0x2000) != 0 )
    v7 = 8240;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v9 = (__int64)NtCurrentPeb()->SharedData + 555;
    v10 = 2147353477LL;
  }
  else
  {
    v10 = 2147353477LL;
    v9 = 2147353477LL;
  }
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    v11 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v16 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v16 = 2147353476LL;
    LdrpTraceLoadMUIDll(v48, *(unsigned __int8 *)v16);
    a2 = v43;
  }
  else
  {
    v11 = 2147353476LL;
  }
  if ( DllHandle )
  {
    if ( a5 )
    {
      v12 = LdrpGetFromMUIMemCache(DllHandle, 0, 0LL, 8);
      v42 = v12;
      if ( v12 == (_DWORD *)-1LL )
      {
        v13 = -1073741686;
        goto LABEL_12;
      }
      if ( v12 )
      {
        v13 = 0;
        if ( v47 )
          *v47 = v12;
        goto LABEL_12;
      }
      a2 = v43;
    }
    if ( !a2 && !v6 )
    {
      result = LdrpResGetMappingSize(DllHandle, &v45, v44, 0LL);
      if ( (int)result < 0 )
        return result;
      LODWORD(a2) = v45;
      v43 = v45;
    }
    v17 = LdrpResSearchResourceMappedFile(
            DllHandle,
            a2,
            v7,
            (unsigned int)v50,
            3,
            (__int64)&v42,
            (__int64)&v46,
            0LL,
            0LL);
    v13 = v17;
    if ( v17 < 0 )
    {
      if ( v17 != -1073741701 )
      {
        v13 = -1073741686;
LABEL_77:
        v18 = 0LL;
        v42 = 0LL;
LABEL_78:
        if ( a5 )
        {
          v41 = -1LL;
          if ( v18 )
            v41 = (__int64)v18;
          LdrpSetAlternateResourceModuleHandle(DllHandle, 0LL, 0LL, v41, 0, 2, v13, 0LL);
        }
        goto LABEL_12;
      }
      v18 = v42;
    }
    else
    {
      v18 = v42;
      if ( v6 )
        goto LABEL_82;
      v19 = (unsigned int)v42[1];
      if ( (unsigned __int64)v42 + v19 > v43 + (DllHandle & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        v13 = -1073741701;
        goto LABEL_76;
      }
      v13 = -1073020925;
      v20 = v42[17];
      v21 = v20 + v42[18];
      if ( v21 <= (unsigned int)v19 && v21 >= v20 )
      {
        v22 = v42[19];
        v23 = v22 + v42[20];
        if ( v23 <= (unsigned int)v19 && v23 >= v22 )
        {
          v24 = v42[21];
          v25 = v24 + v42[22];
          if ( v25 <= (unsigned int)v19 && v25 >= v24 )
          {
            v26 = v42[23];
            v27 = v26 + v42[24];
            if ( v27 >= v26 && v27 <= (unsigned int)v19 )
            {
              v28 = v42[25];
              v29 = v28 + v42[26];
              if ( v29 <= (unsigned int)v19 && v29 >= v28 )
              {
                v30 = v42[27];
                v31 = v30 + v42[28];
                if ( v31 <= (unsigned int)v19 && v31 >= v30 )
                {
                  v32 = v42[29];
                  v33 = v32 + v42[30];
                  if ( v33 <= (unsigned int)v19 && v33 >= v32 )
                  {
                    v34 = v42[31];
                    v35 = v34 + v42[32];
                    if ( v35 <= (unsigned int)v19 && v35 >= v34 && *v42 == -20054323 && v19 == v46 && v42[2] == 0x10000 )
                    {
                      v36 = (unsigned int)v42[3];
                      if ( !(_DWORD)v36 || (unsigned __int8)CheckOneBitValidFlag(v36, 7LL, v42) )
                      {
                        if ( (unsigned __int8)CheckOneBitValidFlag(v18[4] & 0xFFFFFFCF, 3LL, v18) )
                        {
                          if ( (unsigned __int8)CheckOneBitValidFlag(v37 & 0xFFFFFFFC, 48LL, v18) )
                          {
                            if ( (v38 & 1) == 0
                              || (unsigned __int8)CheckOneBitValidFlag((unsigned int)v18[6], 3LL, v18)
                              && ((v39 = (unsigned int)v18[5], !(_DWORD)v39)
                               || (v40 = CheckOneBitValidFlag(v39, 256LL, v18)) != 0) )
                            {
LABEL_82:
                              if ( v47 )
                                *v47 = v18;
                              v13 = 0;
                              goto LABEL_78;
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
LABEL_76:
    if ( v13 >= 0 )
      goto LABEL_78;
    goto LABEL_77;
  }
  v13 = -1073741811;
LABEL_12:
  v14 = NtCurrentPeb()->SharedData;
  if ( v14 && *v14 )
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(v49, *(unsigned __int8 *)v11);
  }
  return (unsigned int)v13;
}
