/*
 * XREFs of IopWriteCapsuleTriageDumpToFirmware @ 0x1405CCAF4
 * Callers:
 *     IoWriteCrashDump @ 0x1405CA87C (IoWriteCrashDump.c)
 * Callees:
 *     IopUpdateMinidumpContext @ 0x140442108 (IopUpdateMinidumpContext.c)
 *     MmSnapTriageDumpInformation @ 0x140442788 (MmSnapTriageDumpInformation.c)
 *     IoFillDumpHeader @ 0x1405C8F58 (IoFillDumpHeader.c)
 *     IoFillTriageDumpBuffer @ 0x1405C9264 (IoFillTriageDumpBuffer.c)
 *     IopWriteTriageDumpToFirmware @ 0x1405CCCA8 (IopWriteTriageDumpToFirmware.c)
 */

bool __fastcall IopWriteCapsuleTriageDumpToFirmware(
        unsigned int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _KTHREAD *a7,
        int a8)
{
  char *v8; // r15
  char v9; // r12
  int v12; // ecx
  __int64 v13; // rax
  char v14; // [rsp+40h] [rbp-61h]
  _DWORD v15[2]; // [rsp+78h] [rbp-29h] BYREF
  void *v16; // [rsp+80h] [rbp-21h]
  _QWORD v17[10]; // [rsp+88h] [rbp-19h] BYREF

  v8 = (char *)CapsuleTriageDumpBlock;
  v9 = 0;
  a8 = 0;
  if ( !CapsuleTriageDumpBlock )
    return 0;
  ViVerifyDma = 0;
  v17[0] = a2;
  v17[1] = a3;
  v17[2] = a4;
  v17[3] = a5;
  IopUpdateMinidumpContext(a1, a2, a3, a4, a5, a6, a7, v14, 1);
  MmSnapTriageDumpInformation((__int64)a6, v17);
  IoFillDumpHeader((_DWORD *)v8 + 1031, 4, a1, a2, (__int64)a3, a4, a5, (__int64)a7);
  v15[0] = IopNumTriageDumpDataBlocks;
  v15[1] = 256;
  v16 = &IopTriageDumpDataBlocks;
  v12 = IoFillTriageDumpBuffer(
          0x3E000u,
          (__int64 *)(v8 + 12316),
          1,
          3583,
          0LL,
          (__int64)a6,
          a7,
          CmNtCSDVersion,
          65,
          1u,
          (__int64)v15,
          (__int64)v15,
          &a8);
  *(_OWORD *)(v8 + 4220) = 0LL;
  *(_OWORD *)(v8 + 4236) = 0LL;
  *((_DWORD *)v8 + 2070) = 0;
  v13 = *((unsigned int *)v8 + 3080);
  *((_DWORD *)v8 + 2075) |= 0x88u;
  *(_QWORD *)(v8 + 8124) = v13;
  *((_DWORD *)v8 + 2069) = 3583;
  if ( v12 >= 0 )
    return (int)IopWriteTriageDumpToFirmware(CapsuleTriageDumpBlock) >= 0;
  return v9;
}
