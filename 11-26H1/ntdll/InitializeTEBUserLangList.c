/*
 * XREFs of InitializeTEBUserLangList @ 0x180054030
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180023010 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x180055400 (RtlpQueryDefaultUILanguage.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x180052250 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpSetProcUserMachineLangList @ 0x1800545D0 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180056670 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180057290 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x180058140 (RtlpLoadLanguageConfigList.c)
 *     RtlpUpdateTEBLanguage @ 0x180058F70 (RtlpUpdateTEBLanguage.c)
 */

__int64 __fastcall InitializeTEBUserLangList(char a1, __int64 a2)
{
  int v2; // r12d
  int v3; // r15d
  struct _TEB *v4; // r8
  unsigned int updated; // ebx
  bool v6; // r14
  int WowTebOffset; // eax
  __int64 LanguageList; // rbp
  struct _TEB *v11; // rdx
  __int64 v12; // rax
  struct _TEB *v13; // rcx
  __int64 v14; // rax
  unsigned int MuiImpersonation; // r8d
  unsigned int v16; // edx
  struct _TEB *v17; // rax
  PVOID *UserPrefLanguages; // rdi
  __int64 v19; // rax
  unsigned __int16 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  struct _TEB *v24; // r9
  int v25; // eax
  struct _TEB *v26; // r8
  __int64 v27; // rax
  struct _TEB *v28; // rcx
  __int64 v29; // rax
  int v30; // r8d
  _DWORD *MergedPrefLanguages; // rcx
  int v32; // ecx
  bool v34; // di
  int PreferredUILanguages; // eax
  __int64 v36; // r9
  char v37; // dl
  char v38; // r8
  __int64 v39; // r9
  unsigned int v40; // r9d
  unsigned int i; // r8d
  unsigned int v42; // eax
  unsigned int v43; // [rsp+30h] [rbp-58h]
  __int64 v44; // [rsp+38h] [rbp-50h] BYREF
  __int64 v45; // [rsp+40h] [rbp-48h]
  bool v46; // [rsp+98h] [rbp+10h]
  int v47; // [rsp+A0h] [rbp+18h] BYREF
  int v48; // [rsp+A8h] [rbp+20h]

  v4 = NtCurrentTeb();
  updated = 0;
  LOBYTE(v3) = 0;
  v43 = 0;
  LOBYTE(v2) = 0;
  v47 = v3;
  v6 = 0;
  v48 = v2;
  WowTebOffset = v4->WowTebOffset;
  v44 = 0LL;
  v46 = 0;
  LanguageList = 0LL;
  v45 = 0LL;
  if ( WowTebOffset < 0 )
    LODWORD(v4) = WowTebOffset + (_DWORD)v4;
  v11 = NtCurrentTeb();
  v12 = v11->WowTebOffset;
  if ( (int)v12 < 0 )
    v11 = (struct _TEB *)((char *)v11 + v12);
  v13 = NtCurrentTeb();
  v14 = v13->WowTebOffset;
  if ( (_DWORD)v4 == LODWORD(v11->NtTib.SubSystemTib) )
  {
    if ( (int)v14 < 0 )
      v13 = (struct _TEB *)((char *)v13 + v14);
    MuiImpersonation = HIDWORD(v13->glDispatchTable[186]);
  }
  else
  {
    if ( (int)v14 < 0 )
      v13 = (struct _TEB *)((char *)v13 + v14);
    MuiImpersonation = v13->MuiImpersonation;
  }
  v16 = MEMORY[0x7FFE03A4];
  v17 = NtCurrentTeb();
  if ( !MEMORY[0x7FFE03A4] )
    v16 = 1;
  UserPrefLanguages = (PVOID *)v17->UserPrefLanguages;
  if ( a2 )
  {
    v19 = *(_QWORD *)(a2 + 24);
    if ( v19 )
    {
      v20 = *(_WORD *)(v19 + 6);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v19 + 16);
        if ( v21 )
        {
          if ( MuiImpersonation >= v16 )
            goto LABEL_16;
          if ( v20 <= 1u )
          {
            if ( (*(_BYTE *)v21 & 1) == 0 )
            {
              v40 = 0;
              for ( i = 0; i < 3; ++i )
              {
                v42 = v40 + 1;
                if ( ((*(_WORD *)(v21 + 8) >> (2 * i)) & 3) == 0 )
                  v42 = v40;
                v40 = v42;
              }
              v6 = v42 > 1;
              v46 = v42 > 1;
            }
          }
          else
          {
            v6 = 1;
            v46 = 1;
          }
          v24 = NtCurrentTeb();
          v25 = v24->WowTebOffset;
          if ( v25 < 0 )
            LODWORD(v24) = v25 + (_DWORD)v24;
          v26 = NtCurrentTeb();
          v27 = v26->WowTebOffset;
          if ( (int)v27 < 0 )
            v26 = (struct _TEB *)((char *)v26 + v27);
          v28 = NtCurrentTeb();
          v29 = v28->WowTebOffset;
          if ( (_DWORD)v24 == LODWORD(v26->NtTib.SubSystemTib) )
          {
            if ( (int)v29 < 0 )
              v28 = (struct _TEB *)((char *)v28 + v29);
            HIDWORD(v28->glDispatchTable[186]) = v16;
          }
          else
          {
            if ( (int)v29 < 0 )
              v28 = (struct _TEB *)((char *)v28 + v29);
            v28->MuiImpersonation = v16;
          }
          if ( v6 )
          {
            if ( !UserPrefLanguages )
              goto LABEL_37;
            v23 = *UserPrefLanguages;
            if ( !*UserPrefLanguages )
              goto LABEL_37;
          }
          else
          {
LABEL_16:
            if ( !UserPrefLanguages )
            {
LABEL_55:
              if ( !a1 && !(_BYTE)v2 && !(_BYTE)v3 )
              {
                PreferredUILanguages = RtlpSetProcUserMachineLangList(a2, 1LL);
                v36 = v43;
                if ( PreferredUILanguages >= 0 )
                {
                  LanguageList = *(_QWORD *)(a2 + 64);
                  updated = PreferredUILanguages;
                  v47 = v3;
                  v34 = v6;
                  v48 = v2;
                  v37 = 0;
                  v38 = 0;
                  goto LABEL_62;
                }
                v37 = v47;
                v38 = v48;
                goto LABEL_60;
              }
LABEL_58:
              LOBYTE(v47) = 0;
              v34 = v6;
              PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(
                                       a2,
                                       v16,
                                       1,
                                       3 - (unsigned int)(a1 != 0),
                                       (__int64)&v47,
                                       (__int64)&v44);
              LanguageList = v44;
              if ( !v44 )
              {
                LanguageList = RtlpMuiRegCreateLanguageList(1LL, 0LL, a2);
                if ( !LanguageList )
                  return (unsigned int)-1073741801;
                v36 = v43;
                v37 = v3;
                v38 = v2;
                goto LABEL_62;
              }
              v46 = v6;
              v36 = v43;
              v37 = v3;
              v38 = v2;
              if ( PreferredUILanguages )
              {
                v46 = v6;
                if ( PreferredUILanguages != -1073741801 )
                {
                  v46 = v6;
                  if ( (_BYTE)v47 )
                    goto LABEL_62;
                }
              }
LABEL_60:
              updated = PreferredUILanguages;
              if ( PreferredUILanguages < 0 )
                return updated;
              v34 = v46;
LABEL_62:
              if ( LanguageList )
              {
                if ( a1 )
                  *(_DWORD *)(LanguageList + 40) |= 0x20u;
                else
                  *(_DWORD *)(LanguageList + 40) |= 0x10u;
                if ( v38 )
                  *(_DWORD *)(LanguageList + 40) |= 2u;
                if ( v37 )
                  *(_DWORD *)(LanguageList + 40) |= 4u;
                if ( v38 || v37 )
                  *(_DWORD *)(LanguageList + 40) |= v36;
                updated = RtlpUpdateTEBLanguage(LanguageList, 0LL, 4LL, v36);
              }
              if ( v34 )
              {
                updated = RtlpLoadLanguageConfigList(8u);
                if ( (updated & 0x80000000) == 0 )
                  return (unsigned int)RtlpUpdateTEBLanguage(0LL, v45, 5LL, v39);
              }
              return updated;
            }
            if ( !*UserPrefLanguages
              || (v22 = *((_QWORD *)*UserPrefLanguages + 2)) == 0
              || *(_DWORD *)(v22 + 12) >= *(_DWORD *)(a2 + 12) )
            {
LABEL_40:
              if ( *UserPrefLanguages )
              {
                v32 = *((_DWORD *)*UserPrefLanguages + 10);
                if ( a1 )
                {
                  if ( (v32 & 0x20) != 0 )
                    return updated;
                }
                else if ( (v32 & 0x10) != 0 )
                {
                  return updated;
                }
                v2 = (unsigned __int8)v2;
                v3 = (unsigned __int8)v3;
                if ( (v32 & 2) != 0 )
                  v2 = 1;
                v48 = v2;
                if ( (v32 & 4) != 0 )
                  v3 = 1;
                v47 = v3;
                if ( (_BYTE)v2 || (_BYTE)v3 )
                  v43 = v32 & 0xFFFF0000;
                RtlpMuiRegFreeLanguageList(*UserPrefLanguages);
                *UserPrefLanguages = 0LL;
                if ( NtCurrentTeb()->MergedPrefLanguages )
                {
                  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
                  NtCurrentTeb()->MergedPrefLanguages = 0LL;
                }
              }
LABEL_54:
              if ( v6 )
                goto LABEL_58;
              goto LABEL_55;
            }
            v23 = *UserPrefLanguages;
          }
          v30 = v23[10];
          LOBYTE(v2) = (v30 & 2) != 0;
          v48 = v2;
          LOBYTE(v3) = (v30 & 4) != 0;
          v47 = v3;
          if ( (v30 & 2) != 0 || (v30 & 4) != 0 )
            v43 = v30 & 0xFFFF0000;
          RtlpMuiRegFreeLanguageList(v23);
          *UserPrefLanguages = 0LL;
LABEL_37:
          if ( NtCurrentTeb()->MergedPrefLanguages )
          {
            MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
            MergedPrefLanguages[10] |= 0x80u;
          }
          if ( !UserPrefLanguages )
            goto LABEL_54;
          goto LABEL_40;
        }
      }
    }
  }
  return 3221225485LL;
}
