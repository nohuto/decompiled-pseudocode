/*
 * XREFs of ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14013DC0C
 * Callers:
 *     DrvProcessDxgkDisplayCallout @ 0x14013D67C (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     DrvGetDisplayConfigBufferSizesInternal @ 0x14007D414 (DrvGetDisplayConfigBufferSizesInternal.c)
 *     DrvQueryDisplayConfigInternal @ 0x14007D4F8 (DrvQueryDisplayConfigInternal.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DrvProcessSetDisplayConfigParameters(
        struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *a1,
        unsigned int a2,
        struct tagDESKTOP *a3,
        unsigned __int8 *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int128 v5; // xmm0
  _DWORD *v6; // r12
  __int128 v7; // xmm1
  __int64 v8; // r13
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // edx
  __int64 result; // rax
  unsigned int v13; // r15d
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ecx
  unsigned int v17; // eax
  enum DISPLAYCONFIG_TOPOLOGY_ID *v18; // rax
  unsigned int v19; // r14d
  __int64 v20; // rdx
  int v21; // esi
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // esi
  unsigned int v25; // edx
  _DWORD *v26; // rcx
  unsigned int j; // edx
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // [rsp+28h] [rbp-99h]
  unsigned int v31; // [rsp+60h] [rbp-61h] BYREF
  unsigned int v32; // [rsp+64h] [rbp-5Dh]
  unsigned int v33; // [rsp+68h] [rbp-59h] BYREF
  int v34; // [rsp+6Ch] [rbp-55h] BYREF
  unsigned int v35; // [rsp+70h] [rbp-51h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v36; // [rsp+78h] [rbp-49h]
  unsigned __int8 *v37; // [rsp+80h] [rbp-41h]
  struct tagDESKTOP *v38; // [rsp+88h] [rbp-39h]
  _DWORD *v39; // [rsp+90h] [rbp-31h]
  enum DISPLAYCONFIG_TOPOLOGY_ID *i; // [rsp+98h] [rbp-29h]
  _OWORD v41[2]; // [rsp+A0h] [rbp-21h] BYREF
  __int64 v42; // [rsp+C0h] [rbp-1h]

  v5 = *(_OWORD *)((char *)a1 + 40);
  v6 = (_DWORD *)*((_QWORD *)a1 + 2);
  v7 = *(_OWORD *)((char *)a1 + 56);
  v8 = *((unsigned int *)a1 + 2);
  v9 = 0LL;
  v10 = a2;
  v11 = (*(char *)a1 >> 31) & 4;
  v37 = a4;
  v38 = a3;
  v36 = a5;
  v39 = v6;
  v35 = v11;
  v34 = -1;
  v41[0] = v5;
  v42 = *((_QWORD *)a1 + 9);
  v41[1] = v7;
  if ( (v10 & 0xF) != 0 )
  {
    if ( (v10 & 0x30) == 0 )
      return xxxUserSetDisplayConfig((unsigned int)v8, v6, (unsigned int)v10, v11, a3, 0, 0LL, 0LL, a4, a5, v41);
    WdLogSingleEntry2(2LL, v10, a3);
    WdLogGlobalForLineNumber = 16719;
    return 3221225485LL;
  }
  if ( !v6 )
  {
    WdLogSingleEntry3(1LL, v8);
    WdLogGlobalForLineNumber = 16749;
    return 3221225485LL;
  }
  v31 = 0;
  v13 = (v10 & 0x200) != 0 ? 4 : 2;
  result = DrvGetDisplayConfigBufferSizesInternal(v13, &v31);
  if ( (int)result >= 0 )
  {
    v16 = v31;
    v32 = v31;
    v17 = v31 + v8;
    v31 = v17;
    if ( v17 )
    {
      v9 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)PALLOCMEM(216 * v17, 1936876615LL, v14, v15);
      if ( !v9 )
        return 3221225495LL;
      v17 = v31;
      v16 = v32;
    }
    v33 = v17;
    v18 = (enum DISPLAYCONFIG_TOPOLOGY_ID *)((unsigned __int64)&v34 & -(__int64)((v13 & 4) != 0));
    for ( i = v18; ; v18 = i )
    {
      v19 = v16;
      v21 = DrvQueryDisplayConfigInternal(v13, &v33, v9, v18);
      if ( v21 < 0 )
        break;
      if ( v33 != v32 )
      {
        v21 = -1071774893;
        break;
      }
      v24 = 0;
      if ( (_DWORD)v8 )
      {
        v25 = v31;
        while ( v24 < v19 )
        {
          v26 = (_DWORD *)((char *)v9 + 216 * v24);
          if ( v26[4] == v6[4] && v26[5] == v6[5] )
          {
            if ( v24 < v25 - 1 )
            {
              memmove(v26, v26 + 54, 216LL * (v25 - v24 - 1));
              v25 = v31;
            }
            --v19;
          }
          else
          {
            ++v24;
          }
        }
        memmove((char *)v9 + 216 * v19, v6, 216 * v8);
      }
      if ( (v10 & 0x10) != 0 )
      {
        for ( j = 0; j < v31; *(_QWORD *)((char *)v9 + v29 + 8) = 0LL )
        {
          v28 = j++;
          v29 = 216 * v28;
          *(_QWORD *)((char *)v9 + v29) &= 0x8004700000000000uLL;
        }
      }
      LOBYTE(v30) = 0;
      v21 = xxxUserSetDisplayConfig(
              v19 + (unsigned int)v8,
              v9,
              (unsigned int)v10,
              v35,
              v38,
              v30,
              0LL,
              0LL,
              v37,
              v36,
              v41);
      if ( v21 != -1073741772 || (v10 & 0x10) == 0 )
        break;
      v6 = v39;
      v16 = v32;
      LODWORD(v10) = v10 & 0xFFFFEDCF | 0x1220;
    }
    if ( v9 )
      GreDeleteFastMutex((char *)v9, v20, v22, v23);
    return (unsigned int)v21;
  }
  return result;
}
