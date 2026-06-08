/*
 * XREFs of IsHwpNativeInterruptEnabled @ 0x140005850
 * Callers:
 *     ConnectHwpInterrupt @ 0x14002A7C0 (ConnectHwpInterrupt.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsHwpNativeInterruptEnabled(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *(_QWORD *)(a1 + 88);
  v2 = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 4) & 0x1000) != 0;
  return v2;
}
