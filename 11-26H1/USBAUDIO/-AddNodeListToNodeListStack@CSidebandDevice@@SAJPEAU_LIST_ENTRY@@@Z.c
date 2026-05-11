/*
 * XREFs of ?AddNodeListToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@@Z @ 0x14000B0EC
 * Callers:
 *     ?TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x14000ACB4 (-TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_.c)
 *     ?TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x140013C94 (-TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSidebandDevice::AddNodeListToNodeListStack(struct _LIST_ENTRY *a1)
{
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v3; // rdx
  __int64 result; // rax
  _QWORD *v5; // rax
  struct _LIST_ENTRY *Flink; // rax

  Pool2 = ExAllocatePool2(64LL, 32LL, 1717729349LL);
  v3 = (struct _LIST_ENTRY *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v5 = (_QWORD *)(Pool2 + 16);
  v5[1] = v5;
  *v5 = v5;
  Flink = a1->Flink;
  if ( a1->Flink->Blink != a1 )
    __fastfail(3u);
  v3->Flink = Flink;
  v3->Blink = a1;
  Flink->Blink = v3;
  result = 0LL;
  a1->Flink = v3;
  return result;
}
