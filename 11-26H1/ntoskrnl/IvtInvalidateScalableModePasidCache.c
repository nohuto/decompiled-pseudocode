/*
 * XREFs of IvtInvalidateScalableModePasidCache @ 0x1405A9B78
 * Callers:
 *     IvtInvalidateScalableModeContextEntry @ 0x1405A9B18 (IvtInvalidateScalableModeContextEntry.c)
 *     IvtSetPasidAddressSpace @ 0x1405AA240 (IvtSetPasidAddressSpace.c)
 *     IvtInitializeIommu @ 0x140BF5C90 (IvtInitializeIommu.c)
 * Callees:
 *     IvtIommuWaitCommand @ 0x140434918 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x140434A6C (IvtIommuSendCommand.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall IvtInvalidateScalableModePasidCache(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char a6,
        char a7)
{
  unsigned __int64 v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF

  v12 = 0LL;
  if ( a3 == 0x10000 )
  {
    v10 = 55LL;
    goto LABEL_5;
  }
  v10 = ((unsigned __int64)(unsigned __int16)a3 << 16) | 7;
  *(_QWORD *)&v12 = v10;
  if ( a4 != -1 )
  {
    v10 |= ((a4 & 0xFFFFFLL) << 32) | 0x10;
LABEL_5:
    *(_QWORD *)&v12 = v10;
  }
  IvtIommuSendCommand(a1, &v12, a5);
  if ( a6 )
  {
    *((_QWORD *)&v12 + 1) = 0LL;
    *(_QWORD *)&v12 = (v10 & 0x30) != 48 && (v10 & 0x30) != 0 ? ((a4 & 0xFFFFFLL) << 32) | 0x26 : 18LL;
    IvtIommuSendCommand(a1, &v12, a5);
    if ( a7 )
    {
      if ( a4 == -1 )
      {
        *(_QWORD *)&v12 = ((unsigned __int64)a2 << 32) | 3;
        *((_QWORD *)&v12 + 1) = 0x7FFFFFFFFFFFF001LL;
      }
      else
      {
        *((_QWORD *)&v12 + 1) = 0x7FFFFFFFFFFFF800LL;
        *(_QWORD *)&v12 = ((a2 | ((a4 & 0xFFFFFLL) << 16)) << 16) | 8;
      }
      IvtIommuSendCommand(a1, &v12, a5);
    }
  }
  return IvtIommuWaitCommand(a1, 0, a5);
}
