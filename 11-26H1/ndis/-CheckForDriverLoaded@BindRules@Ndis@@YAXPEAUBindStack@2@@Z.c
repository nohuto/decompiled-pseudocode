/*
 * XREFs of ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x140159E20
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

void __fastcall Ndis::BindRules::CheckForDriverLoaded(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // rbp
  unsigned __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  struct NDIS_BIND_FILTER_LINK **v7; // r14
  int v8; // edx
  __int64 v9; // rdi
  unsigned __int64 j; // rbx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 **v13; // r15
  int v14; // edx
  bool v15; // cf
  __int64 v16; // rcx
  unsigned __int16 *v17; // rdx
  unsigned __int16 v18; // r9
  int v19; // edx
  int v20; // edx
  char v21[8]; // [rsp+30h] [rbp-188h]
  struct _UNICODE_STRING v22[10]; // [rsp+40h] [rbp-178h] BYREF
  struct _UNICODE_STRING v23[10]; // [rsp+E0h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 5);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_38:
      __fastfail(5u);
    v5 = *((_QWORD *)this + 3);
    v6 = *(_QWORD *)(v5 + 8 * i);
    v7 = (struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i);
    v8 = *(_DWORD *)(v6 + 32);
    if ( **(_BYTE **)(v6 + 80) )
    {
      *(_DWORD *)(v6 + 32) = v8 & 0xFFFFFFFD;
      if ( (v8 != 0) != ((v8 & 0xFFFFFFFD) != 0) || !*(_QWORD *)v6 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v21 = v8 & 0xFFFFFFFD;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v8,
            *(_QWORD *)v21);
        }
        *(_BYTE *)(*(_QWORD *)v6 + 5224LL) = 1;
        memset(v22, 0, sizeof(v22));
        if ( (unsigned __int8)byte_14011EAD3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(*v7, v22);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v19,
              0x1Cu,
              0xFu,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v22[0].Buffer,
              *(_QWORD *)&v22[0].Length);
        }
      }
    }
    else
    {
      *(_DWORD *)(v6 + 32) = v8 | 2;
      if ( !v8 || !*(_QWORD *)v6 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v21 = v8 | 2;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v8,
            *(_QWORD *)v21);
        }
        *(_BYTE *)(*(_QWORD *)v6 + 5224LL) = 1;
        memset(v23, 0, sizeof(v23));
        if ( (unsigned __int8)byte_14011EAD3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(*v7, v23);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v20,
              0x1Cu,
              0x10u,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v23[0].Buffer,
              *(_QWORD *)&v23[0].Length);
        }
      }
    }
  }
  v9 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v9; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_38;
    v11 = *((_QWORD *)this + 1);
    v12 = *(_QWORD *)(v11 + 8 * j);
    v13 = (__int64 **)(v11 + 8 * j);
    v14 = *(_DWORD *)(v12 + 32);
    if ( **(_BYTE **)(v12 + 80) )
    {
      *(_DWORD *)(v12 + 32) = v14 & 0xFFFFFFFD;
      if ( (v14 != 0) != ((v14 & 0xFFFFFFFD) != 0) || !*(_QWORD *)v12 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v21 = v14 & 0xFFFFFFFD;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v14,
            *(_QWORD *)v21);
        }
        v15 = (unsigned __int8)byte_14011EAD3 < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5224LL) = 1;
        if ( !v15 )
        {
          v16 = **v13;
          v17 = *(unsigned __int16 **)((*v13)[10] + 24);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v18 = 17;
LABEL_46:
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v17,
              0x1Cu,
              v18,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v17,
              v16);
            continue;
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(v12 + 32) = v14 | 2;
      if ( !v14 || !*(_QWORD *)v12 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v21 = v14 | 2;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v14,
            *(_QWORD *)v21);
        }
        v15 = (unsigned __int8)byte_14011EAD3 < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5224LL) = 1;
        if ( !v15 )
        {
          v16 = **v13;
          v17 = *(unsigned __int16 **)((*v13)[10] + 24);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v18 = 18;
            goto LABEL_46;
          }
        }
      }
    }
  }
}
