/*
 * XREFs of ?vInitializeFontAssocStatus@@YAXXZ @ 0x1400CB52C
 * Callers:
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1400CB818 (-bInitializeEUDCInternal@@YAHXZ.c)
 * Callees:
 *     ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FAB9C (--$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FABC0 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1400FB1B4 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x140103F00 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x140104000 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ??1UmfdClientSideFileViewMapper@@QEAA@XZ @ 0x14021AC50 (--1UmfdClientSideFileViewMapper@@QEAA@XZ.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x140222080 (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 */

void __fastcall vInitializeFontAssocStatus(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rsi
  _WORD *v6; // r15
  struct PFE **v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned __int16 *v10; // rax
  unsigned __int16 *v11; // r14
  int v12; // ebx
  bool v13; // r14
  PFTOBJ *v14; // rcx
  size_t v15; // [rsp+28h] [rbp-71h]
  _QWORD v16[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v17; // [rsp+80h] [rbp-19h] BYREF
  __int64 v18; // [rsp+90h] [rbp-9h] BYREF
  _QWORD v19[2]; // [rsp+A0h] [rbp+7h] BYREF
  int v20; // [rsp+B0h] [rbp+17h]
  unsigned int v21; // [rsp+100h] [rbp+67h] BYREF
  struct PFF *v22; // [rsp+108h] [rbp+6Fh] BYREF

  SessionState = W32GetSessionState(a1, a2, a3);
  v4 = *(_QWORD *)(SessionState + 96) + 4864LL;
  v5 = (_QWORD *)(*(_QWORD *)(SessionState + 96) + 14168LL);
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
        v7 = (struct PFE **)(v4 + 14672);
        v17 = *(_QWORD *)(v4 + 15528);
        v8 = -1LL;
        v21 = 0;
        v22 = 0LL;
        v16[0] = v4 + 14672;
        v16[1] = v4 + 14604;
        do
          ++v8;
        while ( v6[v8] );
        v9 = v8 + 1;
        if ( (unsigned int)(v8 + 1) <= 0x1388000 )
        {
          v10 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * v9);
          v11 = v10;
          if ( v10 )
          {
            cCapString(v10, (const unsigned __int16 *)(v4 + 14084), v9);
            LODWORD(v15) = 0;
            v12 = PUBLIC_PFTOBJ::bLoadFonts(
                    (PUBLIC_PFTOBJ *)&v17,
                    v11,
                    v9,
                    1u,
                    0LL,
                    v15,
                    &v21,
                    8u,
                    &v22,
                    0,
                    0,
                    (struct _EUDCLOAD *)v16,
                    1,
                    0);
            FreeTmpBuffer(v11);
            if ( v12 )
            {
              *(_QWORD *)(v4 + 9224) = 0LL;
              GreAcquirePushLockExclusive2<16,1>(v4);
              if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)(v4 + 9216), *v7, 0) )
                goto LABEL_16;
              v13 = 0;
              v18 = *(_QWORD *)*v7;
              UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
                (UmfdClientSideFileViewMapper *)v19,
                (struct PFFOBJ *)&v18);
              if ( v20 == *(_DWORD *)(v19[0] + 36LL) )
                v13 = (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)(v4 + 9216), *v7, 0) != 0;
              UmfdClientSideFileViewMapper::~UmfdClientSideFileViewMapper((UmfdClientSideFileViewMapper *)v19);
              if ( v13 )
              {
LABEL_16:
                *(_DWORD *)(v4 + 14688) = 1;
                *(_DWORD *)(v4 + 8640) = 1;
              }
              GreReleasePushLockExclusive2<16,1>(v4);
              if ( !*(_DWORD *)(v4 + 14688) )
                PFTOBJ::bUnloadEUDCFont(v14, (unsigned __int16 *)(v4 + 14084));
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
