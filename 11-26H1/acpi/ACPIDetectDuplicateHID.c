/*
 * XREFs of ACPIDetectDuplicateHID @ 0x140047354
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x140047240 (ACPIBuildProcessDevicePhaseSta.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x14001D86C (ACPIExtListEnumNext.c)
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIExtListStartEnum @ 0x140028384 (ACPIExtListStartEnum.c)
 *     WPP_RECORDER_SF_qqss @ 0x1400338F4 (WPP_RECORDER_SF_qqss.c)
 *     ACPIExtListExitEnumEarly @ 0x140055C8C (ACPIExtListExitEnumEarly.c)
 */

void __fastcall ACPIDetectDuplicateHID(char *BugCheckParameter2)
{
  __int64 v1; // rdx
  char *i; // rax
  char *v4; // rdi
  const char *v5; // rcx
  const char *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 *v9; // rax
  __int64 v10; // r9
  int v11; // r8d
  int v12; // ecx
  const char *v13; // rax
  const char *v14; // r8
  const char *v15; // rax
  const char *v16; // r8
  _QWORD v17[2]; // [rsp+58h] [rbp+17h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+68h] [rbp+27h]
  KIRQL NewIrql[16]; // [rsp+70h] [rbp+2Fh]
  __int64 v20; // [rsp+80h] [rbp+3Fh]
  int v21; // [rsp+88h] [rbp+47h]
  int v22; // [rsp+8Ch] [rbp+4Bh]

  v1 = *((_QWORD *)BugCheckParameter2 + 99);
  v22 = 0;
  *(_OWORD *)NewIrql = 0LL;
  if ( v1
    && (*((_QWORD *)BugCheckParameter2 + 1) & 0xA00000000000LL) != 0
    && (*((_QWORD *)BugCheckParameter2 + 1) & 0x2000000000003LL) == 0 )
  {
    v17[1] = 0LL;
    v17[0] = v1 + 800;
    v20 = 816LL;
    SpinLock = &AcpiDeviceTreeLock;
    v21 = 2;
    for ( i = ACPIExtListStartEnum((__int64)v17); ; i = ACPIExtListEnumNext((__int64)v17) )
    {
      v4 = i;
      if ( *(_QWORD *)&NewIrql[8] + v20 == v17[0] )
        break;
      if ( v21 == 1 )
      {
        ACPIInitReferenceDeviceExtension(*(__int64 *)&NewIrql[8]);
        KeReleaseSpinLock(SpinLock, NewIrql[0]);
      }
      if ( !v4 )
      {
        ACPIExtListExitEnumEarly(v17);
        return;
      }
      if ( v4 != BugCheckParameter2
        && (*((_QWORD *)v4 + 1) & 0xA00000000000LL) != 0
        && (*((_QWORD *)v4 + 1) & 0x2080000000003LL) == 0 )
      {
        v5 = (const char *)*((_QWORD *)v4 + 76);
        if ( v5 )
        {
          v6 = (const char *)*((_QWORD *)BugCheckParameter2 + 76);
          if ( v6 )
          {
            if ( strstr(v5, v6) )
            {
              v7 = *((_QWORD *)BugCheckParameter2 + 1);
              v8 = v7 & 0x1400000000000LL;
              if ( (*((_QWORD *)v4 + 1) & 0x1400000000000LL) != 0 )
              {
                if ( v8 )
                {
                  v9 = (unsigned __int8 *)*((_QWORD *)v4 + 77);
                  v10 = *((_QWORD *)BugCheckParameter2 + 77) - (_QWORD)v9;
                  do
                  {
                    v11 = v9[v10];
                    v12 = *v9 - v11;
                    if ( v12 )
                      break;
                    ++v9;
                  }
                  while ( v11 );
                  if ( !v12 )
                  {
                    v13 = byte_140075A82;
                    v14 = byte_140075A82;
                    if ( (v7 & 0x200000000000LL) != 0 )
                    {
                      v13 = (const char *)*((_QWORD *)BugCheckParameter2 + 76);
                      if ( (v7 & 0x400000000000LL) != 0 )
                        v14 = (const char *)*((_QWORD *)BugCheckParameter2 + 77);
                    }
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      WPP_RECORDER_SF_qqss(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        2u,
                        0x16u,
                        0xDu,
                        (__int64)&WPP_d1301130f75538ac6625be8197f7663e_Traceguids,
                        (char)v4,
                        (char)BugCheckParameter2,
                        v13,
                        v14);
                    KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 1uLL);
                  }
                }
              }
              else if ( !v8 )
              {
                v15 = byte_140075A82;
                v16 = byte_140075A82;
                if ( (v7 & 0x200000000000LL) != 0 )
                {
                  v15 = (const char *)*((_QWORD *)BugCheckParameter2 + 76);
                  if ( (v7 & 0x400000000000LL) != 0 )
                    v16 = (const char *)*((_QWORD *)BugCheckParameter2 + 77);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_qqss(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    2u,
                    0x16u,
                    0xEu,
                    (__int64)&WPP_d1301130f75538ac6625be8197f7663e_Traceguids,
                    (char)v4,
                    (char)BugCheckParameter2,
                    v15,
                    v16);
                KeBugCheckEx(0xA5u, 0xDuLL, (ULONG_PTR)BugCheckParameter2, 0x4449555FuLL, 0LL);
              }
            }
          }
        }
      }
    }
    if ( v21 )
      KeReleaseSpinLock(SpinLock, NewIrql[0]);
  }
}
