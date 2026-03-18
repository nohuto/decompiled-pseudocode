/*
 * XREFs of ?GrepDrawEscape@@YAHAEAVXDCOBJ@@HAEBV?$umptr_r@D@@@Z @ 0x140327864
 * Callers:
 *     NtGdiDrawEscape @ 0x140339130 (NtGdiDrawEscape.c)
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x140013B1C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001B040 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14008CA58 (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x14009B348 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x140326F1C (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1403289B0 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepDrawEscape(XDCOBJ *this, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 *v4; // r12
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, _BYTE *, struct _RECTL *, int, _QWORD); // r13
  __int64 v13; // rcx
  __int64 v14; // rax
  struct REGION *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  _BYTE v19[144]; // [rsp+40h] [rbp-C0h] BYREF
  struct _RECTL v20; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v21[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v22; // [rsp+100h] [rbp+0h]
  _BYTE v23[4]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v24[156]; // [rsp+114h] [rbp+14h] BYREF

  v3 = 0;
  v4 = (__int64 *)*((_QWORD *)this + 2);
  if ( !*(_QWORD *)(*(_QWORD *)this + 496LL) || (**(_DWORD **)(*(_QWORD *)this + 976LL) & 1) != 0 )
    return v3;
  if ( a2 == 8 && a3[1] - a3[2] < 4uLL )
    return 0LL;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v19);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v19, this, 0) )
  {
    v9 = XDCOBJ::bFullScreen(this);
LABEL_14:
    v3 = v9;
    goto LABEL_24;
  }
  v10 = *(_QWORD *)this;
  v11 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, struct _RECTL *, int, _QWORD))(v11 + 2880);
  if ( v12 )
  {
    if ( a2 != 8 )
    {
      v20 = *(struct _RECTL *)(v10 + 1032);
      v15 = XDCOBJ::prgnEffRao((DC **)this);
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v23, v15, (struct ERECTL *)&v20);
      if ( ERECTL::bEmpty((ERECTL *)v24) )
      {
        v3 = 1;
      }
      else
      {
        v16 = *(_QWORD *)(*(_QWORD *)this + 496LL);
        v17 = v16 + 112;
        if ( !v16 )
          v17 = 88LL;
        if ( (*(_DWORD *)v17 & 0x200000) != 0 )
        {
          if ( (*(_DWORD *)(v11 + 40) & 1) != 0 )
            GreAcquireSemaphore<6,>(v4);
          v22 = 0LL;
          DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v21, this, &v20);
          ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 496LL) + 92LL);
          v3 = v12(
                 (*(_QWORD *)(*(_QWORD *)this + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 496LL) != 0LL),
                 a2,
                 v23,
                 &v20,
                 *((_DWORD *)a3 + 2) - *((_DWORD *)a3 + 4),
                 *a3 + a3[2]);
          DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)v21, v18);
          if ( (*(_DWORD *)(v11 + 40) & 1) != 0 )
            GreReleaseSemaphoreExclusive<6,>(v4);
        }
      }
      goto LABEL_24;
    }
    v13 = *(_QWORD *)(v10 + 496);
    v14 = v13 + 112;
    if ( !v13 )
      v14 = 88LL;
    if ( (*(_DWORD *)v14 & 0x200000) != 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _QWORD))(v11 + 2880))(
             (v13 + 24) & -(__int64)(v13 != 0),
             8LL,
             0LL,
             0LL,
             *((_DWORD *)a3 + 2) - *((_DWORD *)a3 + 4),
             *a3 + a3[2]);
      goto LABEL_14;
    }
  }
LABEL_24:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v19);
  return v3;
}
