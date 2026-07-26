/*
 * XREFs of ?ndisOidPostMediaState@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140087B10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisOidPostMediaState(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  int v4; // eax
  int v5; // edx
  __int64 v6; // rcx
  __int128 v7; // [rsp+40h] [rbp-69h] BYREF
  __int128 v8; // [rsp+50h] [rbp-59h]
  __int128 v9; // [rsp+60h] [rbp-49h]
  __int128 v10; // [rsp+70h] [rbp-39h]
  __int128 v11; // [rsp+80h] [rbp-29h]
  __int128 v12; // [rsp+90h] [rbp-19h]
  __int128 v13; // [rsp+A0h] [rbp-9h]
  _DWORD v14[4]; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v15; // [rsp+C0h] [rbp+17h]
  __int64 v16; // [rsp+C8h] [rbp+1Fh]
  int v17; // [rsp+D0h] [rbp+27h]
  int v18; // [rsp+D4h] [rbp+2Bh]

  v1 = *((_QWORD *)a1 + 4);
  v2 = *(_QWORD *)a1;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x28u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v2,
      v1);
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_DWORD *)(v1 + 4);
    if ( (!v4 || v4 == 2) && !*((_DWORD *)a1 + 10) && *(_BYTE *)(v2 + 32) < 6u )
    {
      v5 = **(_DWORD **)(v1 + 40);
      if ( ((*(_DWORD *)(v2 + 120) & 0x20000000) != 0) != (v5 == 0) )
      {
        v14[0] = 2621824;
        v14[3] = 0;
        v14[1] = (v5 != 0) + 1;
        v16 = *(_QWORD *)(v2 + 2768);
        v15 = *(_QWORD *)(v2 + 2760);
        v14[2] = *(_DWORD *)(v2 + 348);
        v17 = *(_DWORD *)(v2 + 808);
        v18 = *(_DWORD *)(v2 + 468);
        *(_QWORD *)&v10 = v14;
        LODWORD(v7) = 7340440;
        *((_QWORD *)&v7 + 1) = v2;
        DWORD1(v8) = 1073807383;
        DWORD2(v10) = -2;
        v6 = (__int64)*(int *)(*(_QWORD *)(v2 + 3760) + 896LL) << 7;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *))((char *)g_MiniportHookDrivers + v6 + 64))(
          *(_QWORD *)((char *)g_MiniportHookDrivers + v6 + 24),
          *(_QWORD *)(v2 + 5288),
          v2,
          &v7);
      }
      **(_DWORD **)(v1 + 40) = (*(_DWORD *)(v2 + 120) & 0x20000000) == 0;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x29u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v2,
      v1);
}
