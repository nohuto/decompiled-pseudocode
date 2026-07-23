/*
 * XREFs of RtlpMuiRegConfigMatchesInstalled @ 0x1408AE2F4
 * Callers:
 *     RtlpMuiRegValidateConfigNode @ 0x140724CEC (RtlpMuiRegValidateConfigNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     _MuiRegAllocArray @ 0x140724EAC (_MuiRegAllocArray.c)
 *     RtlCultureNameToLCID @ 0x14077CEE0 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x1408AEAB8 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1408AF3E4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlLCIDToCultureName @ 0x140B60060 (RtlLCIDToCultureName.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall RtlpMuiRegConfigMatchesInstalled(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        char a4,
        unsigned __int16 a5,
        __int64 *a6,
        unsigned __int16 *a7)
{
  unsigned int v7; // r13d
  __int64 v8; // r14
  wchar_t *v10; // rdi
  bool v11; // zf
  char v12; // bl
  __int64 v13; // r15
  unsigned __int16 *v14; // r15
  __int64 v15; // rdx
  unsigned __int16 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // r8
  const WCHAR *v21; // rdx
  wchar_t *v22; // rax
  __int64 v23; // r8
  const wchar_t *v24; // rdx
  __int64 *v25; // rdi
  __int64 v26; // r8
  __int64 v28; // [rsp+28h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  DWORD Lcid; // [rsp+88h] [rbp+48h] BYREF
  __int16 v31; // [rsp+98h] [rbp+58h] BYREF

  v7 = a2;
  v8 = (__int16)a3;
  Lcid = 0;
  v31 = 0;
  v10 = 0LL;
  v28 = 0LL;
  DestinationString = 0LL;
  if ( a2 == a4 )
  {
    v11 = (_WORD)a3 == a5;
LABEL_3:
    v12 = v11;
    v13 = 0LL;
    goto LABEL_43;
  }
  if ( !a2 || !a4 )
    goto LABEL_40;
  v14 = a7;
  if ( a7 )
    *a7 = -1;
  if ( a2 == 2 )
  {
    if ( a1 )
    {
      if ( (a3 & 0x8000u) == 0LL )
      {
        v15 = *(_QWORD *)(a1 + 24);
        if ( (__int16)a3 < (unsigned int)*(unsigned __int16 *)(v15 + 6) )
        {
          LOBYTE(a3) = a4;
          v13 = *(_QWORD *)(v15 + 16) + 28 * v8;
          v12 = RtlpMuiRegLangInfoMatchesSpec(a1, v13, a3, a5);
          goto LABEL_43;
        }
      }
    }
    goto LABEL_40;
  }
  if ( a4 != 2 )
  {
    v12 = 1;
    if ( a2 == 1 )
    {
      if ( a4 == 3 )
      {
        v20 = *(_QWORD *)(a1 + 32);
        if ( v20 )
        {
          if ( (a5 & 0x8000u) == 0 && (__int16)a5 < (unsigned int)*(unsigned __int16 *)(v20 + 6) )
          {
            v21 = (const WCHAR *)(*(_QWORD *)(v20 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v20 + 16) + 2LL * (__int16)a5));
            if ( v21 )
            {
              RtlInitUnicodeString(&DestinationString, v21);
              if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
              {
                v11 = (_WORD)v8 == (unsigned __int16)Lcid;
                goto LABEL_3;
              }
            }
          }
        }
      }
    }
    else if ( a2 == 3 && a4 == 1 )
    {
      v22 = (wchar_t *)MuiRegAllocArray(a1, 0x55u);
      v10 = v22;
      if ( v22 )
      {
        DestinationString.Buffer = v22;
        *(_DWORD *)&DestinationString.Length = 11141120;
        if ( RtlLCIDToCultureName((__int16)a5, &DestinationString) )
        {
          v23 = *(_QWORD *)(a1 + 32);
          if ( !v23
            || (v8 & 0x8000u) != 0LL
            || (unsigned int)v8 >= *(unsigned __int16 *)(v23 + 6)
            || (v24 = (const wchar_t *)(*(_QWORD *)(v23 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v23 + 16) + 2 * v8))) == 0LL
            || wcsicmp(DestinationString.Buffer, v24) )
          {
            v12 = 0;
          }
          goto LABEL_41;
        }
      }
    }
LABEL_40:
    v12 = 0;
    if ( !v10 )
    {
LABEL_42:
      v13 = 0LL;
      goto LABEL_43;
    }
LABEL_41:
    ExFreePoolWithTag(v10, 0);
    goto LABEL_42;
  }
  if ( !a1 )
    goto LABEL_40;
  v16 = a5;
  if ( (a5 & 0x8000u) != 0 )
    goto LABEL_40;
  v17 = *(_QWORD *)(a1 + 24);
  if ( (__int16)a5 >= (unsigned int)*(unsigned __int16 *)(v17 + 6) )
    goto LABEL_40;
  v18 = (unsigned __int16)a3;
  LOBYTE(a3) = v7;
  v19 = *(_QWORD *)(v17 + 16) + 28LL * (__int16)a5;
  v28 = v19;
  v12 = RtlpMuiRegLangInfoMatchesSpec(a1, v19, a3, v18);
  if ( v12 && v19 && v14 )
    *v14 = v16;
  v13 = 0LL;
LABEL_43:
  v25 = a6;
  if ( a6 )
  {
    if ( v12 )
    {
      if ( v28 )
      {
        *a6 = v28;
      }
      else if ( v13 )
      {
        *a6 = v13;
      }
      else
      {
        *a6 = 0LL;
        if ( (int)RtlpMuiRegGetInstalledLanguageIndex(a1, v7, (unsigned __int16)v8, &v31) >= 0 && v31 >= 0 )
        {
          v26 = *(_QWORD *)(a1 + 24);
          if ( v31 < (int)*(unsigned __int16 *)(v26 + 6) )
            *v25 = *(_QWORD *)(v26 + 16) + 28LL * v31;
        }
      }
    }
    else
    {
      *a6 = 0LL;
    }
  }
  return v12;
}
