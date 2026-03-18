/*
 * XREFs of ?SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z @ 0x1402EEAFC
 * Callers:
 *     ?DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z @ 0x1402EE65C (-DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z @ 0x1402EE6B0 (-GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z.c)
 *     ?GetCursorMaskAndXorBits@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@PEAPEAEPEAI@Z @ 0x1402EE7B8 (-GetCursorMaskAndXorBits@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@PEAPEAEPEAI@Z.c)
 *     ?PatchArgbCursorWithMask@CursorApiRouter@@CA_NPEAUHBITMAP__@@IPEAKUtagSIZE@@_N@Z @ 0x1402EE8EC (-PatchArgbCursorWithMask@CursorApiRouter@@CA_NPEAUHBITMAP__@@IPEAKUtagSIZE@@_N@Z.c)
 *     ?StoreNewCursorShape@CursorApiRouter@@AEAAKPEAU_MIT_CURSOR_MANAGEMENT_SHAPEHEADER@@K@Z @ 0x1402EF0F8 (-StoreNewCursorShape@CursorApiRouter@@AEAAKPEAU_MIT_CURSOR_MANAGEMENT_SHAPEHEADER@@K@Z.c)
 */

char __fastcall CursorApiRouter::SendMITCursorShape(__int64 a1, __int64 a2, int a3, int a4)
{
  Gre::Base *v4; // r13
  __int64 v5; // r12
  __int64 v6; // rsi
  char v8; // r14
  __int128 v9; // xmm0
  struct tagSIZE v10; // rbx
  HBITMAP v11; // rcx
  unsigned __int8 *v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  unsigned int v16; // r11d
  unsigned int *v18; // rdi
  int v19; // r8d
  struct tagSIZE v20; // r11
  char v21; // r8
  bool v22; // r13
  unsigned int *v23; // r9
  char v24; // r10
  unsigned int v25; // eax
  unsigned int v26; // eax
  Gre::Base *v27; // rax
  unsigned int v28; // eax
  Gre::Base *v29; // rcx
  unsigned __int8 *v30; // rdi
  int v31; // r8d
  int v32; // ecx
  unsigned int v33; // kr00_4
  int v34; // ecx
  LONG cy; // r8d
  unsigned __int8 *v36; // r9
  unsigned int v37; // ecx
  char *v38; // rdx
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // rsi
  char *v42; // r13
  char *v43; // r14
  char v44; // r10
  char v45; // cl
  char v46; // r8
  char v47; // al
  int v48; // eax
  int *v49; // r12
  unsigned int *i; // rax
  unsigned int v51; // eax
  __int128 v52; // xmm1
  char v53; // [rsp+38h] [rbp-D0h]
  char v54; // [rsp+38h] [rbp-D0h]
  char v55; // [rsp+39h] [rbp-CFh]
  char v56; // [rsp+39h] [rbp-CFh]
  unsigned int v57; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v58; // [rsp+40h] [rbp-C8h]
  struct tagSIZE v59; // [rsp+48h] [rbp-C0h]
  unsigned __int8 *v60; // [rsp+50h] [rbp-B8h]
  Gre::Base *v61; // [rsp+58h] [rbp-B0h]
  unsigned __int8 *v62; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v63[2]; // [rsp+68h] [rbp-A0h]
  __int64 v64; // [rsp+70h] [rbp-98h]
  _BYTE v65[48]; // [rsp+78h] [rbp-90h] BYREF
  char v66; // [rsp+A8h] [rbp-60h]
  __int16 v67; // [rsp+A9h] [rbp-5Fh]
  char v68; // [rsp+ABh] [rbp-5Dh]
  struct tagBITMAP v69; // [rsp+B0h] [rbp-58h] BYREF
  __int64 cx; // [rsp+D0h] [rbp-38h]
  __int64 v71; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v72; // [rsp+E0h] [rbp-28h]
  _OWORD v73[6]; // [rsp+E8h] [rbp-20h] BYREF
  char v76; // [rsp+160h] [rbp+58h]

  v4 = *(Gre::Base **)(a2 + 16);
  LOBYTE(v5) = 0;
  v61 = *(Gre::Base **)(a2 + 48);
  v6 = a1;
  *(_QWORD *)v65 = 0LL;
  if ( v61 )
    v4 = v61;
  v66 = 0;
  v60 = 0LL;
  memset(&v65[8], 0, 40);
  v67 = 0;
  v68 = 0;
  memset(&v69, 0, sizeof(v69));
  v8 = 1;
  LOBYTE(v58) = 1;
  v62 = 0LL;
  v73[0] = 0LL;
  v57 = 0;
  *(_OWORD *)(a1 + 72) = *(_OWORD *)v65;
  v9 = *(_OWORD *)&v65[32];
  v73[1] = 0LL;
  *(_OWORD *)(a1 + 88) = *(_OWORD *)&v65[16];
  *(_OWORD *)(a1 + 104) = v9;
  *(_DWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 72) = v4 != 0LL;
  *(_BYTE *)(a1 + 73) = *(_QWORD *)(a2 + 8) != 0LL;
  if ( v4 )
  {
    *(_BYTE *)(a1 + 74) = 0;
    if ( !(unsigned int)GreExtGetObjectW(v4, 32, &v69) )
    {
LABEL_5:
      v8 = 0;
      goto LABEL_20;
    }
    v59 = *(struct tagSIZE *)&v69.bmWidth;
    v10 = *(struct tagSIZE *)&v69.bmWidth;
  }
  else
  {
    *(_BYTE *)(a1 + 74) = 1;
    if ( !(unsigned int)GreExtGetObjectW(*(Gre::Base **)(a2 + 8), 32, &v69) )
      goto LABEL_5;
    v11 = *(HBITMAP *)(a2 + 8);
    v59.cx = v69.bmWidth;
    v59.cy = v69.bmHeight / 2;
    v10 = v59;
    if ( !CursorApiRouter::GetCursorMaskAndXorBits(v11, &v69, &v62, &v57) )
    {
      v12 = v62;
      v8 = 0;
      goto LABEL_18;
    }
    v60 = v62;
  }
  v13 = (unsigned int)v10.cx * (unsigned __int64)(unsigned int)v59.cy;
  cx = (unsigned int)v10.cx;
  *(_QWORD *)v63 = v13;
  v64 = 0xFFFFFFFFLL;
  if ( v13 > 0xFFFFFFFF )
    goto LABEL_16;
  v14 = 4LL * (unsigned int)v13;
  v72 = v14;
  if ( v14 > 0xFFFFFFFF )
    goto LABEL_16;
  LODWORD(v62) = v14 + 32;
  if ( (int)v14 + 32 < (unsigned int)v14 )
    goto LABEL_16;
  v15 = Win32AllocPoolZInit((unsigned int)(v14 + 32), 1129607282LL);
  v71 = v15;
  v5 = v15;
  if ( v15 )
  {
    v18 = (unsigned int *)(v15 + 32);
    *(struct tagSIZE *)v15 = v10;
    LOBYTE(v16) = 0;
    v57 = v16;
    *(_DWORD *)(v15 + 8) = *(__int16 *)(a2 + 4);
    *(_DWORD *)(v15 + 12) = *(__int16 *)(a2 + 6);
    *(_DWORD *)(v15 + 24) = a3;
    *(_DWORD *)(v15 + 28) = a4;
    *(_DWORD *)(v15 + 16) = 100;
    if ( v4 )
    {
      v19 = v63[0];
      *(_BYTE *)(v6 + 75) = 1;
      if ( !CursorApiRouter::GetCursorColorPixels((__int64)v4, &v69, v19, v18) )
      {
        LOBYTE(v5) = 0;
        goto LABEL_16;
      }
      v20 = (struct tagSIZE)((char *)v18 + v14);
      v53 = 0;
      v59 = (struct tagSIZE)((char *)v18 + v14);
      v55 = 1;
      v21 = 1;
      v22 = 0;
      v23 = v18;
      if ( v18 >= (unsigned int *)((char *)v18 + v14) )
      {
LABEL_51:
        v27 = v61;
LABEL_52:
        v29 = *(Gre::Base **)(a2 + 8);
        if ( v29 && !v27 )
        {
          v8 = CursorApiRouter::PatchArgbCursorWithMask(v29, v63[0], v18, v10, v22);
          if ( !v8 )
            goto LABEL_17;
          v20 = v59;
        }
        *(_DWORD *)(v5 + 20) = 0;
        if ( v53 && (unsigned __int64)v18 < *(_QWORD *)&v20 )
        {
          v30 = (unsigned __int8 *)v18 + 2;
          do
          {
            v31 = v30[1];
            v32 = *(v30 - 1);
            *v30 = v31 * (unsigned int)*v30 / 0xFF;
            v30 += 4;
            v33 = v31 * v32;
            v34 = *(v30 - 6);
            *(v30 - 5) = v33 / 0xFF;
            *(v30 - 6) = v31 * v34 / 0xFFu;
          }
          while ( (unsigned __int64)(v30 - 2) < *(_QWORD *)&v20 );
        }
        *(_BYTE *)(v6 + 76) = v57;
        *(_BYTE *)(v6 + 77) = v55;
        *(_BYTE *)(v6 + 78) = v53;
        *(_BYTE *)(v6 + 79) = v22;
      }
      else
      {
        v24 = v57;
        do
        {
          v25 = *v23;
          if ( *v23 == 0xFFFFFF )
          {
            LOBYTE(v57) = 1;
            v24 = 1;
          }
          else if ( v25 == -16777216 || v25 == (_DWORD)v64 )
          {
            v22 = 1;
          }
          else if ( v25 )
          {
            v55 = 0;
            v21 = 0;
            v26 = v25 & 0xFF000000;
            if ( v26 )
            {
              v22 = 1;
              if ( v26 != -16777216 )
              {
                v27 = v61;
                if ( !v61 )
                  v53 = 1;
                goto LABEL_52;
              }
            }
          }
          ++v23;
        }
        while ( (unsigned __int64)v23 < *(_QWORD *)&v20 );
        LOBYTE(v57) = v24;
        v55 = v21;
        v53 = 0;
        if ( !v21 )
          goto LABEL_51;
        LOBYTE(v57) = v24;
        v55 = v21;
        v53 = 0;
        if ( !v24 )
          goto LABEL_51;
        *(_DWORD *)(v5 + 20) = 1;
        do
        {
          v28 = *v18;
          if ( *v18 )
          {
            switch ( v28 )
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
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 904);
                v20 = v59;
                break;
            }
          }
          else
          {
            *v18 = -16777216;
          }
          ++v18;
        }
        while ( (unsigned __int64)v18 < *(_QWORD *)&v20 );
        v6 = a1;
      }
    }
    else
    {
      cy = v59.cy;
      v36 = v60;
      v37 = ((v10.cx + 15) >> 3) & 0xFFFFFFFE;
      *(_BYTE *)(v6 + 75) = 0;
      *(_DWORD *)(v15 + 20) = 1;
      v61 = (Gre::Base *)(v15 + 32);
      v38 = (char *)&v36[cy * v37];
      if ( cy <= 0 )
        goto LABEL_76;
      v39 = cx;
      v40 = v37;
      v64 = v37;
      v41 = (unsigned int)cy;
      do
      {
        v42 = (char *)v36;
        v43 = v38;
        v44 = 0;
        v45 = 0;
        v46 = 0;
        if ( v10.cx > 0 )
        {
          *(_QWORD *)v63 = v39;
          do
          {
            if ( !v46 )
            {
              v44 = *v42;
              v46 = 8;
              v45 = *v43;
              ++v42;
              ++v43;
            }
            v47 = v44;
            v54 = v45;
            v56 = v45;
            v44 *= 2;
            v76 = v45;
            --v46;
            v45 *= 2;
            if ( v47 >= 0 )
            {
              v48 = (v54 >> 31) & 0xFFFFFF;
            }
            else
            {
              if ( v76 < 0 )
                LOBYTE(v16) = 1;
              v48 = ((v56 >> 31) & 0xFFFFFF) - 0x1000000;
            }
            v49 = (int *)v61;
            v61 = (Gre::Base *)((char *)v61 + 4);
            *v49 = v48;
            --*(_QWORD *)v63;
          }
          while ( *(_QWORD *)v63 );
          v40 = v64;
        }
        v36 += v40;
        v38 += v40;
        --v41;
      }
      while ( v41 );
      v5 = v71;
      v6 = a1;
      v8 = v58;
      v14 = v72;
      v18 = (unsigned int *)(v71 + 32);
      if ( !(_BYTE)v16 )
      {
LABEL_76:
        for ( i = (unsigned int *)((char *)v18 + v14); v18 < i; ++v18 )
          *v18 ^= 0xFF000000;
        *(_DWORD *)(v5 + 20) = 0;
        *(_BYTE *)(v6 + 76) = 0;
      }
    }
    v51 = CursorApiRouter::StoreNewCursorShape(
            (CursorApiRouter *)v6,
            (struct _MIT_CURSOR_MANAGEMENT_SHAPEHEADER *)v5,
            (unsigned int)v62);
    *(_OWORD *)(v6 + 80) = *(_OWORD *)v5;
    v52 = *(_OWORD *)(v5 + 16);
    HIDWORD(v73[0]) = v51;
    DWORD2(v73[0]) = 1;
    *(_OWORD *)(v6 + 96) = v52;
    SendShape(v73);
    *(_QWORD *)(v6 + 112) = *((_QWORD *)&v73[0] + 1);
    goto LABEL_17;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 794);
LABEL_16:
  v8 = v5;
LABEL_17:
  v12 = v60;
LABEL_18:
  if ( v12 )
    Win32FreePool(v12);
LABEL_20:
  *(_BYTE *)(v6 + 120) = v8;
  return v8;
}
