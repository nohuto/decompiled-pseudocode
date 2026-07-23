/*
 * XREFs of PnpQueryRemoveLockedDeviceNode @ 0x140AE19D4
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1409B7010 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     PipSetDevNodeUserFlags @ 0x1409B08C0 (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1409B1158 (PipClearDevNodeUserFlags.c)
 *     IopRemoveDevice @ 0x1409B1DD8 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x140AE1AFC (PiIrpQueryRemoveDevice.c)
 */

__int64 __fastcall PnpQueryRemoveLockedDeviceNode(__int64 a1, _DWORD *a2, UNICODE_STRING *a3)
{
  struct _DEVICE_OBJECT *v6; // rbp
  int v7; // esi
  __int64 result; // rax

  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x305:
    case 0x306:
    case 0x308:
    case 0x309:
    case 0x30A:
      PipSetDevNodeUserFlags(a1, 0x200u);
      v6 = *(struct _DEVICE_OBJECT **)(a1 + 32);
      v7 = PiIrpQueryRemoveDevice(v6);
      if ( v7 < 0 )
      {
        IopRemoveDevice(v6, 3);
        *a2 = 6;
        RtlCopyUnicodeString(a3, (PCUNICODE_STRING)(a1 + 40));
      }
      else
      {
        PipSetDevNodeState(a1, 786);
      }
      PipClearDevNodeUserFlags(a1, 512);
      result = (unsigned int)v7;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
