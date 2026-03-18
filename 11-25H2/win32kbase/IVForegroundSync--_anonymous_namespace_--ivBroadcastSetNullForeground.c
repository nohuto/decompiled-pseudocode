/*
 * XREFs of IVForegroundSync::_anonymous_namespace_::ivBroadcastSetNullForeground @ 0x14021B8E0
 * Callers:
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x14021BBEC (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 * Callees:
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x14019B67C (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x14019C368 (--1CIVSerializer@@UEAA@XZ.c)
 *     ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x14021AFF0 (-ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall IVForegroundSync::_anonymous_namespace_::ivBroadcastSetNullForeground(
        int a1,
        const struct CONTAINER_ID *a2)
{
  __int64 v4; // r8
  const struct CONTAINER_ID *v5; // r8
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = 0;
  CIVSerializer::CIVSerializer((__int64)v6, 10);
  v4 = v7;
  v6[0] = &CIVGenericSerializer::`vftable';
  if ( v7 )
  {
    *(_QWORD *)(v7 + 12) = 0xFFFF8300FFFF8300uLL;
    *(_QWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = a1;
    v5 = (const struct CONTAINER_ID *)&v8;
    if ( a2 )
      v5 = a2;
    ivrIVBroadcast((const struct CIVSerializer *)v6, 3LL, v5);
  }
  v6[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v6);
}
