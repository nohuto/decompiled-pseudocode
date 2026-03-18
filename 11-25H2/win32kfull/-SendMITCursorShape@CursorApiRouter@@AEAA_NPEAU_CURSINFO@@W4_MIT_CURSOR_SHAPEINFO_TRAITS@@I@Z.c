/*
 * XREFs of ?SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z @ 0x1402DC1B0
 * Callers:
 *     ?DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z @ 0x1402DB7A0 (-DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z @ 0x1402DB8BC (-GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z.c)
 *     ?GetCursorMaskAndXorBits@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@PEAPEAEPEAI@Z @ 0x1402DB9C4 (-GetCursorMaskAndXorBits@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@PEAPEAEPEAI@Z.c)
 *     ?PatchArgbCursorWithMask@CursorApiRouter@@CA_NPEAUHBITMAP__@@IPEAKUtagSIZE@@_N@Z @ 0x1402DBF98 (-PatchArgbCursorWithMask@CursorApiRouter@@CA_NPEAUHBITMAP__@@IPEAKUtagSIZE@@_N@Z.c)
 *     ?StoreNewCursorShape@CursorApiRouter@@AEAAKPEAU_MIT_CURSOR_MANAGEMENT_SHAPEHEADER@@K@Z @ 0x1402DC81C (-StoreNewCursorShape@CursorApiRouter@@AEAAKPEAU_MIT_CURSOR_MANAGEMENT_SHAPEHEADER@@K@Z.c)
 */

char __fastcall CursorApiRouter::SendMITCursorShape(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  Gre::Base *v4; // rax
  __int64 v5; // r14
  Gre::Base *v6; // rcx
  char v7; // si
  int v8; // eax
  __int128 v10; // xmm0
  struct tagSIZE v11; // rbx
  unsigned __int8 *v12; // rcx
  LONG cy; // r13d
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned int *v18; // rdi
  HBITMAP v19; // rcx
  int v20; // r8d
  bool v21; // r13
  unsigned int *v22; // r12
  char v23; // r8
  char v24; // r9
  unsigned int *v25; // r10
  unsigned int v26; // eax
  unsigned int v27; // eax
  Gre::Base *v28; // rax
  bool v29; // r12
  unsigned int v30; // eax
  Gre::Base *v31; // rcx
  unsigned __int8 *v32; // r9
  int v33; // r8d
  int v34; // ecx
  unsigned int v35; // kr00_4
  int v36; // ecx
  unsigned __int8 *v37; // r10
  LONG v38; // r11d
  unsigned int v39; // ecx
  unsigned __int8 *v40; // r9
  unsigned __int8 *v41; // rax
  char *v42; // r12
  char v43; // si
  signed __int8 v44; // r14
  char v45; // r8
  unsigned __int8 *v46; // r13
  char v47; // dl
  int v48; // ecx
  int v49; // eax
  unsigned int v50; // eax
  __int128 v51; // xmm1
  char v53; // [rsp+38h] [rbp-A9h]
  char v54; // [rsp+39h] [rbp-A8h]
  struct tagSIZE v55; // [rsp+40h] [rbp-A1h]
  struct tagSIZE v56; // [rsp+40h] [rbp-A1h]
  unsigned __int8 *v57; // [rsp+48h] [rbp-99h]
  unsigned __int8 *v58; // [rsp+50h] [rbp-91h] BYREF
  unsigned int v59[2]; // [rsp+58h] [rbp-89h] BYREF
  Gre::Base *v60; // [rsp+60h] [rbp-81h]
  HBITMAP v61; // [rsp+68h] [rbp-79h]
  _BYTE v62[48]; // [rsp+70h] [rbp-71h] BYREF
  unsigned __int8 v63; // [rsp+A0h] [rbp-41h]
  __int16 v64; // [rsp+A1h] [rbp-40h]
  char v65; // [rsp+A3h] [rbp-3Eh]
  struct tagBITMAP v66; // [rsp+A8h] [rbp-39h] BYREF
  __int64 v67; // [rsp+C8h] [rbp-19h]
  _OWORD v68[6]; // [rsp+D0h] [rbp-11h] BYREF
  int v71; // [rsp+150h] [rbp+6Fh]
  int v73; // [rsp+160h] [rbp+7Fh]

  v73 = a4;
  v4 = *(Gre::Base **)(a2 + 48);
  v60 = v4;
  *(_QWORD *)v62 = 0LL;
  v5 = a1;
  v63 = 0;
  v6 = *(Gre::Base **)(a2 + 16);
  if ( v4 )
    v6 = v4;
  v57 = 0LL;
  v58 = 0LL;
  memset(&v62[8], 0, 40);
  v64 = 0;
  v65 = 0;
  v7 = 1;
  v8 = v63;
  memset(&v66, 0, sizeof(v66));
  v59[0] = 0;
  v61 = (HBITMAP)v6;
  v68[0] = 0LL;
  *(_OWORD *)(v5 + 72) = *(_OWORD *)v62;
  v10 = *(_OWORD *)&v62[32];
  v68[1] = 0LL;
  *(_OWORD *)(v5 + 88) = *(_OWORD *)&v62[16];
  *(_OWORD *)(v5 + 104) = v10;
  *(_DWORD *)(v5 + 120) = v8;
  *(_BYTE *)(v5 + 72) = v6 != 0LL;
  *(_BYTE *)(v5 + 73) = *(_QWORD *)(a2 + 8) != 0LL;
  if ( v6 )
  {
    *(_BYTE *)(v5 + 74) = 0;
    if ( !(unsigned int)GreExtGetObjectW(v6, 32LL, &v66, a4) )
    {
LABEL_5:
      v7 = 0;
      goto LABEL_71;
    }
    v55.cy = v66.bmHeight;
    v11 = *(struct tagSIZE *)&v66.bmWidth;
  }
  else
  {
    *(_BYTE *)(v5 + 74) = 1;
    if ( !(unsigned int)GreExtGetObjectW(*(Gre::Base **)(a2 + 8), 32LL, &v66, a4) )
      goto LABEL_5;
    v55.cx = v66.bmWidth;
    v55.cy = v66.bmHeight / 2;
    v11 = v55;
    if ( !CursorApiRouter::GetCursorMaskAndXorBits(*(HBITMAP *)(a2 + 8), &v66, &v58, v59) )
    {
      v12 = v58;
      v7 = 0;
      goto LABEL_69;
    }
    v57 = v58;
  }
  cy = v55.cy;
  v14 = (unsigned int)v55.cy * (unsigned __int64)(unsigned int)v11.cx;
  v58 = (unsigned __int8 *)v14;
  if ( v14 > 0xFFFFFFFF )
    goto LABEL_67;
  v15 = 4LL * (unsigned int)v14;
  if ( v15 > 0xFFFFFFFF )
    goto LABEL_67;
  v59[0] = v15 + 32;
  if ( (int)v15 + 32 < (unsigned int)v15 )
    goto LABEL_67;
  v16 = Win32AllocPoolZInit((unsigned int)(v15 + 32), 1129607282LL);
  v67 = v16;
  v17 = v16;
  if ( !v16 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 794);
LABEL_67:
    v7 = 0;
    goto LABEL_68;
  }
  v18 = (unsigned int *)(v16 + 32);
  *(struct tagSIZE *)v16 = v11;
  *(_DWORD *)(v16 + 8) = *(__int16 *)(a2 + 4);
  v19 = v61;
  *(_DWORD *)(v16 + 12) = *(__int16 *)(a2 + 6);
  *(_DWORD *)(v16 + 24) = a3;
  *(_DWORD *)(v16 + 28) = v73;
  *(_DWORD *)(v16 + 16) = 100;
  if ( v19 )
  {
    v20 = (int)v58;
    *(_BYTE *)(v5 + 75) = 1;
    v21 = 0;
    if ( !CursorApiRouter::GetCursorColorPixels((HSURF)v19, &v66, v20, v18) )
      goto LABEL_67;
    v22 = &v18[v15 / 4];
    v53 = 0;
    v54 = 1;
    v23 = 0;
    v56 = (struct tagSIZE)v22;
    v24 = 1;
    v25 = v18;
    if ( v18 >= v22 )
    {
      v29 = 0;
    }
    else
    {
      do
      {
        v26 = *v25;
        if ( *v25 == 0xFFFFFF )
        {
          v23 = 1;
          v53 = 1;
        }
        else if ( v26 == -16777216 || v26 == -1 )
        {
          v21 = 1;
        }
        else if ( v26 )
        {
          v24 = 0;
          v54 = 0;
          v27 = v26 & 0xFF000000;
          if ( v27 )
          {
            v21 = 1;
            if ( v27 != -16777216 )
            {
              v28 = v60;
              v29 = v60 == 0LL;
              goto LABEL_45;
            }
          }
        }
        ++v25;
      }
      while ( v25 < v22 );
      v53 = v23;
      v54 = v24;
      v29 = 0;
      if ( v24 )
      {
        v53 = v23;
        v54 = v24;
        if ( v23 )
        {
          *(_DWORD *)(v17 + 20) = 1;
          do
          {
            v30 = *v18;
            if ( *v18 )
            {
              switch ( v30 )
              {
                case 0xFFFFFFu:
                  *v18 = -1;
                  break;
                case 0xFF000000:
                  *v18 = 0;
                  break;
                case 0xFFFFFFFF:
                  *v18 = 0xFFFFFF;
                  break;
                default:
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 903);
                  break;
              }
            }
            else
            {
              *v18 = -16777216;
            }
            ++v18;
          }
          while ( (unsigned __int64)v18 < *(_QWORD *)&v56 );
LABEL_65:
          v5 = a1;
          goto LABEL_66;
        }
      }
    }
    v28 = v60;
LABEL_45:
    v31 = *(Gre::Base **)(a2 + 8);
    if ( v31 )
    {
      if ( !v28 )
      {
        v7 = CursorApiRouter::PatchArgbCursorWithMask(v31, (unsigned int)v58, v18, v11, v21);
        if ( !v7 )
          goto LABEL_68;
      }
    }
    *(_DWORD *)(v17 + 20) = 0;
    if ( v29 && (unsigned __int64)v18 < *(_QWORD *)&v56 )
    {
      v32 = (unsigned __int8 *)(v17 + 34);
      do
      {
        v33 = v32[1];
        v34 = *(v32 - 1);
        *v32 = v33 * (unsigned int)*v32 / 0xFF;
        v32 += 4;
        v35 = v33 * v34;
        v36 = *(v32 - 6);
        *(v32 - 5) = v35 / 0xFF;
        *(v32 - 6) = v33 * v36 / 0xFFu;
      }
      while ( (unsigned __int64)(v32 - 2) < *(_QWORD *)&v56 );
    }
    *(_BYTE *)(v5 + 76) = v53;
    *(_BYTE *)(v5 + 77) = v54;
    *(_BYTE *)(v5 + 78) = v29;
    *(_BYTE *)(v5 + 79) = v21;
    goto LABEL_66;
  }
  v37 = v57;
  v38 = 0;
  v39 = ((v11.cx + 15) >> 3) & 0xFFFFFFFE;
  *(_BYTE *)(v5 + 75) = 0;
  *(_DWORD *)(v16 + 20) = 1;
  v40 = &v57[v55.cy * v39];
  if ( v55.cy > 0 )
  {
    v41 = (unsigned __int8 *)v39;
    v58 = (unsigned __int8 *)v39;
    do
    {
      v71 = 0;
      v42 = (char *)v37;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      if ( v11.cx > 0 )
      {
        v46 = v40;
        do
        {
          if ( !v45 )
          {
            v43 = *v42;
            v45 = 8;
            v44 = *v46;
            ++v42;
            ++v46;
          }
          v47 = v43;
          v43 *= 2;
          v48 = (v44 >> 31) & 0xFFFFFF;
          v44 *= 2;
          --v45;
          v49 = v48 - 0x1000000;
          if ( v47 >= 0 )
            v49 = v48;
          *v18++ = v49;
          ++v71;
        }
        while ( v71 < v11.cx );
        cy = v55.cy;
        v41 = v58;
      }
      v37 = &v37[(_QWORD)v41];
      v40 = &v40[(_QWORD)v41];
      ++v38;
    }
    while ( v38 < cy );
    v7 = 1;
    v17 = v67;
    goto LABEL_65;
  }
LABEL_66:
  v50 = CursorApiRouter::StoreNewCursorShape(
          (CursorApiRouter *)v5,
          (struct _MIT_CURSOR_MANAGEMENT_SHAPEHEADER *)v17,
          v59[0]);
  *(_OWORD *)(v5 + 80) = *(_OWORD *)v17;
  v51 = *(_OWORD *)(v17 + 16);
  HIDWORD(v68[0]) = v50;
  DWORD2(v68[0]) = 1;
  *(_OWORD *)(v5 + 96) = v51;
  SendShape(v68);
  *(_QWORD *)(v5 + 112) = *((_QWORD *)&v68[0] + 1);
LABEL_68:
  v12 = v57;
LABEL_69:
  if ( v12 )
    Win32FreePool(v12);
LABEL_71:
  *(_BYTE *)(v5 + 120) = v7;
  return v7;
}
