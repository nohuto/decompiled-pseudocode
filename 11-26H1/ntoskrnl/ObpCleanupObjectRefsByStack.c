/*
 * XREFs of ObpCleanupObjectRefsByStack @ 0x1407C789C
 * Callers:
 *     ObpDestroyObjectRefsByStack @ 0x1407C7A50 (ObpDestroyObjectRefsByStack.c)
 *     ObpInitializeObjectRefsByStack @ 0x1407C7DF8 (ObpInitializeObjectRefsByStack.c)
 * Callees:
 *     ObpTraceFreeMemory @ 0x140532F70 (ObpTraceFreeMemory.c)
 *     RtlStackDbStackRemove @ 0x140626410 (RtlStackDbStackRemove.c)
 */

void __fastcall ObpCleanupObjectRefsByStack(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD **v4; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rbp
  _QWORD *i; // rcx
  _QWORD *v10; // rdx
  void *v11; // rcx
  _QWORD **v12; // rdi
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  void *v15; // rdx
  _QWORD *j; // rcx
  void *v17; // rcx

  v4 = *(_QWORD ***)(a1 + 40);
  v6 = v4;
  while ( v6 )
  {
    v7 = (_QWORD *)*v6;
    v6 = v7;
    if ( ((unsigned __int8)v7 & 1) != 0 )
      break;
LABEL_9:
    if ( !v7 )
      goto LABEL_19;
    v8 = v6;
    for ( i = v4; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v6 )
      {
        *i = *v6;
        --*(_DWORD *)(a1 + 32);
        *v6 |= 0x8000000000000002uLL;
        v6 = i;
        goto LABEL_16;
      }
    }
    v8 = 0LL;
LABEL_16:
    v10 = (_QWORD *)v8[1];
    if ( v10 )
      RtlStackDbStackRemove((__int64)i, v10, a3, a4);
    ObpTraceFreeMemory(v8);
  }
  for ( ++v4; (unsigned __int64)v4 < *(_QWORD *)(a1 + 40) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 36) >> 5); ++v4 )
  {
    v6 = *v4;
    if ( ((unsigned __int8)*v4 & 1) == 0 )
    {
      v7 = *v4;
      goto LABEL_9;
    }
  }
LABEL_19:
  v11 = *(void **)(a1 + 40);
  if ( v11 )
    ObpTraceFreeMemory(v11);
  v12 = *(_QWORD ***)(a1 + 56);
  v13 = v12;
  while ( v13 )
  {
    v14 = (_QWORD *)*v13;
    v13 = v14;
    if ( ((unsigned __int8)v14 & 1) != 0 )
      break;
LABEL_29:
    if ( !v14 )
      goto LABEL_37;
    v15 = v13;
    for ( j = v12; (*j & 1) == 0; j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v13 )
      {
        *j = *v13;
        --*(_DWORD *)(a1 + 48);
        *v13 |= 0x8000000000000002uLL;
        v13 = j;
        goto LABEL_36;
      }
    }
    v15 = 0LL;
LABEL_36:
    ObpTraceFreeMemory(v15);
  }
  for ( ++v12; (unsigned __int64)v12 < *(_QWORD *)(a1 + 56) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 52) >> 5); ++v12 )
  {
    v13 = *v12;
    if ( ((unsigned __int8)*v12 & 1) == 0 )
    {
      v14 = *v12;
      goto LABEL_29;
    }
  }
LABEL_37:
  v17 = *(void **)(a1 + 56);
  if ( v17 )
    ObpTraceFreeMemory(v17);
}
