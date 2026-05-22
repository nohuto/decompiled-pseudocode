/*
 * XREFs of ?UpdateContactState@MagnifierRecognizer@@AEAAXPEBUPointerInputInfo@@@Z @ 0x1801B3060
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B24F0 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@1@AEBK@Z @ 0x180079664 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUContactState@MagnifierRecognizer@@U-$less@K@std.c)
 *     ??$_Try_emplace@K$$V@?$map@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@_N@1@$$QEAK@Z @ 0x1801B2AD8 (--$_Try_emplace@K$$V@-$map@KUContactState@MagnifierRecognizer@@U-$less@K@std@@V-$allocator@U-$pa.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1801B3008 (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 */

void __fastcall MagnifierRecognizer::UpdateContactState(MagnifierRecognizer *this, const struct PointerInputInfo *a2)
{
  __int64 v2; // r14
  __int64 v5; // rbx
  unsigned int v6; // r10d
  _DWORD *v7; // r12
  _DWORD *v8; // r13
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // rdx
  __int64 v15; // rbx
  unsigned int v16; // eax
  _BYTE v17[16]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v18[16]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h]
  __int128 v21; // [rsp+58h] [rbp-28h]
  __int128 v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+C0h] [rbp+40h] BYREF
  char v24; // [rsp+C8h] [rbp+48h] BYREF
  char v25; // [rsp+D0h] [rbp+50h] BYREF

  v2 = 0LL;
  for ( *((_DWORD *)this + 1) = 0; (unsigned int)v2 < *((_DWORD *)a2 + 79); v2 = (unsigned int)(v2 + 1) )
  {
    v5 = 144 * v2;
    if ( (*((_BYTE *)a2 + 144 * v2 + 332) & 4) != 0 )
    {
      ++*((_DWORD *)this + 1);
      v23 = *(_DWORD *)((char *)a2 + v5 + 324);
      std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Find_lower_bound<unsigned long>(
        (__int64 *)this + 2,
        &v19,
        &v23);
      if ( *(_BYTE *)(v20 + 25) || v6 < *(_DWORD *)(v20 + 32) || v20 == *((_QWORD *)this + 2) )
      {
        v9 = *((_QWORD *)a2 + 2);
        *((_QWORD *)&v21 + 1) = 0LL;
        *((_QWORD *)&v22 + 1) = 0LL;
        v7 = (_DWORD *)((char *)a2 + v5 + 376);
        v8 = (_DWORD *)((char *)a2 + v5 + 380);
        LODWORD(v21) = *v7;
        DWORD1(v21) = *v8;
        v10 = *MagnifierRecognizer::TimeFromPerfCount((__int64)this, (__int64)&v24, v9);
        v11 = *(_DWORD *)((char *)a2 + v5 + 324);
        *(_QWORD *)&v22 = v10;
        v23 = v11;
        v12 = (__int64 *)std::map<unsigned long,MagnifierRecognizer::ContactState>::_Try_emplace<unsigned long,>(
                           (__int64 *)this + 2,
                           (__int64)v17,
                           &v23);
        v13 = v22;
        v14 = *v12;
        *(_OWORD *)(v14 + 40) = v21;
        *(_OWORD *)(v14 + 56) = v13;
      }
      else
      {
        v7 = (_DWORD *)((char *)a2 + v5 + 376);
        v8 = (_DWORD *)((char *)a2 + v5 + 380);
      }
      v23 = *(_DWORD *)((char *)a2 + v5 + 324);
      v15 = *(_QWORD *)std::map<unsigned long,MagnifierRecognizer::ContactState>::_Try_emplace<unsigned long,>(
                         (__int64 *)this + 2,
                         (__int64)v18,
                         &v23);
      *(_DWORD *)(v15 + 48) = *v7;
      *(_DWORD *)(v15 + 52) = *v8;
      *(_QWORD *)(v15 + 64) = *MagnifierRecognizer::TimeFromPerfCount((__int64)this, (__int64)&v25, *((_QWORD *)a2 + 2));
    }
  }
  v16 = *((_DWORD *)this + 2);
  if ( v16 <= *((_DWORD *)this + 1) )
    v16 = *((_DWORD *)this + 1);
  *((_DWORD *)this + 2) = v16;
}
