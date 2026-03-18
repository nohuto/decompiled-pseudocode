/*
 * XREFs of DCompositionNotifyPendingPresent @ 0x14012DDD0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     DirectComposition::Memory::Allocate @ 0x1400A7A70 (DirectComposition--Memory--Allocate.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall DCompositionNotifyPendingPresent(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  struct _ERESOURCE *v5; // rdi
  struct _RTL_GENERIC_TABLE *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // r9d
  __int64 i; // r8
  int v11; // eax
  int v12; // r14d
  void *v13; // rax
  void *v14; // rbp
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rcx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(W32GetDCompSessionState(a1) + 24);
  if ( v4 )
  {
    v5 = *(struct _ERESOURCE **)v4;
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v5, 1u);
    v6 = *(struct _RTL_GENERIC_TABLE **)(v4 + 8);
    Buffer[0] = a1;
    Buffer[1] = 0LL;
    v7 = RtlLookupElementGenericTable(v6, Buffer);
    if ( v7 )
    {
      v8 = v7[1];
      if ( v8 )
      {
        v9 = *(_DWORD *)(v8 + 20);
        for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
        {
          if ( a2 == *(_QWORD *)(*(_QWORD *)(v8 + 72) + 8 * i) )
            goto LABEL_10;
        }
        v11 = *(_DWORD *)(v8 + 24);
        if ( v9 != v11 )
        {
LABEL_9:
          *(_QWORD *)(*(_QWORD *)(v8 + 72) + 8LL * (unsigned int)(*(_DWORD *)(v8 + 20))++) = a2;
LABEL_10:
          ++*(_DWORD *)(v8 + 16);
          goto LABEL_11;
        }
        v12 = v11 + 5;
        v13 = DirectComposition::Memory::Allocate(8LL * (unsigned int)(v11 + 5));
        v14 = v13;
        if ( v13 )
        {
          memmove(v13, *(const void **)(v8 + 72), 8LL * *(unsigned int *)(v8 + 20));
          v17 = *(char **)(v8 + 72);
          if ( v17 != (char *)(v8 + 28) )
            GreDeleteFastMutex(v17, v8 + 28, v15, v16);
          *(_QWORD *)(v8 + 72) = v14;
          *(_DWORD *)(v8 + 24) = v12;
          goto LABEL_9;
        }
      }
    }
LABEL_11:
    ExReleaseResourceLite(*(PERESOURCE *)v4);
    KeLeaveCriticalRegion();
  }
}
