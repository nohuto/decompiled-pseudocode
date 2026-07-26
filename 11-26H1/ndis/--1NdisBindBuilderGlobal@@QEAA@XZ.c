/*
 * XREFs of ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x14014D2D0
 * Callers:
 *     ?ndisBindBuilderCleanup@@YAXXZ @ 0x14014DEA4 (-ndisBindBuilderCleanup@@YAXXZ.c)
 * Callees:
 *     ??1LwfBindProperties@@QEAA@XZ @ 0x1400E60E4 (--1LwfBindProperties@@QEAA@XZ.c)
 *     ??1ProtocolBindProperties@@QEAA@XZ @ 0x1400E61E4 (--1ProtocolBindProperties@@QEAA@XZ.c)
 *     ??1?$KStringAtomTableBase@$00@Rtl@@QEAA@XZ @ 0x14014D154 (--1-$KStringAtomTableBase@$00@Rtl@@QEAA@XZ.c)
 */

void __fastcall NdisBindBuilderGlobal::~NdisBindBuilderGlobal(NdisBindBuilderGlobal *this)
{
  void *v2; // rcx
  unsigned int i; // edi
  unsigned int j; // edi
  unsigned int k; // edi

  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x7272414Bu);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( *((_QWORD *)this + 8) )
  {
    for ( i = *((_DWORD *)this + 15);
          i;
          LwfBindProperties::~LwfBindProperties((LwfBindProperties *)(*((_QWORD *)this + 8) + ((unsigned __int64)i << 6))) )
    {
      --i;
    }
    ExFreePoolWithTag(*((PVOID *)this + 8), 0x7272414Bu);
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  if ( *((_QWORD *)this + 6) )
  {
    for ( j = *((_DWORD *)this + 11);
          j;
          LwfBindProperties::~LwfBindProperties((LwfBindProperties *)(*((_QWORD *)this + 6) + ((unsigned __int64)j << 6))) )
    {
      --j;
    }
    ExFreePoolWithTag(*((PVOID *)this + 6), 0x7272414Bu);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( *((_QWORD *)this + 4) )
  {
    for ( k = *((_DWORD *)this + 7);
          k;
          ProtocolBindProperties::~ProtocolBindProperties((ProtocolBindProperties *)(*((_QWORD *)this + 4)
                                                                                   + ((unsigned __int64)k << 6))) )
    {
      --k;
    }
    ExFreePoolWithTag(*((PVOID *)this + 4), 0x7272414Bu);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  Rtl::KStringAtomTableBase<1>::~KStringAtomTableBase<1>((__int64)this);
}
