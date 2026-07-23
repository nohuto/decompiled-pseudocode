/*
 * XREFs of LdrpSnapKernelBaseExtensions @ 0x18007A190
 * Callers:
 *     LdrpInitializeKernel32Functions @ 0x18007CC48 (LdrpInitializeKernel32Functions.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlAnsiStringToUnicodeString @ 0x180025D10 (RtlAnsiStringToUnicodeString.c)
 *     RtlUTF8ToUnicodeN @ 0x1800261F0 (RtlUTF8ToUnicodeN.c)
 *     ApiSetpSearchForApiSet @ 0x180031690 (ApiSetpSearchForApiSet.c)
 *     ApiSetpResolveHost @ 0x180031880 (ApiSetpResolveHost.c)
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     RtlpIsUtf8Process @ 0x18007A650 (RtlpIsUtf8Process.c)
 *     LdrpLogDllState @ 0x18007A680 (LdrpLogDllState.c)
 *     RtlCompareUnicodeStrings @ 0x18007B0A0 (RtlCompareUnicodeStrings.c)
 *     LdrpLogEtwEvent @ 0x18007B5D8 (LdrpLogEtwEvent.c)
 *     LdrGetDllHandleByName @ 0x18007BCD0 (LdrGetDllHandleByName.c)
 *     LdrpResolveDelayLoadDescriptor @ 0x1801055C4 (LdrpResolveDelayLoadDescriptor.c)
 *     _strnicmp @ 0x1801286B0 (_strnicmp.c)
 *     strlen @ 0x180164EE0 (strlen.c)
 */

const IMAGE_DELAYLOAD_DESCRIPTOR *LdrpSnapKernelBaseExtensions()
{
  char *v0; // rbx
  const IMAGE_DELAYLOAD_DESCRIPTOR *result; // rax
  const IMAGE_DELAYLOAD_DESCRIPTOR *v2; // r13
  ULONG v3; // esi
  int Descriptor; // edi
  _DWORD *ApiSetMap; // r15
  ULONG v6; // r12d
  __int64 DllNameRVA; // rax
  char *v8; // rbx
  size_t v9; // rax
  ULONG v10; // edx
  WCHAR *v11; // rcx
  unsigned int v12; // r8d
  unsigned int v13; // ebx
  __int64 v14; // rcx
  char v15; // bl
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // eax
  LONG v20; // eax
  wchar_t *Atom; // rax
  unsigned int Length; // r8d
  _WORD *v23; // rax
  unsigned __int16 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v28; // rax
  char *v29; // rcx
  signed __int32 v30[8]; // [rsp+0h] [rbp-49h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  PCWCH String2[2]; // [rsp+50h] [rbp+7h] BYREF
  ANSI_STRING SourceString; // [rsp+60h] [rbp+17h] BYREF
  char v34; // [rsp+B0h] [rbp+67h] BYREF
  ULONG Size; // [rsp+B8h] [rbp+6Fh] BYREF
  PVOID DllHandle; // [rsp+C0h] [rbp+77h] BYREF

  DllHandle = 0LL;
  SourceString = 0LL;
  Size = 0;
  *(_OWORD *)String2 = 0LL;
  v34 = 0;
  LdrGetDllHandleByName((PUNICODE_STRING)&LdrpKernelbaseDllName, 0LL, &DllHandle);
  v0 = (char *)DllHandle;
  result = (const IMAGE_DELAYLOAD_DESCRIPTOR *)RtlImageDirectoryEntryToData(DllHandle, 1u, 0xDu, &Size);
  v2 = result;
  if ( !result )
    return result;
  v3 = 0;
  Descriptor = 0;
  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  v6 = Size >> 5;
  DestinationString = 0LL;
  while ( v3 < v6 )
  {
    DllNameRVA = v2[v3].DllNameRVA;
    if ( !(_DWORD)DllNameRVA )
      break;
    v8 = &v0[DllNameRVA];
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
      Size = 0;
      if ( (unsigned __int8)RtlpIsUtf8Process(0) )
      {
        if ( v10 )
        {
          RtlUTF8ToUnicodeN(v11, 0, &Size, v8, v10);
          LODWORD(v11) = Size;
          v12 = 65534;
        }
      }
      else
      {
        _InterlockedOr(v30, (unsigned int)v11);
        if ( GlobalRtlNlsState.DBCSCodePage == (_WORD)v11 )
        {
          LODWORD(v11) = 2 * v10;
        }
        else
        {
          while ( v10-- )
          {
            v28 = (unsigned __int8)*v8++;
            if ( *(_WORD *)(qword_1801C5020 + 2 * v28) )
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
          RtlpSysVolFree(DestinationString.Buffer);
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
      if ( RtlGetCurrentServiceSessionId() )
        v14 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v14 = 2147353476LL;
      if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v29 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
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
        *(_OWORD *)String2 = 0LL;
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
                  String2[1] = (PCWCH)((char *)ApiSetMap + *(unsigned int *)((char *)ApiSetMap + v26 + 12));
                  WORD1(String2[0]) = *(_WORD *)((char *)ApiSetMap + v26 + 16);
                  LOWORD(String2[0]) = WORD1(String2[0]);
                }
              }
            }
          }
        }
        v34 = v15;
        goto LABEL_25;
      }
      v19 = ApiSetpResolveHost(
              v18,
              (__int64)DestinationString.Buffer,
              DestinationString.Length >> 1,
              1,
              0LL,
              &v34,
              (__int64)String2);
      v15 = v34;
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
      if ( LOWORD(String2[0]) )
        v17 = 5329LL;
      else
        v17 = 5330LL;
LABEL_33:
      LdrpLogDllState(0LL, &DestinationString, v17);
      if ( !v15 )
        goto LABEL_37;
      v20 = RtlCompareUnicodeStrings(
              LdrpKernel32DllName.Buffer,
              0xCuLL,
              String2[1],
              (unsigned __int64)LOWORD(String2[0]) >> 1,
              1u);
      v0 = (char *)DllHandle;
      if ( v20 )
        goto LABEL_38;
      Descriptor = LdrpResolveDelayLoadDescriptor(DllHandle, &v2[v3]);
      if ( Descriptor < 0 )
        break;
      Descriptor = 0;
      ++v3;
    }
    else
    {
LABEL_37:
      v0 = (char *)DllHandle;
LABEL_38:
      ++v3;
    }
  }
  Atom = DestinationString.Buffer;
LABEL_57:
  if ( Atom )
    RtlpSysVolFree(Atom);
  return (const IMAGE_DELAYLOAD_DESCRIPTOR *)(unsigned int)Descriptor;
}
