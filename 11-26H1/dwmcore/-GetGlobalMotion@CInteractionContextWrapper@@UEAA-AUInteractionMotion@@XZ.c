/*
 * XREFs of ?GetGlobalMotion@CInteractionContextWrapper@@UEAA?AUInteractionMotion@@XZ @ 0x1801BB940
 * Callers:
 *     <none>
 * Callees:
 *     ?UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@K_NPEAU2@@Z @ 0x1800369B8 (-UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@K_NPEAU2@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18011652C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall CInteractionContextWrapper::GetGlobalMotion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+68h] [rbp+10h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a1 + 84) )
  {
    LOBYTE(a4) = *(_BYTE *)(a1 + 320);
    CInteractionContextTransformHelper::UnTransformOutput(
      (CInteractionContextTransformHelper *)(a1 + 328),
      (const struct InteractionOutput *)(a1 + 24),
      *(unsigned int *)(a1 + 216),
      a4,
      (struct InteractionOutput *)(a1 + 88));
    *(_BYTE *)(a1 + 84) = 0;
    if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
    {
      v11 = *(_DWORD *)(a1 + 104);
      v12 = *(_DWORD *)(a1 + 100);
      v13 = *(_DWORD *)(a1 + 96);
      v14 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        byte_1803B6933,
        v9,
        v10,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11);
    }
  }
  v6 = *(_DWORD *)(a1 + 104);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a2 + 8) = v6;
  return a2;
}
