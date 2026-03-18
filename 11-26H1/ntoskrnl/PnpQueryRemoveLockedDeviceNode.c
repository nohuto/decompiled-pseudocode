/*
 * XREFs of PnpQueryRemoveLockedDeviceNode @ 0x140AE3ECC
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140A8A1F0 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140419A90 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     PipSetDevNodeState @ 0x1404D2858 (PipSetDevNodeState.c)
 *     PipSetDevNodeUserFlags @ 0x14090E790 (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeUserFlags @ 0x14090F028 (PipClearDevNodeUserFlags.c)
 *     IopRemoveDevice @ 0x14090FCA8 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x140AE3FF4 (PiIrpQueryRemoveDevice.c)
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
        IopRemoveDevice(v6, 3LL);
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
