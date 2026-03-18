/*
 * XREFs of UsbhBusRemove @ 0x140046230
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x140012A78 (UsbhDispatch_BusEvent.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

void __fastcall UsbhBusRemove(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // r9
  struct _IO_WORKITEM *v6; // rcx
  __int64 v7; // rbx
  unsigned __int16 v8; // si
  PIO_WORKITEM *v9; // rbx
  void *v10; // rcx

  v4 = FdoExt((__int64)a1);
  UsbhDispatch_BusEvent(a1, a2, 2LL, v5);
  v6 = (struct _IO_WORKITEM *)*((_QWORD *)v4 + 148);
  if ( v6 )
  {
    IoFreeWorkItem(v6);
    *((_QWORD *)v4 + 148) = 0LL;
  }
  v7 = *((_QWORD *)v4 + 382);
  if ( v7 )
  {
    v8 = 0;
    if ( *((_BYTE *)FdoExt((__int64)a1) + 2938) )
    {
      v9 = (PIO_WORKITEM *)(v7 + 2456);
      do
      {
        if ( *v9 )
        {
          IoFreeWorkItem(*v9);
          *v9 = 0LL;
        }
        v9 += 366;
        ++v8;
      }
      while ( v8 < *((unsigned __int8 *)FdoExt((__int64)a1) + 2938) );
    }
  }
  v10 = (void *)*((_QWORD *)v4 + 382);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)v4 + 382) = 0LL;
  }
}
