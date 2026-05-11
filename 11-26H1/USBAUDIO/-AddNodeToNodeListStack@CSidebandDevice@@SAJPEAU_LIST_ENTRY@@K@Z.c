/*
 * XREFs of ?AddNodeToNodeListStack@CSidebandDevice@@SAJPEAU_LIST_ENTRY@@K@Z @ 0x14000B158
 * Callers:
 *     ?TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x14000ACB4 (-TraverseForward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_.c)
 *     ?TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU_LIST_ENTRY@@@Z @ 0x140013C94 (-TraverseBackward@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@KPEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSidebandDevice::AddNodeToNodeListStack(struct _LIST_ENTRY *a1, int a2)
{
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v5; // r8
  struct _LIST_ENTRY *v7; // rax
  struct _LIST_ENTRY *Flink; // rcx

  if ( a1->Flink == a1 )
    return 3221225485LL;
  Pool2 = ExAllocatePool2(64LL, 24LL, 1684174917LL);
  v5 = (struct _LIST_ENTRY *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)(Pool2 + 16) = a2;
  v7 = a1->Flink + 1;
  Flink = v7->Flink;
  if ( v7->Flink->Blink != v7 )
    __fastfail(3u);
  v5->Blink = v7;
  v5->Flink = Flink;
  Flink->Blink = v5;
  v7->Flink = v5;
  return 0LL;
}
