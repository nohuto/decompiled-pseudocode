/*
 * XREFs of ?ProcessUpdateInputs@CFilterEffect@@AEAAJAEBV?$unordered_map@IUInput@CFilterEffect@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@@std@@@Z @ 0x1802677E0
 * Callers:
 *     ?OnUpdateIdChanged@CFilterEffect@@QEAAXXZ @ 0x180267614 (-OnUpdateIdChanged@CFilterEffect@@QEAAXXZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x180266F14 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 *     ?Add@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBIAEBQEAVInternalFilterInput@@@Z @ 0x180266F50 (-Add@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBI.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x18026729C (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?RemoveRange@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHHH@Z @ 0x18026799C (-RemoveRange@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffect::ProcessUpdateInputs(CResource *this, __int64 a2)
{
  unsigned int v2; // ebp
  char *v3; // rsi
  __int64 **v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rsi
  _DWORD *v8; // r15
  char *v9; // rsi
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  int v15; // r15d
  char *v17; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( *(_QWORD *)(a2 + 16) )
  {
    v5 = *(__int64 ***)(a2 + 8);
    v6 = *v5;
    while ( v6 != (__int64 *)v5 )
    {
      v7 = 0LL;
      v8 = v6 + 2;
      while ( v7 < *((int *)this + 82) )
      {
        if ( *(_DWORD *)(*((_QWORD *)this + 39) + 4 * v7) == *v8 )
        {
          if ( v7 != -1 )
          {
            v3 = *(char **)(*((_QWORD *)this + 40) + 8 * v7);
            goto LABEL_11;
          }
          break;
        }
        ++v7;
      }
      v3 = 0LL;
LABEL_11:
      if ( (v6[4] & 2) != 0 )
      {
        if ( v3 )
        {
          CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveRange(
            (char *)this + 312,
            (unsigned int)*v8);
          InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v3);
        }
      }
      else
      {
        if ( v3 )
        {
          CResource::UnRegisterNotifierInternal(this, *((struct CResource **)v3 + 3));
          v13 = *((_QWORD *)v3 + 3);
          v14 = v6[3];
          v15 = *((_DWORD *)v6 + 8);
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          *((_QWORD *)v3 + 3) = v14;
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          *(_DWORD *)v3 = v15;
          *(_OWORD *)(v3 + 4) = *(_OWORD *)((char *)v6 + 36);
        }
        else
        {
          v9 = (char *)operator new(0x20uLL);
          if ( !v9 )
          {
            v3 = 0LL;
            v12 = 713;
            goto LABEL_28;
          }
          v10 = v6[3];
          *(_DWORD *)v9 = *((_DWORD *)v6 + 8);
          *(_OWORD *)(v9 + 4) = *(_OWORD *)((char *)v6 + 36);
          *((_QWORD *)v9 + 3) = v10;
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
          v17 = v9;
          v11 = CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Add(
                  (__int64)this + 312,
                  (_DWORD *)v6 + 4,
                  &v17);
          v3 = v17;
          if ( !v11 )
          {
            v12 = 716;
LABEL_28:
            v2 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, v12, 0LL);
            CFilterEffect::EmptyFilterInputMap(this);
            break;
          }
        }
        CResource::RegisterNotifier(this, *((struct CResource **)v3 + 3));
      }
      v6 = (__int64 *)*v6;
      v3 = 0LL;
    }
  }
  if ( v3 )
    InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v3);
  return v2;
}
