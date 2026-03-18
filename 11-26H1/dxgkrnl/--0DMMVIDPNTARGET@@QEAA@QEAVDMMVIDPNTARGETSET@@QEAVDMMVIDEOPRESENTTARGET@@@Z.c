/*
 * XREFs of ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x14002CA68
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1402A7B08 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140344904 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ @ 0x14002CCFC (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(
        DMMVIDPNTARGET *this,
        struct DMMVIDPNTARGETSET *const a2,
        struct DMMVIDEOPRESENTTARGET *const a3)
{
  int v3; // eax
  int v7; // edx
  int v8; // r8d
  __int64 Pool2; // rax
  unsigned __int8 (__fastcall ***v10)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v11)(_QWORD); // rcx
  __int64 v13; // rax

  v3 = *((_DWORD *)a3 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v3;
  if ( v3 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 240;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          240,
          v7,
          v8,
          0LL,
          2,
          -1,
          (__int64)L"i_Id != D3DDDI_ID_UNINITIALIZED",
          240LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173001;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = a3;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 22) = 1;
  _InterlockedIncrement((volatile signed __int32 *)a3 + 18);
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 86;
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    WdLogSingleEntry2(2LL, (char *)this + 32, *((_QWORD *)this + 5));
    WdLogGlobalForLineNumber = 79;
  }
  Pool2 = ExAllocatePool2(256LL, 48LL, 1313891414LL);
  v10 = (unsigned __int8 (__fastcall ***)(_QWORD))Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 8) = 0;
    *(_QWORD *)Pool2 = &DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::`vftable';
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
    *(_DWORD *)(Pool2 + 40) = 2;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v10 != v11 && v11 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v11)[2])(v11, 1LL);
  *((_QWORD *)this + 15) = v10;
  if ( v10 )
  {
    if ( (**v10)(v10) )
    {
      DMMVIDPNTARGET::_SetEmptyCofuncModeSet(this);
      *((_DWORD *)this + 22) = 2;
    }
    else
    {
      WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
      v13 = *((_QWORD *)this + 15);
      WdLogGlobalForLineNumber = 772;
      *((_DWORD *)this + 18) = *(_DWORD *)(v13 + 8);
    }
  }
  else
  {
    WdLogSingleEntry2(6LL, this, *((unsigned int *)this + 6));
    WdLogGlobalForLineNumber = 762;
    *((_DWORD *)this + 18) = -1073741801;
  }
  return this;
}
