/*
 * XREFs of ?ndisOidPostLinkSpeed@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400878E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisOidPostLinkSpeed(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  _QWORD v10[2]; // [rsp+40h] [rbp-59h] BYREF
  __int128 v11; // [rsp+50h] [rbp-49h]
  __int128 v12; // [rsp+60h] [rbp-39h]
  __int128 v13; // [rsp+70h] [rbp-29h]
  __int128 v14; // [rsp+80h] [rbp-19h]
  __int128 v15; // [rsp+90h] [rbp-9h]
  __int128 v16; // [rsp+A0h] [rbp+7h]
  _DWORD v17[4]; // [rsp+B0h] [rbp+17h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+27h]
  __int64 v19; // [rsp+C8h] [rbp+2Fh]
  int v20; // [rsp+D0h] [rbp+37h]
  int v21; // [rsp+D4h] [rbp+3Bh]

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(_QWORD *)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x26u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v3,
      v1);
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_DWORD *)(v1 + 4);
    if ( (!v4 || v4 == 2) && !*((_DWORD *)a1 + 10) && *(_BYTE *)(v3 + 32) < 6u )
    {
      v5 = **(unsigned int **)(v1 + 40);
      v6 = 100 * v5;
      if ( 100 * v5 != *(_QWORD *)(v3 + 2760) )
      {
        v7 = *(_QWORD *)(v3 + 5288);
        v19 = 100 * v5;
        v18 = 100 * v5;
        *(_QWORD *)(v3 + 2272) = v6;
        *(_QWORD *)(v3 + 2280) = v6;
        v17[1] = *(_DWORD *)(v3 + 344);
        v17[2] = *(_DWORD *)(v3 + 348);
        v20 = *(_DWORD *)(v3 + 808);
        v21 = *(_DWORD *)(v3 + 468);
        v10[0] = 0LL;
        v10[1] = &ndisIntReqGeneric;
        v13 = (unsigned __int64)v17;
        v8 = *(_QWORD *)(v3 + 3760);
        v11 = 0LL;
        v17[3] = 0;
        v17[0] = 2621824;
        v12 = 0LL;
        LODWORD(v10[0]) = 7340440;
        v14 = 0LL;
        DWORD1(v11) = 1073807383;
        v15 = 0LL;
        DWORD2(v13) = -2;
        v16 = 0LL;
        (*((void (__fastcall **)(_QWORD, __int64, __int64, _QWORD *))g_MiniportHookDrivers
         + 16 * (__int64)*(int *)(v8 + 896)
         + 8))(
          *((_QWORD *)g_MiniportHookDrivers + 16 * (__int64)*(int *)(v8 + 896) + 3),
          v7,
          v3,
          v10);
      }
      if ( (*(_DWORD *)(v3 + 120) & 0x20000000) != 0 )
        v9 = *(_QWORD *)(v3 + 792);
      else
        v9 = *(_QWORD *)(v3 + 3024);
      **(_DWORD **)(v1 + 40) = v9 / 0x64;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x27u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v3,
      v1);
}
