/*
 * XREFs of ExpGetDeviceDataInformation @ 0x140B2C1AC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     ExpStringCapture @ 0x140779C94 (ExpStringCapture.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     KseQueryDeviceData @ 0x1409E5A00 (KseQueryDeviceData.c)
 *     ExpStringFree @ 0x140B2C38C (ExpStringFree.c)
 *     KseQueryDeviceDataList @ 0x140B2C3B0 (KseQueryDeviceDataList.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetDeviceDataInformation(int a1, _DWORD *a2, int a3)
{
  void *v5; // rdi
  int v6; // ebx
  void *Pool2; // rax
  int DeviceData; // eax
  int v10[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v11; // [rsp+48h] [rbp-50h] BYREF
  __int128 v12; // [rsp+58h] [rbp-40h] BYREF
  int v13[12]; // [rsp+68h] [rbp-30h] BYREF
  PCWSTR SourceString; // [rsp+B8h] [rbp+20h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  *(_OWORD *)v13 = 0LL;
  SourceString = 0LL;
  *(_QWORD *)v10 = 0LL;
  v5 = 0LL;
  if ( !a2 || a3 != 48 )
    return 3221225476LL;
  if ( ((unsigned __int8)a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  RtlCopyFromUser(&v11, a2, 0x30uLL);
  v6 = ExpStringCapture(&SourceString, (unsigned __int16 *)&v11);
  if ( v6 >= 0 )
  {
    if ( a1 != 136 || (v6 = ExpStringCapture(v10, (unsigned __int16 *)&v12), v6 >= 0) )
    {
      if ( v13[1] )
      {
        if ( !*(_QWORD *)&v13[2] )
        {
          v6 = -1073741811;
          goto LABEL_8;
        }
        ProbeForWrite(*(volatile void **)&v13[2], (unsigned int)v13[1], 2u);
      }
      Pool2 = (void *)ExAllocatePool2(0x101uLL);
      v5 = Pool2;
      if ( Pool2 )
      {
        if ( a1 == 136 )
          DeviceData = KseQueryDeviceData(SourceString, *(const WCHAR **)v10, v13, (unsigned int *)&v13[1], Pool2);
        else
          DeviceData = KseQueryDeviceDataList(SourceString);
        v6 = DeviceData;
        RtlWriteULongToUser(a2 + 9, v13[1]);
        RtlWriteULongToUser(a2 + 8, v13[0]);
        if ( v6 >= 0 )
          RtlCopyToUser(*(void **)&v13[2], v5, (unsigned int)v13[1]);
      }
      else
      {
        v6 = -1073741801;
      }
    }
  }
LABEL_8:
  ExpStringFree(SourceString);
  ExpStringFree(*(_QWORD *)v10);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4E494444u);
  return (unsigned int)v6;
}
