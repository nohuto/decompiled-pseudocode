/*
 * XREFs of LdrpSnapKernelBaseExtensions @ 0x180082DF0
 * Callers:
 *     LdrpInitializeKernel32Functions @ 0x1800858A8 (LdrpInitializeKernel32Functions.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003B7A0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUTF8ToUnicodeN @ 0x18003BC80 (RtlUTF8ToUnicodeN.c)
 *     ApiSetpSearchForApiSet @ 0x180047120 (ApiSetpSearchForApiSet.c)
 *     ApiSetpResolveHost @ 0x180047310 (ApiSetpResolveHost.c)
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 *     RtlpIsUtf8Process @ 0x1800832B0 (RtlpIsUtf8Process.c)
 *     LdrpLogDllState @ 0x1800832E0 (LdrpLogDllState.c)
 *     RtlCompareUnicodeStrings @ 0x180083D00 (RtlCompareUnicodeStrings.c)
 *     LdrpLogEtwEvent @ 0x180084238 (LdrpLogEtwEvent.c)
 *     LdrGetDllHandleByName @ 0x180084930 (LdrGetDllHandleByName.c)
 *     LdrpResolveDelayLoadDescriptor @ 0x180105D74 (LdrpResolveDelayLoadDescriptor.c)
 *     _strnicmp @ 0x180128940 (_strnicmp.c)
 *     strlen @ 0x180164FE0 (strlen.c)
 */

_DWORD *LdrpSnapKernelBaseExtensions()
{
  unsigned __int64 v0; // rbx
  _DWORD *result; // rax
  _DWORD *v2; // r13
  unsigned int v3; // esi
  int Descriptor; // edi
  _DWORD *ApiSetMap; // r15
  unsigned int v6; // r12d
  __int64 v7; // rax
  char *v8; // rbx
  size_t v9; // rax
  unsigned int v10; // edx
  _WORD *v11; // rcx
  unsigned int v12; // r8d
  unsigned int v13; // ebx
  __int64 v14; // rcx
  char v15; // bl
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  wchar_t *Atom; // rax
  unsigned int Length; // r8d
  _WORD *v23; // rax
  unsigned __int16 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v28; // rax
  char *v29; // rcx
  signed __int32 v30[8]; // [rsp+0h] [rbp-49h] BYREF
  __int64 v31; // [rsp+20h] [rbp-29h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  __int128 v33; // [rsp+50h] [rbp+7h] BYREF
  STRING SourceString; // [rsp+60h] [rbp+17h] BYREF
  char v35; // [rsp+B0h] [rbp+67h] BYREF
  unsigned int v36; // [rsp+B8h] [rbp+6Fh] BYREF
  unsigned __int64 v37; // [rsp+C0h] [rbp+77h] BYREF

  v37 = 0LL;
  SourceString = 0LL;
  v36 = 0;
  v33 = 0LL;
  v35 = 0;
  LdrGetDllHandleByName(&LdrpKernelbaseDllName, 0LL, &v37);
  v0 = v37;
  result = RtlImageDirectoryEntryToData(v37, 1, 0xDu, &v36);
  v2 = result;
  if ( !result )
    return result;
  v3 = 0;
  Descriptor = 0;
  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  v6 = v36 >> 5;
  DestinationString = 0LL;
  while ( v3 < v6 )
  {
    v7 = (unsigned int)v2[8 * v3 + 1];
    if ( !(_DWORD)v7 )
      break;
    v8 = (char *)(v7 + v0);
    if ( !strnicmp(v8, "EXT-", 4uLL) )
    {
      Descriptor = 0;
      SourceString.Buffer = v8;
      *(_QWORD *)&SourceString.Length = 0LL;
      if ( v8 )
      {
        v9 = strlen(v8);
        if ( v9 >= 0xFFFF )
          LOWORD(v9) = -2;
        SourceString.Length = v9;
        SourceString.MaximumLength = v9 + 1;
      }
      else
      {
        LOWORD(v9) = SourceString.Length;
      }
      v36 = 0;
      if ( (unsigned __int8)RtlpIsUtf8Process(0LL, (unsigned __int16)v9, 65534LL) )
      {
        if ( v10 )
        {
          RtlUTF8ToUnicodeN(v11, 0, &v36, v8, v10);
          LODWORD(v11) = v36;
          v12 = 65534;
        }
      }
      else
      {
        _InterlockedOr(v30, (unsigned int)v11);
        if ( word_1801C5F9C == (_WORD)v11 )
        {
          LODWORD(v11) = 2 * v10;
        }
        else
        {
          while ( v10-- )
          {
            v28 = (unsigned __int8)*v8++;
            if ( *(_WORD *)(qword_1801C6020 + 2 * v28) )
            {
              if ( !v10 )
              {
                LODWORD(v11) = (_DWORD)v11 + 2;
                break;
              }
              --v10;
              ++v8;
            }
            LODWORD(v11) = (_DWORD)v11 + 2;
          }
          v12 = 65534;
        }
      }
      v13 = (_DWORD)v11 + 2;
      if ( (int)v11 + 2 > (unsigned int)DestinationString.MaximumLength )
      {
        if ( v13 >= v12 )
        {
          Descriptor = -1073741675;
          break;
        }
        if ( DestinationString.Buffer )
        {
          RtlpSysVolFree((__int64)DestinationString.Buffer);
          *(_QWORD *)&DestinationString.Length = 0LL;
        }
        Atom = (wchar_t *)RtlpAllocateAtom(v13);
        DestinationString.Buffer = Atom;
        if ( !Atom )
        {
          Descriptor = -1073741670;
          goto LABEL_57;
        }
        DestinationString.MaximumLength = v13;
      }
      else
      {
        DestinationString.Length = 0;
      }
      RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v14 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v14 = 2147353476LL;
      if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v29 = (unsigned int)RtlGetCurrentServiceSessionId()
            ? (char *)NtCurrentPeb()->SharedData + 555
            : (char *)2147353477;
        if ( (*v29 & 0x20) != 0 )
          LdrpLogEtwEvent(5328, 0, 0, 0, (__int64)&DestinationString, 0LL);
      }
      if ( *(_BYTE *)ApiSetMap == 7 )
      {
        v18 = (__int64)ApiSetMap;
      }
      else if ( *ApiSetMap != 6
             || ApiSetMap[4] <= 8u
             || (v18 = (__int64)(ApiSetMap + 7), *((_BYTE *)ApiSetMap + 28) != 7)
             || (*((_BYTE *)ApiSetMap + 30) & 4) != 0 )
      {
        v15 = 0;
        v33 = 0LL;
        if ( DestinationString.Length >= 8u )
        {
          v16 = *(_QWORD *)DestinationString.Buffer & 0xFFFFFFDFFFDFFFDFuLL;
          if ( v16 == 0x2D004900500041LL || v16 == 0x2D005400580045LL )
          {
            Length = DestinationString.Length;
            v23 = (wchar_t *)((char *)DestinationString.Buffer + DestinationString.Length);
            do
            {
              if ( Length <= 1 )
                break;
              --v23;
              Length -= 2;
            }
            while ( *v23 != 45 );
            v24 = (unsigned __int16)Length >> 1;
            if ( v24 )
            {
              v25 = ApiSetpSearchForApiSet(ApiSetMap, DestinationString.Buffer, v24);
              if ( v25 )
              {
                if ( *(_DWORD *)(v25 + 20) )
                {
                  v26 = *(unsigned int *)(v25 + 16);
                  v15 = 1;
                  *((_QWORD *)&v33 + 1) = (char *)ApiSetMap + *(unsigned int *)((char *)ApiSetMap + v26 + 12);
                  WORD1(v33) = *(_WORD *)((char *)ApiSetMap + v26 + 16);
                  LOWORD(v33) = WORD1(v33);
                }
              }
            }
          }
        }
        v35 = v15;
        goto LABEL_25;
      }
      v19 = ApiSetpResolveHost(
              v18,
              (__int64)DestinationString.Buffer,
              DestinationString.Length >> 1,
              1,
              0LL,
              &v35,
              (__int64)&v33);
      v15 = v35;
      Descriptor = v19;
      if ( v19 < 0 )
      {
LABEL_32:
        v17 = 5331LL;
        goto LABEL_33;
      }
LABEL_25:
      if ( !v15 )
        goto LABEL_32;
      if ( (_WORD)v33 )
        v17 = 5329LL;
      else
        v17 = 5330LL;
LABEL_33:
      LdrpLogDllState(0LL, &DestinationString, v17);
      if ( !v15 )
        goto LABEL_37;
      LOBYTE(v31) = 1;
      v20 = RtlCompareUnicodeStrings(
              L"KERNEL32.DLL",
              12LL,
              *((_QWORD *)&v33 + 1),
              (unsigned __int64)(unsigned __int16)v33 >> 1,
              v31);
      v0 = v37;
      if ( v20 )
        goto LABEL_38;
      Descriptor = LdrpResolveDelayLoadDescriptor(v37);
      if ( Descriptor < 0 )
        break;
      Descriptor = 0;
      ++v3;
    }
    else
    {
LABEL_37:
      v0 = v37;
LABEL_38:
      ++v3;
    }
  }
  Atom = DestinationString.Buffer;
LABEL_57:
  if ( Atom )
    RtlpSysVolFree((__int64)Atom);
  return (_DWORD *)(unsigned int)Descriptor;
}
