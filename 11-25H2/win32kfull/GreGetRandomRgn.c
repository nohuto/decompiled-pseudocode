/*
 * XREFs of GreGetRandomRgn @ 0x140158D50
 * Callers:
 *     _ExcludeUpdateRgn @ 0x140054468 (_ExcludeUpdateRgn.c)
 *     DrawTextExWorker @ 0x1400C188C (DrawTextExWorker.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x140158BD0 (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiGetRandomRgn @ 0x140158CD0 (NtGdiGetRandomRgn.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14001D260 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     UserGetRedirectedWindowOrigin @ 0x14004BE20 (UserGetRedirectedWindowOrigin.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14004C9F8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1403000A8 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     _GreGetRandomRgn_::_2_::_lambda_1_::operator() @ 0x14030EA1C (_GreGetRandomRgn_--_2_--_lambda_1_--operator().c)
 */

__int64 __fastcall GreGetRandomRgn(HDC a1, HRGN a2, int a3)
{
  unsigned int v6; // esi
  DC *v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // edi
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  __int64 v14; // rcx
  struct _POINTL v15; // r8
  bool v16; // zf
  int v17; // ebx
  __int64 v18; // [rsp+20h] [rbp-E0h] BYREF
  char v19; // [rsp+28h] [rbp-D8h]
  _QWORD v20[8]; // [rsp+30h] [rbp-D0h] BYREF
  DC *v21[14]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[144]; // [rsp+E0h] [rbp-20h] BYREF
  struct _POINTL v23; // [rsp+1A8h] [rbp+A8h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v21, a1);
  v6 = 0;
  if ( !v21[0] )
  {
    EngSetLastError(6u);
LABEL_3:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v21);
    return 0xFFFFFFFFLL;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v22);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v22, (struct XDCOBJ *)v21, 1) )
  {
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v22);
    goto LABEL_3;
  }
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a2, 0, 0);
  if ( !v20[0] )
    goto LABEL_17;
  v8 = v21[0];
  if ( a3 == 4 )
  {
    if ( (*((_DWORD *)v21[0] + 9) & 0x4000) != 0 )
    {
      DC::AcquireDcVisRgnShared(v21[0]);
      v10 = GreGetRandomRgn_::_2_::_lambda_1_::operator()(v9, v20, *((_QWORD *)v21[0] + 142));
      if ( v10 != 1 )
        goto LABEL_10;
      if ( v19 )
        CPushLock::ReleaseLock((CPushLock *)(v18 + 1112));
      v23 = 0LL;
      if ( (unsigned int)UserGetRedirectedWindowOrigin((__int64)a1, (__int64)&v23)
        && RGNOBJ::bOffset((RGNOBJ *)v20, &v23) )
      {
        v10 = 1;
LABEL_32:
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v22);
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v21);
        return v10;
      }
LABEL_17:
      v10 = -1;
      goto LABEL_32;
    }
LABEL_22:
    DC::AcquireDcVisRgnShared(v21[0]);
    v10 = GreGetRandomRgn_::_2_::_lambda_1_::operator()(v14, v20, *((_QWORD *)v21[0] + 142));
LABEL_10:
    if ( v19 )
      CPushLock::ReleaseLock((CPushLock *)(v18 + 1112));
    goto LABEL_32;
  }
  v11 = a3 - 1;
  if ( !v11 )
  {
    v6 = GreGetRandomRgn_::_2_::_lambda_1_::operator()(v21[0], v20, *((_QWORD *)v21[0] + 20));
    goto LABEL_34;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v15 = (struct _POINTL)*((_QWORD *)v21[0] + 21);
LABEL_31:
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GreGetRandomRgn_::_2_::_lambda_1_::operator())(v8, v20, v15);
    goto LABEL_32;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v15 = (struct _POINTL)*((_QWORD *)v21[0] + 21);
    v8 = (DC *)*((_QWORD *)v21[0] + 20);
    if ( v15 )
    {
      v16 = v8 == 0LL;
      if ( v8 )
      {
        v18 = *((_QWORD *)v21[0] + 20);
        v23 = v15;
        v17 = RGNOBJAPI::iCombine((RGNOBJAPI *)v20, (struct RGNOBJ *)&v18, (struct RGNOBJ *)&v23, 1) != 0 ? 2 : 0;
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v22);
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v21);
        return (unsigned int)(v17 - 1);
      }
    }
    else
    {
      v16 = v8 == 0LL;
    }
    if ( !v16 )
      v15 = (struct _POINTL)*((_QWORD *)v21[0] + 20);
    goto LABEL_31;
  }
  if ( (unsigned int)(v13 - 1) <= 1 )
    goto LABEL_22;
LABEL_34:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v22);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v21);
  return v6;
}
