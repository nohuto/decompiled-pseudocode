/*
 * XREFs of GetMonitorDC @ 0x1400A4348
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x14003FE60 (xxxEnumDisplayMonitors.c)
 *     UserGetMonitorDC @ 0x1400A2330 (UserGetMonitorDC.c)
 * Callees:
 *     GreCombineRgn @ 0x14000DFC0 (GreCombineRgn.c)
 *     GreOffsetRgn @ 0x140014370 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x140014720 (GreSetRectRgn.c)
 *     GreCreateRectRgnIndirect @ 0x140015720 (GreCreateRectRgnIndirect.c)
 *     CreateMonitorRegion @ 0x140063A98 (CreateMonitorRegion.c)
 *     GetMonitorRect @ 0x140063BC4 (GetMonitorRect.c)
 *     GreSelectVisRgnShared @ 0x140089820 (GreSelectVisRgnShared.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x140089AC0 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     CreateCacheDC @ 0x140089BB0 (CreateCacheDC.c)
 *     ?SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140089EAC (-SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140089F20 (-SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x140089F94 (-SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     GreSetDCOwnerEx @ 0x14008A010 (GreSetDCOwnerEx.c)
 *     IsGetStyleWindowSupported @ 0x14008A080 (IsGetStyleWindowSupported.c)
 *     GetStyleWindow @ 0x14008A0B8 (GetStyleWindow.c)
 *     GreGetDCOrgEx @ 0x14008A850 (GreGetDCOrgEx.c)
 *     GreSetDCOrg @ 0x14008B230 (GreSetDCOrg.c)
 *     GreGetBounds @ 0x14008B330 (GreGetBounds.c)
 *     GreIsRendering @ 0x14008B570 (GreIsRendering.c)
 *     GreDeleteObject @ 0x14008B860 (GreDeleteObject.c)
 *     UpdateDCEInUseCount @ 0x1400C3150 (UpdateDCEInUseCount.c)
 *     IntersectRect @ 0x1400CE748 (IntersectRect.c)
 *     GreHintDCWnd @ 0x1400D5354 (GreHintDCWnd.c)
 *     IsGreHintDCWndSupported @ 0x1400DE644 (IsGreHintDCWndSupported.c)
 *     GreSelectRedirectionBitmap @ 0x1400E0E64 (GreSelectRedirectionBitmap.c)
 *     GetRedirectionBitmap @ 0x1400E4534 (GetRedirectionBitmap.c)
 *     IsGetRedirectionBitmapSupported @ 0x1400E6BA0 (IsGetRedirectionBitmapSupported.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1400E6BD8 (IsGreSelectRedirectionBitmapSupported.c)
 *     SpbCheckDce @ 0x14010480C (SpbCheckDce.c)
 *     IsSpbCheckDceSupported @ 0x140105774 (IsSpbCheckDceSupported.c)
 *     GreCopyVisRgn @ 0x14017D470 (GreCopyVisRgn.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall GetMonitorDC(__int64 a1, struct tagMONITOR *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  tagDCE *i; // rsi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  HRGN RectRgnIndirect; // rax
  __int64 (__fastcall *v14)(__int64, __int64); // r14
  __int64 (__fastcall *StyleWindow)(__int64, __int64); // rax
  __int64 v16; // rcx
  __int64 RedirectionBitmap; // rbx
  __int64 UserSessionState; // rax
  __int64 v19; // rax
  int v20; // ebx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct HOBJ__ *MonitorRegion; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  HRGN v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // ebx
  int v37; // edi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // r8d
  __int64 v46; // r8
  int v47; // ecx
  int v48; // eax
  int v49; // edx
  int v50; // r8d
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  HRGN v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int128 v61; // xmm0
  HDC v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  unsigned int v65; // r9d
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  struct REGION_CORE *v74; // [rsp+20h] [rbp-50h]
  __int128 v75; // [rsp+30h] [rbp-40h] BYREF
  struct _POINTL v76; // [rsp+40h] [rbp-30h] BYREF
  __int128 v77; // [rsp+50h] [rbp-20h] BYREF

  v76 = 0LL;
  v75 = 0LL;
  while ( 2 )
  {
    v7 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968);
    for ( i = *(tagDCE **)(v7 + 24); ; i = *(tagDCE **)i )
    {
      v7 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 56968) + 24LL;
      if ( i == (tagDCE *)v7 )
        break;
      if ( (*((_DWORD *)i + 12) & 0x401000) == 0
        && !(unsigned int)GreIsRendering(*((HDC *)i + 2))
        && *((struct tagMONITOR **)i + 9) == a2 )
      {
        if ( (*((_DWORD *)i + 12) & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 )
          SpbCheckDce(i);
        if ( GreSetDCOwnerEx(*((struct HOBJ__ **)i + 2), 0x80000002, 0, 0) )
        {
          tagDCE::SetPwndOrg(i, *(struct tagWND **)(a1 + 80));
          tagDCE::SetPwndClip(i, *(struct tagWND **)(a1 + 88));
          tagDCE::SetPwndRedirect(i, *(struct tagWND **)(a1 + 96));
          *((_QWORD *)i + 7) = *(_QWORD *)(a1 + 56);
          *((_QWORD *)i + 8) = *(_QWORD *)(a1 + 64);
          *((_DWORD *)i + 12) = *(_DWORD *)(a1 + 48) & 0x947F9 | 0x1002;
          v12 = *(_QWORD *)(a1 + 24);
          if ( v12 <= 1 )
          {
            *((_QWORD *)i + 3) = v12;
          }
          else
          {
            v77 = 0LL;
            RectRgnIndirect = (HRGN)GreCreateRectRgnIndirect((struct REGION_CORE *)&v77);
            *((_QWORD *)i + 3) = RectRgnIndirect;
            SetMonitorRegion(a2, RectRgnIndirect, *(HRGN *)(a1 + 24));
          }
          v14 = 0LL;
          if ( (*((_DWORD *)i + 12) & 0x4000) != 0
            && (int)IsGetStyleWindowSupported() >= 0
            && (StyleWindow = GetStyleWindow(*((_QWORD *)i + 10)), (v14 = StyleWindow) != 0LL) )
          {
            v16 = *((_QWORD *)StyleWindow + 5);
            if ( (*(_BYTE *)(v16 + 26) & 0x20) == 0 && (int)IsGetRedirectionBitmapSupported() >= 0 )
            {
              RedirectionBitmap = GetRedirectionBitmap(v14);
              if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0
                && !(unsigned int)GreSelectRedirectionBitmap(*((_QWORD *)i + 2), RedirectionBitmap) )
              {
                GreSelectVisRgnShared(*((HDC *)i + 2), 0LL, 1u);
              }
            }
            UserSessionState = W32GetUserSessionState(v16, v10);
            GreCopyVisRgn(*(HDC *)(a1 + 16), *(HRGN *)(UserSessionState + 43064));
            v19 = *((_QWORD *)v14 + 5);
            v20 = *(_DWORD *)(v19 + 92);
            v21 = *(_DWORD *)(v19 + 88);
            v24 = W32GetUserSessionState(v23, v22);
            GreOffsetRgn(*(HRGN *)(v24 + 43064), v21, v20);
            MonitorRegion = (struct HOBJ__ *)CreateMonitorRegion((__int64)a2);
            v28 = *(HRGN *)(W32GetUserSessionState(v27, v26) + 43064);
            v31 = W32GetUserSessionState(v30, v29);
            if ( !(unsigned int)GreCombineRgn(*(HRGN *)(v31 + 43064), v28, (HRGN)MonitorRegion, 1) )
            {
              v34 = W32GetUserSessionState(v33, v32);
              LODWORD(v74) = 0;
              GreSetRectRgn(*(HRGN *)(v34 + 43064), 0, 0, 0, v74);
            }
            GreDeleteObject(MonitorRegion);
            v35 = *((_QWORD *)v14 + 5);
            v36 = *(_DWORD *)(v35 + 92);
            v37 = *(_DWORD *)(v35 + 88);
            v40 = W32GetUserSessionState(v39, v38);
            GreOffsetRgn(*(HRGN *)(v40 + 43064), -v37, -v36);
            v43 = W32GetUserSessionState(v42, v41);
            GreSelectVisRgnShared(*((HDC *)i + 2), *(_QWORD *)(v43 + 43064), 2u);
            GreGetDCOrgEx(*(HDC *)(a1 + 16), &v76, &v75);
            if ( a3 )
            {
              v44 = *((_QWORD *)v14 + 5);
              v45 = *(_DWORD *)(v44 + 92);
              LODWORD(v44) = 2 * *(_DWORD *)(v44 + 88);
              LODWORD(v75) = v44 + v75;
              DWORD2(v75) += v44;
              HIDWORD(v75) += 2 * v45;
              DWORD1(v75) += 2 * v45;
              v77 = *(_OWORD *)GetMonitorRect((__int64)&v77, (__int64)a2);
              IntersectRect(&v75, &v75, &v77);
              v46 = *((_QWORD *)v14 + 5);
              v47 = -*(_DWORD *)(v46 + 92);
              v48 = -*(_DWORD *)(v46 + 88);
              DWORD2(v75) -= *(_DWORD *)(v46 + 88);
              v49 = v48 + v75;
              HIDWORD(v75) += v47;
              v50 = v47 + DWORD1(v75);
              LODWORD(v75) = v48 + v75;
              DWORD1(v75) += v47;
            }
            else
            {
              v50 = DWORD1(v75);
              v49 = v75;
            }
            GreSetDCOrg(*((HDC *)i + 2), v49, v50, &v75);
            GreGetBounds(*((HDC *)i + 2), 0LL, 5);
          }
          else
          {
            v51 = W32GetUserSessionState(v11, v10);
            GreCopyVisRgn(*(HDC *)(a1 + 16), *(HRGN *)(v51 + 43064));
            v54 = *(HRGN *)(W32GetUserSessionState(v53, v52) + 43064);
            v57 = W32GetUserSessionState(v56, v55);
            SetMonitorRegion(a2, *(HRGN *)(v57 + 43064), v54);
            v60 = W32GetUserSessionState(v59, v58);
            GreSelectVisRgnShared(*((HDC *)i + 2), *(_QWORD *)(v60 + 43064), 2u);
            v61 = *(_OWORD *)GetMonitorRect((__int64)&v77, (__int64)a2);
            v77 = v61;
            if ( a3 )
              v75 = v61;
            else
              GreGetDCOrgEx(*(HDC *)(a1 + 16), &v76, &v75);
            HIDWORD(v75) -= DWORD1(v77);
            DWORD2(v75) -= v77;
            v62 = (HDC)*((_QWORD *)i + 2);
            LODWORD(v75) = v75 - v77;
            DWORD1(v75) -= DWORD1(v77);
            GreSetDCOrg(v62, v75, SDWORD1(v75), &v75);
          }
          if ( (int)IsGreHintDCWndSupported() >= 0 )
            GreHintDCWnd(*((_QWORD *)i + 2), **((_QWORD **)i + 10), 0, 0, 0);
          if ( v14 && (*(_BYTE *)(*((_QWORD *)v14 + 5) + 26LL) & 8) != 0 && (int)IsGreHintDCWndSupported() >= 0 )
          {
            v66 = *((_QWORD *)v14 + 5);
            LOBYTE(v65) = ~*(_BYTE *)(v66 + 27);
            GreHintDCWnd(
              *((_QWORD *)i + 2),
              **((_QWORD **)i + 10),
              *(_QWORD *)v14,
              (v65 >> 1) & 1,
              (*(_WORD *)(v66 + 42) & 0x2FFF) == 669);
          }
          v67 = W32GetUserSessionState(v64, v63);
          --*(_DWORD *)(v67 + 19660);
          if ( a3 )
          {
            *((_DWORD *)i + 12) |= 0x80000000;
            *((_QWORD *)i + 7) = 0LL;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v68);
            if ( CurrentProcessWin32Process )
            {
              v70 = -*(_QWORD *)CurrentProcessWin32Process;
              CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
            }
            *((_QWORD *)i + 8) = CurrentProcessWin32Process;
            v71 = PsGetCurrentProcessWin32Process(v70);
            if ( v71 )
              v71 &= -(__int64)(*(_QWORD *)v71 != 0LL);
            *(_DWORD *)(v71 + 12) |= 0x200u;
          }
          v72 = *((_QWORD *)i + 7);
          if ( v72 )
            v73 = *(_QWORD *)(v72 + 464);
          else
            v73 = *((_QWORD *)i + 8);
          UpdateDCEInUseCount(1LL, v73);
          return *((_QWORD *)i + 2);
        }
      }
    }
    result = CreateCacheDC(0LL, *(_DWORD *)(a1 + 48) & 0x4000 | 0x802u, (__int64)a2);
    if ( result )
      continue;
    break;
  }
  return result;
}
