/*
 * XREFs of PopLoggingInformation @ 0x140AC125C
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopDiagTraceControlCallback @ 0x140AC0910 (PopDiagTraceControlCallback.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopLoggingInformation(unsigned int **a1, unsigned int *a2)
{
  struct _SINGLE_LIST_ENTRY *Next; // r9
  unsigned int v3; // edi
  int v6; // esi
  unsigned int v7; // eax
  unsigned int v8; // r8d
  unsigned int v10; // ebx
  unsigned int *Pool2; // rax
  _OWORD *v12; // rbp
  struct _SINGLE_LIST_ENTRY *v13; // r14
  size_t v14; // rbx

  Next = stru_140F10070.SystemAffinityTokenListHead.Next;
  v3 = 0;
  v6 = 0;
  v7 = 4;
  while ( 1 )
  {
    v8 = v7 + 16;
    if ( Next == &stru_140F10070.SystemAffinityTokenListHead )
      break;
    ++v6;
    if ( v8 < v7 )
      return (unsigned int)-1073741675;
    v7 = v8 + HIDWORD(Next[3].Next);
    if ( v7 < v8 )
      return (unsigned int)-1073741675;
    Next = Next->Next;
  }
  if ( v6 )
    v8 = v7;
  v10 = v8;
  Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    *a2 = v10;
    v12 = Pool2 + 1;
    *a1 = Pool2;
    *Pool2 = v10;
    if ( v6 )
    {
      v13 = stru_140F10070.SystemAffinityTokenListHead.Next;
      while ( v13 != &stru_140F10070.SystemAffinityTokenListHead && v6 )
      {
        v14 = (unsigned int)(HIDWORD(v13[3].Next) + 16);
        memmove(v12, &v13[2], v14);
        v13 = v13->Next;
        v12 = (_OWORD *)((char *)v12 + v14);
        --v6;
      }
    }
    else
    {
      *v12 = 0LL;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
