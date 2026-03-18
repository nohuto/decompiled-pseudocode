/*
 * XREFs of ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x140151448
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x140150004 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     <none>
 */

struct _devicemodeW *__fastcall GetClosestMode(struct tagGRAPHICS_DEVICE *a1, struct _devicemodeW *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  _DWORD *v6; // rdx
  _DWORD *v7; // r10
  struct tagGRAPHICS_DEVICE *v8; // r8
  unsigned int v9; // r15d
  unsigned int v10; // ebp
  unsigned int v11; // r13d
  unsigned int v12; // esi
  unsigned int v13; // r12d
  DWORD *p_dmBitsPerPel; // r14
  DWORD dmFields; // edi
  unsigned int v16; // r9d
  __int64 v17; // rdx
  unsigned int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // rdx
  bool v21; // cf
  bool v22; // cc
  DWORD dmPelsWidth; // eax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  DWORD dmPelsHeight; // eax
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // edx
  unsigned int v33; // r9d
  unsigned int v34; // ecx
  unsigned int v35; // edx
  DWORD dmDisplayFrequency; // ecx
  unsigned int v37; // r9d
  DWORD v38; // eax
  DWORD v39; // eax
  DWORD v40; // ecx
  unsigned int v41; // edx
  unsigned int v42; // esi
  unsigned int v43; // eax
  unsigned int v44; // edx
  DWORD v45; // ecx
  unsigned int v46; // edi
  unsigned int v47; // eax
  unsigned int v48; // edx
  DWORD v49; // ecx
  DWORD v50; // r14d
  unsigned int v51; // r14d
  unsigned int v52; // eax
  unsigned int v53; // edx
  DWORD v54; // ecx
  unsigned int v55; // r8d
  int v56; // [rsp+0h] [rbp-88h]
  __int64 v57; // [rsp+8h] [rbp-80h]
  unsigned int v58; // [rsp+10h] [rbp-78h]
  unsigned int v59; // [rsp+14h] [rbp-74h]
  char v60; // [rsp+18h] [rbp-70h]
  int v61; // [rsp+1Ch] [rbp-6Ch]
  DWORD *v62; // [rsp+28h] [rbp-60h]
  _DWORD *v63; // [rsp+30h] [rbp-58h]
  unsigned int v65; // [rsp+98h] [rbp+10h]

  v4 = -1;
  v6 = 0LL;
  v56 = -1;
  v7 = 0LL;
  v63 = 0LL;
  v8 = a1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  if ( !a2->dmDisplayFrequency )
    a2->dmDisplayFrequency = 60;
  p_dmBitsPerPel = &a2->dmBitsPerPel;
  v62 = &a2->dmBitsPerPel;
  if ( !a2->dmBitsPerPel )
    *p_dmBitsPerPel = 32;
  dmFields = a2->dmFields;
  v60 = dmFields;
  if ( (dmFields & 0x80u) == 0 )
    a2->dmDisplayOrientation = 0;
  if ( (dmFields & 0x20000000) == 0 )
  {
    a2->dmDisplayFixedOutput = 0;
    p_dmBitsPerPel = &a2->dmBitsPerPel;
    v62 = &a2->dmBitsPerPel;
  }
  v16 = 0;
  v58 = 0;
  do
  {
    if ( v6 && !v12 )
    {
      v30 = v6[44];
      v31 = v6[43];
      if ( v31 < v30 )
      {
        if ( v31 >= 0x1E0 && v30 >= 0x280 )
        {
LABEL_46:
          if ( v6[46] >= 0x3Cu )
            return (struct _devicemodeW *)v6;
        }
      }
      else if ( v31 >= 0x280 && v30 >= 0x1E0 )
      {
        goto LABEL_46;
      }
    }
    v59 = 0;
    v65 = *((_DWORD *)v8 + 47);
    if ( !v65 )
      goto LABEL_35;
    v17 = 0LL;
    v18 = *((_DWORD *)v8 + 47);
    v57 = 0LL;
    while ( 1 )
    {
      if ( a3 && *(_DWORD *)(v17 + *((_QWORD *)v8 + 24)) )
        goto LABEL_33;
      v19 = *(_QWORD *)(v17 + *((_QWORD *)v8 + 24) + 8);
      if ( !a4 || ((LOBYTE(a2->dmDisplayFlags) ^ *(_BYTE *)(v19 + 180)) & 2) == 0 )
      {
        if ( (dmFields & 0x80u) == 0 )
          goto LABEL_20;
        v20 = a2->dmDisplayOrientation + 4LL * *(unsigned int *)(v19 + 84);
        v21 = v12 < dword_140270D30[v20];
        v22 = v12 <= dword_140270D30[v20];
        v17 = v57;
        if ( !v21 )
          break;
      }
LABEL_32:
      v8 = a1;
      v18 = v65;
LABEL_33:
      v17 += 16LL;
      p_dmBitsPerPel = v62;
      v16 = v58;
      LOBYTE(dmFields) = v60;
      ++v59;
      v57 = v17;
      if ( v59 >= v18 )
        goto LABEL_34;
    }
    if ( !v22 )
      v7 = (_DWORD *)v19;
LABEL_20:
    dmPelsWidth = a2->dmPelsWidth;
    if ( dmPelsWidth && v7 != (_DWORD *)v19 )
    {
      v24 = *(_DWORD *)(v19 + 172);
      if ( dmPelsWidth < v24 )
        v25 = v24 - dmPelsWidth;
      else
        v25 = dmPelsWidth - v24;
      if ( v9 < v25 )
        goto LABEL_32;
      if ( v9 > v25 )
        v7 = (_DWORD *)v19;
    }
    dmPelsHeight = a2->dmPelsHeight;
    if ( dmPelsHeight )
    {
      if ( v7 == (_DWORD *)v19 )
        goto LABEL_63;
      v27 = *(_DWORD *)(v19 + 176);
      if ( dmPelsHeight < v27 )
        v28 = v27 - dmPelsHeight;
      else
        v28 = dmPelsHeight - v27;
      if ( v10 < v28 )
        goto LABEL_32;
      if ( v10 > v28 )
        goto LABEL_62;
    }
    if ( v7 != (_DWORD *)v19 )
    {
      v32 = *(_DWORD *)(v19 + 168);
      v33 = *p_dmBitsPerPel - v32;
      if ( *p_dmBitsPerPel < v32 )
        v33 = *(_DWORD *)(v19 + 168) - *p_dmBitsPerPel;
      if ( v4 < v33 )
        goto LABEL_85;
      if ( v4 <= v33 )
      {
        v34 = a2->dmDisplayFixedOutput != *(_DWORD *)(v19 + 88);
        if ( v13 < v34 )
          goto LABEL_85;
        if ( v13 <= v34 )
        {
          v35 = *(_DWORD *)(v19 + 184);
          dmDisplayFrequency = a2->dmDisplayFrequency;
          v37 = dmDisplayFrequency - v35;
          if ( dmDisplayFrequency < v35 )
            v37 = *(_DWORD *)(v19 + 184) - dmDisplayFrequency;
          if ( v11 <= v37 )
            goto LABEL_85;
        }
      }
      v16 = v58;
LABEL_62:
      v7 = (_DWORD *)v19;
    }
LABEL_63:
    if ( !v7 )
      goto LABEL_85;
    if ( !v16 )
    {
      v38 = a2->dmPelsWidth;
      if ( v7[43] > v38 )
      {
        if ( v38 )
          goto LABEL_85;
      }
      v39 = a2->dmPelsHeight;
      if ( v7[44] > v39 )
      {
        if ( v39 )
          goto LABEL_85;
      }
      if ( v7[46] > a2->dmDisplayFrequency )
        goto LABEL_85;
    }
    v63 = v7;
    v40 = a2->dmPelsWidth;
    v41 = *(_DWORD *)(v19 + 172);
    v42 = v40 - v41;
    v56 = dword_140270D30[4 * *(unsigned int *)(v19 + 84) + a2->dmDisplayOrientation];
    v43 = v41 - v40;
    v21 = v40 < v41;
    v44 = *(_DWORD *)(v19 + 176);
    v45 = a2->dmPelsHeight;
    if ( v21 )
      v42 = v43;
    v46 = a2->dmPelsHeight - v44;
    v9 = v42;
    v47 = v44 - v45;
    v21 = v45 < v44;
    v48 = *(_DWORD *)(v19 + 168);
    v49 = *p_dmBitsPerPel;
    v50 = *p_dmBitsPerPel;
    if ( v21 )
      v46 = v47;
    v51 = v50 - v48;
    v10 = v46;
    v52 = v48 - v49;
    v21 = v49 < v48;
    v53 = *(_DWORD *)(v19 + 184);
    if ( v21 )
      v51 = v52;
    v61 = *(_DWORD *)(v19 + 88);
    v54 = a2->dmDisplayFrequency;
    v55 = v54 - v53;
    v4 = v51;
    v13 = a2->dmDisplayFixedOutput != v61;
    if ( v54 < v53 )
      v55 = v53 - v54;
    v11 = v55;
    if ( v56 || v51 || v42 || v46 || a2->dmDisplayFixedOutput != v61 || v55 )
    {
      v12 = v56;
LABEL_85:
      v17 = v57;
      goto LABEL_32;
    }
LABEL_34:
    v6 = v63;
    v16 = v58;
    LOBYTE(dmFields) = v60;
    v12 = v56;
    v8 = a1;
LABEL_35:
    p_dmBitsPerPel = v62;
    v58 = ++v16;
  }
  while ( v16 < 2 );
  return (struct _devicemodeW *)v6;
}
