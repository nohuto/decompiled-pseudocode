/*
 * XREFs of PspCopyUnicodeString @ 0x140A72D84
 * Callers:
 *     PspCaptureUserProcessParameters @ 0x140A72430 (PspCaptureUserProcessParameters.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PspCopyUnicodeString(unsigned __int16 *a1, __int64 a2, void **a3, char a4)
{
  void *v6; // rcx
  size_t v7; // r8
  void *v8; // rdx

  *(_OWORD *)a2 = *(_OWORD *)a1;
  if ( *((_QWORD *)a1 + 1) )
  {
    v6 = *a3;
    *(_QWORD *)(a2 + 8) = *a3;
    v7 = *a1;
    v8 = (void *)*((_QWORD *)a1 + 1);
    if ( a4 )
      RtlCopyFromUser(v6, v8, v7);
    else
      RtlCopyVolatileMemory(v6, v8, v7);
    memset_0((char *)*a3 + *a1, 0, a1[1] - (unsigned __int64)*a1);
    if ( *a3 )
      *a3 = (char *)*a3 + a1[1];
  }
  return 0LL;
}
