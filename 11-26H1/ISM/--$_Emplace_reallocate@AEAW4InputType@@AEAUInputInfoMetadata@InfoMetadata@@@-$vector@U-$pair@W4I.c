/*
 * XREFs of ??$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@AEAAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@1@QEAU21@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@Z @ 0x1800876B8
 * Callers:
 *     ??$emplace_back@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAAAEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@1@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@Z @ 0x1801A8134 (--$emplace_back@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@-$vector@U-$pair@W4InputTyp.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_move@PEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@YAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x18007CFD8 (--$_Uninitialized_move@PEAU-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V-$allocat.c)
 *     ?_Change_array@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@AEAAXQEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@2@_K1@Z @ 0x180080ED4 (-_Change_array@-$vector@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V-$allocator.c)
 *     ??0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z @ 0x180081FB8 (--0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??1_Reallocation_guard@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAA@XZ @ 0x1801A81FC (--1_Reallocation_guard@-$vector@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V-$a.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall std::vector<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>::_Emplace_reallocate<enum InputType &,InfoMetadata::InputInfoMetadata &>(
        _QWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        const struct InfoMetadata::InputInfoMetadata *a4)
{
  __int64 v7; // r14
  __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  _DWORD *v13; // rdi
  _DWORD *v14; // r14
  _DWORD *v15; // rdx
  _DWORD *v16; // r8
  _DWORD *v17; // rcx
  _QWORD *v19; // [rsp+20h] [rbp-58h] BYREF
  _DWORD *v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  _DWORD *v22; // [rsp+38h] [rbp-40h]
  _DWORD *v23; // [rsp+40h] [rbp-38h]

  v7 = ((__int64)a2 - *a1) / 392;
  v8 = (a1[1] - *a1) / 392LL;
  if ( v8 == 0xA72F05397829CBLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v9 = v8 + 1;
  v10 = (a1[2] - *a1) / 392LL;
  v11 = v10 >> 1;
  if ( v10 <= 0xA72F05397829CBLL - (v10 >> 1) )
  {
    v12 = v9;
    if ( v11 + v10 >= v9 )
      v12 = v11 + v10;
    if ( v12 > 0xA72F05397829CBLL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v12 = 0xA72F05397829CBLL;
  }
  v13 = (_DWORD *)std::_Allocate<16,std::_Default_allocate_traits>(392 * v12);
  v14 = &v13[98 * v7];
  v19 = a1;
  v20 = v13;
  v21 = v12;
  v22 = v14 + 98;
  v23 = v14 + 98;
  *v14 = *a3;
  InfoMetadata::InputInfoMetadata::InputInfoMetadata((InfoMetadata::InputInfoMetadata *)(v14 + 2), a4);
  v22 = v14;
  v15 = (_DWORD *)a1[1];
  v16 = v13;
  v17 = (_DWORD *)*a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<std::pair<enum InputType,InfoMetadata::InputInfoMetadata> *,std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
      v17,
      a2,
      v13);
    v22 = v13;
    v16 = v14 + 98;
    v15 = (_DWORD *)a1[1];
    v17 = a2;
  }
  std::_Uninitialized_move<std::pair<enum InputType,InfoMetadata::InputInfoMetadata> *,std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
    v17,
    v15,
    v16);
  v20 = 0LL;
  std::vector<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>::_Change_array(a1, (__int64)v13, v9, v12);
  std::vector<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>::_Reallocation_guard::~_Reallocation_guard(&v19);
  return v14;
}
