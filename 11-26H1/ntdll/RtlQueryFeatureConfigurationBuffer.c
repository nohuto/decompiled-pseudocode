/*
 * XREFs of RtlQueryFeatureConfigurationBuffer @ 0x180148BC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18005F238 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18005F864 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     RtlpFcConfigurationTypeToBufferType @ 0x18016E744 (RtlpFcConfigurationTypeToBufferType.c)
 */

__int64 __fastcall RtlQueryFeatureConfigurationBuffer(__int64 a1, _QWORD *a2, void *a3, size_t *a4)
{
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rax
  const void *v12; // rdx
  size_t v13; // r8
  unsigned __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16[4]; // [rsp+28h] [rbp-20h] BYREF

  v15 = 0LL;
  v16[0] = 0LL;
  v7 = a1;
  if ( (unsigned int)a1 >= 2 )
    return (unsigned int)-1073741811;
  v9 = RtlpFcReferenceFeatureConfigurationBuffers(a1, 1, &v15, v16);
  v10 = v16[0];
  v8 = v9;
  if ( v9 >= 0 )
  {
    v11 = 3LL * (unsigned int)RtlpFcConfigurationTypeToBufferType(v7);
    v12 = *(const void **)(v10 + 8 * v11 + 8);
    v13 = *(_QWORD *)(v10 + 8 * v11 + 16);
    if ( v12 )
    {
      if ( v13 > *a4 )
      {
        *a4 = v13;
        v8 = -2147483643;
        goto LABEL_14;
      }
      if ( a2 )
        *a2 = v15;
      *a4 = v13;
      memmove(a3, v12, v13);
    }
    else
    {
      if ( a2 )
        *a2 = v15;
      *a4 = 0LL;
    }
    v8 = 0;
  }
LABEL_14:
  if ( v10 )
    RtlpFcBufferManagerDereferenceBuffers((unsigned __int64 *)&xmmword_1801CBC88, v10);
  return v8;
}
