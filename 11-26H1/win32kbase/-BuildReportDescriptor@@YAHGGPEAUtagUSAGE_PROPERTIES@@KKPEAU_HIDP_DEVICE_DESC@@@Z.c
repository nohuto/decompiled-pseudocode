/*
 * XREFs of ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x140209F58
 * Callers:
 *     RIMIDE_InitializeDeviceInjection @ 0x14020A824 (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x14020A954 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x140209BAC (-BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z.c)
 *     ?CloneLogicalCollection@@YAHPEAEKPEAKK@Z @ 0x14020A60C (-CloneLogicalCollection@@YAHPEAEKPEAKK@Z.c)
 */

__int64 __fastcall BuildReportDescriptor(
        unsigned __int16 a1,
        unsigned __int16 a2,
        struct tagUSAGE_PROPERTIES *a3,
        unsigned int a4,
        unsigned int a5,
        PHIDP_DEVICE_DESC DeviceDescription)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  struct tagUSAGE_PROPERTIES *v8; // r15
  unsigned int v10; // edi
  char v11; // r14
  unsigned __int64 v12; // rcx
  unsigned int v13; // r13d
  int v14; // eax
  unsigned int v15; // r12d
  unsigned __int8 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r8
  unsigned __int8 *v20; // rbx
  unsigned int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // r12d
  struct tagUSAGE_PROPERTIES *v26; // rsi
  __int128 v27; // xmm1
  unsigned int v28; // eax
  unsigned int v29; // esi
  unsigned int v30; // r12d
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // esi
  char v34; // r14
  __int128 v35; // xmm1
  unsigned int v36; // eax
  unsigned int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned int v41; // edx
  NTSTATUS CollectionDescription; // eax
  __int64 v44; // [rsp+30h] [rbp-51h]
  unsigned int v45; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v46; // [rsp+4Ch] [rbp-35h] BYREF
  int v47; // [rsp+50h] [rbp-31h] BYREF
  _OWORD v48[2]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v49; // [rsp+78h] [rbp-9h] BYREF
  __int128 v50; // [rsp+88h] [rbp+7h]
  unsigned int v54; // [rsp+F8h] [rbp+77h]

  v6 = *(_OWORD *)a3;
  v7 = *((_OWORD *)a3 + 1);
  v8 = a3;
  v45 = 0;
  v46 = 0;
  v47 = 1;
  v10 = 0;
  v11 = 0;
  v48[0] = v6;
  v48[1] = v7;
  if ( a5 || a1 != 13 || (unsigned __int16)(a2 - 4) > 1u )
  {
    v13 = 1;
    if ( a5 )
      v13 = a5;
    v12 = 35LL * a4 * v13;
    if ( v12 > 0xFFFFFFFF )
      return 0LL;
    v14 = v13 + 13;
  }
  else
  {
    v12 = 35LL * a4;
    if ( v12 > 0xFFFFFFFF )
      return 0LL;
    v13 = 1;
    v14 = 23;
  }
  v15 = v14 + v12;
  v54 = v14 + v12;
  if ( !(v14 + (_DWORD)v12) )
    return 0LL;
  v16 = (unsigned __int8 *)Win32AllocPoolZInitImpl(256LL, v15, 0x78707355u);
  v19 = 0LL;
  v20 = v16;
  if ( v16 )
  {
    if ( v15 > 4 )
    {
      v21 = 2;
      *v16 = (a1 > 0xFFu) + 5;
      v16[1] = a1;
      if ( a1 > 0xFFu )
      {
        v21 = 3;
        v16[2] = HIBYTE(a1);
      }
      v17 = a2;
      v22 = v21;
      v23 = v21 + 1;
      v20[v22] = 9;
      v45 = v23 + 1;
      v20[v23] = a2;
    }
    v24 = a4;
    v25 = 0;
    if ( a4 )
    {
      v26 = v8;
      do
      {
        if ( *(_WORD *)v26 == 1 )
        {
          v27 = *((_OWORD *)v26 + 1);
          v49 = *(_OWORD *)v26;
          v50 = v27;
          v28 = BuildMainItem(v20, v54, &v45, (__int64)&v49, (__int64)v48, v44, &v47, &v46);
          v19 = 0LL;
          v10 = v28;
          if ( !v28 )
            goto LABEL_37;
          v11 += v46;
          v24 = a4;
        }
        ++v25;
        v26 = (struct tagUSAGE_PROPERTIES *)((char *)v26 + 32);
      }
      while ( v25 < v24 );
      if ( v10 )
      {
        v29 = v45;
        v30 = 0;
        v31 = v45 + 1;
        v20[v45] = -64;
        v45 = v31;
        if ( v13 != 1 )
        {
          do
          {
            if ( !v10 )
              break;
            v10 = CloneLogicalCollection(v20, v54, &v45, v29);
            ++v30;
            v19 = 0LL;
          }
          while ( v30 < v13 - 1 );
          v8 = a3;
        }
        v32 = a4;
        v33 = 0;
        v34 = v13 * v11;
        do
        {
          if ( !*(_WORD *)v8 )
          {
            v35 = *((_OWORD *)v8 + 1);
            v49 = *(_OWORD *)v8;
            v50 = v35;
            v36 = BuildMainItem(v20, v54, &v45, (__int64)&v49, (__int64)v48, v44, &v47, &v46);
            v19 = 0LL;
            v10 = v36;
            if ( !v36 )
              goto LABEL_37;
            v34 += v46;
            v32 = a4;
          }
          ++v33;
          v8 = (struct tagUSAGE_PROPERTIES *)((char *)v8 + 32);
        }
        while ( v33 < v32 );
        if ( v10 )
        {
          if ( (v34 & 7) != 0 )
          {
            v37 = v45;
            v20[v45] = 117;
            v20[v37 + 1] = 8 - (v34 & 7);
            v38 = v37 + 2;
            v20[v38] = -107;
            v39 = (unsigned int)(v38 + 1);
            v20[v39] = 1;
            v40 = (unsigned int)(v39 + 1);
            v20[v40] = -127;
            LODWORD(v40) = v40 + 1;
            v20[(unsigned int)v40] = 3;
            v41 = v40 + 1;
          }
          else
          {
            v41 = v45;
          }
          v20[v41] = -64;
          CollectionDescription = HidP_GetCollectionDescription(v20, v41 + 1, PagedPool, DeviceDescription);
          v17 = 0LL;
          v10 = CollectionDescription >= 0;
        }
      }
    }
LABEL_37:
    GreDeleteFastMutex((char *)v20, v17, v19, v18);
  }
  return v10;
}
