/*
 * XREFs of ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1401ED718
 * Callers:
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1401ECB30 (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1401EED10 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x14003B088 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x14007F948 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x14007F970 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::DestroySourceContextLists(OUTPUTDUPL_MGR *this)
{
  __int64 i; // rbp
  __int64 v3; // rsi
  AUTOEXPANDALLOCATION *v4; // rcx
  __int64 j; // r14
  OUTPUTDUPL_CONTEXT *v6; // rcx
  char *v7; // rcx
  char *v8; // rbx

  if ( *((_QWORD *)this + 2) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 19); i = (unsigned int)(i + 1) )
    {
      v3 = *((_QWORD *)this + 2);
      v4 = *(AUTOEXPANDALLOCATION **)(v3 + 72 * i + 56);
      if ( v4 )
      {
        AUTOEXPANDALLOCATION::`scalar deleting destructor'(v4);
        *(_QWORD *)(v3 + 72 * i + 56) = 0LL;
      }
      if ( *(_QWORD *)(v3 + 72 * i + 48) )
      {
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 2); j = (unsigned int)(j + 1) )
        {
          v6 = *(OUTPUTDUPL_CONTEXT **)(*(_QWORD *)(v3 + 72 * i + 48) + 8 * j);
          if ( v6 )
          {
            OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(v6);
            *(_QWORD *)(*(_QWORD *)(v3 + 72 * i + 48) + 8 * j) = 0LL;
          }
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(v3 + 72 * i + 48));
        *(_QWORD *)(v3 + 72 * i + 48) = 0LL;
      }
    }
    v7 = (char *)*((_QWORD *)this + 2);
    if ( v7 )
    {
      v8 = v7 - 8;
      `vector destructor iterator'(
        v7,
        72LL,
        *((_QWORD *)v7 - 1),
        (void (__fastcall *)(char *))_OUTPUTDUPL_CONTEXTLIST::~_OUTPUTDUPL_CONTEXTLIST);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
    }
    *((_QWORD *)this + 2) = 0LL;
    *((_DWORD *)this + 19) = 0;
  }
}
