/*
 * XREFs of RtlpHpPerHeapStackTraceCleanup @ 0x18014F3D4
 * Callers:
 *     RtlpHpStackTraceHeapDestroy @ 0x18007DD44 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpHpStackTraceHeapDisable @ 0x18014FBD0 (RtlpHpStackTraceHeapDisable.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18000EC60 (RtlRunOnceBeginInitialize.c)
 *     RtlpHpMetadataFree @ 0x180087EE8 (RtlpHpMetadataFree.c)
 *     RtlStackDbStackRemove @ 0x180120DAC (RtlStackDbStackRemove.c)
 */

__int64 __fastcall RtlpHpPerHeapStackTraceCleanup(volatile signed __int64 *a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 *v8; // r14
  __int64 *v9; // rbx
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 *i; // rcx
  _OWORD v14[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  result = RtlRunOnceBeginInitialize(a1, 1, (unsigned __int64 *)&v15);
  if ( (int)result >= 0 )
  {
    v7 = v15;
    v8 = *(__int64 **)(v15 + 24);
    v9 = v8;
    while ( v9 )
    {
      result = *v9;
      v9 = (__int64 *)result;
      if ( (result & 1) != 0 )
        break;
      v10 = (_DWORD *)(v7 + 20);
LABEL_16:
      if ( !result )
        goto LABEL_10;
      v12 = (__int64)v9;
      for ( i = v8; (*i & 1) == 0; i = (__int64 *)*i )
      {
        if ( (__int64 *)*i == v9 )
        {
          *i = *v9;
          --*(_DWORD *)(v7 + 16);
          *v9 |= 0x8000000000000002uLL;
          v9 = i;
          goto LABEL_23;
        }
      }
      v12 = 0LL;
LABEL_23:
      RtlStackDbStackRemove((__int64)&qword_1801C7860, *(_QWORD *)(v12 + 16));
      v14[0] = RtlpHpEnvHandle;
      RtlpHpMetadataFree(v12, v14);
    }
    result = *(_QWORD *)(v7 + 24);
    v10 = (_DWORD *)(v7 + 20);
    for ( ++v8; (unsigned __int64)v8 < result + 8 * ((unsigned __int64)*(unsigned int *)(v7 + 20) >> 5); ++v8 )
    {
      v9 = (__int64 *)*v8;
      if ( (*v8 & 1) == 0 )
      {
        result = *v8;
        goto LABEL_16;
      }
    }
LABEL_10:
    v11 = *(_QWORD *)(v7 + 24);
    if ( v11 )
    {
      v14[0] = RtlpHpEnvHandle;
      result = RtlpHpMetadataFree(v11, v14);
    }
    if ( a2 )
    {
      *(_DWORD *)(v7 + 16) = 0;
      *(_QWORD *)(v7 + 24) = 0LL;
      *v10 = 0;
    }
    else
    {
      v14[0] = RtlpHpEnvHandle;
      result = RtlpHpMetadataFree(v7, v14);
      if ( a3 )
        *a1 = 0LL;
    }
  }
  return result;
}
