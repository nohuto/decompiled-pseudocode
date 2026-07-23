/*
 * XREFs of RtlpHpPerHeapStackTraceCleanup @ 0x18014F284
 * Callers:
 *     RtlpHpStackTraceHeapDestroy @ 0x18006D9A8 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpHpStackTraceHeapDisable @ 0x18014FA80 (RtlpHpStackTraceHeapDisable.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18005A390 (RtlRunOnceBeginInitialize.c)
 *     RtlpHpMetadataFree @ 0x18007F268 (RtlpHpMetadataFree.c)
 *     RtlStackDbStackRemove @ 0x180120B5C (RtlStackDbStackRemove.c)
 */

int __fastcall RtlpHpPerHeapStackTraceCleanup(_RTL_RUN_ONCE *a1, int a2, int a3)
{
  _QWORD *v6; // rax
  char *v7; // rsi
  _QWORD *v8; // r14
  _QWORD *v9; // rbx
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdi
  _QWORD *i; // rcx
  _OWORD v15[3]; // [rsp+20h] [rbp-38h] BYREF
  char *v16; // [rsp+78h] [rbp+20h] BYREF

  v16 = 0LL;
  LODWORD(v6) = RtlRunOnceBeginInitialize(a1, 1u, (PVOID *)&v16);
  if ( (int)v6 >= 0 )
  {
    v7 = v16;
    v8 = (_QWORD *)*((_QWORD *)v16 + 3);
    v9 = v8;
    while ( v9 )
    {
      v6 = (_QWORD *)*v9;
      v9 = v6;
      if ( ((unsigned __int8)v6 & 1) != 0 )
        break;
      v10 = v7 + 20;
LABEL_16:
      if ( !v6 )
        goto LABEL_10;
      v12 = (__int64)v9;
      for ( i = v8; (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( (_QWORD *)*i == v9 )
        {
          *i = *v9;
          --*((_DWORD *)v7 + 4);
          *v9 |= 0x8000000000000002uLL;
          v9 = i;
          goto LABEL_23;
        }
      }
      v12 = 0LL;
LABEL_23:
      RtlStackDbStackRemove((__int64)&qword_1801C68B0, *(_QWORD **)(v12 + 16));
      v15[0] = RtlpHpEnvHandle;
      RtlpHpMetadataFree(v12, v15);
    }
    v6 = (_QWORD *)*((_QWORD *)v7 + 3);
    v10 = v7 + 20;
    for ( ++v8; v8 < &v6[(unsigned __int64)*((unsigned int *)v7 + 5) >> 5]; ++v8 )
    {
      v9 = (_QWORD *)*v8;
      if ( (*v8 & 1) == 0 )
      {
        v6 = (_QWORD *)*v8;
        goto LABEL_16;
      }
    }
LABEL_10:
    v11 = *((_QWORD *)v7 + 3);
    if ( v11 )
    {
      v15[0] = RtlpHpEnvHandle;
      LODWORD(v6) = RtlpHpMetadataFree(v11, v15);
    }
    if ( a2 )
    {
      *((_DWORD *)v7 + 4) = 0;
      *((_QWORD *)v7 + 3) = 0LL;
      *v10 = 0;
    }
    else
    {
      v15[0] = RtlpHpEnvHandle;
      LODWORD(v6) = RtlpHpMetadataFree((__int64)v7, v15);
      if ( a3 )
        a1->Value = 0LL;
    }
  }
  return (int)v6;
}
