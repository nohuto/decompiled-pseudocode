/*
 * XREFs of VidSchiCreateNativeFenceLog @ 0x1400476F8
 * Callers:
 *     VidSchCreateHwQueue @ 0x14004A8B0 (VidSchCreateHwQueue.c)
 * Callees:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140047988 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4V.c)
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x14004BE08 (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 *     ?DdiSetNativeFenceLogBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETNATIVEFENCELOGBUFFER@@@Z @ 0x14004CF04 (-DdiSetNativeFenceLogBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETNATIVEFENCELOGBUFFER@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

__int64 __fastcall VidSchiCreateNativeFenceLog(__int64 a1)
{
  __int64 v1; // rax
  VIDMM_SCH_LOG *v2; // rsi
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // edx
  int v12; // r14d
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  ADAPTER_RENDER *v17; // rcx
  ADAPTER_RENDER *v18; // rcx
  __int64 result; // rax
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  VIDMM_SCH_LOG *v21; // [rsp+50h] [rbp-B8h] BYREF
  VIDMM_SCH_LOG *v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v25[10]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v26[10]; // [rsp+C8h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v4 = *(_QWORD *)(v1 + 16);
  v5 = *(_QWORD *)(v1 + 8);
  v23 = 0LL;
  v6 = *(_QWORD *)(v4 + 24);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 8LL) + 64LL);
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 8);
  else
    v8 = 0LL;
  v9 = *(unsigned __int16 *)(v4 + 4);
  v10 = *(_QWORD *)(v6 + 696);
  if ( (unsigned int)v9 < *(_DWORD *)(v6 + 768) )
    v10 += 8 * v9;
  v12 = VIDMM_SCH_LOG::CreateSchLog(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 768LL),
          *(unsigned __int16 *)(*(_QWORD *)v10 + 6LL),
          3112LL,
          &v22,
          &v20,
          &v23,
          v8,
          1);
  if ( v12 >= 0 )
  {
    v13 = v20;
    v20 = 0LL;
    v24 = 0LL;
    *(_QWORD *)(v13 + 16) = 64LL;
    *(_DWORD *)(v13 + 8) = 1;
    v14 = *(unsigned __int16 *)(v4 + 4);
    v15 = *(_QWORD *)(v6 + 696);
    if ( (unsigned int)v14 < *(_DWORD *)(v6 + 768) )
      v15 += 8 * v14;
    v12 = VIDMM_SCH_LOG::CreateSchLog(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 768LL),
            *(unsigned __int16 *)(*(_QWORD *)v15 + 6LL),
            3112LL,
            &v21,
            &v20,
            &v24,
            v8,
            1);
    if ( v12 >= 0 )
    {
      v16 = v20;
      *(_QWORD *)(v20 + 16) = 64LL;
      *(_DWORD *)(v16 + 8) = 2;
      if ( *(_BYTE *)(v6 + 7082) )
        goto LABEL_14;
      if ( *(_BYTE *)(a1 + 146) )
        goto LABEL_14;
      memset(v25, 0, sizeof(v25));
      v17 = *(ADAPTER_RENDER **)(v6 + 8);
      v25[0] = *(_QWORD *)(a1 + 112);
      v25[3] = v23;
      LODWORD(v25[1]) = 64;
      v25[2] = v13;
      v12 = ADAPTER_RENDER::DdiSetNativeFenceLogBuffer(v17, (struct _DXGKARG_SETNATIVEFENCELOGBUFFER *)v25);
      if ( v12 >= 0 )
      {
        memset(v26, 0, sizeof(v26));
        v18 = *(ADAPTER_RENDER **)(v6 + 8);
        v26[0] = *(_QWORD *)(a1 + 112);
        v26[3] = v24;
        LODWORD(v26[1]) = 64;
        v26[2] = v16;
        v12 = ADAPTER_RENDER::DdiSetNativeFenceLogBuffer(v18, (struct _DXGKARG_SETNATIVEFENCELOGBUFFER *)v26);
        if ( v12 >= 0 )
        {
LABEL_14:
          *(_QWORD *)(a1 + 280) = v22;
          *(_QWORD *)(a1 + 304) = v21;
          result = 0LL;
          *(_QWORD *)(a1 + 288) = v13;
          *(_QWORD *)(a1 + 312) = v16;
          return result;
        }
      }
    }
    v2 = v21;
  }
  if ( v22 )
    VIDMM_SCH_LOG::`scalar deleting destructor'(v22, v11);
  if ( v2 )
    VIDMM_SCH_LOG::`scalar deleting destructor'(v2, v11);
  return (unsigned int)v12;
}
