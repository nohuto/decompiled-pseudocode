/*
 * XREFs of ?Remove@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAPEAVDMMVIDPN@@QEAV2@@Z @ 0x1400506E0
 * Callers:
 *     ?Remove@?$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z @ 0x140050688 (-Remove@-$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::Remove(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // r9
  __int64 result; // rax
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rcx
  _QWORD *v9; // rax

  if ( a2 )
  {
    v3 = (_QWORD *)(a1 + 16);
    v4 = 0LL;
    if ( (_QWORD *)*v3 != v3 )
      v4 = *v3 - 8LL;
    while ( v4 )
    {
      if ( v4 == a2 )
      {
        v6 = (_QWORD *)(a2 + 8);
        v7 = *(_QWORD *)(a2 + 8);
        if ( *(_QWORD *)(v7 + 8) != a2 + 8 || (v8 = *(_QWORD **)(a2 + 16), (_QWORD *)*v8 != v6) )
          __fastfail(3u);
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
        *v6 = 0LL;
        result = a2;
        *(_QWORD *)(a2 + 16) = 0LL;
        --*(_QWORD *)(a1 + 32);
        return result;
      }
      v9 = *(_QWORD **)(v4 + 8);
      v4 = (__int64)(v9 - 1);
      if ( v9 == v3 )
        v4 = 0LL;
    }
  }
  return 0LL;
}
