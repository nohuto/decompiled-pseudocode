/*
 * XREFs of IopDeviceObjectFromSymbolicName @ 0x140A9BD2C
 * Callers:
 *     IopGetSessionIdFromSymbolicName @ 0x140A9BCD0 (IopGetSessionIdFromSymbolicName.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x140A18820 (PnpUnicodeStringToWstrFree.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall IopDeviceObjectFromSymbolicName(unsigned __int16 *a1)
{
  _QWORD *v1; // rdi
  _WORD *v3; // rsi
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  _WORD *Pool2; // rax
  __int64 v7; // rax
  WCHAR *v8; // rbp
  int ObjectProperty; // ebx
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-28h] BYREF
  ULONG v12; // [rsp+90h] [rbp+8h] BYREF
  int v13; // [rsp+98h] [rbp+10h] BYREF

  v1 = 0LL;
  v13 = 0;
  DestinationString = 0LL;
  if ( a1 )
  {
    v3 = (_WORD *)*((_QWORD *)a1 + 1);
    if ( v3 )
    {
      v4 = *a1;
      if ( (_WORD)v4 )
      {
        v5 = a1[1];
        if ( (unsigned __int16)v5 < 2u )
        {
          v3 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)v4 > (unsigned __int16)v5 )
            return v1;
          if ( *v3
            && ((_WORD)v4 != (_WORD)v5 || v3[((unsigned __int64)(unsigned int)v4 >> 1) - 1])
            && (v4 > v5 - 2 || v3[(v4 >> 1) - 1] && v3[v4 >> 1]) )
          {
            Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
            v3 = Pool2;
            if ( !Pool2 )
              return v1;
            memmove(Pool2, *((const void **)a1 + 1), *a1);
            v3[(unsigned __int64)*a1 >> 1] = 0;
          }
        }
        v12 = 400;
        v7 = ExAllocatePool2(0x100uLL);
        v8 = (WCHAR *)v7;
        if ( v7 )
        {
          ObjectProperty = PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             (__int64)v3,
                             3,
                             0LL,
                             0LL,
                             (__int64)&DEVPKEY_Device_InstanceId,
                             &v13,
                             v7,
                             v12,
                             (__int64)&v12,
                             0);
          PnpUnicodeStringToWstrFree(v3, (__int64)a1);
          if ( ObjectProperty >= 0 && v13 == 18 && RtlInitUnicodeStringEx(&DestinationString, v8) >= 0 )
            v1 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
          ExFreePoolWithTag(v8, 0x47706E50u);
        }
      }
    }
  }
  return v1;
}
