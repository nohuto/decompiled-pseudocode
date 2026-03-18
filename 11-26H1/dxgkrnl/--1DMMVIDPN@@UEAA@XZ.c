/*
 * XREFs of ??1DMMVIDPN@@UEAA@XZ @ 0x1403B91B8
 * Callers:
 *     ??_EDMMVIDPN@@UEAAPEAXI@Z @ 0x140055EA0 (--_EDMMVIDPN@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ??1DMMVIDPNTOPOLOGY@@UEAA@XZ @ 0x14001CC38 (--1DMMVIDPNTOPOLOGY@@UEAA@XZ.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x140039D50 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCESET@@@@QEAA@XZ @ 0x14005411C (--1-$auto_ptr@VDMMVIDPNSOURCESET@@@@QEAA@XZ.c)
 */

void __fastcall DMMVIDPN::~DMMVIDPN(DMMVIDPN *this)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // r8
  DMMVIDPN *v4; // rcx
  _QWORD *v5; // r9
  DMMVIDPN *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rax

  v1 = (_QWORD *)*((_QWORD *)this + 6);
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  if ( v1 )
  {
    if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(v1 + 5)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 544;
    }
    v3 = v1 + 20;
    v4 = 0LL;
    v5 = (_QWORD *)v1[20];
    v6 = (DMMVIDPN *)(v5 - 1);
    if ( v5 != v1 + 20 )
      v4 = (DMMVIDPN *)(v5 - 1);
    while ( v4 )
    {
      if ( v4 == this )
      {
        if ( v5 != v3 )
        {
          while ( v6 )
          {
            if ( v6 == v4 )
            {
              v11 = (_QWORD *)((char *)v4 + 8);
              v12 = *((_QWORD *)v4 + 1);
              if ( *(DMMVIDPN **)(v12 + 8) != (DMMVIDPN *)((char *)v4 + 8)
                || (v13 = (_QWORD *)*((_QWORD *)v4 + 2), (_QWORD *)*v13 != v11) )
              {
                __fastfail(3u);
              }
              *v13 = v12;
              *(_QWORD *)(v12 + 8) = v13;
              *v11 = 0LL;
              *((_QWORD *)v4 + 2) = 0LL;
              --v1[22];
              v14 = WdLogNewEntry5_WdTrace(v4, v13);
              *(_QWORD *)(v14 + 24) = this;
              *(_QWORD *)(v14 + 32) = v1;
              WdLogGlobalForLineNumber = 554;
              goto LABEL_14;
            }
            v7 = (_QWORD *)*((_QWORD *)v6 + 1);
            v6 = (DMMVIDPN *)(v7 - 1);
            if ( v7 == v3 )
              v6 = 0LL;
          }
        }
        break;
      }
      v15 = (_QWORD *)*((_QWORD *)v4 + 1);
      v4 = (DMMVIDPN *)(v15 - 1);
      if ( v15 == v3 )
        v4 = 0LL;
    }
    v8 = WdLogNewEntry5_WdTrace(v4, v6);
    *(_QWORD *)(v8 + 24) = this;
    *(_QWORD *)(v8 + 32) = v1;
    WdLogGlobalForLineNumber = 559;
LABEL_14:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = this;
    WdLogGlobalForLineNumber = 564;
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 537;
  }
  auto_ptr<DMMVIDPNSOURCESET>::~auto_ptr<DMMVIDPNSOURCESET>((__int64 *)this + 39);
  auto_ptr<DMMVIDPNSOURCESET>::~auto_ptr<DMMVIDPNSOURCESET>((__int64 *)this + 38);
  DMMVIDPNTOPOLOGY::~DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96));
  *((_DWORD *)this + 16) |= 0x6D640000u;
  *((_QWORD *)this + 7) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ReferenceCounted::~ReferenceCounted((DMMVIDPN *)((char *)this + 24));
  *(_QWORD *)this = &SetElement::`vftable';
}
