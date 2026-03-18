/*
 * XREFs of IoQuerySystemDeviceName @ 0x140AFA81C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     IopFindSystemDevice @ 0x14079B660 (IopFindSystemDevice.c)
 *     IopRetrieveSystemDeviceName @ 0x140AFA8A4 (IopRetrieveSystemDeviceName.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoQuerySystemDeviceName(int a1, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64, unsigned int, __int64); // rcx
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int SystemDevice; // ecx
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF

  P[0] = 0LL;
  switch ( a1 )
  {
    case 98:
      v3 = SyspartDirectGetSystemPartition;
      break;
    case 99:
      v3 = SyspartDirectGetSystemDisk;
      break;
    case 200:
      v3 = SyspartDirectGetFirmwareSystemPartition;
      break;
    default:
      return 3221225475LL;
  }
  result = IopRetrieveSystemDeviceName(v3, a2);
  v6 = result;
  if ( (_DWORD)result == -1073740718 && IopAmbiguousSystemDisk )
  {
    if ( a1 == 99 )
    {
      return 3221226577LL;
    }
    else if ( a1 == 98 )
    {
      SystemDevice = IopFindSystemDevice(v5, P);
      if ( SystemDevice < 0 )
      {
        if ( SystemDevice == -1073740718 )
          return (unsigned int)-1073740719;
      }
      else
      {
        ExFreePoolWithTag(P[0], 0);
      }
      return v6;
    }
  }
  return result;
}
