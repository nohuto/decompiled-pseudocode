/*
 * XREFs of ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x14015B690
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

void __fastcall Ndis::BindRules::ReEnableTemporaryUnbind(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // rbp
  unsigned __int64 i; // rbx
  __int64 v5; // rbp
  unsigned __int64 j; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD **v9; // r14
  int v10; // r8d
  bool v11; // cf
  __int64 v12; // rax
  __int64 v13; // rdi
  struct NDIS_BIND_FILTER_LINK **v14; // r14
  int v15; // r8d
  unsigned __int16 *v16; // rdx
  int v17; // edx
  char v18[8]; // [rsp+30h] [rbp-E8h]
  struct _UNICODE_STRING v19[10]; // [rsp+40h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 5);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_27:
      __fastfail(5u);
    v12 = *((_QWORD *)this + 3);
    v13 = *(_QWORD *)(v12 + 8 * i);
    v14 = (struct NDIS_BIND_FILTER_LINK **)(v12 + 8 * i);
    if ( !*(_BYTE *)(v13 + 9) && !*(_DWORD *)(v13 + 52) )
    {
      v15 = *(_DWORD *)(v13 + 32);
      *(_DWORD *)(v13 + 32) = v15 & 0xFFFFDFFF;
      if ( (v15 != 0) != ((v15 & 0xFFFFDFFF) != 0) || !*(_QWORD *)v13 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v18 = v15 & 0xFFFFDFFF;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v15,
            *(_QWORD *)v18);
        }
        *(_BYTE *)(*(_QWORD *)v13 + 5224LL) = 1;
        memset(v19, 0, sizeof(v19));
        if ( (unsigned __int8)byte_14011EAD3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(*v14, v19);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v17,
              0x1Cu,
              0xAu,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v19[0].Buffer,
              *(_QWORD *)&v19[0].Length);
        }
      }
    }
  }
  v5 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v5; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_27;
    v7 = *((_QWORD *)this + 1);
    v8 = *(_QWORD *)(v7 + 8 * j);
    v9 = (_QWORD **)(v7 + 8 * j);
    if ( !*(_BYTE *)(v8 + 9) && !*(_DWORD *)(v8 + 52) )
    {
      v10 = *(_DWORD *)(v8 + 32);
      *(_DWORD *)(v8 + 32) = v10 & 0xFFFFDFFF;
      if ( (v10 != 0) != ((v10 & 0xFFFFDFFF) != 0) || !*(_QWORD *)v8 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v18 = v10 & 0xFFFFDFFF;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v10,
            *(_QWORD *)v18);
        }
        v11 = (unsigned __int8)byte_14011EAD3 < 4u;
        *(_BYTE *)(*(_QWORD *)v8 + 5224LL) = 1;
        if ( !v11 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = *(unsigned __int16 **)((*v9)[10] + 24LL);
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v16,
            0x1Cu,
            0xBu,
            (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
            v16,
            **v9);
        }
      }
    }
  }
}
