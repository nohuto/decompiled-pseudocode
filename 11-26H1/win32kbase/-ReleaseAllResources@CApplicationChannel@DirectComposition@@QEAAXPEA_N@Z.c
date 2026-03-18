/*
 * XREFs of ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1400B4AC4
 * Callers:
 *     NtDCompositionReleaseAllResources @ 0x1400B3890 (NtDCompositionReleaseAllResources.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1400B4790 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400ADC68 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReleaseAllResources(struct _RTL_GENERIC_TABLE *this, bool *a2)
{
  PRTL_GENERIC_FREE_ROUTINE *i; // rdi
  unsigned __int64 v5; // rdi
  struct _LIST_ENTRY *Blink; // rdx
  PLIST_ENTRY OrderedPointer; // r8
  _QWORD *v8; // rax
  unsigned __int64 v9; // rcx
  struct DirectComposition::CResourceMarshaler *v10; // rax
  struct DirectComposition::CResourceMarshaler *v11; // r14
  __int64 v12; // rax
  struct _LIST_ENTRY *v13; // rdx
  size_t v14; // r8
  struct DirectComposition::CResourceMarshaler *v15; // rsi
  struct _RTL_SPLAY_LINKS *v16; // rsi
  PRTL_SPLAY_LINKS TableRoot; // rdx
  PRTL_SPLAY_LINKS v18; // rcx
  _QWORD *v19; // rax
  PRTL_GENERIC_ALLOCATE_ROUTINE AllocateRoutine; // rax
  __int64 v21; // rcx
  struct DirectComposition::CResourceMarshaler *v22; // rdi
  __int64 Src; // [rsp+40h] [rbp+8h] BYREF

  for ( i = &this[3].FreeRoutine;
        (char *)*i != (char *)i;
        DirectComposition::CApplicationChannel::ReleaseResource(
          this,
          (struct DirectComposition::CResourceMarshaler *)((char *)*i - 344)) )
  {
    ;
  }
  v5 = 0LL;
  while ( 1 )
  {
    Blink = this[1].InsertOrderList.Blink;
    if ( v5 >= (unsigned __int64)Blink )
      break;
    OrderedPointer = this[1].OrderedPointer;
    v8 = (char *)this->TableContext + v5 * (_QWORD)OrderedPointer;
    while ( 1 )
    {
      v9 = v5++;
      if ( *v8 )
        break;
      v8 = (_QWORD *)((char *)v8 + (_QWORD)OrderedPointer);
      if ( v5 >= (unsigned __int64)Blink )
        goto LABEL_17;
    }
    if ( !*(_QWORD *)((char *)this->TableContext + (_QWORD)OrderedPointer * v9) )
      break;
    v10 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
            (DirectComposition::CApplicationChannel *)this,
            v5);
    v11 = v10;
    if ( v10 )
    {
      v12 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v10 + 184LL))(v10);
      if ( v12 )
      {
        v15 = *(struct DirectComposition::CResourceMarshaler **)(v12 + 192);
        if ( v15 )
        {
          if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 120LL))(*(_QWORD *)(v12 + 192)) )
            DirectComposition::CApplicationChannel::ReleaseResource(this, v15);
        }
      }
      v13 = (struct _LIST_ENTRY *)(unsigned int)(v5 - 1);
      if ( (_DWORD)v5 )
      {
        if ( v13 < this[1].InsertOrderList.Blink )
        {
          v14 = (size_t)this[1].OrderedPointer;
          Src = 0LL;
          memmove((char *)this->TableContext + (_QWORD)v13 * v14, &Src, v14);
          --*(_QWORD *)&this[1].WhichOrderedElement;
        }
      }
      DirectComposition::CApplicationChannel::ReleaseResource(this, v11);
    }
  }
LABEL_17:
  v16 = 0LL;
  while ( 1 )
  {
    TableRoot = this[2].TableRoot;
    v18 = v16;
    if ( v16 < TableRoot )
    {
      v19 = (_QWORD *)((char *)this[1].AllocateRoutine + (_QWORD)v16 * (__int64)this[2].InsertOrderList.Flink);
      do
      {
        if ( *v19 )
          break;
        v18 = (PRTL_SPLAY_LINKS)((char *)v18 + 1);
        v19 = (_QWORD *)((char *)v19 + (unsigned __int64)this[2].InsertOrderList.Flink);
      }
      while ( v18 < TableRoot );
    }
    if ( v18 >= this[2].TableRoot )
      break;
    _mm_lfence();
    AllocateRoutine = this[1].AllocateRoutine;
    v16 = (struct _RTL_SPLAY_LINKS *)((char *)&v18->Parent + 1);
    v21 = (__int64)this[2].InsertOrderList.Flink * (_QWORD)v18;
    v22 = *(struct DirectComposition::CResourceMarshaler **)((char *)AllocateRoutine + v21);
    if ( v22 != (struct DirectComposition::CResourceMarshaler *)1 )
    {
      if ( !v22 )
        break;
      DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)((char *)AllocateRoutine
                                                                                              + v21));
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, struct _RTL_GENERIC_TABLE *))(*(_QWORD *)v22 + 208LL))(
        v22,
        this);
      DirectComposition::CApplicationChannel::ReleaseResource(this, v22);
    }
  }
  if ( a2 )
    *a2 = HIDWORD(this[7].TableContext) != 0;
}
