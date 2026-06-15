/*
 * XREFs of ??$Make@VCSharedNotificationData@CDuckingNotification@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCSharedNotificationData@CDuckingNotification@@@12@XZ @ 0x18001A8D8
 * Callers:
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x18001C1E0 (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18001A44C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001B8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<CDuckingNotification::CSharedNotificationData,>(_QWORD *a1)
{
  _QWORD *v2; // rbx

  *a1 = 0LL;
  v2 = operator new[](0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    v2[2] = 0LL;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(v2);
    *((_DWORD *)v2 + 4) = 0;
    *v2 = &CDuckingNotification::CSharedNotificationData::`vftable';
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(*a1);
    *a1 = v2;
  }
  return a1;
}
