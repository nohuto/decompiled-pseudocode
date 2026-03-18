/*
 * XREFs of ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400D4010
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 *     ?bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400D4278 (-bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400D42A0 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1400D4410 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x140206FE8 (-bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z.c)
 */

__int64 __fastcall ESTROBJ::bLinkedTextToPath(STROBJ *pstro, struct EPATHOBJ *a2)
{
  struct RFONTOBJ *v2; // rsi
  WCHAR *pwszOrg; // r14
  int v6; // edi
  unsigned __int64 v7; // r12
  int v8; // r15d
  __int64 v9; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct RFONTOBJ *v13; // r9
  _DWORD *v14; // rcx
  WCHAR *v15; // r8
  WCHAR *v16; // r10
  ULONG v17; // edx
  __int64 v18; // [rsp+60h] [rbp+40h] BYREF
  struct _POINTL v19; // [rsp+70h] [rbp+50h] BYREF

  v2 = *(struct RFONTOBJ **)&pstro[1].ulCharInc;
  pwszOrg = pstro->pwszOrg;
  pstro->pgp = 0LL;
  *(_QWORD *)&pstro->flAccel = 0LL;
  v6 = 0;
  v7 = *(_QWORD *)&pstro[4].rclBkGround.top + 4LL * pstro->cGlyphs;
  v8 = *(_DWORD *)(*(_QWORD *)v2 + 848LL) + 4;
  while ( 1 )
  {
    *(_QWORD *)&pstro[1].ulCharInc = v2;
    if ( v6 >= v8 )
      break;
    v18 = 0LL;
    if ( v6 )
    {
      switch ( v6 )
      {
        case 1:
          if ( !pstro[5].ulCharInc )
            goto LABEL_12;
          v9 = *(_QWORD *)(*(_QWORD *)v2 + 728LL);
          break;
        case 2:
          if ( !pstro[5].rclBkGround.left )
            goto LABEL_12;
          v9 = *(_QWORD *)(*(_QWORD *)v2 + 736LL);
          break;
        case 3:
          if ( !pstro[5].rclBkGround.top )
            goto LABEL_12;
          v9 = *(_QWORD *)(*(_QWORD *)v2 + 744LL);
          break;
        default:
          v11 = *(_QWORD *)&pstro[5].rclBkGround.bottom;
          if ( !v11 )
            goto LABEL_12;
          v12 = (unsigned int)(v6 - 4);
          if ( !*(_DWORD *)(v11 + 4 * v12) )
            goto LABEL_12;
          v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 752LL) + 8 * v12);
          break;
      }
      if ( !v9 )
        goto LABEL_10;
      v18 = v9;
      v13 = (struct RFONTOBJ *)&v18;
    }
    else
    {
      v13 = v2;
    }
    v14 = *(_DWORD **)&pstro[4].rclBkGround.top;
    v15 = pwszOrg;
    v16 = *(WCHAR **)&pstro[4].ulCharInc;
    v17 = 0;
    if ( (unsigned __int64)v14 < v7 )
    {
      do
      {
        if ( *v14 == v6 )
        {
          *v16++ = *v15;
          ++v17;
        }
        ++v15;
        ++v14;
      }
      while ( (unsigned __int64)v14 < v7 );
      if ( v17 )
      {
        pstro->pwszOrg = *(LPWSTR *)&pstro[4].ulCharInc;
        pstro->cGlyphs = v17;
        *(_QWORD *)&pstro[1].ulCharInc = v13;
        HIDWORD(pstro[4].pwszOrg) = v6;
        pstro[1].cGlyphs = 0;
        if ( v6 )
        {
          v19 = 0LL;
          if ( (unsigned int)bAdjusBaseLine(v13, (struct RFONTOBJ *)&v18, &v19) )
            ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)pstro, &v19);
        }
        if ( !(unsigned int)ESTROBJ::bTextToPathWorkhorse(pstro, a2) )
        {
          pstro->pwszOrg = pwszOrg;
          *(_QWORD *)&pstro[1].ulCharInc = v2;
          v18 = 0LL;
LABEL_10:
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
          return 0LL;
        }
      }
    }
    v18 = 0LL;
LABEL_12:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
    ++v6;
  }
  pstro->pwszOrg = pwszOrg;
  return 1LL;
}
