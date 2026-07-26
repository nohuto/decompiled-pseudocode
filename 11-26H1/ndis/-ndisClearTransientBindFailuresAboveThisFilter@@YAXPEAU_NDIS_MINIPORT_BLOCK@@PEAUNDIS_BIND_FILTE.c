/*
 * XREFs of ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140164010
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140157770 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140163ED0 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x14005D7A0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C2B8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisClearTransientBindFailuresAboveThisFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2)
{
  __int64 m_numElements; // r14
  bool v3; // bp
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v7; // rsi
  __int64 v8; // rbp
  unsigned __int64 j; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // rax
  NDIS_BIND_PROTOCOL_LINK *v11; // rsi
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v12; // r14
  unsigned int v13; // r8d
  NDIS_BIND_FILTER_LINK *value; // r15
  unsigned int m_unbindReasons; // r8d
  int v16; // edx
  bool v17; // cf
  unsigned __int16 *p_Length; // rdx
  char v19[8]; // [rsp+30h] [rbp-E8h]
  struct _UNICODE_STRING v20[10]; // [rsp+40h] [rbp-D8h] BYREF

  m_numElements = a1->Bindings.Filters.m_numElements;
  v3 = 0;
  for ( i = 0LL; i != m_numElements; ++i )
  {
    if ( i >= a1->Bindings.Filters.m_numElements )
LABEL_22:
      __fastfail(5u);
    v7 = &a1->Bindings.Filters._p[i];
    if ( v3 )
    {
      value = v7->__ptr_.__value_;
      m_unbindReasons = v7->__ptr_.__value_->BindState.m_unbindReasons;
      v7->__ptr_.__value_->BindState.m_unbindReasons = m_unbindReasons & 0xFFFBFFE3;
      if ( (m_unbindReasons != 0) != ((m_unbindReasons & 0xFFFBFFE3) != 0) || !value->BindState.Miniport )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v19 = m_unbindReasons & 0xFFFBFFE3;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            m_unbindReasons,
            *(_QWORD *)v19);
        }
        value->BindState.Miniport->BindEngine.m_isDirty = 1;
        memset(v20, 0, sizeof(v20));
        if ( (unsigned __int8)byte_14011EAD3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(v7->__ptr_.__value_, v20);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v16,
              0x1Cu,
              0x16u,
              (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
              v20[0].Buffer,
              *(_QWORD *)&v20[0].Length);
        }
      }
    }
    else
    {
      v3 = v7->__ptr_.__value_ == a2;
    }
  }
  v8 = a1->Bindings.Protocols.m_numElements;
  for ( j = 0LL; j != v8; ++j )
  {
    if ( j >= a1->Bindings.Protocols.m_numElements )
      goto LABEL_22;
    p = a1->Bindings.Protocols._p;
    v11 = p[j].__ptr_.__value_;
    v12 = &p[j];
    v13 = v11->BindState.m_unbindReasons;
    v11->BindState.m_unbindReasons = v13 & 0xFFFBFFE3;
    if ( (v13 != 0) != ((v13 & 0xFFFBFFE3) != 0) || !v11->BindState.Miniport )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        *(_DWORD *)v19 = v13 & 0xFFFBFFE3;
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xEu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          v13,
          *(_QWORD *)v19);
      }
      v17 = (unsigned __int8)byte_14011EAD3 < 4u;
      v11->BindState.Miniport->BindEngine.m_isDirty = 1;
      if ( !v17 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        p_Length = &v12->__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_->Length;
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)p_Length,
          0x1Cu,
          0x17u,
          (struct _GUID *)&WPP_4f475340cee13bebfed3041a3a58f669_Traceguids,
          p_Length,
          v12->__ptr_.__value_->BindState.Miniport);
      }
    }
  }
}
