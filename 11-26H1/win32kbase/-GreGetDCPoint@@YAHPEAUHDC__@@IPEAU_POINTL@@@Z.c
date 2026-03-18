/*
 * XREFs of ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x14003B980
 * Callers:
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 *     GreGetDCOrgEx @ 0x1400C4E60 (GreGetDCOrgEx.c)
 *     GreGetDCOrg @ 0x1401646A0 (GreGetDCOrg.c)
 * Callees:
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1400388B4 (-vMakeIso@DC@@QEAAXXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14003D020 (--1APIDCOBJ@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140040038 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreGetDCPoint(HDC a1, int a2, struct _POINTL *a3)
{
  int v3; // r14d
  unsigned int v4; // esi
  unsigned int v5; // edi
  unsigned int v8; // ebp
  DC *v9; // rdx
  unsigned int v10; // esi
  unsigned int v11; // esi
  unsigned int v12; // esi
  unsigned int v13; // esi
  int (*v15)(void); // rax
  __int64 v16; // rcx
  unsigned int (__fastcall *v17)(HDC, struct _POINTL *); // rax
  __int64 v18; // rcx
  char v19; // si
  unsigned int (__fastcall *v20)(HDC, __int64 *); // rax
  __int64 v21; // rcx
  struct _POINTL v22; // rcx
  DC *v23[14]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a2 & 0x40;
  v4 = a2 & 0xFFFFFFBF;
  v5 = 0;
  v8 = 1;
  if ( (a2 & 0xFFFFFFBF) != 0x10
    || (v15 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 832LL)) == 0LL
    || v15() < 0 )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v23, a1);
    v9 = v23[0];
    if ( !v23[0] )
      goto LABEL_11;
    v10 = v4 - 1;
    if ( !v10 )
    {
      v21 = *((_QWORD *)v23[0] + 122);
      if ( (*(_DWORD *)(v21 + 340) & 0x4000) != 0 && *(_DWORD *)(v21 + 104) == 7 )
      {
        DC::vMakeIso(v23[0]);
        v9 = v23[0];
      }
      *a3 = *(struct _POINTL *)(*((_QWORD *)v9 + 122) + 332LL);
      goto LABEL_10;
    }
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 2;
      if ( v12 )
      {
        v13 = v12 - 4;
        if ( !v13 )
        {
          *a3 = *(struct _POINTL *)(*((_QWORD *)v23[0] + 122) + 308LL);
          a3->x = *(_DWORD *)(*((_QWORD *)v9 + 122) + 304LL);
          goto LABEL_10;
        }
        if ( v13 == 24 )
        {
          *a3 = *(struct _POINTL *)((char *)v23[0] + 8 * (*((_DWORD *)v23[0] + 10) & 1LL) + 1016);
          if ( v3 && (*((_DWORD *)v9 + 9) & 0x4000) != 0 )
          {
            v24 = 0LL;
            if ( (unsigned int)GET_USERCRIT_DISPOSITION() )
            {
              v19 = 0;
            }
            else
            {
              v19 = 1;
              EnterSharedCrit(1LL);
            }
            v20 = *(unsigned int (__fastcall **)(HDC, __int64 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18) + 24)
                                                                + 456LL);
            if ( v20 && v20(a1, &v24) )
            {
              a3->x += v24;
              a3->y += HIDWORD(v24);
            }
            if ( v19 )
              UserSessionSwitchLeaveCritWithNonPaged();
          }
          goto LABEL_10;
        }
LABEL_11:
        v8 = 0;
LABEL_10:
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v23);
        return v8;
      }
      v22 = *(struct _POINTL *)(*((_QWORD *)v23[0] + 122) + 324LL);
    }
    else
    {
      v22 = *(struct _POINTL *)(*((_QWORD *)v23[0] + 122) + 316LL);
    }
    *a3 = v22;
    if ( (*(_DWORD *)(*((_QWORD *)v9 + 122) + 108LL) & 1) != 0 )
      a3->x = -a3->x;
    goto LABEL_10;
  }
  v17 = *(unsigned int (__fastcall **)(HDC, struct _POINTL *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v16) + 24) + 840LL);
  if ( v17 )
    return v17(a1, a3);
  return v5;
}
