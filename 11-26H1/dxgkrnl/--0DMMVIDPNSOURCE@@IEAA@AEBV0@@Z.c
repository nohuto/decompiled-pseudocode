/*
 * XREFs of ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x14002AB0C
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAA@AEBV0@@Z @ 0x14002A89C (--0-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QE.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAA@AEBV0@@Z @ 0x14002BAC0 (--0-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::DMMVIDPNSOURCE(DMMVIDPNSOURCE *this, const struct DMMVIDPNSOURCE *a2)
{
  int v2; // eax
  int v5; // edx
  int v6; // r8d
  __int64 Pool2; // rax
  unsigned __int8 (__fastcall ***v8)(_QWORD); // rbx
  unsigned __int8 (__fastcall ***v9)(_QWORD); // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // r14
  _QWORD *v16; // rbx
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // edx
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rbx
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rax

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
  *((_DWORD *)this + 14) = 1833173000;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 12);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  *((_QWORD *)this + 19) = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 256LL;
  *((_DWORD *)this + 22) = 1;
  Pool2 = ExAllocatePool2(256LL, 48LL, 1313891414LL);
  v8 = (unsigned __int8 (__fastcall ***)(_QWORD))Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 8) = 0;
    *(_QWORD *)Pool2 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
    *(_DWORD *)(Pool2 + 40) = 2;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 14);
  if ( v8 != v9 && v9 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v9)[2])(v9, 1LL);
  *((_QWORD *)this + 14) = v8;
  if ( !v8 )
  {
    WdLogSingleEntry2(6LL, this, *((unsigned int *)this + 6));
    WdLogGlobalForLineNumber = 1087;
    goto LABEL_43;
  }
  if ( !(**v8)(v8) )
  {
    WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
    v28 = *((_QWORD *)this + 14);
    WdLogGlobalForLineNumber = 1097;
    v27 = *(_DWORD *)(v28 + 8);
    goto LABEL_46;
  }
  if ( *((_QWORD *)a2 + 13) )
  {
    v10 = (_QWORD *)ExAllocatePool2(256LL, 152LL, 1313891414LL);
    v11 = v10;
    if ( v10 )
    {
      v12 = *((_QWORD *)a2 + 13);
      v10[1] = 0LL;
      v10[2] = 0LL;
      *v10 = &SetElement::`vftable';
      v10[3] = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
      DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>(
        v10 + 4,
        v12 + 32);
      *((_DWORD *)v11 + 20) = 0;
      v11[3] = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
      v11[11] = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
      *((_DWORD *)v11 + 24) = 1;
      *((_BYTE *)v11 + 136) = 1;
      v11[14] = 0LL;
      *((_DWORD *)v11 + 32) = 1833173004;
      *v11 = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
      v11[3] = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
      v11[11] = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
      v11[13] = &DMMVIDPNSOURCEMODESET::`vftable'{for `AggregatedBy<DMMVIDPNSOURCE>'};
      v11[15] = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v11[4])(v11 + 4) )
      {
        v15 = v11 + 6;
        v16 = (_QWORD *)v11[6];
        if ( v16 != v11 + 6 )
        {
          v17 = v16 - 1;
          while ( v17 )
          {
            if ( v17[5] )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 86;
            }
            v17[5] = v11;
            v18 = (_QWORD *)v17[1];
            v17 = v18 - 1;
            if ( v18 == v15 )
              v17 = 0LL;
          }
        }
        v19 = *(_QWORD *)(v12 + 144);
        if ( v19 )
        {
          if ( (_QWORD *)*v15 == v15 )
          {
            v20 = 0LL;
          }
          else
          {
            v20 = *v15 - 8LL;
            if ( *v15 != 8LL )
            {
              v21 = *(_DWORD *)(v19 + 24);
              do
              {
                if ( *(_DWORD *)(v20 + 24) == v21 )
                  break;
                v22 = *(_QWORD **)(v20 + 8);
                v20 = (__int64)(v22 - 1);
                if ( v22 == v15 )
                  v20 = 0LL;
              }
              while ( v20 );
            }
          }
          v11[18] = v20;
        }
        else
        {
          v11[18] = 0LL;
        }
      }
      else
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13) + 24) = *((int *)v11 + 10);
        WdLogGlobalForLineNumber = 657;
      }
    }
    else
    {
      v11 = 0LL;
    }
    v23 = (_QWORD *)*((_QWORD *)this + 13);
    if ( v23 && v11 != v23 )
      ReferenceCounted::Release((ReferenceCounted *)(v23 + 11));
    *((_QWORD *)this + 13) = v11;
    if ( v11 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v11[3])(v11 + 3) )
      {
        v24 = *((_QWORD *)this + 13);
        if ( *(_QWORD *)(v24 + 112) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 140;
        }
        *(_QWORD *)(v24 + 112) = this;
        goto LABEL_39;
      }
      WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
      v26 = *((_QWORD *)this + 13);
      WdLogGlobalForLineNumber = 1125;
      v27 = *(_DWORD *)(v26 + 40);
LABEL_46:
      *((_DWORD *)this + 18) = v27;
      return this;
    }
    WdLogSingleEntry2(6LL, this, *((unsigned int *)this + 6));
    WdLogGlobalForLineNumber = 1116;
LABEL_43:
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
LABEL_39:
  *((_DWORD *)this + 22) = 2;
  return this;
}
