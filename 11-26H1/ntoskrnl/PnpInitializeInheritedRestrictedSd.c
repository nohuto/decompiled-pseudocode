/*
 * XREFs of PnpInitializeInheritedRestrictedSd @ 0x140B09F00
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     RtlValidSecurityDescriptor @ 0x1409029C0 (RtlValidSecurityDescriptor.c)
 *     PnpGetObjectProperty @ 0x14095E340 (PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpInitializeInheritedRestrictedSd(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r8
  __int64 v7; // r8
  int ObjectProperty; // eax
  PSECURITY_DESCRIPTOR v9; // rbx
  ULONG v10; // edi
  int v11; // esi
  __int64 v12; // rcx
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+60h] [rbp-38h] BYREF
  ULONG v14; // [rsp+A0h] [rbp+8h] BYREF
  int v15; // [rsp+B8h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v15 = 0;
  v7 = *(_QWORD *)(v4 + 48);
  v14 = 0;
  SecurityDescriptor = 0LL;
  ObjectProperty = PnpGetObjectProperty(
                     0x75737050u,
                     0x200u,
                     v7,
                     1,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_EffectiveRestrictedSD,
                     &v15,
                     &SecurityDescriptor,
                     &v14,
                     0);
  if ( ObjectProperty == -1073741275 && a3 )
  {
    v9 = SecurityDescriptor;
  }
  else
  {
    v10 = v14;
    v11 = 19;
    v9 = SecurityDescriptor;
    if ( ObjectProperty < 0 || v15 != 19 || v14 < 0x28 || !RtlValidSecurityDescriptor(SecurityDescriptor) )
    {
      if ( v9 )
        ExFreePoolWithTag(v9, 0x75737050u);
      v9 = 0LL;
    }
    if ( v9 )
    {
      v12 = (__int64)v9;
    }
    else
    {
      v10 = 0;
      v12 = 0LL;
      v11 = 0;
    }
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      a2,
      0LL,
      (__int64)&DEVPKEY_Device_InheritedRestrictedSD,
      v11,
      v12,
      v10,
      a3 != 0 ? 0x20000 : 0);
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x75737050u);
}
