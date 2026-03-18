/*
 * XREFs of ACPIBusIrpQueryBusInformationEIO @ 0x1400ADAE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBusIrpQueryBusInformationEIO(__int64 a1, IRP *a2)
{
  __int64 v4; // rbx
  __int64 Pool2; // rax
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rax
  const char *v8; // rcx
  const char *v9; // r8
  __int64 v10; // rdx

  LODWORD(v4) = 0;
  Pool2 = ExAllocatePool2(256LL, 24LL, 1299211073LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 1LL;
    *(GUID *)Pool2 = GUID_BUS_TYPE_ISAPNP;
  }
  else
  {
    v7 = *(_QWORD **)(a1 + 64);
    v8 = byte_140075A82;
    v9 = byte_140075A82;
    if ( v7 )
    {
      v10 = v7[1];
      v4 = *(_QWORD *)(a1 + 64);
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v8 = (const char *)v7[76];
        if ( (v10 & 0x400000000000LL) != 0 )
          v9 = (const char *)v7[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x20u,
        (__int64)&WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
        24,
        v4,
        v8,
        v9);
    LODWORD(v4) = -1073741670;
  }
  a2->IoStatus.Status = v4;
  a2->IoStatus.Information = v6;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v4;
}
