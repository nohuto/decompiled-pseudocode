/*
 * XREFs of ?CheckTargetsForInteractionSource@CInteractionTrackerBase@@SAXPEBUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x18004DCA0
 * Callers:
 *     ?ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@@Z @ 0x18004B7D0 (-ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@.c)
 *     ?ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z @ 0x18004BE80 (-ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@44@Z @ 0x1800051B0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180026C60 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ?HasInteraction@CVisual@@QEBA_NXZ @ 0x1800A8F10 (-HasInteraction@CVisual@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTrackerBase::CheckTargetsForInteractionSource(
        const struct ExpressionReferenceInfo *a1,
        struct CResource *a2,
        struct CResource *a3)
{
  int v5; // eax
  struct CInteraction *InteractionInternal; // rax
  __int64 v7; // r8
  struct CInteraction *v8; // r11
  __int64 v9; // rcx

  if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        v5 = *(_DWORD *)a1 & 0x7FFFFFFF;
        if ( (v5 == 1 || v5 == 2 || v5 == 66 || v5 == 69)
          && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 156LL)
          && ((*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 64LL))(a3, 66LL)
           || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 64LL))(a3, 67LL)) )
        {
          (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)a2 + 8LL))(a2);
          (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)a3 + 8LL))(a3);
          *((_BYTE *)a2 + 103) |= 4u;
          if ( (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)a3 + 200LL))(a3) )
          {
            if ( CVisual::HasInteraction(a2) )
            {
              InteractionInternal = CVisual::GetInteractionInternal(a2);
              if ( InteractionInternal == v8 && (unsigned int)dword_1803DC880 > 4 )
              {
                if ( (unsigned __int8)tlgKeywordOn(&dword_1803DC880, 2LL, v7) )
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                    v9,
                    (__int64)&unk_1803B5E89);
              }
            }
          }
          (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)a3 + 16LL))(a3);
          (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)a2 + 16LL))(a2);
        }
      }
    }
  }
}
