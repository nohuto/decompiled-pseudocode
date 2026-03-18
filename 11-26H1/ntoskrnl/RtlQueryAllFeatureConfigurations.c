/*
 * XREFs of RtlQueryAllFeatureConfigurations @ 0x1408010D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1404CC294 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1404D88A8 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcValidateFeatureConfigurationType @ 0x1404E9264 (RtlpFcValidateFeatureConfigurationType.c)
 *     RtlpFcConvertFeatureConfigurationsInternalToExternal @ 0x1404F7980 (RtlpFcConvertFeatureConfigurationsInternalToExternal.c)
 */

__int64 __fastcall RtlQueryAllFeatureConfigurations(int a1, _QWORD *a2, _QWORD *a3, unsigned __int64 *a4)
{
  __int64 v5; // rbp
  int v8; // eax
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  unsigned int *v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+28h] [rbp-10h] BYREF

  v5 = a1;
  v16 = 0LL;
  v15 = 0LL;
  RtlpFcBufferManagerReferenceBuffers((__int64)&CmpFreezeListLock.600, (__int64)&v16, &v15);
  v8 = RtlpFcValidateFeatureConfigurationType(v5);
  v10 = v15;
  v11 = v8;
  if ( v8 >= 0 )
  {
    v15 = 0x100000000LL;
    v12 = *(unsigned int **)(v10 + 24LL * *((unsigned int *)&v15 + v5) + 8);
    if ( v12 )
    {
      v9 = *v12;
      v13 = *a4;
      *a4 = v9;
      if ( v9 > v13 )
      {
        v11 = -2147483643;
        goto LABEL_8;
      }
      RtlpFcConvertFeatureConfigurationsInternalToExternal((__int64 *)(v12 + 1), a3, v9);
    }
    else
    {
      *a4 = 0LL;
    }
    v11 = 0;
  }
LABEL_8:
  if ( v11 >= 0 )
  {
    if ( a2 )
      *a2 = v16;
    v11 = 0;
  }
  RtlpFcBufferManagerDereferenceBuffers((unsigned __int64 *)&CmpFreezeListLock.600, v10, v9);
  return (unsigned int)v11;
}
