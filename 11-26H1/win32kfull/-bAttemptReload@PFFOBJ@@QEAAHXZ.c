/*
 * XREFs of ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x14026C658
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FE100 (--$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x140103F00 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z @ 0x140106418 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x140186E18 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140187408 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z @ 0x14028B4D4 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z.c)
 */

__int64 __fastcall PFFOBJ::bAttemptReload(struct PFF **this)
{
  struct PFF *v2; // rcx
  int v3; // eax
  unsigned int v4; // edi
  struct PFF *v5; // rcx
  unsigned int v6; // r14d
  int v7; // r12d
  __int64 v8; // rdx
  int v9; // ecx
  __int64 SessionState; // rax
  struct PFF *v11; // r9
  __int64 v12; // r15
  size_t v14; // [rsp+28h] [rbp-31h]
  _QWORD v15[8]; // [rsp+70h] [rbp+17h] BYREF
  unsigned int v16; // [rsp+C0h] [rbp+67h] BYREF
  unsigned int v17; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned __int16 *v18; // [rsp+D0h] [rbp+77h] BYREF
  struct PFF *v19; // [rsp+D8h] [rbp+7Fh] BYREF

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
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v18, 2 * v6);
  if ( !v18
    || (cCapString(v18, *((WCHAR **)*this + 3), v6),
        v7 = *((_DWORD *)*this + 13) & 0x200,
        SessionState = W32GetSessionState(v9, v8),
        v11 = *this,
        v12 = *(_QWORD *)(SessionState + 96),
        v16 = 0,
        v15[0] = *(_QWORD *)(v12 + 20392),
        PUBLIC_PFTOBJ::pPFFGet(
          (PUBLIC_PFTOBJ *)v15,
          v18,
          v6,
          *((_DWORD *)v11 + 9),
          *((struct tagDESIGNVECTOR **)v11 + 5),
          *((_DWORD *)v11 + 12),
          &v16,
          0) != *this) )
  {
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v18);
    return 0LL;
  }
  if ( (unsigned int)PFTOBJ::bUnloadWorkhorse((PFTOBJ *)v15, *this, v16, 0)
    && (GreQuerySystemTime(v12 + 20408),
        v19 = 0LL,
        LODWORD(v14) = 0,
        v17 = 0,
        (unsigned int)PUBLIC_PFTOBJ::bLoadFonts(
                        (PUBLIC_PFTOBJ *)v15,
                        v18,
                        v6,
                        1u,
                        0LL,
                        v14,
                        &v17,
                        v7 != 0 ? 514 : 2,
                        &v19,
                        0,
                        0,
                        0LL,
                        1,
                        1)) )
  {
    GreQuerySystemTime(v12 + 20408);
  }
  else
  {
    v4 = 0;
  }
  GreAcquireSemaphore<17,>(v12 + 4864);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v18);
  return v4;
}
