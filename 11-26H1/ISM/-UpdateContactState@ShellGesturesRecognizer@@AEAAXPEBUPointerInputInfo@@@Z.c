/*
 * XREFs of ?UpdateContactState@ShellGesturesRecognizer@@AEAAXPEBUPointerInputInfo@@@Z @ 0x180064154
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180086670 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ?GetPointerInfoTimePoint@QpcTimeConverter@@QEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@PEBUtagPOINTER_INFO@@@Z @ 0x180052610 (-GetPointerInfoTimePoint@QpcTimeConverter@@QEBA-AV-$time_point@Usteady_clock@chrono@std@@V-$dura.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??$emplace@AEBIAEAUContactState@ShellGesturesRecognizer@@@?$_Hash@V?$_Umap_traits@KUContactState@ShellGesturesRecognizer@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@@std@@@std@@@std@@_N@1@AEBIAEAUContactState@ShellGesturesRecognizer@@@Z @ 0x18015DDB4 (--$emplace@AEBIAEAUContactState@ShellGesturesRecognizer@@@-$_Hash@V-$_Umap_traits@KUContactState.c)
 */

void __fastcall ShellGesturesRecognizer::UpdateContactState(__int64 this, const struct PointerInputInfo *a2)
{
  char *v2; // rsi
  char *v3; // r15
  int v4; // r10d
  _QWORD *v5; // r12
  char *v6; // rbx
  int v7; // r10d
  __int64 v8; // rax
  ShellGesturesRecognizer *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  _BYTE v17[16]; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v18[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h]
  __int64 v20; // [rsp+40h] [rbp-10h]
  __int64 v21; // [rsp+48h] [rbp-8h]
  int v22; // [rsp+90h] [rbp+40h] BYREF
  __int64 v23; // [rsp+98h] [rbp+48h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+50h] BYREF

  v4 = *(_DWORD *)(this + 100);
  v5 = (_QWORD *)(this + 200);
  v6 = (char *)a2 + 320;
  *(_DWORD *)(this + 120) = *(_DWORD *)(this + 96);
  v7 = v4 + 1;
  v8 = *(_QWORD *)(this + 112);
  *(_DWORD *)(this + 100) = v7;
  v9 = (ShellGesturesRecognizer *)this;
  *(_QWORD *)(this + 128) = v8;
  if ( *(_QWORD *)(this + 200) )
  {
    v10 = *((_QWORD *)a2 + 50) / *v5;
    v11 = *v5 * v10;
    v12 = *(_QWORD *)(this + 208) * v10;
    this = *(_QWORD *)(this + 208) * (*((_QWORD *)a2 + 50) - v11);
    v13 = v12 + (unsigned __int64)(v5[1] * (*((_QWORD *)a2 + 50) - v11)) / *v5;
  }
  else
  {
    v13 = 1000LL * *((unsigned int *)a2 + 96);
  }
  v14 = 1000 * v13;
  *((_QWORD *)v9 + 14) = v14;
  if ( v7 == 1 )
  {
    *((_QWORD *)v9 + 13) = v14;
    *((_QWORD *)v9 + 16) = v14;
  }
  *((_DWORD *)v9 + 24) = 0;
  if ( a2 != (const struct PointerInputInfo *)-320LL || !MEMORY[0xFFFFFFFFFFFFFFFC] )
  {
    v2 = &v6[144 * *((unsigned int *)a2 + 79)];
    goto LABEL_7;
  }
  _o_terminate(this);
  __debugbreak();
LABEL_18:
  v19 = 0LL;
  v21 = 0LL;
  v18[0] = *((_DWORD *)v6 + 14);
  v18[1] = *((_DWORD *)v6 + 15);
  v20 = *QpcTimeConverter::GetPointerInfoTimePoint(v5, &v24, (__int64)v6);
  v15 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ShellGesturesRecognizer::ContactState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>>,0>>::emplace<unsigned int const &,ShellGesturesRecognizer::ContactState &>(
                     v3,
                     v17,
                     v6 + 4,
                     v18);
  v23 = v15;
LABEL_10:
  *(_DWORD *)(v15 + 32) = *((_DWORD *)v6 + 14);
  *(_DWORD *)(v15 + 36) = *((_DWORD *)v6 + 15);
  if ( *v5 )
    v16 = *((_QWORD *)v6 + 10) / *v5 * *((_QWORD *)v9 + 26)
        + *((_QWORD *)v9 + 26) * (*((_QWORD *)v6 + 10) - *v5 * (*((_QWORD *)v6 + 10) / *v5)) / *v5;
  else
    v16 = 1000LL * *((unsigned int *)v6 + 16);
  *(_QWORD *)(v15 + 48) = 1000 * v16;
  while ( 1 )
  {
    v6 += 144;
LABEL_7:
    if ( v6 == v2 )
      break;
    if ( (v6[12] & 4) != 0 )
    {
      ++*((_DWORD *)v9 + 24);
      v3 = (char *)v9 + 136;
      v22 = *((_DWORD *)v6 + 1);
      std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
        (char *)v9 + 136,
        &v23,
        &v22);
      v15 = v23;
      if ( v23 == *((_QWORD *)v9 + 18) )
        goto LABEL_18;
      goto LABEL_10;
    }
  }
}
