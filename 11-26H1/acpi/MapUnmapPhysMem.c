/*
 * XREFs of MapUnmapPhysMem @ 0x14001017C
 * Callers:
 *     OpRegion @ 0x140010510 (OpRegion.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     MapPhysMem @ 0x14000FC90 (MapPhysMem.c)
 */

__int64 __fastcall MapUnmapPhysMem(__int64 a1, void *a2, unsigned int a3, __int64 *a4)
{
  const void *v4; // rbx
  SIZE_T v5; // rdi
  int v9; // eax
  const void *v11; // r9
  const void *v12; // r8
  const void *v13; // rdx
  unsigned int v14; // ecx
  KIRQL CurrentIrql; // al

  LODWORD(v4) = 0;
  v5 = a3;
  if ( !a3 )
  {
    LODWORD(v4) = -1072431089;
    LogError(-1072431089);
    AcpiDiagTraceAmlError(a1, -1072431089);
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 216;
LABEL_7:
    PrintDebugMessage(v14, v13, v12, v11, 0LL);
    return (unsigned int)v4;
  }
  if ( KeGetCurrentIrql() )
  {
    LODWORD(v4) = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError(a1, -1072431098);
    CurrentIrql = KeGetCurrentIrql();
    v11 = 0LL;
    v13 = (const void *)CurrentIrql;
    v12 = 0LL;
    v14 = 77;
    goto LABEL_7;
  }
  if ( !a4 )
  {
    MmUnmapIoSpace(a2, v5);
    return (unsigned int)v4;
  }
  v9 = MapPhysMem((__int64)a2, (unsigned int)v5, a4);
  v4 = (const void *)v9;
  if ( v9 < 0 )
  {
    LogError(-1072431092);
    AcpiDiagTraceAmlError(a1, -1072431092);
    v11 = v4;
    v12 = (const void *)v5;
    v13 = a2;
    v14 = 102;
    goto LABEL_7;
  }
  return (unsigned int)v4;
}
