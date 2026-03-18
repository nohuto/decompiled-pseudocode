/*
 * XREFs of ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x14002B2A4
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAA@AEBV0@@Z @ 0x14002B010 (--0-$DoublyLinkedList@VDMMVIDPNTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QE.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAA@AEBV0@@Z @ 0x14002B77C (--0-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(DMMVIDPNTARGET *this, const struct DMMVIDPNTARGET *a2)
{
  int v2; // eax
  int v5; // edx
  int v6; // r8d
  __int64 v7; // rax
  __int64 Pool2; // rax
  unsigned __int8 (__fastcall ***v9)(_QWORD); // rbx
  unsigned __int8 (__fastcall ***v10)(_QWORD); // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // r14
  _QWORD *v17; // rbx
  _QWORD *v18; // rbx
  __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rbx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  int v25; // edx
  _QWORD *v26; // rax
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rax

  v2 = *((_DWORD *)a2 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v2;
  if ( v2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 240;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          240,
          v5,
          v6,
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
  v7 = *((_QWORD *)a2 + 12);
  *((_QWORD *)this + 12) = v7;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 22) = 1;
  _InterlockedAdd((volatile signed __int32 *)(v7 + 72), 1u);
  Pool2 = ExAllocatePool2(256LL, 48LL, 1313891414LL);
  v9 = (unsigned __int8 (__fastcall ***)(_QWORD))Pool2;
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
    v9 = 0LL;
  }
  v10 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v9 != v10 && v10 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v10)[2])(v10, 1LL);
  *((_QWORD *)this + 15) = v9;
  if ( !v9 )
  {
    WdLogSingleEntry2(6LL, this, *((unsigned int *)this + 6));
    WdLogGlobalForLineNumber = 1098;
    goto LABEL_30;
  }
  if ( !(**v9)(v9) )
  {
    WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
    v29 = *((_QWORD *)this + 15);
    WdLogGlobalForLineNumber = 1108;
    v28 = *(_DWORD *)(v29 + 8);
    goto LABEL_50;
  }
  if ( *((_QWORD *)a2 + 13) )
  {
    v11 = (_QWORD *)ExAllocatePool2(256LL, 152LL, 1313891414LL);
    v12 = v11;
    if ( v11 )
    {
      v13 = *((_QWORD *)a2 + 13);
      v11[1] = 0LL;
      v11[2] = 0LL;
      *v11 = &SetElement::`vftable';
      v11[3] = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
      DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>(
        v11 + 4,
        v13 + 32);
      *((_DWORD *)v12 + 20) = 0;
      v12[3] = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
      v12[11] = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
      *((_DWORD *)v12 + 24) = 1;
      *((_BYTE *)v12 + 136) = 1;
      v12[14] = 0LL;
      *((_DWORD *)v12 + 32) = 1833173005;
      *v12 = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
      v12[3] = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
      v12[11] = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
      v12[13] = &DMMVIDPNSOURCEMODESET::`vftable'{for `AggregatedBy<DMMVIDPNSOURCE>'};
      v12[15] = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v12[4])(v12 + 4) )
      {
        v16 = v12 + 6;
        v17 = (_QWORD *)v12[6];
        if ( v17 != v12 + 6 )
        {
          v18 = v17 - 1;
          while ( v18 )
          {
            if ( v18[5] )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 86;
            }
            v18[5] = v12;
            v23 = (_QWORD *)v18[1];
            v18 = v23 - 1;
            if ( v23 == v16 )
              v18 = 0LL;
          }
        }
        v19 = *(_QWORD *)(v13 + 144);
        if ( v19 )
        {
          if ( (_QWORD *)*v16 == v16 )
          {
            v24 = 0LL;
          }
          else
          {
            v24 = *v16 - 8LL;
            if ( *v16 != 8LL )
            {
              v25 = *(_DWORD *)(v19 + 24);
              do
              {
                if ( *(_DWORD *)(v24 + 24) == v25 )
                  break;
                v26 = *(_QWORD **)(v24 + 8);
                v24 = (__int64)(v26 - 1);
                if ( v26 == v16 )
                  v24 = 0LL;
              }
              while ( v24 );
            }
          }
          v12[18] = v24;
        }
        else
        {
          v12[18] = 0LL;
        }
      }
      else
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14) + 24) = *((int *)v12 + 10);
        WdLogGlobalForLineNumber = 665;
      }
    }
    else
    {
      v12 = 0LL;
    }
    v20 = (_QWORD *)*((_QWORD *)this + 13);
    if ( v20 && v12 != v20 )
      ReferenceCounted::Release((ReferenceCounted *)(v20 + 11));
    *((_QWORD *)this + 13) = v12;
    if ( v12 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v12[3])(v12 + 3) )
      {
        v21 = *((_QWORD *)this + 13);
        if ( *(_QWORD *)(v21 + 112) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 140;
        }
        *(_QWORD *)(v21 + 112) = this;
        goto LABEL_25;
      }
      WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
      v27 = *((_QWORD *)this + 13);
      WdLogGlobalForLineNumber = 1136;
      v28 = *(_DWORD *)(v27 + 40);
LABEL_50:
      *((_DWORD *)this + 18) = v28;
      return this;
    }
    WdLogSingleEntry2(6LL, this, *((unsigned int *)this + 6));
    WdLogGlobalForLineNumber = 1127;
LABEL_30:
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
LABEL_25:
  *((_DWORD *)this + 22) = 2;
  return this;
}
