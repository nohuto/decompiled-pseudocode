/*
 * XREFs of NvmeAdapterIsSubsystemPortPresent @ 0x1400D942C
 * Callers:
 *     NvmeAdapterAddSubsystemPortMiniport @ 0x1400D2D7C (NvmeAdapterAddSubsystemPortMiniport.c)
 *     NvmeAdapterCreateAddSubsystemPort @ 0x1400D41C0 (NvmeAdapterCreateAddSubsystemPort.c)
 * Callees:
 *     <none>
 */

const char *__fastcall NvmeAdapterIsSubsystemPortPresent(
        __int64 a1,
        const char *a2,
        __int16 a3,
        const char *a4,
        char *Str2)
{
  const char *v9; // rdi
  struct _ERESOURCE *v10; // rsi
  _QWORD *v11; // r14
  _QWORD *v12; // rbx

  v9 = 0LL;
  KeEnterCriticalRegion();
  v10 = (struct _ERESOURCE *)(a1 + 384);
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 384), 1u);
  v11 = (_QWORD *)(a1 + 360);
  v12 = *(_QWORD **)(a1 + 360);
  while ( v12 != v11 )
  {
    v9 = (const char *)(v12 - 1);
    if ( *((_WORD *)v12 - 2) == a3
      && !_strnicmp(v9 + 60, a2, 0x100uLL)
      && !_strnicmp(v9 + 316, a4, 0x100uLL)
      && !_strnicmp(v9 + 572, Str2, 0x20uLL) )
    {
      break;
    }
    v12 = (_QWORD *)*v12;
    v9 = 0LL;
  }
  ExReleaseResourceLite(v10);
  KeLeaveCriticalRegion();
  return v9;
}
