/*
 * XREFs of ObpDeleteDeviceMap @ 0x140B5F738
 * Callers:
 *     ObDereferenceDeviceMap @ 0x140930784 (ObDereferenceDeviceMap.c)
 *     ObpSetDeviceMap @ 0x140A2236C (ObpSetDeviceMap.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObFastReplaceObject @ 0x14047B348 (ObFastReplaceObject.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObDereferenceDeviceMap @ 0x140930784 (ObDereferenceDeviceMap.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDeleteDeviceMap(char *P)
{
  void *v2; // rcx
  unsigned int v3; // edi
  _QWORD *v4; // rsi
  void *v5; // rax
  volatile signed __int64 *v6; // rcx

  v2 = (void *)*((_QWORD *)P + 2);
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x6D44624Fu);
  ObCloseHandle(*((HANDLE *)P + 31), 0);
  ObfDereferenceObject(*(PVOID *)P);
  v3 = 0;
  v4 = P + 32;
  do
  {
    if ( *v4 )
    {
      v5 = (void *)ObFastReplaceObject((volatile __int64 *)&P[8 * v3 + 32], 0LL);
      ObfDereferenceObject(v5);
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 0x1A );
  v6 = (volatile signed __int64 *)*((_QWORD *)P + 3);
  if ( v6 )
    ObDereferenceDeviceMap(v6, 1u);
  ExFreePoolWithTag(P, 0x6D44624Fu);
}
