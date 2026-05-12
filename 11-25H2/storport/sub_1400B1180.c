/*
 * XREFs of sub_1400B1180 @ 0x1400B1180
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B8928 @ 0x1400B8928 (sub_1400B8928.c)
 */

void __fastcall sub_1400B1180(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  char *DeviceExtension; // rbx
  void *v4; // rcx
  char *i; // rdi

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( *((_DWORD *)DeviceExtension + 21) == 1 )
  {
    v4 = (void *)*((_QWORD *)DeviceExtension + 142);
    if ( v4 )
    {
      sub_1400B8928(v4);
    }
    else if ( (DeviceExtension[416] & 0x40) != 0 )
    {
      for ( i = (char *)*((_QWORD *)DeviceExtension + 161); i != DeviceExtension + 1288; i = *(char **)i )
        sub_1400B8928(i - 112);
    }
  }
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceExtension + 19));
  IoFreeWorkItem(Context);
}
