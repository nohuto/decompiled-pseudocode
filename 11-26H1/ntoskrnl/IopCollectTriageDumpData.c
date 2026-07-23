/*
 * XREFs of IopCollectTriageDumpData @ 0x1405CB244
 * Callers:
 *     IoCapturePristineTriageDump @ 0x1405C8AB8 (IoCapturePristineTriageDump.c)
 *     IoWriteCrashDump @ 0x1405CA87C (IoWriteCrashDump.c)
 * Callees:
 *     IopUpdateMinidumpContext @ 0x140442108 (IopUpdateMinidumpContext.c)
 *     MmSnapTriageDumpInformation @ 0x140442788 (MmSnapTriageDumpInformation.c)
 *     IoFillTriageDumpBuffer @ 0x1405C9264 (IoFillTriageDumpBuffer.c)
 */

__int64 __fastcall IopCollectTriageDumpData(
        unsigned int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _KTHREAD *a7,
        char a8,
        int a9,
        __int64 *a10)
{
  __int64 result; // rax
  __int64 *v11; // rbx
  char v12; // [rsp+38h] [rbp-70h]
  _DWORD v13[2]; // [rsp+70h] [rbp-38h] BYREF
  void *v14; // [rsp+78h] [rbp-30h]
  _QWORD v15[5]; // [rsp+80h] [rbp-28h] BYREF

  a9 = 0;
  if ( ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) == 0 || IoPreparedTriageDumpData )
    return 3221225473LL;
  IopUpdateMinidumpContext(a1, a2, a3, a4, a5, a6, a7, v12, 1);
  MmSnapTriageDumpInformation((__int64)a6, v15);
  v13[0] = IopNumTriageDumpDataBlocks;
  v14 = &IopTriageDumpDataBlocks;
  v13[1] = 256;
  v11 = a10;
  result = IoFillTriageDumpBuffer(
             0x3E000u,
             a10,
             1,
             a8 != 0 ? 3319 : 3583,
             0LL,
             (__int64)a6,
             a7,
             CmNtCSDVersion,
             65,
             1u,
             (__int64)v13,
             (__int64)v13,
             &a9);
  if ( (int)result >= 0 )
    IoPreparedTriageDumpData = v11;
  return result;
}
