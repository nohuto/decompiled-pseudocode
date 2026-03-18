/*
 * XREFs of ?bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z @ 0x140310FE0
 * Callers:
 *     NtGdiAbortDoc @ 0x140311FD0 (NtGdiAbortDoc.c)
 *     NtGdiEndDoc @ 0x1403123A0 (NtGdiEndDoc.c)
 *     NtGdiStartPage @ 0x140312610 (NtGdiStartPage.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400150C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1400766D8 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?vServer@UMPDOBJ@@QEAAXPEAX@Z @ 0x1400D93F4 (-vServer@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x14016BC60 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x140197710 (--0DCOBJ@@QEAA@XZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1402965CC (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vInit@RESTORESAVEDCATTRS@@QEAAXPEAVAPIDCOBJ@@@Z @ 0x140296918 (-vInit@RESTORESAVEDCATTRS@@QEAAXPEAVAPIDCOBJ@@@Z.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x140296EA8 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ?AcquireDcEndDocLock@DC@@QEAA@XZ @ 0x140310668 (-AcquireDcEndDocLock@DC@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bEndDocInternal(struct APIDCOBJ *a1, unsigned int a2)
{
  _DWORD *v4; // r8
  int v5; // eax
  int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned int v9; // esi
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD); // rax
  __int64 v14; // r14
  int v15; // r15d
  int v16; // r12d
  UMPDOBJ *v17; // rcx
  __int64 v18; // r8
  int v19; // ebx
  __int64 v20; // r14
  __int64 v21; // r8
  DC *v22; // rax
  __int64 v23; // r8
  SURFACE *v24; // rcx
  int v25; // eax
  __int64 v26; // rbx
  __int64 v28; // [rsp+20h] [rbp-50h] BYREF
  char v29; // [rsp+28h] [rbp-48h]
  DC *v30[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v31; // [rsp+40h] [rbp-30h]
  __int64 v32; // [rsp+B0h] [rbp+40h] BYREF
  DCOBJ *v33; // [rsp+C0h] [rbp+50h] BYREF
  UMPDOBJ *v34; // [rsp+C8h] [rbp+58h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x200800) != 0 )
    goto LABEL_35;
  if ( !(unsigned int)XDCOBJ::bValidSurf(a1) )
    goto LABEL_35;
  v5 = *v4 & 0x7F0000;
  if ( v5 == 0x10000 || v5 == 6684672 )
    goto LABEL_35;
  v6 = v4[27];
  if ( v4[26] > v6 )
    GrepRestoreDCOBJ(a1, v6);
  v7 = *(_QWORD *)a1;
  DC::AcquireDcEndDocLock(*(DC **)a1, (__int64)&v28);
  *(_DWORD *)(v7 + 36) |= 0x200000u;
  if ( v29 )
    GreInnermostPushLock::ReleaseLock((GreInnermostPushLock *)(v28 + 2096));
  v8 = *(_QWORD *)a1;
  v9 = 1;
  v10 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v32 = v10;
  v11 = *(_DWORD *)(v10 + 40);
  if ( (v11 & 1) != 0 || !*(_QWORD *)(v10 + 2552) )
  {
LABEL_35:
    EngSetLastError(0x3EBu);
    return 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(v8 + 496);
    v33 = 0LL;
    if ( (v11 & 0x8000) != 0 )
    {
      RESTORESAVEDCATTRS::vInit((RESTORESAVEDCATTRS *)&v33, a1);
      v10 = v32;
    }
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD))(v10 + 2952);
    v14 = v12 + 24;
    if ( v13 )
      v15 = v13(v14 & -(__int64)(v12 != 0), a2);
    else
      v15 = 0;
    RESTORESAVEDCATTRS::vDone(&v33);
    v16 = *(_DWORD *)(v32 + 40) & 0x8000;
    *(_WORD *)(*(_QWORD *)a1 + 2088LL) = -1;
    XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v34);
    if ( v34 && *((_BYTE *)v34 + 440) )
      UMPDOBJ::vServer(v17, (_QWORD *)(v14 & -(__int64)(v12 != 0)));
    XUMPDOBJ::~XUMPDOBJ(&v34);
    DC::pSurface(*(DC **)a1, 0LL, v18);
    *(_DWORD *)(*(_QWORD *)a1 + 316LL) |= 0xFu;
    v19 = 0;
    v20 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
    while ( v19 < *(_DWORD *)(*(_QWORD *)a1 + 104LL) - 1 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v30);
      LOBYTE(v21) = 1;
      v22 = (DC *)HmgLock(v31, v20, v21, 1LL);
      v30[0] = v22;
      if ( !v22 || (v24 = (SURFACE *)*((_QWORD *)v22 + 62)) == 0LL )
      {
        DCOBJ::~DCOBJ((DCOBJ *)v30);
        break;
      }
      v25 = *((_DWORD *)v24 + 28);
      if ( (v25 & 0x800) != 0 )
      {
        DEC_SHARE_REF_CNT(v31, v24);
      }
      else if ( v25 >= 0 )
      {
        SURFACE::vDec_cRef(v24);
      }
      DC::pSurface(v30[0], 0LL, v23);
      *((_DWORD *)v30[0] + 79) |= 0xFu;
      v20 = *((_QWORD *)v30[0] + 14);
      DCOBJ::~DCOBJ((DCOBJ *)v30);
      ++v19;
    }
    PDEVOBJ::vDisableSurface((PDEVOBJ *)&v32, 1u);
    v26 = *(_QWORD *)a1;
    DC::AcquireDcEndDocLock(*(DC **)a1, (__int64)&v28);
    *(_DWORD *)(v26 + 36) &= ~0x200000u;
    if ( v29 )
      GreInnermostPushLock::ReleaseLock((GreInnermostPushLock *)(v28 + 2096));
    if ( !v16 || !v15 )
      v9 = 0;
    RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(&v33);
    return v9;
  }
}
