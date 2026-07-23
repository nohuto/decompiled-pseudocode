/*
 * XREFs of PsIsProcessLoggingEnabled @ 0x1404A3994
 * Callers:
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 *     NtProtectVirtualMemory @ 0x140A03A40 (NtProtectVirtualMemory.c)
 *     MiReadWriteVirtualMemory @ 0x140A2B320 (MiReadWriteVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsIsProcessLoggingEnabled(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r9d
  unsigned int v5; // eax
  _DWORD *v6; // rcx

  v3 = 0;
  v5 = 0;
  v6 = 0LL;
  switch ( a3 )
  {
    case 256:
      v5 = 0x80000000;
      goto LABEL_3;
    case 16:
      v5 = 0x1000000;
LABEL_12:
      v6 = (_DWORD *)(a2 + 496);
      goto LABEL_4;
    case 8:
      v5 = 0x20000000;
      if ( a1 != a2 )
        v5 = 0x10000000;
      goto LABEL_3;
    case 2:
      v5 = 0x100000;
      goto LABEL_3;
    case 32:
      v5 = 0x2000000;
      goto LABEL_12;
  }
  if ( a3 != 2048 )
    goto LABEL_4;
  v5 = 0x80000;
LABEL_3:
  v6 = (_DWORD *)(a2 + 1532);
LABEL_4:
  LOBYTE(v3) = (*v6 & v5) != 0;
  return v3;
}
