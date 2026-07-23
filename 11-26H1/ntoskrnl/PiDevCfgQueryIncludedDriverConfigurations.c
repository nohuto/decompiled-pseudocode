/*
 * XREFs of PiDevCfgQueryIncludedDriverConfigurations @ 0x140AEA96C
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x140AEA1C8 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x1404EF504 (PnpDuplicateUnicodeString.c)
 *     PiDevCfgPopDriverNodeEntry @ 0x1404FCF34 (PiDevCfgPopDriverNodeEntry.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     wcsrchr @ 0x14053A7D0 (wcsrchr.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1405DDA98 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgPushDriverNodeEntry @ 0x1405DDCD0 (PiDevCfgPushDriverNodeEntry.c)
 *     PiDevCfgAppendMultiSz @ 0x1407AB6AC (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1407AD478 (PiDevCfgQueryIncludedDriverNode.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     PiDevCfgFreeDriverNode @ 0x140AE6B84 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140AEA1C8 (PiDevCfgQueryDriverConfiguration.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryIncludedDriverConfigurations(__int64 a1)
{
  __int64 v1; // r15
  int DriverConfiguration; // ebx
  int v3; // eax
  wchar_t *v4; // rsi
  wchar_t *v5; // r12
  wchar_t *v6; // rdi
  wchar_t *v7; // rax
  const wchar_t *v8; // r14
  bool v9; // cf
  int v10; // eax
  const wchar_t *v11; // r13
  wchar_t *v12; // rax
  int v13; // edx
  int v14; // edi
  wchar_t *v15; // rax
  wchar_t *v16; // rbx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // r14
  __int64 *v21; // r12
  __int64 *v22; // r13
  __int64 *v23; // rax
  __int64 v24; // rax
  PVOID v25; // rdi
  PVOID *v26; // rax
  _QWORD *v28; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+38h] [rbp-8h]
  __int64 v31; // [rsp+88h] [rbp+48h] BYREF
  __int64 v32; // [rsp+90h] [rbp+50h] BYREF

  v1 = a1;
  P = &v28;
  v31 = 0LL;
  v28 = &v28;
  v32 = 0LL;
  if ( !*(_QWORD *)(a1 + 376) )
  {
    DriverConfiguration = 0;
    goto LABEL_50;
  }
  v3 = PiDevCfgPushDriverNodeEntry((__int64)&v28, a1);
  DriverConfiguration = v3;
LABEL_4:
  if ( v3 < 0 )
    goto LABEL_50;
  do
  {
    if ( !PiDevCfgPopDriverNodeEntry(&v28, &v31) )
      goto LABEL_50;
    v4 = *(wchar_t **)(v31 + 376);
  }
  while ( !v4 );
  while ( 1 )
  {
    v3 = DriverConfiguration;
    v5 = v4;
    if ( !*v4 )
      goto LABEL_4;
    v6 = v4;
    v7 = wcschr(v4, 0x3Au);
    if ( v7 )
    {
      *v7 = 0;
      v8 = v7 + 1;
      v4 = v7 + 1;
      v9 = *v6 < 0x2Au;
      if ( *v6 != 42 || (v9 = 0, v6[1]) )
        v10 = v9 ? -1 : 1;
      else
        v10 = 0;
      v11 = (const wchar_t *)((unsigned __int64)v5 & -(__int64)(v10 != 0));
      v12 = wcsrchr(v8, 0x2Eu);
      if ( v12 )
      {
        *v12 = 0;
        v4 = v12 + 1;
        v13 = v12[1] - 42;
        if ( v12[1] == 42 )
          v13 = v12[2];
        if ( v13 )
        {
          v4 = v12 + 1;
          v14 = 0;
          if ( v12[1] )
          {
            do
            {
              v15 = wcschr(v4, 0x2Cu);
              if ( v15 )
              {
                *v15 = 0;
                v16 = v15 + 1;
              }
              else
              {
                v17 = -1LL;
                do
                  ++v17;
                while ( v4[v17] );
                v16 = &v4[v17];
              }
              v14 |= PiDevCfgGetDriverConfigurationKeyScope(v4);
              v4 = v16;
            }
            while ( *v16 );
          }
        }
        else
        {
          v14 = -1;
        }
        v18 = PiDevCfgQueryIncludedDriverNode(v31, v11, v8, v14, &v32);
        DriverConfiguration = v18;
        if ( v18 < 0 )
        {
          *(_DWORD *)(v1 + 444) = v18;
          break;
        }
        v19 = v32;
        v20 = v1 + 384;
        v21 = *(__int64 **)(v1 + 384);
        if ( v21 != (__int64 *)(v1 + 384) )
        {
          do
          {
            v22 = v21;
            if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v21 + 11), (PCUNICODE_STRING)(v19 + 88), 1u)
              && RtlEqualUnicodeString((PCUNICODE_STRING)(v21 + 5), (PCUNICODE_STRING)(v19 + 40), 1u) )
            {
              break;
            }
            v21 = (__int64 *)*v21;
            v22 = 0LL;
          }
          while ( v21 != (__int64 *)v20 );
          v1 = a1;
          if ( v22 )
          {
            PiDevCfgFreeDriverNode(v19);
            goto LABEL_44;
          }
        }
        v23 = *(__int64 **)(v20 + 8);
        if ( *v23 != v20 )
LABEL_55:
          __fastfail(3u);
        *(_QWORD *)v19 = v20;
        *(_QWORD *)(v19 + 8) = v23;
        *v23 = v19;
        *(_QWORD *)(v20 + 8) = v19;
        DriverConfiguration = PiDevCfgQueryDriverConfiguration(v19);
        if ( DriverConfiguration < 0 )
          break;
        if ( *(_QWORD *)(v19 + 296) && !*(_QWORD *)(v1 + 296) && !PnpDuplicateUnicodeString(v1 + 288, v19 + 288) )
        {
          DriverConfiguration = -1073741670;
          break;
        }
        if ( *(_QWORD *)(v19 + 312) )
        {
          DriverConfiguration = PiDevCfgAppendMultiSz((PUNICODE_STRING)(v1 + 304), 0LL, (const void **)(v19 + 304), 0);
          if ( DriverConfiguration < 0 )
            break;
        }
        if ( *(_QWORD *)(v19 + 328) )
        {
          DriverConfiguration = PiDevCfgAppendMultiSz((PUNICODE_STRING)(v1 + 320), 0LL, (const void **)(v19 + 320), 0);
          if ( DriverConfiguration < 0 )
            break;
        }
        if ( *(_QWORD *)(v19 + 344) )
        {
          DriverConfiguration = PiDevCfgAppendMultiSz((PUNICODE_STRING)(v1 + 336), 0LL, (const void **)(v19 + 336), 0);
          if ( DriverConfiguration < 0 )
            break;
        }
        DriverConfiguration = PiDevCfgPushDriverNodeEntry((__int64)&v28, v19);
        if ( DriverConfiguration < 0 )
          break;
      }
    }
LABEL_44:
    v24 = -1LL;
    do
      ++v24;
    while ( v4[v24] );
    v4 += v24 + 1;
  }
LABEL_50:
  while ( v28 != &v28 )
  {
    v25 = P;
    if ( *(_QWORD ***)P != &v28 )
      goto LABEL_55;
    v26 = (PVOID *)*((_QWORD *)P + 1);
    if ( *v26 != P )
      goto LABEL_55;
    P = (PVOID)*((_QWORD *)P + 1);
    *v26 = &v28;
    ExFreePoolWithTag(v25, 0);
    if ( !v25 )
      return (unsigned int)DriverConfiguration;
  }
  return (unsigned int)DriverConfiguration;
}
