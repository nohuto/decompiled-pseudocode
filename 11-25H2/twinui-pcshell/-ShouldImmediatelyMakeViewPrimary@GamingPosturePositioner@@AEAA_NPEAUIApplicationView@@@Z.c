/*
 * XREFs of ?ShouldImmediatelyMakeViewPrimary@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804E5010
 * Callers:
 *     ?HandleUwpApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804E2D00 (-HandleUwpApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804E31E0 (-HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180190B5C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?IsGamingAppView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804E39C4 (-IsGamingAppView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1804E47FC (-Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall GamingPosturePositioner::ShouldImmediatelyMakeViewPrimary(
        GamingPosturePositioner *this,
        struct IApplicationView *a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // r9
  unsigned __int8 *v5; // rdx
  __int64 v6; // rcx
  struct IApplicationView *v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 618) )
  {
    if ( !*((_QWORD *)this + 28) )
    {
      v3 = GamingPosturePositionerTraceProvider::Provider((__int64)this);
      if ( *(_DWORD *)v3 > 4u )
      {
        v5 = (unsigned __int8 *)&unk_1807DCBF3;
LABEL_9:
        v8 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
          (__int64)v3,
          v5,
          0LL,
          v4,
          (__int64)&v8);
        return 1;
      }
      return 1;
    }
    if ( !*((_BYTE *)this + 617) && GamingPosturePositioner::IsGamingAppView(this, a2) )
    {
      v3 = GamingPosturePositionerTraceProvider::Provider(v6);
      if ( *(_DWORD *)v3 > 4u )
      {
        v5 = (unsigned __int8 *)&unk_1807DCBAB;
        goto LABEL_9;
      }
      return 1;
    }
  }
  return 0;
}
