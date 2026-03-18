/*
 * XREFs of ACPIRegDumpAcpiTables @ 0x1400DBB08
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1400DDE64 (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     ACPIMakeCachedTableCopy @ 0x140068864 (ACPIMakeCachedTableCopy.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPIRegDumpAcpiTable @ 0x1400DE28C (ACPIRegDumpAcpiTable.c)
 */

void ACPIRegDumpAcpiTables()
{
  PVOID v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rsi
  __int64 *v5; // rsi
  unsigned __int8 v6; // di
  __int64 v7; // r8
  char v8; // al
  PVOID Data; // [rsp+30h] [rbp-20h] BYREF
  size_t v10; // [rsp+38h] [rbp-18h] BYREF
  char SourceString[8]; // [rsp+40h] [rbp-10h] BYREF

  v0 = 0LL;
  Data = 0LL;
  v10 = 0LL;
  v1 = *((_QWORD *)AcpiInformation + 3);
  v2 = *((_QWORD *)AcpiInformation + 2);
  v3 = *((_QWORD *)AcpiInformation + 1);
  v4 = *(_QWORD *)AcpiInformation;
  strcpy(SourceString, "SSD0");
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      11,
      36,
      (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids);
  if ( v1 )
  {
    if ( !ACPIMakeCachedTableCopy(&Data, &v10, (char *)v1, *(_DWORD *)(v1 + 4)) )
      goto LABEL_29;
    v0 = Data;
    ACPIRegDumpAcpiTable("DSDT", Data, *((_DWORD *)Data + 1));
  }
  if ( v2 )
  {
    if ( !ACPIMakeCachedTableCopy(&Data, &v10, (char *)v2, *(_DWORD *)(v2 + 4)) )
      goto LABEL_29;
    v0 = Data;
    ACPIRegDumpAcpiTable("FACS", Data, *((_DWORD *)Data + 1));
  }
  if ( v3 )
  {
    if ( !ACPIMakeCachedTableCopy(&Data, &v10, (char *)v3, *(_DWORD *)(v3 + 4)) )
      goto LABEL_29;
    v0 = Data;
    ACPIRegDumpAcpiTable("FADT", Data, *((_DWORD *)Data + 1));
  }
  if ( !v4 )
    goto LABEL_15;
  if ( !ACPIMakeCachedTableCopy(&Data, &v10, (char *)v4, *(_DWORD *)(v4 + 4)) )
  {
LABEL_29:
    v0 = Data;
    goto LABEL_30;
  }
  v0 = Data;
  ACPIRegDumpAcpiTable("RSDT", Data, *((_DWORD *)Data + 1));
LABEL_15:
  v5 = (__int64 *)AcpiDynamicDataBlockTableList;
  v6 = 0;
  while ( v5 != &AcpiDynamicDataBlockTableList )
  {
    v7 = v5[3];
    if ( *(_DWORD *)v7 == 1413763923 )
    {
      if ( v6 )
      {
        if ( v6 >= 0xAu )
        {
          if ( v6 >= 0x23u )
            break;
          v8 = v6 + 55;
        }
        else
        {
          v8 = v6 + 48;
        }
        SourceString[3] = v8;
      }
      else
      {
        SourceString[3] = 84;
      }
      if ( !ACPIMakeCachedTableCopy(&Data, &v10, (char *)v7, *(_DWORD *)(v7 + 4)) )
        goto LABEL_29;
      v0 = Data;
      ++v6;
      ACPIRegDumpAcpiTable(SourceString, Data, *((_DWORD *)Data + 1));
    }
    v5 = (__int64 *)*v5;
  }
LABEL_30:
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
}
