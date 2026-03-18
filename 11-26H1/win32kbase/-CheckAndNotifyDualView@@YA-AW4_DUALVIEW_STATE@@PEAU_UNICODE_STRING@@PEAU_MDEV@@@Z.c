/*
 * XREFs of ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1401580D0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     DrvGetDeviceFromName @ 0x140028550 (DrvGetDeviceFromName.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1401583D8 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x140185B40 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 */

__int64 __fastcall CheckAndNotifyDualView(const UNICODE_STRING *a1, __int64 a2)
{
  int v4; // ebx
  int v5; // r12d
  int v6; // r14d
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned int v12; // ebx
  __int64 DeviceFromName; // rax
  __int64 j; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct tagGRAPHICS_DEVICE *v17; // r15
  bool v18; // zf
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rbx
  unsigned int v23; // ebp
  unsigned __int16 v24; // dx
  __int64 v25; // rdx
  __int64 v26; // r9
  unsigned int v27; // eax
  __int64 v28; // rax
  BOOL v29; // eax
  _DWORD *v30; // rcx
  __int64 i; // rax
  int v32; // ecx
  __int64 v33; // r14
  unsigned int *v34; // rsi
  unsigned int v35[18]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v36; // [rsp+80h] [rbp+18h] BYREF
  int v37; // [rsp+88h] [rbp+20h]

  v35[0] = 0;
  v36 = 0;
  v4 = 0;
  v37 = 0;
  v5 = 0;
  v6 = 1;
  v7 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v10 = *(_QWORD *)(v7 + 1184);
  if ( !v10 )
    return 0LL;
  do
  {
    v18 = (*(_DWORD *)(v10 + 160) & 0x20800000) == 0;
    v19 = v4 + 1;
    v10 = *(_QWORD *)(v10 + 128);
    if ( v18 )
      v19 = v4;
    v4 = v19;
  }
  while ( v10 );
  if ( !v19 )
    return 0LL;
  v21 = PALLOCMEM((unsigned int)(16 * v19), 1936876615LL, v8, v9);
  if ( !v21 )
    return 3LL;
  v22 = *(_QWORD *)(v7 + 1184);
  v23 = 0;
  while ( 1 )
  {
    if ( !v22 )
    {
      if ( v6 )
      {
        for ( i = *(_QWORD *)(v7 + 1184); i; i = *(_QWORD *)(i + 128) )
        {
          v32 = *(_DWORD *)(i + 160);
          if ( (v32 & 0x2000008) == 0 )
          {
            v12 = 1;
            if ( (v32 & 0x800000) != 0 )
              *(_DWORD *)(v21 + 12) = 1;
            goto LABEL_5;
          }
        }
      }
      v12 = 1;
LABEL_5:
      if ( a1 )
      {
        DeviceFromName = DrvGetDeviceFromName(a1);
        v17 = (struct tagGRAPHICS_DEVICE *)DeviceFromName;
        if ( DeviceFromName )
        {
          for ( j = 0LL; (unsigned int)j < v23; j = (unsigned int)(j + 1) )
          {
            if ( DeviceFromName == *(_QWORD *)(v21 + 16LL * (unsigned int)j) )
            {
              if ( *(_DWORD *)(v21 + 16LL * (unsigned int)j + 8) == *(_DWORD *)(v21 + 16LL * (unsigned int)j + 12) && a2 )
                break;
              v33 = v23;
              v5 = 1;
              v34 = (unsigned int *)(v21 + 8);
              v12 = 3;
              if ( !a2 )
                goto LABEL_8;
              if ( v23 )
              {
                v12 = 1;
                do
                {
                  DrvUpdateAttachFlag(v17, *v34);
                  v34 += 4;
                  --v33;
                }
                while ( v33 );
                goto LABEL_10;
              }
              goto LABEL_13;
            }
          }
        }
      }
      else if ( v23 )
      {
        v30 = (_DWORD *)(v21 + 8);
        j = v23;
        do
        {
          if ( *v30 != v30[1] || !a2 )
            v5 = 1;
          v30 += 4;
          --j;
        }
        while ( j );
        if ( v5 )
        {
LABEL_13:
          GreDeleteFastMutex((char *)v21, j, v15, v16);
          return v12;
        }
      }
      v12 = 0;
LABEL_8:
      if ( v23 )
      {
        v12 = 1;
LABEL_10:
        if ( !v5 && !v37 )
          v12 = 2;
      }
      goto LABEL_13;
    }
    v24 = *(_DWORD *)(v7 + 1216) ? -1 : *(_WORD *)(W32GetUserSessionState(v20, j, v15) + 68744);
    if ( !(unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)v22, v24, v35, &v36) )
      break;
    v16 = v36;
    j = 0LL;
    if ( v36 )
      v6 = 0;
    if ( a2 )
    {
      v27 = *(_DWORD *)(a2 + 20);
      if ( v27 )
      {
        v20 = a2 + 40;
        v15 = v27;
        do
        {
          v28 = *(_QWORD *)v20;
          v20 += 56LL;
          if ( *(_QWORD *)(v28 + 2568) == v22 )
            j = 1LL;
          --v15;
        }
        while ( v15 );
      }
      v29 = v36 && !(_DWORD)j;
      v37 |= v29;
    }
    if ( (*(_DWORD *)(v22 + 160) & 0x2800008) == 0x800000 )
    {
      v20 = 2LL * v23;
      *(_QWORD *)(v21 + 8 * v20) = v22;
      *(_DWORD *)(v21 + 8 * v20 + 12) = v36 != 0;
      ++v23;
      *(_DWORD *)(v21 + 8 * v20 + 8) = j != 0;
    }
    v22 = *(_QWORD *)(v22 + 128);
  }
  GreDeleteFastMutex((char *)v21, v25, v15, v26);
  return 3LL;
}
