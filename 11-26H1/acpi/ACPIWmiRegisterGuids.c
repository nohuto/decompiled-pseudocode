/*
 * XREFs of ACPIWmiRegisterGuids @ 0x14006BBAC
 * Callers:
 *     ACPIDispatchWmiLog @ 0x14006BA80 (ACPIDispatchWmiLog.c)
 * Callees:
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall ACPIWmiRegisterGuids(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v6; // rcx

  *a3 = 0;
  if ( a2 >= 0xCA )
  {
    memset(a1, 0, 0xCAuLL);
    a1[3] = 170;
    *a1 = 202;
    a1[4] = 1;
    a1[2] = 56;
    a1[6] = -625992371;
    a1[7] = 1199385928;
    a1[8] = -1378171983;
    a1[9] = 1810949644;
    a1[10] |= 0x81000u;
    a1[11] = 0;
    *((_QWORD *)a1 + 6) = 0LL;
    *((_WORD *)a1 + 28) = 112;
    *(_OWORD *)((char *)a1 + 58) = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI";
    *(_OWORD *)((char *)a1 + 74) = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Services\\ACPI";
    *(_OWORD *)((char *)a1 + 90) = *(_OWORD *)L"e\\System\\CurrentControlSet\\Services\\ACPI";
    *(_OWORD *)((char *)a1 + 106) = *(_OWORD *)L"\\CurrentControlSet\\Services\\ACPI";
    *(_OWORD *)((char *)a1 + 122) = *(_OWORD *)L"ControlSet\\Services\\ACPI";
    *(_OWORD *)((char *)a1 + 138) = *(_OWORD *)L"et\\Services\\ACPI";
    *(_OWORD *)((char *)a1 + 154) = *(_OWORD *)L"ces\\ACPI";
    v6 = (unsigned int)a1[3];
    *(_WORD *)((char *)a1 + v6) = 30;
    *(_OWORD *)((char *)a1 + v6 + 2) = *(_OWORD *)L"ACPIMOFResource";
    *(_QWORD *)((char *)a1 + v6 + 18) = *(_QWORD *)L"esource";
    *(_DWORD *)((char *)a1 + v6 + 26) = *(_DWORD *)L"rce";
    *(_WORD *)((char *)a1 + v6 + 30) = aAcpimofresourc[14];
    *a3 = 202;
  }
  else
  {
    if ( a2 < 4 )
      return 3221225507LL;
    *a1 = 202;
    *a3 = 4;
  }
  return 0LL;
}
