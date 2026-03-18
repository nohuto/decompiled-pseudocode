/*
 * XREFs of ACPIPccInterruptQueryGsivState @ 0x140065304
 * Callers:
 *     AcpiPccLinkInterrupt @ 0x1400654F4 (AcpiPccLinkInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIPccInterruptQueryGsivState(int a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp+18h] BYREF

  v3 = AcpiPccPlatformInterruptList;
  v4 = 0;
  Timeout.QuadPart = 0LL;
  *a3 = 0LL;
  while ( (__int64 *)v3 != &AcpiPccPlatformInterruptList )
  {
    if ( *(_DWORD *)(v3 + 16) == a1 )
    {
      if ( KeWaitForSingleObject((PVOID)(v3 + 40), Executive, 0, 0, &Timeout) == 258 )
        KeWaitForSingleObject((PVOID)(v3 + 40), Executive, 0, 0, 0LL);
      v4 = *(_DWORD *)(v3 + 64);
      if ( v4 == 1 )
        *a3 = v3;
      return v4;
    }
    v3 = *(_QWORD *)v3;
  }
  return v4;
}
