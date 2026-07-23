/*
 * XREFs of HvlDebuggerSupportInitialize @ 0x1405BAC20
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     strstr @ 0x140537FA0 (strstr.c)
 *     atol @ 0x140538200 (atol.c)
 *     sscanf_s @ 0x14053E9D0 (sscanf_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     strncmp @ 0x140741F60 (strncmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlAnsiStringToUnicodeString @ 0x14097C370 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 */

void __fastcall HvlDebuggerSupportInitialize(__int64 a1)
{
  __int16 v2; // r13
  int v3; // r15d
  char v4; // si
  char v5; // bl
  const char *v6; // rcx
  char *v7; // r14
  char *v8; // r12
  char *v9; // rax
  char *v10; // rbx
  __int64 v11; // rax
  char *v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char *v16; // rax
  int v17; // eax
  int v18; // ebx
  char *v19; // rax
  char *v20; // rdi
  __int16 v21; // di
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  ANSI_STRING SourceString; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v28[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v29; // [rsp+68h] [rbp-98h]
  int v30; // [rsp+6Ah] [rbp-96h]
  __int16 v31; // [rsp+6Eh] [rbp-92h]
  char v32; // [rsp+70h] [rbp-90h]
  char v33; // [rsp+73h] [rbp-8Dh]
  int v34; // [rsp+120h] [rbp+20h]
  __int16 v35; // [rsp+12Ch] [rbp+2Ch]
  int v36; // [rsp+13Ch] [rbp+3Ch]
  wchar_t *Buffer; // [rsp+140h] [rbp+40h]
  int Length; // [rsp+148h] [rbp+48h]

  v22 = 0;
  v23 = 0;
  v24 = 0;
  v2 = 0;
  v25 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  DestinationString = 0LL;
  if ( (HvlpRootFlags & 8) != 0 )
  {
    if ( a1 )
    {
      v6 = *(const char **)(a1 + 216);
      if ( v6 )
      {
        v7 = strstr(v6, "HYPERVISORDBGPORT=");
        v8 = strstr(*(const char **)(a1 + 216), "HYPERVISORDBGDEVICE=");
        v9 = strstr(*(const char **)(a1 + 216), "HYPERVISORDBGACPIPATH=");
        if ( v9 )
        {
          v10 = strstr(v9, "\\");
          if ( v10 )
          {
            memset_0(v28, 0, 0x110uLL);
            v36 = 1;
            if ( v7 )
              v35 = 0x8000;
            else
              v35 = -32765;
            v11 = (__int64)strstr(v10, " ");
            if ( v11 )
            {
              LOWORD(v11) = v11 - (_WORD)v10;
            }
            else
            {
              v11 = -1LL;
              do
                ++v11;
              while ( v10[v11] );
            }
            *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
            SourceString.Buffer = v10;
            SourceString.Length = v11;
            SourceString.MaximumLength = v11;
            if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u) >= 0 )
            {
              Buffer = DestinationString.Buffer;
              Length = DestinationString.Length;
              v33 = 1;
              guard_dispatch_icall_no_overrides(0LL, v28);
              RtlFreeAnsiString(&DestinationString);
            }
          }
        }
        else if ( v7 )
        {
          v12 = strstr(v7, "COM");
          if ( v12 )
          {
            v13 = atol(v12 + 3) - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                v15 = v14 - 1;
                if ( v15 )
                {
                  if ( v15 == 1 )
                    KdHvComPortInUse = 744LL;
                }
                else
                {
                  KdHvComPortInUse = 1000LL;
                }
              }
              else
              {
                KdHvComPortInUse = 760LL;
              }
            }
            else
            {
              KdHvComPortInUse = 1016LL;
            }
          }
        }
        else if ( v8 )
        {
          v16 = strstr(v8, "=");
          v17 = sscanf_s(v16 + 1, "%lu.%lu.%lu.%lu", &v22, &v23, &v24, &v25);
          if ( v17 == 3 )
          {
            v3 = v22;
            v4 = v23;
            v5 = v24;
          }
          else if ( v17 == 4 )
          {
            v2 = v22;
            v3 = v23;
            v4 = v24;
            v5 = v25;
          }
          v18 = v4 & 0x1F | (32 * (v5 & 7));
          v19 = strstr(*(const char **)(a1 + 216), "HYPERVISORDBGTYPE=");
          v20 = v19;
          if ( v19 )
          {
            if ( !strncmp(v19 + 18, "1394", 4uLL) )
            {
              v21 = -32767;
            }
            else
            {
              if ( strncmp(v20 + 18, "NET", 3uLL) )
                return;
              v21 = -32765;
            }
            memset_0(v28, 0, 0x110uLL);
            v33 = 1;
            v29 = v2;
            v30 = -1;
            v28[0] = v3;
            v28[1] = v18;
            if ( v21 == -32767 )
            {
              v31 = 12;
              v32 = 16;
            }
            else
            {
              v31 = 2;
              v32 = -1;
            }
            v34 = 0;
            guard_dispatch_icall_no_overrides(0LL, v28);
          }
        }
      }
    }
  }
}
