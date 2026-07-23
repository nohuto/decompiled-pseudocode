/*
 * XREFs of RtlLookupExceptionHandler @ 0x1405255F8
 * Callers:
 *     KiLockServiceTable @ 0x140718194 (KiLockServiceTable.c)
 *     KiFatalExceptionFilter @ 0x140D08080 (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlpLookupPrimaryFunctionEntry @ 0x1405256A0 (RtlpLookupPrimaryFunctionEntry.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 __fastcall RtlLookupExceptionHandler(
        struct _IMAGE_RUNTIME_FUNCTION_ENTRY *a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  unsigned __int8 *v8; // rbx
  __int64 v9; // rdx

  v8 = (unsigned __int8 *)(a2 + *(unsigned int *)(RtlpLookupPrimaryFunctionEntry(a1) + 8));
  if ( a2 < 0x7FFFFFFF0000LL )
    ProbeForRead(v8, 1uLL, 4u);
  if ( ((*v8 >> 3) & a3) != 0 )
  {
    v9 = v8[2] + (v8[2] & 1u);
    if ( a6 )
      *a6 = &v8[2 * (unsigned int)(v9 + 2) + 4];
    if ( a5 )
      *a5 = a2 + *(unsigned int *)&v8[2 * v9 + 4];
  }
  return 0LL;
}
