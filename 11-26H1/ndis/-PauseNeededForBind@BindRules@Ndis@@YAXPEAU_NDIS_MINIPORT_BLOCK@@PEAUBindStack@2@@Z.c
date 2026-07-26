/*
 * XREFs of ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x14015A7E0
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140159D50 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140169CA0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x14005D7A0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C2B8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C3E8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1401625B0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 */

void __fastcall Ndis::BindRules::PauseNeededForBind(
        struct _NDIS_MINIPORT_BLOCK *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct Ndis::BindStack *a3)
{
  unsigned __int64 BaseMiniport_high; // r9
  int v4; // r11d
  unsigned __int64 i; // rax
  struct NDIS_BIND_FILTER_LINK **v8; // rdi
  struct NDIS_BIND_FILTER_LINK *v9; // rcx
  unsigned int m_numElements; // r8d
  bool v11; // zf
  int v12; // ecx
  unsigned __int64 j; // rcx
  _NDIS_MINIPORT_BLOCK *NextMiniport; // rax
  __int64 v15; // rdx
  _QWORD **v16; // rdi
  int v17; // r9d
  int v18; // r8d
  __int64 v19; // r8
  int v20; // eax
  int v21; // edx
  bool v22; // cf
  unsigned __int16 *v23; // rdx
  int SpinLock_high; // edx
  int v25; // eax
  int v26; // edx
  unsigned __int16 v27; // r9
  struct _UNICODE_STRING v28[10]; // [rsp+40h] [rbp-B8h] BYREF

  BaseMiniport_high = HIDWORD(a2->BaseMiniport);
  v4 = 0;
  for ( i = 0LL; i != BaseMiniport_high; ++i )
  {
    if ( i >= BaseMiniport_high )
LABEL_52:
      __fastfail(5u);
    v8 = (struct NDIS_BIND_FILTER_LINK **)((char *)a2->MiniportAdapterContext + 8 * i);
    v9 = *v8;
    m_numElements = (*v8)->BindState.m_bindContext.m_numElements;
    if ( m_numElements || v9->BindState.m_bindSources )
    {
      v11 = !v9->BindState.PretendBindingActive;
      v12 = 0;
      if ( v11 )
        LOBYTE(v12) = m_numElements == 0;
      if ( ((*v8)->BindState.m_unbindReasons != 0) != v12 )
      {
        SpinLock_high = HIDWORD(a2->ShortRef.SpinLock);
        v25 = HIDWORD(a2->ShortRef.SpinLock) | 4;
        HIDWORD(a2->ShortRef.SpinLock) = v25;
        if ( !SpinLock_high || !*(_QWORD *)&a2->Reserved4.Length )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xFu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              SpinLock_high,
              v25);
          *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5224LL) = 1;
          memset(v28, 0, sizeof(v28));
          if ( (unsigned __int8)byte_14011EAD3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(*v8, v28);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v27 = 62;
LABEL_57:
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v26,
                0x1Cu,
                v27,
                (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                v28[0].Buffer,
                *(_QWORD *)&v28[0].Length);
            }
          }
        }
        return;
      }
    }
  }
  for ( j = 0LL; j != *((_DWORD *)&a2->Header + 1); ++j )
  {
    if ( j >= *((unsigned int *)&a2->Header + 1) )
      goto LABEL_52;
    NextMiniport = a2->NextMiniport;
    v15 = *((_QWORD *)&NextMiniport->Header.Type + j);
    v16 = (_QWORD **)((char *)NextMiniport + 8 * j);
    v17 = *(_DWORD *)(v15 + 52);
    if ( v17 || *(_DWORD *)(v15 + 28) )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(v15 + 80) + 40LL);
      if ( v19
        && *(_BYTE *)(v19 + 56) >= 6u
        && ((v20 = *(_DWORD *)(v15 + 32)) != 0 && (*(_BYTE *)(v15 + 9) || v17)
         || !this->InitMode && !v20 && !v17 && !*(_BYTE *)(v15 + 9)) )
      {
        v21 = HIDWORD(a2->ShortRef.SpinLock);
        HIDWORD(a2->ShortRef.SpinLock) = v21 | 4;
        if ( !v21 || !*(_QWORD *)&a2->Reserved4.Length )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xFu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v21,
              v21 | 4);
          v22 = (unsigned __int8)byte_14011EAD3 < 4u;
          *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5224LL) = 1;
          if ( !v22 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v23 = *(unsigned __int16 **)((*v16)[10] + 24LL);
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v23,
              0x1Cu,
              0x3Fu,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v23,
              **v16);
          }
        }
        return;
      }
    }
  }
  if ( LODWORD(a2->ShortRef.SpinLock) )
  {
    if ( Ndis::BindState::SetPause((Ndis::BindState *)&a2->32, DatapathPaused, PauseReason_Pnp) )
    {
      memset(v28, 0, sizeof(v28));
      if ( (unsigned __int8)byte_14011EAD3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v28);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = 64;
          goto LABEL_57;
        }
      }
    }
  }
  else
  {
    v18 = HIDWORD(a2->ShortRef.SpinLock);
    HIDWORD(a2->ShortRef.SpinLock) = v18 & 0xFFFFFFFB;
    LOBYTE(v4) = (v18 & 0xFFFFFFFB) != 0;
    if ( (v18 != 0) != v4 || !*(_QWORD *)&a2->Reserved4.Length )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          v18,
          v18 & 0xFFFFFFFB);
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5224LL) = 1;
      memset(v28, 0, sizeof(v28));
      if ( (unsigned __int8)byte_14011EAD3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v28);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = 65;
          goto LABEL_57;
        }
      }
    }
  }
}
