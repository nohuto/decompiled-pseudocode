/*
 * XREFs of EtwTraceBeginPointerSetTargetWindows @ 0x14010B4C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceBeginPointerSetTargetWindows(int a1)
{
  __int64 v1; // rcx
  const EVENT_DESCRIPTOR *v2; // rdx
  NTSTATUS result; // eax

  v1 = (unsigned int)(a1 - 577);
  if ( !(_DWORD)v1 || (_DWORD)v1 == 4 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    {
      v2 = (const EVENT_DESCRIPTOR *)&BeginPointerUpdateSetTargetWindows;
      return McTemplateK0_EtwWriteTransfer(v1, v2, &W32kControlGuid);
    }
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
  {
    v2 = (const EVENT_DESCRIPTOR *)&BeginPointerSetTargetWindows;
    return McTemplateK0_EtwWriteTransfer(v1, v2, &W32kControlGuid);
  }
  return result;
}
