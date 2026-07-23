/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x14080B528
 * Callers:
 *     PopBootStatRestoreDefaults @ 0x140B53F84 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1404490A0 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x1407280C0 (ZwWriteFile.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpRecordBootStatusData @ 0x140B162E8 (RtlpRecordBootStatusData.c)
 */

NTSTATUS __cdecl RtlRestoreBootStatusDefaults(HANDLE FileHandle)
{
  char v2; // cl
  _BYTE *v3; // rax
  __int64 v4; // rdx
  int v5; // edx
  _XSAVE_FORMAT *StateSaveArea; // rcx
  _M128A *v7; // rcx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD Buffer[3]; // [rsp+70h] [rbp-90h] BYREF
  _M128A v12; // [rsp+A0h] [rbp-60h]
  _M128A v13; // [rsp+B0h] [rbp-50h]
  _M128A v14; // [rsp+C0h] [rbp-40h]
  _M128A v15; // [rsp+D0h] [rbp-30h]
  _M128A v16; // [rsp+E0h] [rbp-20h]
  _M128A v17; // [rsp+F0h] [rbp-10h]
  _M128A v18; // [rsp+100h] [rbp+0h]
  _M128A v19; // [rsp+110h] [rbp+10h]
  _M128A v20; // [rsp+120h] [rbp+20h]
  unsigned __int64 v21; // [rsp+130h] [rbp+30h]

  IoStatusBlock = 0LL;
  memset_0((char *)Buffer + 4, 0, 0xC4uLL);
  LODWORD(Buffer[0]) = 200;
  RtlGetNtProductType((PNT_PRODUCT_TYPE)Buffer + 1);
  v2 = 0;
  *(_WORD *)((char *)Buffer + 9) = 286;
  v3 = Buffer;
  BYTE1(v12.Low) = 1;
  v4 = 200LL;
  BYTE11(Buffer[0]) = 0;
  LODWORD(v20.High) = 0;
  do
  {
    v2 -= *v3++;
    --v4;
  }
  while ( v4 );
  BYTE2(v12.Low) = v2;
  ByteOffset.QuadPart = 0LL;
  RtlpRecordBootStatusData(0LL, Buffer, 0LL, 200LL);
  v5 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0xC8u, &ByteOffset, 0LL);
  if ( v5 >= 0 )
  {
    if ( BYTE4(NormalizationListLock.CycleTime) )
    {
      if ( *(HANDLE *)&NormalizationListLock.CurrentRunTime == FileHandle )
      {
        StateSaveArea = NormalizationListLock.StateSaveArea;
        if ( NormalizationListLock.StateSaveArea )
        {
          *(_OWORD *)NormalizationListLock.StateSaveArea = Buffer[0];
          *(_OWORD *)&StateSaveArea->DataOffset = Buffer[1];
          StateSaveArea->FloatRegisters[0] = (_M128A)Buffer[2];
          StateSaveArea->FloatRegisters[1] = v12;
          StateSaveArea->FloatRegisters[2] = v13;
          StateSaveArea->FloatRegisters[3] = v14;
          StateSaveArea->FloatRegisters[4] = v15;
          v7 = &StateSaveArea->FloatRegisters[6];
          v7[-1] = v16;
          *v7 = v17;
          v7[1] = v18;
          v7[2] = v19;
          v7[3] = v20;
          v7[4].Low = v21;
        }
      }
    }
  }
  return v5;
}
