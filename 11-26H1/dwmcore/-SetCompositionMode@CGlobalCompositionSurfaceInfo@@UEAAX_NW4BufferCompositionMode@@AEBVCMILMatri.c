/*
 * XREFs of ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801601D0
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?AddCompSurfInfoUpdate@CComposition@@QEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1801604C0 (-AddCompSurfInfoUpdate@CComposition@@QEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x180217A4C (-SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::SetCompositionMode(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 *a6)
{
  CGlobalCompositionSurfaceInfo::CBindInfo *v6; // rbx
  CComposition *v7; // rcx
  __int64 v8; // rdi
  unsigned int v10; // r14d
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  CComposition *v15; // rcx
  struct CCompositionSurfaceInfo *v16; // rdx
  struct CCompositionSurfaceInfo *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  __int128 v31; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 *v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int64 *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  int *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  int *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  int *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  __int64 *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  __int64 *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  int *v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  __int128 *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]

  v6 = (CGlobalCompositionSurfaceInfo::CBindInfo *)(a1 + 112);
  v7 = g_pComposition;
  v8 = 0LL;
  v10 = a3;
  if ( !(_DWORD)a3 )
  {
    v12 = 0LL;
    if ( g_pComposition )
      v12 = *((_QWORD *)g_pComposition + 110);
    *((_QWORD *)v6 + 20) = v12;
    if ( *((_BYTE *)v6 + 180) && !*((_BYTE *)v6 + 181) && *((int *)v6 + 44) >= 2 )
    {
      CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipNotify(v6, 1);
      v7 = g_pComposition;
    }
    if ( a2 )
    {
      if ( a6 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v16 = *(struct CCompositionSurfaceInfo **)v6;
          v31 = 0LL;
          if ( *((_DWORD *)v16 + 14) > *((_DWORD *)v16 + 12) && *((_DWORD *)v16 + 15) > *((_DWORD *)v16 + 13) )
          {
            v31 = *((_OWORD *)v16 + 3);
            *((_QWORD *)v16 + 7) = 0LL;
            *((_QWORD *)v16 + 6) = 0LL;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            {
              v17 = *(struct CCompositionSurfaceInfo **)v6;
              v34 = 8LL;
              v36 = 8LL;
              v38 = 4LL;
              v26 = *((_DWORD *)v17 + 39);
              v30 = *((_QWORD *)v17 + 17);
              v18 = *((_QWORD *)v17 + 5);
              v19 = a6[1];
              v29 = v18;
              v25 = *((_DWORD *)a6 + 6);
              v24 = *((_DWORD *)a6 + 5);
              v23 = *((_DWORD *)a6 + 4);
              v20 = (__int64)SHIDWORD(v19) << 32;
              v21 = (unsigned int)v19;
              v22 = *a6;
              v28 = v21 | v20;
              v40 = 4LL;
              v27 = (unsigned int)v22 | (unsigned __int64)((__int64)SHIDWORD(v22) << 32);
              v33 = &v27;
              v42 = 4LL;
              v35 = &v28;
              v37 = &v23;
              v39 = &v24;
              v41 = &v25;
              v43 = &v29;
              v45 = &v30;
              v47 = &v26;
              v49 = &v31;
              v44 = 8LL;
              v46 = 8LL;
              v48 = 4LL;
              v50 = 16LL;
              McGenEventWrite_EventWriteTransfer(
                &Microsoft_Windows_Dwm_Core_Provider_Context,
                &Dx_Flip_Consumed,
                a3,
                0xAu,
                &v32);
              v7 = g_pComposition;
            }
          }
        }
      }
    }
  }
  if ( v7 )
    v8 = *((_QWORD *)v7 + 110);
  v13 = v8 - *((_QWORD *)v6 + 20);
  if ( *((_BYTE *)v6 + 180) && *((_BYTE *)v6 + 181) && v13 > 0xF )
    CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipNotify(v6, 0);
  v14 = *((_QWORD *)v6 + 2);
  if ( v14 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, bool, __int64, int, __int64 *))(*(_QWORD *)v14 + 24LL))(
           v14,
           a2,
           v10,
           v13 <= 0xF,
           a4,
           a5,
           a6) )
    {
      CComposition::AddCompSurfInfoUpdate(v15, *(struct CCompositionSurfaceInfo **)v6);
    }
  }
}
