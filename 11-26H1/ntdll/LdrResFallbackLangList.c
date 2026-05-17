/*
 * XREFs of LdrResFallbackLangList @ 0x1800094E0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1800A80C0 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800AA63C (LdrpResSearchResourceHandle.c)
 * Callees:
 *     LdrpGetParentLangId @ 0x180002608 (LdrpGetParentLangId.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     LdrpSetThreadPreferredLangList @ 0x180008130 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180009A70 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpResUltimateFallbackInfo @ 0x1800A7430 (RtlpResUltimateFallbackInfo.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A7CD0 (LdrpTraceLoadMUIDll.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtQueryDefaultLocale @ 0x18015F1E0 (NtQueryDefaultLocale.c)
 */

__int64 __fastcall LdrResFallbackLangList(__int64 a1, int a2, unsigned __int16 a3, int a4, unsigned __int16 *a5)
{
  unsigned __int16 *v5; // rdi
  int v6; // r12d
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  __int64 MergedPrefLanguages; // rcx
  __int64 v12; // rbx
  int v13; // ebx
  unsigned __int16 CurrentLocale; // r14
  unsigned int v15; // r15d
  int v16; // eax
  int v17; // esi
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  size_t v24; // rax
  _WORD v25[2]; // [rsp+38h] [rbp-41h] BYREF
  int v26; // [rsp+3Ch] [rbp-3Dh]
  int v27; // [rsp+40h] [rbp-39h] BYREF
  int v28; // [rsp+44h] [rbp-35h] BYREF
  int v29; // [rsp+48h] [rbp-31h] BYREF
  int v30; // [rsp+4Ch] [rbp-2Dh] BYREF
  wchar_t *String; // [rsp+50h] [rbp-29h] BYREF
  __int128 v32; // [rsp+58h] [rbp-21h] BYREF
  _QWORD v33[2]; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v34[2]; // [rsp+78h] [rbp-1h] BYREF

  v5 = a5;
  v6 = 0;
  v33[1] = L"LdrResFallbackLangList Enter";
  v34[1] = L"LdrResFallbackLangList Exit";
  v33[0] = 3801144LL;
  v34[0] = 3670070LL;
  v32 = 0LL;
  String = 0LL;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v30 = 0;
  v10 = 2147353477LL;
  if ( (unsigned int)((__int64 (*)(void))RtlGetCurrentServiceSessionId)() )
    MergedPrefLanguages = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    MergedPrefLanguages = 2147353477LL;
  v12 = 2147353476LL;
  if ( (*(_BYTE *)MergedPrefLanguages & 1) != 0 )
  {
    if ( (unsigned int)((__int64 (*)(void))RtlGetCurrentServiceSessionId)() )
      LdrpTraceLoadMUIDll(v33, *((unsigned __int8 *)NtCurrentPeb()->SharedData + 554));
    else
      LdrpTraceLoadMUIDll(v33, MEMORY[0x7FFE0384]);
  }
  if ( !v5 )
  {
    v26 = -1073741811;
    goto LABEL_25;
  }
  v13 = 0;
  CurrentLocale = 0;
  v15 = 0;
  LOBYTE(a5) = 0;
  *v5 = 0;
  *((_BYTE *)v5 + 516) = 0;
  v26 = 0;
LABEL_6:
  v9 = 1033LL;
  v8 = 0x180000000uLL;
  while ( 2 )
  {
    while ( 1 )
    {
      v16 = v13;
      v17 = v13++;
      if ( v16 != 2 )
        break;
      v25[0] = 0;
      if ( !LdrpSetThreadPreferredLangList()
        || (MergedPrefLanguages = (__int64)NtCurrentTeb()->MergedPrefLanguages,
            v15 >= *(unsigned __int16 *)(MergedPrefLanguages + 4))
        || (GetLCIDFromLangListNodeWithLICCheck(
              MergedPrefLanguages,
              NtCurrentTeb()->MergedPrefLanguages,
              v15,
              (unsigned int)v25,
              (__int64)&a5),
            (CurrentLocale = v25[0]) == 0) )
      {
        CurrentLocale = -4370;
        goto LABEL_6;
      }
      if ( (_BYTE)a5 && (a4 & 0x100000) != 0 )
        CurrentLocale = -4370;
      v6 = 3;
      ++v15;
      v13 = v17;
LABEL_17:
      v8 = 0x180000000uLL;
      v9 = 1033LL;
      if ( CurrentLocale != 0xEEEE )
      {
LABEL_18:
        v7 = *v5;
        v18 = 0;
        if ( *v5 )
        {
          while ( 1 )
          {
            MergedPrefLanguages = v18;
            if ( v5[4 * v18 + 2] == CurrentLocale )
              break;
            if ( ++v18 >= (unsigned int)v7 )
              goto LABEL_21;
          }
        }
        else
        {
LABEL_21:
          if ( (unsigned int)v7 >= 0x40 )
            goto LABEL_24;
          v5[4 * v7 + 2] = CurrentLocale;
          *(_DWORD *)&v5[4 * (*v5)++ + 4] = v6;
        }
      }
    }
    switch ( v16 )
    {
      case 0:
        CurrentLocale = a3;
        v6 = 1;
        goto LABEL_17;
      case 1:
        if ( (a4 & 4) == 0 )
        {
          if ( (a3 & 0x3FF) != 0 )
          {
            *((_BYTE *)v5 + 516) = 1;
            v25[0] = 0;
            if ( (int)LdrpGetParentLangId(CurrentLocale, v25) < 0 )
              goto LABEL_24;
            CurrentLocale = v25[0];
            v13 = v17;
            v6 = 2;
            if ( !v25[0] )
              v13 = -1;
          }
          else
          {
            CurrentLocale = -4370;
            v6 = 2;
          }
          goto LABEL_17;
        }
        *((_BYTE *)v5 + 516) = 1;
LABEL_24:
        v12 = 2147353476LL;
LABEL_25:
        if ( (unsigned int)RtlGetCurrentServiceSessionId(MergedPrefLanguages, v7, v8, v9) )
          v10 = (__int64)NtCurrentPeb()->SharedData + 555;
        if ( (*(_BYTE *)v10 & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v20, v19, v21, v22) )
            v12 = (__int64)NtCurrentPeb()->SharedData + 554;
          LdrpTraceLoadMUIDll(v34, *(unsigned __int8 *)v12);
        }
        return (unsigned int)v26;
      case 3:
        if ( !a1 )
          goto LABEL_34;
        if ( (int)RtlpResUltimateFallbackInfo(a1, a2, (unsigned int)&String, (unsigned int)&v29, a4) < 0 )
          goto LABEL_33;
        *(_QWORD *)&v32 = 0LL;
        *((_QWORD *)&v32 + 1) = String;
        if ( String )
        {
          v24 = 2 * wcslen(String);
          if ( v24 >= 0xFFFE )
            LOWORD(v24) = -4;
          LOWORD(v32) = v24;
          WORD1(v32) = v24 + 2;
        }
        if ( RtlCultureNameToLCID((unsigned __int16 *)&v32, &v28) )
        {
          CurrentLocale = v28;
          v25[0] = v28;
          if ( (a4 & 0x100000) != 0 )
          {
            GetLCIDFromLangListNodeWithLICCheck(
              MergedPrefLanguages,
              NtCurrentTeb()->MergedPrefLanguages,
              0,
              (unsigned int)v25,
              (__int64)&a5);
            if ( (_BYTE)a5 )
              CurrentLocale = -4370;
            else
              CurrentLocale = v25[0];
          }
          v6 = 10;
          if ( (v29 & 1) == 0 )
            v6 = 4;
          goto LABEL_17;
        }
        v26 = -1073020923;
LABEL_33:
        v8 = 0x180000000uLL;
        v9 = 1033LL;
LABEL_34:
        CurrentLocale = -4370;
        continue;
      case 4:
        CurrentLocale = -4370;
        if ( (~a4 & 0x80000) != 0 )
          goto LABEL_24;
        if ( !NtCurrentTeb() )
          continue;
        CurrentLocale = NtCurrentTeb()->CurrentLocale;
        goto LABEL_17;
      case 5:
        LOBYTE(MergedPrefLanguages) = 1;
        CurrentLocale = -4370;
        v26 = NtQueryDefaultLocale(MergedPrefLanguages, &v27, 0x180000000uLL, 1033LL);
        v8 = 0x180000000uLL;
        v9 = 1033LL;
        if ( v26 < 0 )
          continue;
        CurrentLocale = v27;
        goto LABEL_17;
      case 6:
        CurrentLocale = -4370;
        v26 = NtQueryDefaultLocale(0LL, &v30, 0x180000000uLL, 1033LL);
        v8 = 0x180000000uLL;
        v9 = 1033LL;
        if ( v26 < 0 )
          continue;
        v8 = 0x180000000uLL;
        if ( v30 == v27 )
          continue;
        CurrentLocale = v30;
        goto LABEL_17;
      case 7:
        CurrentLocale = 1033;
        goto LABEL_18;
      default:
        goto LABEL_24;
    }
  }
}
