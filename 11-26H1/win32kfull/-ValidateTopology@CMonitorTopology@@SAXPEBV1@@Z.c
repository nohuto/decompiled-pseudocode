/*
 * XREFs of ?ValidateTopology@CMonitorTopology@@SAXPEBV1@@Z @ 0x140212E70
 * Callers:
 *     ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x140212314 (-CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ.c)
 * Callees:
 *     AreHashesEqual @ 0x140160474 (AreHashesEqual.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMonitorTopology::ValidateTopology(const struct CMonitorTopology *a1)
{
  unsigned int v2; // edi
  unsigned int v3; // eax
  unsigned int v4; // esi
  __int64 v5; // rbp
  unsigned int j; // ecx
  __int64 v7; // r8
  __int64 v8; // r12
  unsigned int *v9; // rsi
  unsigned int v10; // ebp
  unsigned int k; // r14d
  unsigned int i; // [rsp+80h] [rbp+18h]
  __int64 v13; // [rsp+88h] [rbp+20h]

  v2 = 0;
  for ( i = 0; v2 < *((_DWORD *)a1 + 1); i = v2 )
  {
    v3 = *((_DWORD *)a1 + 18 * v2 + 18);
    if ( v3 )
    {
      if ( v3 > 1 )
      {
        v4 = 0;
        do
        {
          v5 = v4 + 1;
          for ( j = v3; (unsigned int)v5 < j; v5 = (unsigned int)(v5 + 1) )
          {
            v7 = *((_QWORD *)a1 + 9 * v2 + 8);
            if ( AreHashesEqual((const void *)(v7 + 20LL * v4), (const void *)(v7 + 20 * v5)) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 609LL);
            j = *((_DWORD *)a1 + 18 * v2 + 18);
          }
          ++v4;
          v3 = j;
        }
        while ( v4 < j );
      }
      if ( v2 )
      {
        v8 = v2;
        v9 = (unsigned int *)((char *)a1 + 72);
        v13 = v2;
        do
        {
          v10 = 0;
          if ( *v9 )
          {
            do
            {
              for ( k = 0; k < *((_DWORD *)a1 + 18 * v2 + 18); ++k )
              {
                if ( AreHashesEqual(
                       (const void *)(*((_QWORD *)v9 - 1) + 20LL * v10),
                       (const void *)(*((_QWORD *)a1 + 9 * v2 + 8) + 20LL * k)) )
                {
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 624LL);
                }
              }
              ++v10;
            }
            while ( v10 < *v9 );
            v8 = v13;
          }
          v9 += 18;
          v13 = --v8;
        }
        while ( v8 );
        v2 = i;
      }
    }
    ++v2;
  }
}
