/*
 * XREFs of ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1401EB4C0
 * Callers:
 *     RIMIDE_InitializeDeviceInjection @ 0x1401EBD7C (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1401EBEA8 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x1401EB11C (-BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z.c)
 *     ?CloneLogicalCollection@@YAHPEAEKPEAKK@Z @ 0x1401EBB78 (-CloneLogicalCollection@@YAHPEAEKPEAKK@Z.c)
 */

__int64 __fastcall BuildReportDescriptor(
        unsigned __int16 a1,
        __int16 a2,
        struct tagUSAGE_PROPERTIES *a3,
        unsigned int a4,
        unsigned int a5,
        PHIDP_DEVICE_DESC DeviceDescription)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  struct tagUSAGE_PROPERTIES *v8; // r15
  unsigned int v10; // edi
  unsigned int v11; // ecx
  char v12; // r14
  unsigned __int64 v13; // rcx
  int v14; // r13d
  int v15; // eax
  unsigned int v16; // r12d
  unsigned __int8 *v17; // rbx
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // r12d
  struct tagUSAGE_PROPERTIES *v23; // rsi
  __int128 v24; // xmm1
  unsigned int v25; // r12d
  unsigned int v26; // esi
  unsigned int v27; // eax
  unsigned int v28; // r15d
  unsigned int v29; // eax
  unsigned int v30; // esi
  char v31; // r14
  __int128 v32; // xmm1
  unsigned int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned int v37; // edx
  struct _HIDP_DEVICE_DESC *v38; // r9
  __int64 v40; // [rsp+30h] [rbp-51h]
  unsigned int v41; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v42; // [rsp+4Ch] [rbp-35h]
  int v43; // [rsp+50h] [rbp-31h] BYREF
  _OWORD v44[2]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v45; // [rsp+78h] [rbp-9h] BYREF
  __int128 v46; // [rsp+88h] [rbp+7h]
  unsigned __int8 v47; // [rsp+E0h] [rbp+5Fh]

  v47 = a2;
  v6 = *(_OWORD *)a3;
  v7 = *((_OWORD *)a3 + 1);
  v8 = a3;
  v41 = 0;
  v10 = 0;
  v11 = a5;
  v43 = 1;
  v12 = 0;
  a5 = 0;
  v44[0] = v6;
  v44[1] = v7;
  if ( v11 || a1 != 13 || (unsigned __int16)(a2 - 4) > 1u )
  {
    v14 = 1;
    if ( v11 )
      v14 = v11;
    v13 = 35LL * a4 * v14;
    if ( v13 > 0xFFFFFFFF )
      return 0LL;
    v15 = v14 + 13;
  }
  else
  {
    v13 = 35LL * a4;
    if ( v13 > 0xFFFFFFFF )
      return 0LL;
    v14 = 1;
    v15 = 23;
  }
  v16 = v15 + v13;
  v42 = v15 + v13;
  if ( !(v15 + (_DWORD)v13) )
    return 0LL;
  v17 = (unsigned __int8 *)Win32AllocPoolZInitImpl(256LL, v16, 0x78707355u);
  if ( v17 )
  {
    if ( v16 > 4 )
    {
      v18 = 2;
      *v17 = (a1 > 0xFFu) + 5;
      v17[1] = a1;
      if ( a1 > 0xFFu )
      {
        v18 = 3;
        v17[2] = HIBYTE(a1);
      }
      v19 = v18;
      v20 = v18 + 1;
      v17[v19] = 9;
      a5 = v20 + 1;
      v17[v20] = v47;
    }
    v21 = a4;
    v22 = 0;
    if ( a4 )
    {
      v23 = v8;
      do
      {
        if ( *(_WORD *)v23 == 1 )
        {
          v24 = *((_OWORD *)v23 + 1);
          v45 = *(_OWORD *)v23;
          v46 = v24;
          v10 = BuildMainItem(v17, v42, &a5, (__int64)&v45, (__int64)v44, v40, &v43, &v41);
          if ( !v10 )
            goto LABEL_38;
          v12 += v41;
          v21 = a4;
        }
        ++v22;
        v23 = (struct tagUSAGE_PROPERTIES *)((char *)v23 + 32);
      }
      while ( v22 < v21 );
      if ( v10 )
      {
        v25 = a5;
        v26 = 0;
        v27 = a5 + 1;
        v17[a5] = -64;
        a5 = v27;
        if ( v14 != 1 )
        {
          v28 = v42;
          do
          {
            if ( !v10 )
              break;
            v10 = CloneLogicalCollection(v17, v28, &a5, v25);
            ++v26;
          }
          while ( v26 < v14 - 1 );
          v8 = a3;
        }
        v29 = a4;
        v30 = 0;
        v31 = v14 * v12;
        do
        {
          if ( !*(_WORD *)v8 )
          {
            v32 = *((_OWORD *)v8 + 1);
            v45 = *(_OWORD *)v8;
            v46 = v32;
            v10 = BuildMainItem(v17, v42, &a5, (__int64)&v45, (__int64)v44, v40, &v43, &v41);
            if ( !v10 )
              goto LABEL_38;
            v31 += v41;
            v29 = a4;
          }
          ++v30;
          v8 = (struct tagUSAGE_PROPERTIES *)((char *)v8 + 32);
        }
        while ( v30 < v29 );
        if ( v10 )
        {
          if ( (v31 & 7) != 0 )
          {
            v33 = a5;
            v17[a5] = 117;
            v17[v33 + 1] = 8 - (v31 & 7);
            v34 = v33 + 2;
            v17[v34] = -107;
            v35 = (unsigned int)(v34 + 1);
            v17[v35] = 1;
            v36 = (unsigned int)(v35 + 1);
            v17[v36] = -127;
            LODWORD(v36) = v36 + 1;
            v17[(unsigned int)v36] = 3;
            v37 = v36 + 1;
          }
          else
          {
            v37 = a5;
          }
          v38 = DeviceDescription;
          v17[v37] = -64;
          v10 = HidP_GetCollectionDescription(v17, v37 + 1, PagedPool, v38) >= 0;
        }
      }
    }
LABEL_38:
    GreDeleteFastMutex((char *)v17);
  }
  return v10;
}
