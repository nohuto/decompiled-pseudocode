/*
 * XREFs of ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1402309A8
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B663C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x1400B7BF0 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x140106A9C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x140106FA8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140107078 (--$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1401BADE4 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1401C2AA4 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 */

__int64 __fastcall PFFOBJ::bAttemptReload(struct PFF **this)
{
  struct PFF *v2; // rcx
  int v3; // eax
  unsigned int v4; // edi
  struct PFF *v5; // rdx
  unsigned int v6; // r14d
  int v7; // r12d
  __int64 v8; // rdx
  int v9; // ecx
  __int64 SessionState; // rax
  __int64 v11; // r15
  size_t v13; // [rsp+28h] [rbp-31h]
  _QWORD v14[8]; // [rsp+70h] [rbp+17h] BYREF
  unsigned int v15; // [rsp+C0h] [rbp+67h] BYREF
  unsigned __int16 *v16; // [rsp+C8h] [rbp+6Fh] BYREF
  struct PFF **v17; // [rsp+D0h] [rbp+77h] BYREF
  struct PFF *v18; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = *this;
  v3 = *((_DWORD *)v2 + 13);
  if ( (v3 & 0x1000) == 0 )
    return 0LL;
  v4 = 1;
  *((_DWORD *)v2 + 13) = v3 & 0xFFFFEFFF;
  v5 = *this;
  if ( *((_DWORD *)*this + 14) != 1 || (*((_DWORD *)v5 + 13) & 8) != 0 )
    return 0LL;
  v6 = *((_DWORD *)v5 + 8);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v16, 2 * v6);
  if ( !v16
    || (cCapString(v16, *((WCHAR **)*this + 3), v6),
        v7 = *((_DWORD *)*this + 13) & 0x200,
        SessionState = W32GetSessionState(v9, v8),
        v17 = 0LL,
        v11 = *(_QWORD *)(SessionState + 96),
        v14[0] = *(_QWORD *)(v11 + 20416),
        PUBLIC_PFTOBJ::pPFFGet(
          (PUBLIC_PFTOBJ *)v14,
          v16,
          v6,
          *((_DWORD *)*this + 9),
          *((struct tagDESIGNVECTOR **)*this + 5),
          *((_DWORD *)*this + 12),
          &v17,
          0) != *this) )
  {
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v16);
    return 0LL;
  }
  if ( PFTOBJ::bUnloadWorkhorse((PFTOBJ *)v14, *this, v17, 0)
    && (GreQuerySystemTime(v11 + 20432),
        v18 = 0LL,
        v15 = 0,
        LODWORD(v13) = 0,
        (unsigned int)PUBLIC_PFTOBJ::bLoadFonts(
                        (PUBLIC_PFTOBJ *)v14,
                        v16,
                        v6,
                        1u,
                        0LL,
                        v13,
                        &v15,
                        v7 != 0 ? 514 : 2,
                        &v18,
                        0,
                        0,
                        0LL,
                        1,
                        1)) )
  {
    GreQuerySystemTime(v11 + 20432);
  }
  else
  {
    v4 = 0;
  }
  GreAcquireSemaphore<17,>(v11 + 4872);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v16);
  return v4;
}
