/*
 * XREFs of ?DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z @ 0x14006970C
 * Callers:
 *     ?DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z @ 0x14009FA24 (-DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_HEADER@@@Z @ 0x140069BA4 (-DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_.c)
 *     ?AddVideoModesWithStereoCode@@YAXW4__WMI_MONITOR_VIDEO_MODE_STEREO_TYPE@@_NGPEAU_VideoModeDescriptor@@AEAG2@Z @ 0x14009F6F0 (-AddVideoModesWithStereoCode@@YAXW4__WMI_MONITOR_VIDEO_MODE_STEREO_TYPE@@_NGPEAU_VideoModeDescri.c)
 *     ?DisplayID_GetVideoModeFromType7Desc@@YAJAEBU_DISPLAYID_DETAILED_TIMING_DESCRIPTOR@@AEAU_VideoModeDescriptor@@@Z @ 0x14009FB14 (-DisplayID_GetVideoModeFromType7Desc@@YAJAEBU_DISPLAYID_DETAILED_TIMING_DESCRIPTOR@@AEAU_VideoMo.c)
 *     ?IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ @ 0x14009FDBC (-IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DisplayID_GetVideoModeDescriptors(
        const struct DisplayIDObj *a1,
        unsigned __int16 *a2,
        struct _VideoModeDescriptor *a3,
        unsigned __int16 *a4,
        unsigned __int16 a5)
{
  unsigned __int16 *v5; // r13
  __int64 result; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // r9d
  int v13; // r10d
  unsigned int v14; // r12d
  int Block; // esi
  bool v16; // si
  unsigned __int64 v17; // rax
  unsigned int v18; // ebx
  char v19; // al
  unsigned __int16 v20; // di
  __int64 v21; // rdx
  int v22; // r8d
  __int16 v23; // r10
  unsigned int v24; // r12d
  _BYTE *v25; // r15
  char v26; // al
  unsigned __int64 v27; // rcx
  int v28; // r9d
  unsigned int v29; // r11d
  unsigned __int8 v30; // r8
  unsigned __int8 v31; // r13
  __int64 v32; // rax
  const struct _DISPLAYID_DETAILED_TIMING_DESCRIPTOR *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned __int8 v36; // al
  unsigned __int16 i; // dx
  USHORT v38; // dx
  USHORT *p_HorizontalImageSize; // rax
  __int64 v40; // rcx
  unsigned __int16 v41; // [rsp+38h] [rbp-91h] BYREF
  int v42; // [rsp+3Ch] [rbp-8Dh]
  __int64 v43; // [rsp+40h] [rbp-89h]
  _BYTE *v44; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v45; // [rsp+50h] [rbp-79h]
  unsigned int v46; // [rsp+54h] [rbp-75h]
  void *v47; // [rsp+58h] [rbp-71h]
  __int64 v48; // [rsp+60h] [rbp-69h]
  struct _VideoModeDescriptor *v49; // [rsp+68h] [rbp-61h]
  unsigned __int64 v50; // [rsp+70h] [rbp-59h]
  __int64 v51; // [rsp+78h] [rbp-51h]
  _BYTE *v52; // [rsp+80h] [rbp-49h] BYREF
  char v53; // [rsp+88h] [rbp-41h]
  _BYTE *v56; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned __int16 *v57; // [rsp+140h] [rbp+77h]

  v57 = a4;
  v5 = a4;
  if ( !a3 )
    return 3221225485LL;
  v43 = *a2;
  memset(a3, 0, 56 * v43);
  *v5 = -1;
  if ( !a1 )
    return 3221225485LL;
  v56 = 0LL;
  result = DisplayID_GetBlock(a1, 33LL, &v56);
  if ( (int)result < 0 )
    return result;
  if ( *v56 != 33 || v56[2] != 29 )
    return 3221225485LL;
  v9 = (unsigned __int8)v56[4];
  v10 = (unsigned __int8)v56[6];
  v11 = (unsigned __int8)v56[3];
  v12 = (unsigned __int8)v56[5] + 1;
  v13 = (((char)v56[1] >> 31) & 0x384) + 100;
  v44 = 0LL;
  v14 = v13 * ((v9 << 8) + v11 + 1) / 0x3E8u;
  v46 = v13 * ((v10 << 8) + v12) / 0x3E8u;
  v45 = v14;
  Block = DisplayID_GetBlock(a1, 39LL, &v44);
  LOBYTE(v56) = 0;
  v16 = Block >= 0;
  v47 = 0LL;
  if ( !a5 )
    goto LABEL_11;
  v17 = 56LL * a5;
  if ( !is_mul_ok(a5, 0x38uLL) )
    v17 = -1LL;
  v47 = (void *)operator new[](v17, 0x32444944u, 256LL);
  if ( !v47 )
    return 3221225495LL;
LABEL_11:
  v18 = 0;
  if ( v16 )
  {
    if ( *v44 == 39 && (unsigned __int8)(v44[2] - 3) <= 0xF5u && v44[3] > 1u )
    {
      v19 = v44[1];
      if ( (v19 & 7) != 0 )
      {
        if ( (v19 & 0x40) != 0 )
        {
          v16 = 0;
        }
        else if ( v19 < 0 )
        {
          LOBYTE(v56) = 1;
        }
      }
      else
      {
        LOBYTE(v56) = (unsigned __int8)v19 >> 7;
      }
      v18 = 5;
      if ( v44[4] )
      {
        if ( v44[4] == 1 )
        {
          v18 = 6;
        }
        else if ( v44[4] == 3 )
        {
          v18 = (v44[5] != 0) + 3;
        }
      }
      else
      {
        v18 = (v44[5] != 0) + 1;
      }
    }
    else
    {
      v16 = 0;
    }
  }
  v20 = 0;
  v21 = *(_QWORD *)a1;
  v22 = 0;
  v48 = *(_QWORD *)a1;
  v41 = 0;
  v42 = 0;
  if ( *((int *)a1 + 5) > 0 )
  {
    v23 = v43;
    do
    {
      v24 = *(unsigned __int8 *)(v21 + 1);
      v25 = (_BYTE *)((v21 + 4) & -(__int64)(*(_BYTE *)(v21 + 1) != 0));
      if ( v24 >= 3 )
      {
        do
        {
          v26 = *v25;
          if ( !*v25 )
            break;
          v27 = (unsigned __int8)v25[2];
          v28 = v27 + 3;
          LODWORD(v44) = v27 + 3;
          v29 = v27 + 3;
          v51 = (unsigned int)(v27 + 3);
          if ( (int)v24 < (int)v27 + 3 )
            break;
          if ( v26 == 34 )
          {
            v52 = v25;
            v50 = v27 / 0x14;
            v53 = v27 / 0x14;
            if ( DisplayID_Type7Timing_Parser::IsValidBlock((DisplayID_Type7Timing_Parser *)&v52) )
            {
              v31 = 0;
              if ( v30 )
              {
                while ( 1 )
                {
                  v32 = v43;
                  if ( !(_WORD)v43 )
                    break;
                  LOWORD(v32) = v43 - 1;
                  v43 = v32;
                  v49 = &a3[v20];
                  if ( v31 >= v30 )
                    v33 = 0LL;
                  else
                    v33 = (const struct _DISPLAYID_DETAILED_TIMING_DESCRIPTOR *)&v25[20 * v31 + 3];
                  if ( (int)DisplayID_GetVideoModeFromType7Desc(v33, &a3[v20]) >= 0 )
                  {
                    if ( v16 )
                    {
                      LOBYTE(v34) = (_BYTE)v56;
                      AddVideoModesWithStereoCode(v18, v34, v35, v47, &v41, a3);
                      v20 = v41;
                    }
                    else
                    {
                      v49->StereoModeType = 0;
                      v41 = ++v20;
                    }
                  }
                  v30 = v50;
                  if ( ++v31 >= (unsigned __int8)v50 )
                  {
                    v28 = (int)v44;
                    v23 = v43;
                    v29 = v51;
                    goto LABEL_46;
                  }
                }
                v23 = 0;
                break;
              }
LABEL_46:
              if ( !v23 )
                break;
            }
          }
          v24 -= v28;
          v25 += v29;
        }
        while ( v24 >= 3 );
        v21 = v48;
        v5 = v57;
        v22 = v42;
      }
      if ( !v22 && v20 )
        *v5 = 0;
      if ( !v23 )
        break;
      ++v22;
      v36 = *(_BYTE *)(v21 + 1) + 5;
      v42 = v22;
      v21 += v36;
      v48 = v21;
    }
    while ( v22 < *((_DWORD *)a1 + 5) );
    LOWORD(v14) = v45;
  }
  *a2 = v20;
  if ( v47 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v47);
  if ( !v20 )
    return 3221225659LL;
  if ( *v5 == 0xFFFF )
  {
    *v5 = 0;
    for ( i = 0; i < v20; ++i )
    {
      if ( (unsigned __int16)_mm_extract_epi16(*(__m128i *)&a3[i].HorizontalSyncPulseWidth, 2) )
      {
        *v5 = i;
        break;
      }
    }
  }
  v38 = v46;
  p_HorizontalImageSize = &a3->HorizontalImageSize;
  v40 = v20;
  do
  {
    *((_BYTE *)p_HorizontalImageSize + 17) = 2;
    *p_HorizontalImageSize = v14;
    p_HorizontalImageSize[1] = v38;
    p_HorizontalImageSize += 28;
    --v40;
  }
  while ( v40 );
  return 0LL;
}
