/*
 * XREFs of ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180676590
 * Callers:
 *     PiiFilterEmbeddedPathsExecute @ 0x1806765FC (PiiFilterEmbeddedPathsExecute.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1801A5C04 (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCchCatW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3)
{
  __int64 v4; // r9
  unsigned __int16 *v5; // rax
  __int64 v6; // r8
  __int64 result; // rax

  v4 = 260LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
  {
    v6 = (260 - v4) & -(__int64)(v4 != 0);
    return RtlStringCopyWorkerW(&a1[v6], 260 - v6, v6, (__int64)a3);
  }
  return result;
}
