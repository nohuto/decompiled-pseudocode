/*
 * XREFs of ACPIBusAndFilterIrpQueryContainerId @ 0x14004F558
 * Callers:
 *     ACPIFilterIrpQueryIdCompletion @ 0x1400B0E60 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIBusIrpQueryId @ 0x1400CBDB0 (ACPIBusIrpQueryId.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     memset @ 0x140072740 (memset.c)
 *     memcmp @ 0x140072C60 (memcmp.c)
 *     ACPIFreePhysicalDeviceLocationDescriptors @ 0x1400C0034 (ACPIFreePhysicalDeviceLocationDescriptors.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1400C1884 (ACPIProcessPhysicalDeviceLocation.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryContainerId(_QWORD *a1, __int64 *a2, __int64 a3)
{
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  _WORD *Pool2; // rax
  _WORD *v9; // rdi
  struct _UNICODE_STRING GuidString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v12[10]; // [rsp+30h] [rbp-29h] BYREF

  memset(v12, 0, 0x48uLL);
  GuidString = 0LL;
  v6 = ACPIProcessPhysicalDeviceLocation(a3, 0LL, v12);
  if ( v6 >= 0 )
  {
    if ( !memcmp(&v12[7], &GUID_NULL, 0x10uLL) )
    {
      v6 = -1073741637;
    }
    else
    {
      v6 = RtlStringFromGUID((const GUID *const)&v12[7], &GuidString);
      if ( v6 >= 0 )
      {
        v7 = GuidString.Length + 2LL;
        *a2 = v7;
        Pool2 = (_WORD *)ExAllocatePool2(256LL, v7, 1399874369LL);
        v9 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, GuidString.Buffer, GuidString.Length);
          v9[(unsigned __int64)GuidString.Length >> 1] = 0;
          *a1 = v9;
        }
        else
        {
          v6 = -1073741670;
        }
        RtlFreeUnicodeString(&GuidString);
      }
    }
    ACPIFreePhysicalDeviceLocationDescriptors(v12);
  }
  return (unsigned int)v6;
}
