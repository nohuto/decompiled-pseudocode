/*
 * XREFs of EtwLogicalSurfRemovedTranslationFromMoveEvent @ 0x1401D0CE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqqq_EtwWriteTransfer @ 0x14003C9C8 (McTemplateK0pqqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwLogicalSurfRemovedTranslationFromMoveEvent(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  __int64 result; // rax
  int v7; // [rsp+28h] [rbp-20h]

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
  {
    v7 = a3;
    return McTemplateK0pqqqq_EtwWriteTransfer(
             a1,
             (__int64)&LogicalSurfRemovedTranslationFromMoveEvent,
             a3,
             a1,
             a2,
             v7,
             a4,
             a5);
  }
  return result;
}
