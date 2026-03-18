/*
 * XREFs of ?IsPositionAnimationCleanReady@CInteractionTracker2@@AEAA_NXZ @ 0x180274220
 * Callers:
 *     ?IsCleanReady@CInteractionTracker2@@AEAA_NI@Z @ 0x180274020 (-IsCleanReady@CInteractionTracker2@@AEAA_NI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1801DBC10 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

char __fastcall CInteractionTracker2::IsPositionAnimationCleanReady(
        CInteractionTracker2 *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // si
  __int64 v6; // rcx
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v10; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  CInteractionTracker2 *v13; // [rsp+78h] [rbp+20h] BYREF

  v5 = 1;
  if ( (*((_BYTE *)this + 831) & 2) != 0 )
  {
    v6 = *((_QWORD *)this + 120);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 208);
      v5 = 0;
      if ( (unsigned int)dword_1803DC880 > 5 )
      {
        v10 = *((_DWORD *)this + 70);
        v12 = v6;
        v11 = v7;
        v13 = this;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1803DC880,
          byte_1803B42FD,
          a3,
          a4,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v10);
      }
      if ( v7 == *((_DWORD *)this + 70) )
        v5 = 1;
      else
        *(_QWORD *)(*((_QWORD *)this + 120) + 200LL) = this;
      if ( v7 != *((_DWORD *)this + 70) && v7 >= *((_DWORD *)this + 70) )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x1A37,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker2.cpp",
          (const char *)0x8007029CLL);
    }
  }
  return v5;
}
