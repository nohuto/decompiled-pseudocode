/*
 * XREFs of ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x140161780
 * Callers:
 *     ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x140160D00 (-AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x140161680 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     ??$make_unique_nothrow@UNDIS_BIND_PROTOCOL_LINK@@$$V@wil@@YA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@XZ @ 0x14005F320 (--$make_unique_nothrow@UNDIS_BIND_PROTOCOL_LINK@@$$V@wil@@YA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_.c)
 *     ??0?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV01@@Z @ 0x140066320 (--0-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV.c)
 *     ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x140161830 (-reset@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1401618B0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x140161A10 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

_QWORD *__fastcall Ndis::BindStack::BuildProtocolLink(void *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  NDIS_BIND_LINK_BASE *v7; // rbx
  _QWORD *result; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = a1;
  wil::make_unique_nothrow<NDIS_BIND_PROTOCOL_LINK,>((NDIS_BIND_LINK_BASE **)&P);
  if ( P )
  {
    if ( (char *)P + 80 != (char *)a3 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset((char *)P + 80, *a3);
    wistd::unique_ptr<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>::unique_ptr<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>(
      a2,
      (__int64 *)&P);
    v7 = (NDIS_BIND_LINK_BASE *)P;
    if ( P )
    {
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref((char *)P + 80, v5, v6);
      NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v7);
      ExFreePoolWithTag(v7, 0x4C745042u);
    }
    return a2;
  }
  else
  {
    result = a2;
    *a2 = 0LL;
  }
  return result;
}
