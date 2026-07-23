/*
 * XREFs of LdrResFallbackLangList @ 0x180054C10
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1800A71F0 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800A976C (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     LdrpGetParentLangId @ 0x18004DD38 (LdrpGetParentLangId.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     LdrpSetThreadPreferredLangList @ 0x180053860 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800551A0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpResUltimateFallbackInfo @ 0x1800A6560 (RtlpResUltimateFallbackInfo.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A6E00 (LdrpTraceLoadMUIDll.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtQueryDefaultLocale @ 0x18015F0E0 (NtQueryDefaultLocale.c)
 */

__int64 __fastcall LdrResFallbackLangList(void *a1, __int64 a2, unsigned __int16 a3, int a4, unsigned __int16 *a5)
{
  unsigned __int16 *v5; // rdi
  int v6; // r12d
  __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // ebx
  unsigned __int16 CurrentLocale; // r14
  unsigned int v12; // r15d
  int v13; // eax
  int v14; // esi
  unsigned __int16 *MergedPrefLanguages; // rcx
  __int64 v16; // rdx
  int v17; // eax
  size_t v19; // rax
  int v20; // ecx
  _WORD v21[2]; // [rsp+38h] [rbp-41h] BYREF
  NTSTATUS v22; // [rsp+3Ch] [rbp-3Dh]
  DWORD v23; // [rsp+40h] [rbp-39h] BYREF
  DWORD Lcid; // [rsp+44h] [rbp-35h] BYREF
  int v25; // [rsp+48h] [rbp-31h]
  DWORD DefaultLocaleId; // [rsp+4Ch] [rbp-2Dh] BYREF
  wchar_t *String; // [rsp+50h] [rbp-29h]
  _UNICODE_STRING v28; // [rsp+58h] [rbp-21h] BYREF
  _QWORD v29[2]; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v30[2]; // [rsp+78h] [rbp-1h] BYREF

  v5 = a5;
  v6 = 0;
  v29[1] = L"LdrResFallbackLangList Enter";
  v30[1] = L"LdrResFallbackLangList Exit";
  v29[0] = 3801144LL;
  v30[0] = 3670070LL;
  v28 = 0LL;
  String = 0LL;
  v25 = 0;
  Lcid = 0;
  v23 = 0;
  DefaultLocaleId = 0;
  v7 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v8 = 2147353477LL;
  v9 = 2147353476LL;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      LdrpTraceLoadMUIDll(v29, *((unsigned __int8 *)NtCurrentPeb()->SharedData + 554));
    else
      LdrpTraceLoadMUIDll(v29, MEMORY[0x7FFE0384]);
  }
  if ( !v5 )
  {
    v22 = -1073741811;
    goto LABEL_24;
  }
  v10 = 0;
  CurrentLocale = 0;
  v12 = 0;
  LOBYTE(a5) = 0;
  *v5 = 0;
  *((_BYTE *)v5 + 516) = 0;
  v22 = 0;
  while ( 2 )
  {
    while ( 1 )
    {
      v13 = v10;
      v14 = v10++;
      if ( v13 != 2 )
        break;
      v21[0] = 0;
      if ( LdrpSetThreadPreferredLangList() )
      {
        MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages;
        if ( v12 < MergedPrefLanguages[2] )
        {
          GetLCIDFromLangListNodeWithLICCheck(
            (_DWORD)MergedPrefLanguages,
            NtCurrentTeb()->MergedPrefLanguages,
            v12,
            (unsigned int)v21,
            (__int64)&a5);
          CurrentLocale = v21[0];
          if ( v21[0] )
          {
            if ( (_BYTE)a5 && (a4 & 0x100000) != 0 )
              CurrentLocale = -4370;
            v6 = 3;
            ++v12;
            v10 = v14;
            goto LABEL_16;
          }
        }
      }
      CurrentLocale = -4370;
    }
    switch ( v13 )
    {
      case 0:
        CurrentLocale = a3;
        v6 = 1;
        goto LABEL_16;
      case 1:
        if ( (a4 & 4) == 0 )
        {
          if ( (a3 & 0x3FF) != 0 )
          {
            *((_BYTE *)v5 + 516) = 1;
            v21[0] = 0;
            if ( (int)LdrpGetParentLangId(CurrentLocale, v21) < 0 )
              goto LABEL_23;
            CurrentLocale = v21[0];
            v10 = v14;
            v6 = 2;
            if ( !v21[0] )
              v10 = -1;
          }
          else
          {
            CurrentLocale = -4370;
            v6 = 2;
          }
LABEL_16:
          if ( CurrentLocale != 0xEEEE )
          {
LABEL_17:
            v16 = *v5;
            v17 = 0;
            if ( *v5 )
            {
              while ( v5[4 * v17 + 2] != CurrentLocale )
              {
                if ( ++v17 >= (unsigned int)v16 )
                  goto LABEL_20;
              }
            }
            else
            {
LABEL_20:
              if ( (unsigned int)v16 >= 0x40 )
                goto LABEL_23;
              v5[4 * v16 + 2] = CurrentLocale;
              *(_DWORD *)&v5[4 * (*v5)++ + 4] = v6;
            }
          }
          continue;
        }
        *((_BYTE *)v5 + 516) = 1;
LABEL_23:
        v9 = 2147353476LL;
LABEL_24:
        if ( RtlGetCurrentServiceSessionId() )
          v7 = (__int64)NtCurrentPeb()->SharedData + 555;
        if ( (*(_BYTE *)v7 & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v9 = (__int64)NtCurrentPeb()->SharedData + 554;
          LdrpTraceLoadMUIDll(v30, *(unsigned __int8 *)v9);
        }
        return (unsigned int)v22;
      case 3:
        if ( !a1 || (int)RtlpResUltimateFallbackInfo(a1, a4) < 0 )
          goto LABEL_32;
        *(_QWORD *)&v28.Length = 0LL;
        v28.Buffer = String;
        if ( String )
        {
          v19 = 2 * wcslen(String);
          if ( v19 >= 0xFFFE )
            LOWORD(v19) = -4;
          v28.Length = v19;
          v28.MaximumLength = v19 + 2;
        }
        if ( RtlCultureNameToLCID(&v28, &Lcid) )
        {
          CurrentLocale = Lcid;
          v21[0] = Lcid;
          if ( (a4 & 0x100000) != 0 )
          {
            GetLCIDFromLangListNodeWithLICCheck(
              v20,
              NtCurrentTeb()->MergedPrefLanguages,
              0,
              (unsigned int)v21,
              (__int64)&a5);
            if ( (_BYTE)a5 )
              CurrentLocale = -4370;
            else
              CurrentLocale = v21[0];
          }
          v6 = 10;
          if ( (v25 & 1) == 0 )
            v6 = 4;
          goto LABEL_16;
        }
        v22 = -1073020923;
LABEL_32:
        CurrentLocale = -4370;
        continue;
      case 4:
        CurrentLocale = -4370;
        if ( (~a4 & 0x80000) != 0 )
          goto LABEL_23;
        if ( !NtCurrentTeb() )
          continue;
        CurrentLocale = NtCurrentTeb()->CurrentLocale;
        goto LABEL_16;
      case 5:
        CurrentLocale = -4370;
        v22 = NtQueryDefaultLocale(1u, &v23);
        if ( v22 < 0 )
          continue;
        CurrentLocale = v23;
        goto LABEL_16;
      case 6:
        CurrentLocale = -4370;
        v22 = NtQueryDefaultLocale(0, &DefaultLocaleId);
        if ( v22 < 0 || DefaultLocaleId == v23 )
          continue;
        CurrentLocale = DefaultLocaleId;
        goto LABEL_16;
      case 7:
        CurrentLocale = 1033;
        goto LABEL_17;
      default:
        goto LABEL_23;
    }
  }
}
