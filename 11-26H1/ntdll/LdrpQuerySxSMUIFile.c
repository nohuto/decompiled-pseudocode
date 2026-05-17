/*
 * XREFs of LdrpQuerySxSMUIFile @ 0x180032478
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlLcidToLocaleName @ 0x180005EB0 (RtlLcidToLocaleName.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180041420 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlFindActivationContextSectionString @ 0x180041C30 (RtlFindActivationContextSectionString.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180041FE0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180043CF0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlFreeAnsiString @ 0x180056B20 (RtlFreeAnsiString.c)
 *     RtlCompareUnicodeStrings @ 0x180083D00 (RtlCompareUnicodeStrings.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpQuerySxSMUIFile(int a1, unsigned __int16 a2, __int64 a3, UNICODE_STRING *a4, __int64 a5)
{
  int v6; // ebx
  int v7; // r15d
  int ActivationContextSectionString; // ebx
  __int64 v11; // rdi
  unsigned int v12; // r13d
  __int64 v13; // r14
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-228h]
  int v17; // [rsp+20h] [rbp-228h]
  int v19; // [rsp+54h] [rbp-1F4h] BYREF
  int v20; // [rsp+58h] [rbp-1F0h]
  __int64 v21; // [rsp+60h] [rbp-1E8h] BYREF
  __int128 v22; // [rsp+68h] [rbp-1E0h] BYREF
  __int64 v23; // [rsp+78h] [rbp-1D0h]
  __int64 v24; // [rsp+80h] [rbp-1C8h]
  __int64 v25; // [rsp+88h] [rbp-1C0h]
  _QWORD v26[2]; // [rsp+90h] [rbp-1B8h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-1A8h]
  __int128 v28; // [rsp+B0h] [rbp-198h]
  __int128 v29; // [rsp+C0h] [rbp-188h]
  __int64 v30; // [rsp+D0h] [rbp-178h]
  int v31; // [rsp+E0h] [rbp-168h] BYREF
  _DWORD v32[13]; // [rsp+E4h] [rbp-164h] BYREF
  __int64 v33; // [rsp+118h] [rbp-130h]
  char v34; // [rsp+124h] [rbp-124h]
  __int64 v35; // [rsp+128h] [rbp-120h]
  __int64 v36; // [rsp+130h] [rbp-118h]
  char v37; // [rsp+150h] [rbp-F8h] BYREF

  v6 = a3;
  v23 = a3;
  v7 = a2;
  v25 = a5;
  v21 = 0LL;
  v22 = 0LL;
  v19 = 0;
  v31 = 112;
  memset_thunk_772440563353939046(v32, 0, 0x6CuLL);
  v26[0] = 72LL;
  v26[1] = 1LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                     1,
                                     a1,
                                     0,
                                     v6,
                                     (__int64)a4,
                                     a5,
                                     (__int64)&v19,
                                     0LL,
                                     0LL);
  if ( ActivationContextSectionString >= 0 )
  {
    if ( LdrpCreateActCtxLanguageW )
    {
      if ( (v19 & 1) == 0 )
      {
        ActivationContextSectionString = RtlFindActivationContextSectionString(7, 0, 2, a1, (__int64)&v31);
        if ( ActivationContextSectionString >= 0 )
        {
          if ( v32[0] == 1 )
          {
            if ( (v34 & 1) != 0 )
            {
              v11 = 0LL;
              v33 = 0LL;
            }
            else
            {
              v11 = v33;
              if ( (v34 & 2) != 0 )
                v11 = -4LL;
              v33 = v11;
            }
            v12 = *(unsigned __int16 *)(v35 + 92);
            v13 = v36 + *(unsigned int *)(v35 + 96);
            *((_QWORD *)&v22 + 1) = &v37;
            WORD1(v22) = 170;
            ActivationContextSectionString = RtlLcidToLocaleName(v7, (__int64)&v22, 2, 0);
            if ( ActivationContextSectionString >= 0 )
            {
              v14 = (unsigned __int64)(unsigned __int16)v22 >> 1;
              LOBYTE(v16) = 1;
              if ( (unsigned int)RtlCompareUnicodeStrings(
                                   v13,
                                   (unsigned __int64)v12 >> 1,
                                   *((_QWORD *)&v22 + 1),
                                   v14,
                                   v16) )
              {
                ActivationContextSectionString = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *))LdrpCreateActCtxLanguageW)(
                                                   v11,
                                                   a2,
                                                   &v21);
                if ( ActivationContextSectionString >= 0 )
                {
                  if ( v21 != -1 )
                  {
                    RtlActivateActivationContextUnsafeFast(v26, v21);
                    if ( a4->Buffer )
                      RtlFreeAnsiString(a4);
                    ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                                       0,
                                                       a1,
                                                       0,
                                                       v23,
                                                       (__int64)a4,
                                                       v25,
                                                       (__int64)&v19,
                                                       0LL,
                                                       0LL);
                    v20 = ActivationContextSectionString;
                    if ( ActivationContextSectionString >= 0 )
                    {
                      ActivationContextSectionString = RtlFindActivationContextSectionString(7, 0, 2, a1, (__int64)&v31);
                      v20 = ActivationContextSectionString;
                      if ( ActivationContextSectionString >= 0 )
                      {
                        if ( v32[0] == 1 )
                        {
                          v15 = *(unsigned __int16 *)(v35 + 92);
                          WORD1(v23) = v15;
                          LOWORD(v23) = v15;
                          v24 = v36 + *(unsigned int *)(v35 + 96);
                          LOBYTE(v17) = 1;
                          if ( (unsigned int)RtlCompareUnicodeStrings(v24, v15 >> 1, *((_QWORD *)&v22 + 1), v14, v17) )
                            ActivationContextSectionString = -1072365564;
                        }
                        else
                        {
                          ActivationContextSectionString = -1072365563;
                        }
                        v20 = ActivationContextSectionString;
                      }
                    }
                    RtlDeactivateActivationContextUnsafeFast(v26);
                  }
                  if ( LdrpReleaseActCtxW )
                    LdrpReleaseActCtxW();
                }
              }
            }
          }
          else
          {
            return (unsigned int)-1072365563;
          }
        }
      }
    }
  }
  return (unsigned int)ActivationContextSectionString;
}
