/*
 * XREFs of ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1401390F8
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1401190B8 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
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
  unsigned int v10; // r14d
  unsigned int v11; // r13d
  unsigned int v12; // ebp
  unsigned int v13; // r12d
  DWORD *p_dmBitsPerPel; // rsi
  DWORD dmFields; // r9d
  unsigned int v16; // edi
  int v17; // r9d
  __int64 v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // r8
  __int64 v21; // rdx
  bool v22; // cf
  bool v23; // cc
  DWORD dmPelsWidth; // eax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  DWORD dmPelsHeight; // eax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // r9d
  unsigned int v36; // ecx
  DWORD dmDisplayFrequency; // edx
  unsigned int v38; // ecx
  unsigned int v39; // r9d
  DWORD v40; // eax
  DWORD v41; // eax
  unsigned int v42; // ecx
  DWORD v43; // edx
  unsigned int v44; // r9d
  unsigned int v45; // eax
  unsigned int v46; // ecx
  DWORD v47; // edx
  unsigned int v48; // edi
  unsigned int v49; // eax
  unsigned int v50; // ecx
  DWORD v51; // edx
  DWORD v52; // esi
  unsigned int v53; // esi
  unsigned int v54; // eax
  DWORD v55; // edx
  unsigned int v56; // ecx
  unsigned int v57; // r8d
  int v58; // [rsp+0h] [rbp-168h]
  __int64 v59; // [rsp+8h] [rbp-160h]
  unsigned int v60; // [rsp+10h] [rbp-158h]
  unsigned int v61; // [rsp+14h] [rbp-154h]
  int v62; // [rsp+18h] [rbp-150h]
  int v63; // [rsp+1Ch] [rbp-14Ch]
  DWORD *v64; // [rsp+28h] [rbp-140h]
  _DWORD *v65; // [rsp+30h] [rbp-138h]
  unsigned int v67; // [rsp+178h] [rbp+10h]

  v4 = -1;
  v6 = 0LL;
  v58 = -1;
  v7 = 0LL;
  v65 = 0LL;
  v8 = a1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  if ( !a2->dmDisplayFrequency )
    a2->dmDisplayFrequency = 60;
  p_dmBitsPerPel = &a2->dmBitsPerPel;
  v64 = &a2->dmBitsPerPel;
  if ( !a2->dmBitsPerPel )
    *p_dmBitsPerPel = 32;
  dmFields = a2->dmFields;
  if ( (dmFields & 0x80u) == 0 )
    a2->dmDisplayOrientation = 0;
  if ( (dmFields & 0x20000000) == 0 )
  {
    a2->dmDisplayFixedOutput = 0;
    p_dmBitsPerPel = &a2->dmBitsPerPel;
    v64 = &a2->dmBitsPerPel;
  }
  v16 = 0;
  v17 = dmFields & 0x80;
  v60 = 0;
  v62 = v17;
  do
  {
    if ( v6 && !v12 )
    {
      v31 = v6[43];
      v32 = v6[44];
      if ( v31 < v32 )
      {
        if ( v31 >= 0x1E0 && v32 >= 0x280 )
          goto LABEL_49;
      }
      else if ( v31 >= 0x280 && v32 >= 0x1E0 )
      {
LABEL_49:
        if ( v6[46] >= 0x3Cu )
          return (struct _devicemodeW *)v6;
      }
    }
    v61 = 0;
    v67 = *((_DWORD *)v8 + 47);
    if ( !v67 )
      goto LABEL_35;
    v18 = 0LL;
    v19 = *((_DWORD *)v8 + 47);
    v59 = 0LL;
    while ( 1 )
    {
      if ( a3 && *(_DWORD *)(v18 + *((_QWORD *)v8 + 24)) )
        goto LABEL_33;
      v20 = *(_QWORD *)(v18 + *((_QWORD *)v8 + 24) + 8);
      if ( !a4 || ((LOBYTE(a2->dmDisplayFlags) ^ *(_BYTE *)(v20 + 180)) & 2) == 0 )
      {
        if ( !v17 )
          goto LABEL_20;
        v21 = a2->dmDisplayOrientation + 4LL * *(unsigned int *)(v20 + 84);
        v22 = v12 < dword_140268090[v21];
        v23 = v12 <= dword_140268090[v21];
        v18 = v59;
        if ( !v22 )
          break;
      }
LABEL_32:
      v8 = a1;
      v19 = v67;
LABEL_33:
      v18 += 16LL;
      p_dmBitsPerPel = v64;
      v17 = v62;
      v16 = v60;
      ++v61;
      v59 = v18;
      if ( v61 >= v19 )
        goto LABEL_34;
    }
    if ( !v23 )
      v7 = (_DWORD *)v20;
LABEL_20:
    dmPelsWidth = a2->dmPelsWidth;
    if ( dmPelsWidth && v7 != (_DWORD *)v20 )
    {
      v25 = *(_DWORD *)(v20 + 172);
      if ( dmPelsWidth < v25 )
        v26 = v25 - dmPelsWidth;
      else
        v26 = dmPelsWidth - v25;
      if ( v9 < v26 )
        goto LABEL_32;
      if ( v9 > v26 )
        v7 = (_DWORD *)v20;
    }
    dmPelsHeight = a2->dmPelsHeight;
    if ( dmPelsHeight )
    {
      if ( v7 == (_DWORD *)v20 )
        goto LABEL_67;
      v28 = *(_DWORD *)(v20 + 176);
      if ( dmPelsHeight < v28 )
        v29 = v28 - dmPelsHeight;
      else
        v29 = dmPelsHeight - v28;
      if ( v10 < v29 )
        goto LABEL_32;
      if ( v10 > v29 )
      {
        v7 = (_DWORD *)v20;
        goto LABEL_67;
      }
    }
    if ( v7 != (_DWORD *)v20 )
    {
      v34 = *(_DWORD *)(v20 + 168);
      v35 = *p_dmBitsPerPel - v34;
      if ( *p_dmBitsPerPel < v34 )
        v35 = *(_DWORD *)(v20 + 168) - *p_dmBitsPerPel;
      if ( v4 < v35 )
        goto LABEL_89;
      if ( v4 <= v35 )
      {
        v36 = a2->dmDisplayFixedOutput != *(_DWORD *)(v20 + 88);
        if ( v13 < v36 )
          goto LABEL_89;
        if ( v13 <= v36 )
        {
          dmDisplayFrequency = a2->dmDisplayFrequency;
          v38 = *(_DWORD *)(v20 + 184);
          v39 = dmDisplayFrequency - v38;
          if ( dmDisplayFrequency < v38 )
            v39 = *(_DWORD *)(v20 + 184) - dmDisplayFrequency;
          if ( v11 <= v39 )
            goto LABEL_89;
        }
      }
      v7 = (_DWORD *)v20;
    }
    v16 = v60;
LABEL_67:
    if ( !v7 )
      goto LABEL_89;
    if ( !v16 )
    {
      v40 = a2->dmPelsWidth;
      if ( v7[43] > v40 )
      {
        if ( v40 )
          goto LABEL_89;
      }
      v41 = a2->dmPelsHeight;
      if ( v7[44] > v41 )
      {
        if ( v41 )
          goto LABEL_89;
      }
      if ( v7[46] > a2->dmDisplayFrequency )
        goto LABEL_89;
    }
    v65 = v7;
    v42 = *(_DWORD *)(v20 + 172);
    v43 = a2->dmPelsWidth;
    v44 = v43 - v42;
    v58 = dword_140268090[4 * *(unsigned int *)(v20 + 84) + a2->dmDisplayOrientation];
    v45 = v42 - v43;
    v22 = v43 < v42;
    v46 = *(_DWORD *)(v20 + 176);
    v47 = a2->dmPelsHeight;
    if ( v22 )
      v44 = v45;
    v48 = a2->dmPelsHeight - v46;
    v9 = v44;
    v49 = v46 - v47;
    v22 = v47 < v46;
    v50 = *(_DWORD *)(v20 + 168);
    v51 = *p_dmBitsPerPel;
    v52 = *p_dmBitsPerPel;
    if ( v22 )
      v48 = v49;
    v53 = v52 - v50;
    v10 = v48;
    v54 = v50 - v51;
    v22 = v51 < v50;
    v55 = a2->dmDisplayFrequency;
    if ( v22 )
      v53 = v54;
    v63 = *(_DWORD *)(v20 + 88);
    v56 = *(_DWORD *)(v20 + 184);
    v4 = v53;
    v57 = v55 - v56;
    v13 = a2->dmDisplayFixedOutput != v63;
    if ( v55 < v56 )
      v57 = v56 - v55;
    v11 = v57;
    if ( v58 || v53 || v44 || v48 || a2->dmDisplayFixedOutput != v63 || v57 )
    {
      v12 = v58;
LABEL_89:
      v18 = v59;
      goto LABEL_32;
    }
LABEL_34:
    v6 = v65;
    v17 = v62;
    v16 = v60;
    v12 = v58;
    v8 = a1;
LABEL_35:
    p_dmBitsPerPel = v64;
    v60 = ++v16;
  }
  while ( v16 < 2 );
  return (struct _devicemodeW *)v6;
}
