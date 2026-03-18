/*
 * XREFs of ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x14010BDE4
 * Callers:
 *     NtGdiMakeFontDir @ 0x140223A90 (NtGdiMakeFontDir.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14001922C (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     EngMapFontFileFDInternal @ 0x1400B2070 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1400B2490 (EngUnmapFontFileFD.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z @ 0x1400B58A4 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x14010BFCC (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x14010C4A4 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?Remove@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x14010C578 (-Remove@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401717F4 (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1401BD928 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     ??0AutoExclusiveUmfdLookupLock@@QEAA@XZ @ 0x1401CEF3C (--0AutoExclusiveUmfdLookupLock@@QEAA@XZ.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1401D7B2C (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?GreFillFontDir@@YAKQEAU_IFIMETRICS@@KPEAE@Z @ 0x140224F28 (-GreFillFontDir@@YAKQEAU_IFIMETRICS@@KPEAE@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall GreMakeFontDir(__int64 a1, unsigned __int8 *a2, unsigned __int16 *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // r13d
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  struct _IFIMETRICS *v13; // rax
  struct _IFIMETRICS *v14; // rsi
  struct W32_PUSH_LOCK *v15; // rcx
  __int64 v17; // [rsp+48h] [rbp-79h] BYREF
  void *v18; // [rsp+50h] [rbp-71h] BYREF
  struct FONTFILEVIEW *v19; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v21[16]; // [rsp+68h] [rbp-59h] BYREF
  ULONG_PTR iFile[8]; // [rsp+78h] [rbp-49h] BYREF
  int v23; // [rsp+B8h] [rbp-9h]
  unsigned __int16 *v24; // [rsp+C8h] [rbp+7h]
  unsigned int v25; // [rsp+140h] [rbp+7Fh] BYREF

  v3 = 0;
  v20 = 0LL;
  v6 = a1;
  v7 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  v11 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v9, v8, v10) + 96) + 24152LL);
  if ( !UmfdHostLifeTimeManager::EnsureUmfdHost() )
    return 0LL;
  v17 = v11;
  memset_0(iFile, 0, 0x78uLL);
  v18 = 0LL;
  v25 = 0;
  v19 = (struct FONTFILEVIEW *)iFile;
  v24 = a3;
  if ( !(unsigned int)EngMapFontFileFDInternal((struct FILEVIEW *)iFile, &v18, &v25, 0) )
    return 0LL;
  if ( (unsigned int)UmfdInsertFontFileViewForLookup(&v19, 1LL) )
  {
    v12 = PDEVOBJ::LoadFontFile(
            (PDEVOBJ *)&v17,
            1u,
            (unsigned __int64 *)&v19,
            &v18,
            &v25,
            0LL,
            *(unsigned __int16 *)(v7 + 20360),
            0);
    if ( v12 )
    {
      if ( v12 != 0xFFFFFFFF )
      {
        v13 = PDEVOBJ::QueryFont((PDEVOBJ *)&v17, 0LL, v12, 1u, &v20);
        v14 = v13;
        if ( v13 )
        {
          v3 = GreFillFontDir(v13, v6, a2);
          if ( *(_QWORD *)(v11 + 3016) )
            PDEVOBJ::Free((PDEVOBJ *)&v17, v14, v20);
        }
        v3 &= -((*(unsigned int (__fastcall **)(unsigned __int64))(v11 + 3048))(v12) != 0);
      }
    }
  }
  if ( v23 )
  {
    AutoExclusiveUmfdLookupLock::AutoExclusiveUmfdLookupLock((AutoExclusiveUmfdLookupLock *)v21);
    v15 = *(struct W32_PUSH_LOCK **)(v7 + 24168);
    if ( v15 )
    {
      LODWORD(v17) = v23;
      NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::Remove(v15);
      v23 = 0;
    }
    Gre::PUSHLOCKEX::vUnlock((Gre::PUSHLOCKEX *)v21, 0);
  }
  EngUnmapFontFileFD((ULONG_PTR)iFile);
  vUnreferenceFileviewSection((struct FILEVIEW *)iFile);
  return v3;
}
