/*
 * XREFs of ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140101384
 * Callers:
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x140102470 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x140100D48 (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     ?dpNtmi@PFEOBJ@@QEAAKXZ @ 0x14010183C (-dpNtmi@PFEOBJ@@QEAAKXZ.c)
 *     IsAnyCharsetDbcs @ 0x1401018D0 (IsAnyCharsetDbcs.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x140101934 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x140103F00 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall PFEMEMOBJ::bInit(
        PFEMEMOBJ *this,
        struct PFF *a2,
        int a3,
        struct _FD_GLYPHSET *a4,
        unsigned __int64 a5,
        struct _IFIMETRICS *a6,
        unsigned __int64 a7,
        int a8,
        struct _UNIVERSAL_FONT_ID *a9,
        int a10)
{
  __int64 v13; // rsi
  __int64 v14; // r10
  __int64 v15; // rax
  _WORD *v16; // rcx
  const wchar_t *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 SessionState; // rax
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rdx
  int v25; // ebx
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // rbx
  _BYTE *v28; // r9
  unsigned __int16 *i; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v32; // rcx
  __int64 v33; // [rsp+20h] [rbp-B8h] BYREF
  _OWORD v34[2]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int16 v35[32]; // [rsp+50h] [rbp-88h] BYREF
  char v36; // [rsp+91h] [rbp-47h] BYREF

  if ( a6->fwdWinAscender + a6->fwdWinDescender == 0 || a6->fwdUnitsPerEm == 0 )
    return 0LL;
  **(_QWORD **)this = a2;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = a3;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = a4;
  *(_QWORD *)(*(_QWORD *)this + 24LL) = a5;
  *(_QWORD *)(*(_QWORD *)this + 32LL) = a6;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = a7;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 56LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 64LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 92LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 96LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 136LL) = 0;
  v13 = *(_QWORD *)(*(_QWORD *)this + 32LL);
  v33 = v13;
  if ( (unsigned int)IsAnyCharsetDbcs(v13) )
  {
    *(_DWORD *)(v14 + 12) |= 0x80u;
    v14 = *(_QWORD *)this;
  }
  if ( *(_WORD *)(*(int *)(v13 + 8) + v13) == 64 )
    *(_DWORD *)(v14 + 12) |= 0x100u;
  *(_DWORD *)(*(_QWORD *)this + 128LL) = (PFEOBJ::dpNtmi(this) + 119) & 0xFFFFFFFC;
  if ( (a6->flInfo & 0x4000) != 0 && a6->cjIfiExtra > 0x10 )
    *(_DWORD *)(*(_QWORD *)this + 128LL) += 40 * *(ULONG *)((char *)&a6->cjIfiExtra + a6[1].dpwszFaceName);
  if ( a8 )
  {
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 1u;
  }
  else
  {
    v15 = *((_QWORD *)a2 + 26);
    if ( v15 && !*(_QWORD *)(*(_QWORD *)v15 + 80LL) )
    {
      *(_DWORD *)(*(_QWORD *)this + 12LL) |= (*((_DWORD *)a2 + 13) & 0x10) != 0 ? 64 : 4;
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      v32 = *(_QWORD *)this;
      *(_DWORD *)(v32 + 92) = CurrentProcessId & 0xFFFFFFFC;
      *(_QWORD *)(*(_QWORD *)this + 96LL) = GreGetCurrentThread(v32);
    }
  }
  if ( a9 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 0x20u;
  if ( a10 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 8u;
  v16 = (_WORD *)(v13 + *(int *)(v13 + 16));
  v17 = v16 + 1;
  if ( *v16 != 64 )
    v17 = (const wchar_t *)(v13 + *(int *)(v13 + 16));
  if ( !_wcsicmp(v17, L"SYSTEM")
    || !_wcsicmp(v17, L"FIXEDSYS")
    || !_wcsicmp(v17, L"TERMINAL")
    || !_wcsicmp(v17, L"SMALL FONTS") && *(_BYTE *)(v13 + 44) == 0x80 )
  {
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 0x10u;
  }
  *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
  *(_WORD *)(*(_QWORD *)this + 104LL) = 1;
  *(_WORD *)(*(_QWORD *)this + 106LL) = 0;
  SessionState = W32GetSessionState(v19, v18, v20);
  v22 = *(_QWORD *)this;
  v23 = *(_QWORD *)(SessionState + 96);
  *(_DWORD *)(v22 + 80) = _InterlockedIncrement((volatile signed __int32 *)(v23 + 20364));
  *(_DWORD *)(*(_QWORD *)this + 68LL) = IFIOBJ::lfOrientation((IFIOBJ *)&v33);
  if ( *(_DWORD *)(v13 + 4) < 4u )
    goto LABEL_23;
  if ( *(_DWORD *)(v13 + 192) )
  {
    *(_DWORD *)(*(_QWORD *)this + 88LL) = *(_DWORD *)(v13 + 192);
    *(_DWORD *)(*(_QWORD *)this + 84LL) = 1;
  }
  else
  {
LABEL_23:
    *(_DWORD *)(*(_QWORD *)this + 84LL) = *((_DWORD *)a2 + 36);
    *(_DWORD *)(*(_QWORD *)this + 88LL) = a3;
    if ( a9 )
      *(_DWORD *)(*(_QWORD *)this + 88LL) += (*((_DWORD *)a9 + 1) - 1) & 0xFFFFFFFE;
  }
  v24 = *(_QWORD *)this;
  memset(v34, 0, sizeof(v34));
  PushThreadGuardedObject(v34, v24, vDeletePFE);
  v25 = bComputeGISET(a6, *(struct PFE **)this, (struct _GISET **)(*(_QWORD *)this + 72LL));
  PopThreadGuardedObject(v34);
  if ( !v25 )
    return 0LL;
  *(_DWORD *)(*(_QWORD *)this + 132LL) = 0;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 40LL) )
  {
    v26 = *(_QWORD *)(v23 + 19656);
    v27 = v26 + 196LL * *(unsigned int *)(v23 + 19672);
    cCapString(v35, (const unsigned __int16 *)(v13 + *(int *)(v13 + 8)), 32);
    if ( v26 < v27 )
    {
      v28 = (_BYTE *)(v26 + 195);
      do
      {
        if ( !(*v28 | *(v28 - 66)) )
        {
          for ( i = v35; *i == *(unsigned __int16 *)((char *)i + v28 - &v36); ++i )
          {
            if ( !*i )
            {
              *(_BYTE *)((unsigned int)(*(_DWORD *)(*(_QWORD *)this + 132LL))++ + *(_QWORD *)this + 140LL) = -47 * ((__int64)&v28[-*(_QWORD *)(v23 + 19656) - 195] >> 2);
              break;
            }
          }
        }
        v28 += 196;
      }
      while ( (unsigned __int64)(v28 - 195) < v27 );
    }
  }
  return 1LL;
}
