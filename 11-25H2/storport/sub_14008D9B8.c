/*
 * XREFs of sub_14008D9B8 @ 0x14008D9B8
 * Callers:
 *     sub_140001010 @ 0x140001010 (sub_140001010.c)
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140014A00 @ 0x140014A00 (sub_140014A00.c)
 *     sub_140014CBC @ 0x140014CBC (sub_140014CBC.c)
 *     sub_1400153FC @ 0x1400153FC (sub_1400153FC.c)
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 *     sub_140016AA8 @ 0x140016AA8 (sub_140016AA8.c)
 *     sub_14001ACB8 @ 0x14001ACB8 (sub_14001ACB8.c)
 *     sub_14001C790 @ 0x14001C790 (sub_14001C790.c)
 *     sub_14001D220 @ 0x14001D220 (sub_14001D220.c)
 *     sub_14001DAE0 @ 0x14001DAE0 (sub_14001DAE0.c)
 *     sub_14001E2C0 @ 0x14001E2C0 (sub_14001E2C0.c)
 *     sub_14001E870 @ 0x14001E870 (sub_14001E870.c)
 *     sub_140021A00 @ 0x140021A00 (sub_140021A00.c)
 *     sub_140027440 @ 0x140027440 (sub_140027440.c)
 *     sub_140032250 @ 0x140032250 (sub_140032250.c)
 *     sub_14003328C @ 0x14003328C (sub_14003328C.c)
 *     sub_14003846C @ 0x14003846C (sub_14003846C.c)
 *     sub_14003A52C @ 0x14003A52C (sub_14003A52C.c)
 *     sub_14008ADD0 @ 0x14008ADD0 (sub_14008ADD0.c)
 *     sub_14012B890 @ 0x14012B890 (sub_14012B890.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14008D9B8(void *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  char *ErrorLogEntry; // rax

  ErrorLogEntry = (char *)IoAllocateErrorLogEntry(a1, 0x48u);
  if ( ErrorLogEntry )
  {
    *(_QWORD *)(ErrorLogEntry + 4) = 0LL;
    *(_QWORD *)(ErrorLogEntry + 28) = 0LL;
    *(_QWORD *)(ErrorLogEntry + 36) = 0LL;
    *((_DWORD *)ErrorLogEntry + 11) = 0;
    *(_DWORD *)ErrorLogEntry = 0x200000;
    *((_DWORD *)ErrorLogEntry + 6) = 0;
    *((_DWORD *)ErrorLogEntry + 3) = -2147221448;
    *((_DWORD *)ErrorLogEntry + 4) = 10;
    *((_DWORD *)ErrorLogEntry + 5) = -1073741801;
    *((_QWORD *)ErrorLogEntry + 6) = a2;
    *((_QWORD *)ErrorLogEntry + 7) = a3;
    *((_DWORD *)ErrorLogEntry + 16) = a4;
    *((_DWORD *)ErrorLogEntry + 17) = a5;
    IoWriteErrorLogEntry(ErrorLogEntry);
  }
  else
  {
    _InterlockedIncrement(&dword_1401688B8);
  }
}
