/*
 * XREFs of EtwpInitializeLoggerSecurityDescriptor @ 0x140A6D3B8
 * Callers:
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 *     EtwpFixBootLoggers @ 0x140CE1DAC (EtwpFixBootLoggers.c)
 * Callees:
 *     ObLogSecurityDescriptor @ 0x1409211E0 (ObLogSecurityDescriptor.c)
 */

__int64 __fastcall EtwpInitializeLoggerSecurityDescriptor(__int64 a1, void *a2)
{
  int v3; // ecx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v3 = ObLogSecurityDescriptor(a2, &v5, 0x10u);
  if ( v3 >= 0 )
  {
    if ( v5 )
      *(_QWORD *)(a1 + 784) = v5 + 15;
    else
      *(_QWORD *)(a1 + 784) = 0LL;
  }
  return (unsigned int)v3;
}
