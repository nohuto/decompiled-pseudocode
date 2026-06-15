/*
 * XREFs of ?_Tidy@?$_Node_class@GV?$regex_traits@G@std@@@std@@QEAAXPEAU?$_Sequence@G@2@@Z @ 0x18014DE58
 * Callers:
 *     ??1?$_Node_class@GV?$regex_traits@G@std@@@std@@UEAA@XZ @ 0x18014A554 (--1-$_Node_class@GV-$regex_traits@G@std@@@std@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Node_class<unsigned short,std::regex_traits<unsigned short>>::_Tidy(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  void **v3; // rbx

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v3 = (void **)v2;
      v2 = *(_QWORD *)(v2 + 24);
      free(v3[2]);
      operator delete(v3, (const struct std::nothrow_t *)0x20);
    }
    while ( v2 );
  }
}
