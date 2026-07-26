/*
 * XREFs of ?RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x14015A5C0
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140159D50 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140169CA0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x14005D7A0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C2B8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::RetryProtocolBindingsAfterMiniportChange(
        Ndis::BindRules *this,
        struct Ndis::BindStack *a2)
{
  __int64 v3; // rbp
  unsigned __int64 i; // rdi
  __int64 v5; // rbp
  unsigned __int64 j; // rdi
  __int64 v7; // rax
  _DWORD *v8; // rsi
  _QWORD **v9; // r14
  int v10; // r8d
  __int64 v11; // rax
  _DWORD *v12; // rsi
  struct NDIS_BIND_FILTER_LINK **v13; // r14
  int v14; // r8d
  int v15; // edx
  bool v16; // cf
  unsigned __int16 *v17; // rdx
  char v18[8]; // [rsp+30h] [rbp-E8h]
  struct _UNICODE_STRING v19[10]; // [rsp+40h] [rbp-D8h] BYREF

  if ( *((_DWORD *)this + 16) )
  {
    v3 = *((unsigned int *)this + 5);
    for ( i = 0LL; i != v3; ++i )
    {
      if ( i >= *((unsigned int *)this + 5) )
LABEL_21:
        __fastfail(5u);
      v11 = *((_QWORD *)this + 3);
      v12 = *(_DWORD **)(v11 + 8 * i);
      v13 = (struct NDIS_BIND_FILTER_LINK **)(v11 + 8 * i);
      v14 = v12[8];
      v12[8] = v14 & 0xFFFBFFE3;
      if ( (v14 != 0) != ((v14 & 0xFFFBFFE3) != 0) || !*(_QWORD *)v12 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v18 = v14 & 0xFFFBFFE3;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v14,
            *(_QWORD *)v18);
        }
        *(_BYTE *)(*(_QWORD *)v12 + 5224LL) = 1;
        memset(v19, 0, sizeof(v19));
        if ( (unsigned __int8)byte_14011EAD3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(*v13, v19);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v15,
              0x1Cu,
              0x19u,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v19[0].Buffer,
              *(_QWORD *)&v19[0].Length);
        }
      }
    }
    v5 = *((unsigned int *)this + 1);
    for ( j = 0LL; j != v5; ++j )
    {
      if ( j >= *((unsigned int *)this + 1) )
        goto LABEL_21;
      v7 = *((_QWORD *)this + 1);
      v8 = *(_DWORD **)(v7 + 8 * j);
      v9 = (_QWORD **)(v7 + 8 * j);
      v10 = v8[8];
      v8[8] = v10 & 0xFFFBFFE3;
      if ( (v10 != 0) != ((v10 & 0xFFFBFFE3) != 0) || !*(_QWORD *)v8 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v18 = v10 & 0xFFFBFFE3;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v10,
            *(_QWORD *)v18);
        }
        v16 = (unsigned __int8)byte_14011EAD3 < 4u;
        *(_BYTE *)(*(_QWORD *)v8 + 5224LL) = 1;
        if ( !v16 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = *(unsigned __int16 **)((*v9)[10] + 24LL);
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v17,
            0x1Cu,
            0x1Au,
            (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
            v17,
            **v9);
        }
      }
    }
  }
}
