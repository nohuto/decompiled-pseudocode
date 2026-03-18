/*
 * XREFs of ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14003F770
 * Callers:
 *     GreCreateCompatibleDC @ 0x14003AF40 (GreCreateCompatibleDC.c)
 * Callees:
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x140012F1C (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ??1ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x140023450 (--1ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x14003DDB0 (-vUnlock@DCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributesHelper@DCOBJ@@AEAAXXZ @ 0x14003DE00 (-RestoreAttributesHelper@DCOBJ@@AEAAXXZ.c)
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ @ 0x14003FD40 (--0-$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14003FF44 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1400407D4 (-vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140111814 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x140118E28 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x140141058 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401C9CF0 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

HDC __fastcall GrepCreateCompatibleDC(struct OPTAPIDCOBJ *this)
{
  HDC v1; // rdx
  HDC DisplayDC; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  DC *v16; // rdi
  int v17; // xmm1_4
  int v18; // xmm0_4
  DC *v19; // rcx
  __int64 v20; // rcx
  int v21; // r8d
  DC *v22; // r10
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r10
  __int64 v28; // r11
  int v29; // edx
  int v30; // eax
  unsigned int v31; // edx
  __int64 *v32; // rax
  __int64 v33; // rcx
  DC *v34; // rcx
  __int64 v35; // rcx
  _QWORD **v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 *v41; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdi
  HDEV v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  _BYTE v57[8]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v58; // [rsp+28h] [rbp-D8h]
  __int64 v59; // [rsp+30h] [rbp-D0h]
  __int64 v60; // [rsp+40h] [rbp-C0h] BYREF
  int v61; // [rsp+48h] [rbp-B8h]
  __int64 v62; // [rsp+50h] [rbp-B0h]
  __int64 v63; // [rsp+58h] [rbp-A8h]
  __int64 v64; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v65; // [rsp+68h] [rbp-98h]
  __int64 v66; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v67; // [rsp+88h] [rbp-78h]
  char v68; // [rsp+A0h] [rbp-60h]
  DC *v69; // [rsp+B0h] [rbp-50h] BYREF
  int v70; // [rsp+B8h] [rbp-48h]
  __int64 v71; // [rsp+C0h] [rbp-40h]
  __int64 v72; // [rsp+C8h] [rbp-38h]
  __int64 v73; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD **v74; // [rsp+D8h] [rbp-28h]
  __int64 v75; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v76; // [rsp+F8h] [rbp-8h]
  char v77; // [rsp+110h] [rbp+10h]
  __int64 v78; // [rsp+120h] [rbp+20h] BYREF
  __int64 v79; // [rsp+128h] [rbp+28h]
  __int64 v80; // [rsp+130h] [rbp+30h]
  __int64 v81; // [rsp+138h] [rbp+38h]
  __int64 v82; // [rsp+140h] [rbp+40h]
  _BYTE *v83; // [rsp+148h] [rbp+48h]
  _BYTE v84[48]; // [rsp+150h] [rbp+50h] BYREF

  v1 = (HDC)*((_QWORD *)this + 12);
  DisplayDC = 0LL;
  if ( v1 )
  {
    if ( *(_QWORD *)this )
      goto LABEL_8;
    if ( *((_BYTE *)this + 105) != 1 )
    {
      DCOBJ::vLock(this, v1);
      v6 = *(_QWORD *)this;
      *((_BYTE *)this + 105) = 1;
      if ( v6 )
      {
        if ( *(_WORD *)(v6 + 12) != 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v4, v5);
        v1 = (HDC)*(unsigned __int16 *)(*(_QWORD *)this + 12LL);
        if ( (_WORD)v1 != 1 )
        {
          DCOBJ::vUnlock(this);
          return DisplayDC;
        }
LABEL_8:
        CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(this, v1);
        if ( CurrentThreadWin32Thread )
          v8 = *CurrentThreadWin32Thread;
        else
          v8 = 0LL;
        v79 = 0LL;
        v80 = 1LL;
        v81 = 0LL;
        v82 = 8LL;
        v84[32] = 1;
        v78 = (v8 + 8) & -(__int64)(v8 != 0);
        v83 = v84;
        if ( v78 )
        {
          v9 = *(_QWORD *)(((v8 + 8) & -(__int64)(v8 != 0)) + 0x148);
          if ( v9 )
          {
            if ( *(_BYTE *)(v9 + 80) )
            {
              ++*(_QWORD *)(v9 + 16);
            }
            else
            {
              v56 = 328LL;
              if ( v8 )
                v56 = v8 + 336;
              *(_QWORD *)v56 = &v78;
              v79 = v9;
            }
          }
          else
          {
            v10 = 328LL;
            if ( v8 )
              v10 = v8 + 336;
            *(_QWORD *)v10 = &v78;
          }
        }
        v62 = *((_QWORD *)this + 2);
        v63 = 0LL;
        v60 = 0LL;
        v61 = 0;
        UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(&v64);
        UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>(&v66);
        v11 = *(_QWORD *)this;
        v68 = 0;
        v60 = v11;
        DisplayDC = (HDC)GreCreateDisplayDC(*(HDEV *)(v11 + 48), 1u, 0);
        if ( DisplayDC )
        {
          v71 = *(_QWORD *)(W32GetSessionState(v12) + 88);
          v72 = 0LL;
          v69 = 0LL;
          v70 = 0;
          UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(&v73);
          DCOBJ::vLock((DCOBJ *)&v69, DisplayDC);
          UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>(&v75);
          v77 = 1;
          if ( v69 )
          {
            if ( *((_WORD *)v69 + 6) != 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
            if ( *((_WORD *)v69 + 6) != 1 )
              DCOBJ::vUnlock((DCOBJ *)&v69);
            v16 = v69;
            if ( v69 )
            {
              if ( (*(_DWORD *)(v60 + 520) & 1) != 0 )
              {
                v17 = *(_DWORD *)(v60 + 528);
                v18 = *(_DWORD *)(v60 + 524);
                v19 = v69;
                *((_DWORD *)v69 + 130) |= 5u;
                *((_DWORD *)v16 + 9) |= 0x10u;
                *((_DWORD *)v16 + 131) = v18;
                *((_DWORD *)v16 + 132) = v17;
                DC::vUpdateCachedDPIScaleValue(v19);
                v20 = *((_QWORD *)v16 + 62);
                if ( v20 )
                {
                  if ( (*(_DWORD *)(v20 + 116) & 0x800) != 0 )
                    *(_QWORD *)((char *)v16 + 532) = *(_QWORD *)(v20 + 668);
                }
              }
            }
          }
          v21 = *(_DWORD *)(*(_QWORD *)(v60 + 976) + 108LL);
          if ( (v21 & 7) != 0 )
          {
            v22 = v69;
            v23 = *((_QWORD *)v69 + 122);
            v24 = *(_DWORD *)(v23 + 108) & 7;
            *(_DWORD *)(v23 + 108) = v21;
            if ( v24 != (v21 & 7) )
            {
              v25 = *((_QWORD *)v22 + 122);
              v58 = *(_QWORD *)(v25 + 316);
              v59 = *(_QWORD *)(v25 + 324);
              if ( (v21 & 1) != 0 )
                *(_DWORD *)(v25 + 104) = 8;
              v26 = *((_QWORD *)v22 + 122);
              LODWORD(v58) = -(int)v58;
              LODWORD(v59) = -(int)v59;
              *(_QWORD *)(v26 + 316) = v58;
              *(_QWORD *)(*((_QWORD *)v22 + 122) + 324LL) = v59;
              DC::MirrorWindowOrg(v22);
              v28 = *(_QWORD *)(v27 + 976);
              if ( (*(_BYTE *)(v28 + 272) & 6) != 6 )
              {
                *(_DWORD *)(v28 + 272) ^= 2u;
                v28 = *(_QWORD *)(v27 + 976);
              }
              v29 = *(_DWORD *)(v27 + 248);
              v30 = v29 | 4;
              v31 = v29 & 0xFFFFFFFB;
              if ( (*(_DWORD *)(v27 + 248) & 4) == 0 )
                v31 = v30;
              *(_DWORD *)(v27 + 248) = v31;
              *(_DWORD *)(v28 + 340) |= 0x4090u;
            }
          }
          v32 = v76;
          v69 = (DC *)(-(__int64)(v77 != 0) & (unsigned __int64)v69);
          v33 = v75;
          if ( *(__int64 **)(v75 + 8) != &v75 || (__int64 *)*v76 != &v75 )
            goto LABEL_62;
          *v76 = v75;
          *(_QWORD *)(v33 + 8) = v32;
          v34 = v69;
          v76 = &v75;
          v75 = (__int64)&v75;
          if ( v69 )
          {
            if ( v70 && (*((_DWORD *)v69 + 11) & 2) != 0 )
            {
              DCOBJ::RestoreAttributesHelper((DCOBJ *)&v69);
              *((_DWORD *)v69 + 11) &= ~2u;
              v34 = v69;
              v70 = 0;
            }
            _InterlockedDecrement16((volatile signed __int16 *)v34 + 6);
            v69 = 0LL;
          }
          v35 = v73;
          v36 = v74;
          if ( *(__int64 **)(v73 + 8) != &v73 || *v74 != &v73 )
            goto LABEL_62;
          *v74 = (_QWORD *)v73;
          *(_QWORD *)(v35 + 8) = v36;
        }
        v37 = v67;
        v60 &= -(__int64)(v68 != 0);
        v38 = v66;
        if ( *(__int64 **)(v66 + 8) == &v66 && (__int64 *)*v67 == &v66 )
        {
          *v67 = v66;
          *(_QWORD *)(v38 + 8) = v37;
          v39 = v60;
          v67 = &v66;
          v66 = (__int64)&v66;
          if ( v60 )
          {
            if ( v61 && (*(_DWORD *)(v60 + 44) & 2) != 0 )
            {
              DCOBJ::RestoreAttributesHelper((DCOBJ *)&v60);
              *(_DWORD *)(v60 + 44) &= ~2u;
              v39 = v60;
              v61 = 0;
            }
            _InterlockedDecrement16((volatile signed __int16 *)(v39 + 12));
            v60 = 0LL;
          }
          v40 = v64;
          v41 = v65;
          if ( *(__int64 **)(v64 + 8) == &v64 && (__int64 *)*v65 == &v64 )
          {
            *v65 = v64;
            *(_QWORD *)(v40 + 8) = v41;
            v65 = &v64;
            v64 = (__int64)&v64;
            ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)&v78);
            return DisplayDC;
          }
        }
LABEL_62:
        __fastfail(3u);
      }
    }
  }
  else
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v57);
    v45 = (__int64 *)PsGetCurrentThreadWin32Thread(v44, v43);
    if ( v45 )
      v50 = *v45;
    else
      v50 = 0LL;
    v51 = *(HDEV *)(*(_QWORD *)(W32GetUserSessionState(v47, v46, v48, v49) + 56968) + 40LL);
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
      tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v50 + 456), 1u);
    else
      _InterlockedCompareExchange((volatile signed __int32 *)(v50 + 520), 0, 0);
    DisplayDC = (HDC)GreCreateDisplayDC(v51, 1u, 0);
    if ( !v57[0] )
      UserSessionSwitchLeaveCritWithNonPaged(v53, v52, v54, v55);
  }
  return DisplayDC;
}
