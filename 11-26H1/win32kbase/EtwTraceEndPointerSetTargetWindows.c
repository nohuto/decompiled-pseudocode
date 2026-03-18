/*
 * XREFs of EtwTraceEndPointerSetTargetWindows @ 0x140064340
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceEndPointerSetTargetWindows(int a1)
{
  __int64 v1; // rcx
  void *v2; // rdx
  __int64 result; // rax

  v1 = (unsigned int)(a1 - 577);
  if ( !(_DWORD)v1 || (_DWORD)v1 == 4 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    {
      v2 = &EndPointerUpdateSetTargetWindows;
      return McTemplateK0_EtwWriteTransfer(v1, v2, &W32kControlGuid);
    }
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
  {
    v2 = &EndPointerSetTargetWindows;
    return McTemplateK0_EtwWriteTransfer(v1, v2, &W32kControlGuid);
  }
  return result;
}
