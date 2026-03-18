/*
 * XREFs of ?InvalidateAnimationSources@CDataSourceReader@@QEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180266B3C
 * Callers:
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180242E68 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800AB4E0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?GetEffectiveCompositionFrameId@CComposition@@QEBA_KXZ @ 0x18013E700 (-GetEffectiveCompositionFrameId@CComposition@@QEBA_KXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CDataSourceReader::InvalidateAnimationSources(__int64 a1, int a2)
{
  __int64 v4; // rdx
  int v5; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 EffectiveCompositionFrameId; // [rsp+38h] [rbp-31h] BYREF
  CComposition *CurrentFrameId; // [rsp+40h] [rbp-29h] BYREF
  __int64 v8; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v10; // [rsp+70h] [rbp+7h]
  __int64 v11; // [rsp+78h] [rbp+Fh]
  int *v12; // [rsp+80h] [rbp+17h]
  __int64 v13; // [rsp+88h] [rbp+1Fh]
  CComposition **p_CurrentFrameId; // [rsp+90h] [rbp+27h]
  __int64 v15; // [rsp+98h] [rbp+2Fh]
  unsigned __int64 *p_EffectiveCompositionFrameId; // [rsp+A0h] [rbp+37h]
  __int64 v17; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)dword_1803DC880 > 5 && tlgKeywordOn((__int64)&dword_1803DC880, 4LL) )
  {
    EffectiveCompositionFrameId = CComposition::GetEffectiveCompositionFrameId(g_pComposition);
    CurrentFrameId = GetCurrentFrameId();
    v13 = v4;
    p_EffectiveCompositionFrameId = &EffectiveCompositionFrameId;
    v5 = a2;
    p_CurrentFrameId = &CurrentFrameId;
    v8 = a1;
    v12 = &v5;
    v17 = 8LL;
    v10 = &v8;
    v15 = 8LL;
    v11 = 8LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803DC880, byte_1803B3A38, 0LL, 0LL, 6u, &v9);
  }
  if ( *(_QWORD *)(a1 + 48) )
    CResource::InvalidateConsumingAnimationsInternal(a1);
}
