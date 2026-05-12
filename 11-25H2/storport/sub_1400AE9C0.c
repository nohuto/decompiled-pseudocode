/*
 * XREFs of sub_1400AE9C0 @ 0x1400AE9C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400AA128 @ 0x1400AA128 (sub_1400AA128.c)
 *     sub_1400B7E68 @ 0x1400B7E68 (sub_1400B7E68.c)
 *     privateDnsDebugPrint @ 0x1400B8408 (privateDnsDebugPrint.c)
 */

void __fastcall sub_1400AE9C0(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  unsigned __int8 *DeviceExtension; // rbx
  int v4; // eax
  int v5; // ecx
  bool v6; // zf
  __int64 v7; // rax
  unsigned int v8; // r8d

  DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
  v4 = sub_1400AA128();
  v5 = *((_DWORD *)DeviceExtension + 1069);
  if ( v4 )
    v6 = ((v5 - 17) & 0xFFFFFFFD) == 0;
  else
    v6 = v5 == 17;
  if ( v6 && *((_DWORD *)DeviceExtension + 22) == 1 && *((_DWORD *)DeviceExtension + 87) == 1 )
  {
    v7 = *((_QWORD *)DeviceExtension + 620);
    if ( !v7 || !*(_DWORD *)(v7 + 16) )
    {
      if ( (unsigned int)sub_1400AA128() && *((_DWORD *)DeviceExtension + 1069) == 19 )
        privateDnsDebugPrint(DeviceExtension);
      else
        sub_1400B7E68(DeviceExtension);
      v8 = dword_14016849C + DeviceExtension[5317];
      *((_DWORD *)DeviceExtension + 1336) |= 2u;
      DeviceExtension[5317] = v8 < 0x18 ? v8 : 0;
    }
  }
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceExtension + 42));
  IoFreeWorkItem(Context);
}
