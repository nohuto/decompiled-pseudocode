/*
 * XREFs of ?vInitializeFontAssocStatus@@YAXXZ @ 0x1401470EC
 * Callers:
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x140146E08 (-bInitializeEUDCInternal@@YAHXZ.c)
 * Callees:
 *     ??1UmfdClientSideFileViewMapper@@QEAA@XZ @ 0x1400B0B9C (--1UmfdClientSideFileViewMapper@@QEAA@XZ.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B663C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x1400B7BF0 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x140106E8C (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1401213E0 (--$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140121404 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x140122504 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1401EB5EC (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 */

void __fastcall vInitializeFontAssocStatus(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rsi
  _WORD *v6; // r15
  __int64 v7; // rax
  struct PFE **v8; // rsi
  __int64 v9; // rbx
  unsigned int v10; // ebx
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // r14
  int v13; // ebx
  bool v14; // bl
  PFTOBJ *v15; // rcx
  size_t v16; // [rsp+28h] [rbp-71h]
  _QWORD v17[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v18; // [rsp+80h] [rbp-19h] BYREF
  __int64 v19; // [rsp+90h] [rbp-9h] BYREF
  _QWORD v20[2]; // [rsp+A0h] [rbp+7h] BYREF
  int v21; // [rsp+B0h] [rbp+17h]
  unsigned int v22; // [rsp+100h] [rbp+67h] BYREF
  struct PFF *v23; // [rsp+108h] [rbp+6Fh] BYREF

  SessionState = W32GetSessionState(a1, a2, a3);
  v4 = *(_QWORD *)(SessionState + 96) + 4872LL;
  v5 = (_QWORD *)(*(_QWORD *)(SessionState + 96) + 14176LL);
  *(_DWORD *)(v4 + 9312) = 4;
  v6 = (_WORD *)(v4 + 14084);
  *(_QWORD *)(v4 + 9304) = FontAssocCharsetRoutine;
  *(_QWORD *)(v4 + 9320) = 0LL;
  *(_QWORD *)(v4 + 9328) = 0LL;
  *(_DWORD *)(v4 + 9336) = 0;
  *(_QWORD *)(v4 + 9344) = 0LL;
  *(_DWORD *)(v4 + 9352) = 0;
  *(_QWORD *)(v4 + 9360) = 0LL;
  *(_DWORD *)(v4 + 9368) = 0;
  *(_QWORD *)(v4 + 9376) = 0LL;
  *(_DWORD *)(v4 + 14072) = 0;
  *(_WORD *)(v4 + 14084) = 0;
  if ( RtlQueryRegistryValues(
         0x80000002,
         L"FontAssoc\\Associated CharSet",
         (PRTL_QUERY_REGISTRY_TABLE)(v4 + 9304),
         0LL,
         0LL) < 0 )
    *(_DWORD *)(v4 + 14072) = 0;
  *v5 = FontAssocDefaultRoutine;
  *(_WORD *)(v4 + 14604) = 0;
  if ( RtlQueryRegistryValues(
         0x80000002,
         L"FontAssoc\\Associated DefaultFonts",
         (PRTL_QUERY_REGISTRY_TABLE)(v4 + 9304),
         0LL,
         0LL) >= 0 )
  {
    *(_DWORD *)(v4 + 14692) = 1;
    if ( *v6 )
    {
      if ( *(_WORD *)(v4 + 14604) )
      {
        v7 = *(_QWORD *)(v4 + 15544);
        v8 = (struct PFE **)(v4 + 14672);
        v17[1] = v4 + 14604;
        v9 = -1LL;
        v18 = v7;
        v17[0] = v4 + 14672;
        v22 = 0;
        v23 = 0LL;
        do
          ++v9;
        while ( v6[v9] );
        v10 = v9 + 1;
        if ( v10 <= 0x1388000 )
        {
          v11 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * v10);
          v12 = v11;
          if ( v11 )
          {
            cCapString(v11, (WCHAR *)(v4 + 14084), v10);
            LODWORD(v16) = 0;
            v13 = PUBLIC_PFTOBJ::bLoadFonts(
                    (PUBLIC_PFTOBJ *)&v18,
                    v12,
                    v10,
                    1u,
                    0LL,
                    v16,
                    &v22,
                    8u,
                    &v23,
                    0,
                    0,
                    (struct _EUDCLOAD *)v17,
                    1,
                    0);
            FreeTmpBuffer(v12);
            if ( v13 )
            {
              *(_QWORD *)(v4 + 9224) = 0LL;
              GreAcquirePushLockExclusive2<16,1>(v4);
              if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)(v4 + 9216), *v8, 0LL) )
                goto LABEL_16;
              v14 = 0;
              v19 = *(_QWORD *)*v8;
              UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
                (UmfdClientSideFileViewMapper *)v20,
                (struct PFFOBJ *)&v19);
              if ( v21 == *(_DWORD *)(v20[0] + 36LL) )
                v14 = (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)(v4 + 9216), *v8, 0LL) != 0;
              UmfdClientSideFileViewMapper::~UmfdClientSideFileViewMapper((UmfdClientSideFileViewMapper *)v20);
              if ( v14 )
              {
LABEL_16:
                *(_DWORD *)(v4 + 14688) = 1;
                *(_DWORD *)(v4 + 8640) = 1;
              }
              GreReleasePushLockExclusive2<16,1>(v4);
              if ( !*(_DWORD *)(v4 + 14688) )
                PFTOBJ::bUnloadEUDCFont(v15, (unsigned __int16 *)(v4 + 14084));
            }
          }
        }
      }
    }
  }
  else
  {
    *(_DWORD *)(v4 + 14692) = 0;
  }
  *(_QWORD *)(v4 + 9304) = CountRegistryEntryRoutine;
  *(_QWORD *)(v4 + 9328) = v4 + 14704;
  *(_DWORD *)(v4 + 14704) = 0;
  *(_DWORD *)(v4 + 14700) = 0;
}
