/*
 * XREFs of ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x18010DA40
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18010C730 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18010D8B0 (-ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801E2D00 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ?empty@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEBA_NXZ @ 0x180023B3C (-empty@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18010E86C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ??R?$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z @ 0x180211A54 (--R-$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?find@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@2@AEBQEAVCBaseExpression@@@Z @ 0x180261DEC (-find@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpression@@U-$has.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationDisconnected(CBaseExpression *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // rax
  _QWORD *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rax
  _QWORD *v8; // r11
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v13; // esi
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // [rsp+30h] [rbp-49h] BYREF
  __int64 v19; // [rsp+38h] [rbp-41h] BYREF
  __int128 v20; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-19h] BYREF
  void *v23; // [rsp+70h] [rbp-9h]
  int v24; // [rsp+78h] [rbp-1h]
  int v25; // [rsp+7Ch] [rbp+3h]
  __int64 *v26; // [rsp+80h] [rbp+7h]
  __int64 v27; // [rsp+88h] [rbp+Fh]
  int *v28; // [rsp+90h] [rbp+17h]
  __int64 v29; // [rsp+98h] [rbp+1Fh]

  v1 = *((_QWORD *)this + 7);
  v2 = 0;
  if ( v1 && *(_DWORD *)(v1 + 116) && *((_DWORD *)this + 18)
    || !detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::empty((_QWORD *)this + 4) )
  {
    v15 = *(_QWORD *)(*((_QWORD *)this + 3) + 816LL);
    if ( *((int *)this + 2) > 0 )
    {
      v16 = *(unsigned int *)(v15 + 296);
      LODWORD(v20) = 8;
      *((_QWORD *)&v20 + 1) = this;
      v17 = v16 + 1;
      if ( (int)v16 + 1 < (unsigned int)v16 )
      {
        v13 = -2147024362;
        v14 = 183;
        goto LABEL_29;
      }
      if ( v17 > *(_DWORD *)(v15 + 292) )
      {
        v13 = DynArrayImpl<1>::AddMultipleAndSet(v15 + 272, 16LL, v15, &v20);
        if ( v13 < 0 )
        {
          v14 = 194;
LABEL_29:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, v14, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x21Fu, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x55Cu, 0LL);
          v2 = v13;
          goto LABEL_18;
        }
      }
      else
      {
        *(_OWORD *)(*(_QWORD *)(v15 + 272) + 16 * v16) = v20;
        *(_DWORD *)(v15 + 296) = v17;
      }
      (*(void (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 8LL))(this);
    }
    if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 4) != 0 && (qword_1803DC898 & 4) == qword_1803DC898 )
    {
      v18 = *((_DWORD *)this + 18);
      LODWORD(v19) = (*(__int64 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 144LL))(this);
      v29 = 4LL;
      v28 = &v18;
      v27 = 4LL;
      v26 = &v19;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1803DC888;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 4LL;
      UserData.Size = *(unsigned __int16 *)off_1803DC888;
      v23 = &unk_1803B585C;
      UserData.Reserved = 2;
      v24 = 71;
      v25 = 1;
      LODWORD(v20) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
  }
  if ( (*((_BYTE *)this + 217) & 1) != 0 )
  {
    v4 = *((_QWORD *)this + 3);
    *(_QWORD *)&v20 = this;
    v5 = *(_QWORD **)(v4 + 816);
    std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::find(
      v5 + 62,
      &v19,
      &v20);
    v6 = v5[63];
    if ( v19 != v6 )
    {
      v7 = std::_Conditionally_enabled_hash<CBaseExpression *,1>::operator()((unsigned __int8 *)(v19 + 16));
      v9 = v5[65];
      v10 = 2 * (v5[68] & v7);
      if ( *(_QWORD **)(v9 + 16 * (v5[68] & v7) + 8) == v8 )
      {
        if ( *(_QWORD **)(v9 + 16 * (v5[68] & v7)) == v8 )
          *(_QWORD *)(v9 + 16 * (v5[68] & v7)) = v6;
        else
          v6 = v8[1];
        *(_QWORD *)(v9 + 8 * v10 + 8) = v6;
      }
      else if ( *(_QWORD **)(v9 + 16 * (v5[68] & v7)) == v8 )
      {
        *(_QWORD *)(v9 + 16 * (v5[68] & v7)) = *v8;
      }
      v11 = *v8;
      --v5[64];
      *(_QWORD *)v8[1] = v11;
      *(_QWORD *)(v11 + 8) = v8[1];
      std::_Deallocate<16>(v8, 0x18uLL);
    }
  }
LABEL_18:
  *((_DWORD *)this + 56) = 8;
  return v2;
}
