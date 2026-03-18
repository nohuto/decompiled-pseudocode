/*
 * XREFs of ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x140226FB4
 * Callers:
 *     NtGdiMakeFontDir @ 0x140226E50 (NtGdiMakeFontDir.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1400C2BE0 (EngUnmapFontFileFD.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400C56B0 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z @ 0x1400D0168 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z.c)
 *     EngMapFontFileFDInternal @ 0x1400D09E8 (EngMapFontFileFDInternal.c)
 *     ?Remove@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1400D2C78 (-Remove@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x1400D3DA0 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401AB8AC (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     ??0AutoExclusiveUmfdLookupLock@@QEAA@XZ @ 0x1401FF22C (--0AutoExclusiveUmfdLookupLock@@QEAA@XZ.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x14020A220 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?UnloadFontFile@PDEVOBJ@@QEAAH_K@Z @ 0x140227198 (-UnloadFontFile@PDEVOBJ@@QEAAH_K@Z.c)
 *     ?GreFillFontDir@@YAKQEAU_IFIMETRICS@@KPEAE@Z @ 0x14023AD48 (-GreFillFontDir@@YAKQEAU_IFIMETRICS@@KPEAE@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GreMakeFontDir(unsigned int a1, unsigned __int8 *a2, unsigned __int16 *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // r15
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  struct _IFIMETRICS *v16; // rax
  struct _IFIMETRICS *v17; // rsi
  NSInstrumentation::CPlatformReaderWriterLock *v18; // rcx
  struct NETWORKED_FONT_FILE_NODE *v19; // rdx
  unsigned int v21; // [rsp+48h] [rbp-79h] BYREF
  struct W32_PUSH_LOCK *v22; // [rsp+50h] [rbp-71h] BYREF
  __int64 v23; // [rsp+58h] [rbp-69h] BYREF
  struct FONTFILEVIEW *v24; // [rsp+60h] [rbp-61h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp-59h] BYREF
  ULONG_PTR iFile[8]; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp-9h]
  unsigned __int16 *v28; // [rsp+C8h] [rbp+7h]
  int v29; // [rsp+140h] [rbp+7Fh] BYREF

  v3 = 0;
  v25 = 0LL;
  v7 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v10 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v9, v8) + 96) + 24136LL);
  if ( !UmfdHostLifeTimeManager::EnsureUmfdHost(v12, v11, v13) )
    return 0LL;
  v22 = (struct W32_PUSH_LOCK *)v10;
  memset_0(iFile, 0, 0x78uLL);
  v28 = a3;
  v24 = (struct FONTFILEVIEW *)iFile;
  v23 = 0LL;
  v29 = 0;
  if ( !(unsigned int)EngMapFontFileFDInternal((struct FILEVIEW *)iFile, &v23, &v29, 0) )
    return 0LL;
  if ( (unsigned int)UmfdInsertFontFileViewForLookup(&v24, 1LL) )
  {
    v15 = (*(__int64 (__fastcall **)(__int64, struct FONTFILEVIEW **, __int64 *, int *, _QWORD, _DWORD, _DWORD))(v10 + 3040))(
            1LL,
            &v24,
            &v23,
            &v29,
            0LL,
            *(unsigned __int16 *)(v7 + 20336),
            0);
    if ( v15 )
    {
      if ( v15 != 0xFFFFFFFF )
      {
        v16 = (struct _IFIMETRICS *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, unsigned __int64 *))(v10 + 2888))(
                                      0LL,
                                      v15,
                                      1LL,
                                      &v25);
        v17 = v16;
        if ( v16 )
        {
          v3 = GreFillFontDir(v16, a1, a2);
          if ( *(_QWORD *)(v10 + 3016) )
            PDEVOBJ::Free((PDEVOBJ *)&v22, v17, v25);
        }
        v3 &= -((unsigned int)PDEVOBJ::UnloadFontFile((PDEVOBJ *)&v22, v15) != 0);
      }
    }
  }
  if ( v27 )
  {
    AutoExclusiveUmfdLookupLock::AutoExclusiveUmfdLookupLock((AutoExclusiveUmfdLookupLock *)&v22, v14);
    v18 = *(NSInstrumentation::CPlatformReaderWriterLock **)(v7 + 24152);
    if ( v18 )
    {
      v21 = v27;
      NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::Remove(v18, &v21);
      v27 = 0;
    }
    Gre::PUSHLOCKEX::vUnlock(&v22, 0);
  }
  EngUnmapFontFileFD((ULONG_PTR)iFile);
  vUnreferenceFileviewSection((struct FILEVIEW *)iFile, v19);
  return v3;
}
