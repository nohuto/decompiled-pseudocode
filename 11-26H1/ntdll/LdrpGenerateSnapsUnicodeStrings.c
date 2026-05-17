/*
 * XREFs of LdrpGenerateSnapsUnicodeStrings @ 0x180049370
 * Callers:
 *     LdrpEtwLogLoaderSnaps @ 0x180114F24 (LdrpEtwLogLoaderSnaps.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18003BC80 (RtlUTF8ToUnicodeN.c)
 *     RtlStringCchPrintfExW @ 0x1800496E0 (RtlStringCchPrintfExW.c)
 *     _vsnprintf @ 0x180128D30 (_vsnprintf.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpGenerateSnapsUnicodeStrings(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char *Format,
        va_list ArgList)
{
  int Args; // ecx
  __int64 result; // rax
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // esi
  _WORD *v17; // r10
  __int16 v18; // cx
  __int64 *v19; // r9
  __int16 v20; // ax
  __int64 v21; // r11
  __int64 v22; // rbx
  char *v23; // r8
  unsigned int v24; // edx
  char *v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int8 *v30; // r8
  int UniqueThread; // r8d
  int UniqueProcess; // r9d
  wchar_t *v33; // rcx
  signed __int32 v34[8]; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v35; // [rsp+38h] [rbp-180h]
  char *v36; // [rsp+40h] [rbp-178h]
  __int64 v37; // [rsp+48h] [rbp-170h]
  char *v38; // [rsp+50h] [rbp-168h]
  __int64 v39; // [rsp+60h] [rbp-158h] BYREF
  char Buffer[256]; // [rsp+70h] [rbp-148h] BYREF

  v39 = 0LL;
  memset_thunk_772440563353939046(Buffer, 0, 0x100uLL);
  if ( a1 )
  {
    UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
    UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
    v38 = (&off_180172218)[2 * a5];
    v37 = a4;
    LODWORD(v36) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v33 = *(wchar_t **)(a2 + 8);
    LODWORD(v35) = UniqueThread;
    result = RtlStringCchPrintfExW(v33, 0, (wchar_t *)L"%04x:%04x @ %08d - %S - %S", UniqueProcess);
  }
  else
  {
    Args = (int)NtCurrentTeb()->ClientId.UniqueThread;
    v36 = (&off_1801716A8)[2 * a5];
    v35 = a4;
    result = RtlStringCchPrintfExW(*(wchar_t **)(a2 + 8), 0, (wchar_t *)L"%x-%S-%S-", Args);
  }
  if ( !(_DWORD)result || (_DWORD)result == -2147483643 )
  {
    *(_WORD *)a2 = *(_WORD *)(a2 + 2) - 2 * v39;
    v13 = vsnprintf(Buffer, 0xFFuLL, Format, ArgList);
    if ( v13 < 0 || (unsigned __int64)v13 > 0xFE )
    {
      v14 = 1;
      Buffer[255] = 0;
    }
    else
    {
      v14 = 256 - v13;
    }
    v15 = *(unsigned __int16 *)(a3 + 2);
    v16 = 256 - v14;
    v17 = *(_WORD **)(a3 + 8);
    *(_WORD *)a3 = 2 * (256 - v14);
    _InterlockedOr(v34, 0);
    if ( word_1801C5FD0 == -535 || GlobalRtlNlsState == -535 )
    {
      v18 = Utf8TableInfo;
      v19 = (__int64 *)&xmmword_1801C6070;
      v20 = WORD6(Utf8TableInfo);
      v21 = xmmword_1801C6070;
      v22 = qword_1801C6088;
    }
    else
    {
      _InterlockedOr(v34, 0);
      v18 = GlobalRtlNlsState;
      v19 = &qword_1801C5FB0;
      v20 = word_1801C5F9C;
      v21 = qword_1801C5FB0;
      v22 = qword_1801C5FC8;
    }
    v23 = Buffer;
    if ( v18 == -535 )
    {
      if ( v16 )
        RtlUTF8ToUnicodeN(v17, v15, &v39, Buffer, v16);
    }
    else
    {
      v24 = v15 >> 1;
      if ( v20 )
      {
        while ( v24 && v16 )
        {
          --v24;
          --v16;
          v28 = 2LL * (unsigned __int8)*v23;
          v29 = *(unsigned __int16 *)(v28 + v22);
          if ( (_WORD)v29 )
          {
            if ( !v16 )
            {
              *v17 = 0;
              return 0LL;
            }
            v30 = (unsigned __int8 *)(v23 + 1);
            --v16;
            *v17++ = *(_WORD *)(v22 + 2 * (*v30 + v29));
            v23 = (char *)(v30 + 1);
          }
          else
          {
            *v17++ = *(_WORD *)(v28 + *v19);
            ++v23;
          }
        }
      }
      else
      {
        if ( v24 >= v16 )
          v24 = v16;
        if ( v24 )
        {
          v25 = Buffer;
          v26 = v24;
          do
          {
            v27 = (unsigned __int8)*v25;
            ++v17;
            ++v25;
            *(v17 - 1) = *(_WORD *)(v21 + 2 * v27);
            --v26;
          }
          while ( v26 );
        }
      }
    }
    return 0LL;
  }
  return result;
}
