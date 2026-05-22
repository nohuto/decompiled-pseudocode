/*
 * XREFs of ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@_N@Z @ 0x1801A0908
 * Callers:
 *     ?OnInputReport@InputInfoValidator@@QEAAJPEAUInputInfo@@_N@Z @ 0x1801A0840 (-OnInputReport@InputInfoValidator@@QEAAJPEAUInputInfo@@_N@Z.c)
 * Callees:
 *     ??0?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x1800886C4 (--0-$unordered_map@K_KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@.c)
 *     ??1?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18008A6D8 (--1-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to.c)
 *     ?count@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800AE980 (-count@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compare@KU-$h.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??$_Insert_or_assign@AEBKAEAUPointerState@InputInfoValidator@@@?$unordered_map@KUPointerState@InputInfoValidator@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@4@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUPointerState@InputInfoValidator@@@Z @ 0x1801A064C (--$_Insert_or_assign@AEBKAEAUPointerState@InputInfoValidator@@@-$unordered_map@KUPointerState@In.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1801A0BD4 (-clear@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputInfoValidator::ValidatePointerInput(
        InputInfoValidator *this,
        struct PointerInputInfo *a2,
        char a3)
{
  unsigned int v5; // esi
  unsigned int i; // r14d
  int v7; // r12d
  int v8; // edi
  int v9; // ebx
  char v10; // di
  const unsigned __int8 **v12; // rdi
  const unsigned __int8 *j; // rbx
  _BOOL8 v14; // rax
  __int64 *v15; // rdi
  __int64 *k; // rbx
  __int64 v17; // [rsp+20h] [rbp-60h] BYREF
  int v18; // [rsp+28h] [rbp-58h]
  _BYTE v19[16]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v21; // [rsp+48h] [rbp-38h]
  __int64 v22; // [rsp+C8h] [rbp+48h] BYREF
  int v23; // [rsp+D0h] [rbp+50h] BYREF
  __int64 *v24; // [rsp+D8h] [rbp+58h] BYREF

  LOBYTE(v23) = a3;
  std::unordered_map<unsigned long,unsigned __int64>::unordered_map<unsigned long,unsigned __int64>((__int64)&v20);
  v5 = 0;
  for ( i = 0; i < *((_DWORD *)a2 + 79); ++i )
  {
    v7 = *((_DWORD *)a2 + 36 * i + 81);
    LODWORD(v22) = v7;
    v8 = *((_DWORD *)a2 + 36 * i + 83);
    HIDWORD(v22) = v8;
    v23 = v7;
    std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
      &v20,
      &v24,
      (const unsigned __int8 *)&v23);
    if ( v24 != v21 )
      goto LABEL_6;
    v9 = v8 & 2;
    if ( (v8 & 4) != 0 )
    {
      v10 = 1;
      if ( !v9 )
        goto LABEL_6;
    }
    else
    {
      v10 = 0;
    }
    v23 = v7;
    std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
      (_QWORD *)this + 2,
      &v17,
      (const unsigned __int8 *)&v23);
    if ( (v17 == *((_QWORD *)this + 3)
       || (*(_QWORD *)(v17 + 20) & 0x200000000LL) == 0 && (*(_QWORD *)(v17 + 20) & 0x400000000LL) == 0)
      && !v9
      && !v10 )
    {
LABEL_6:
      v5 = -2147467259;
      goto LABEL_7;
    }
    v23 = v7;
    std::unordered_map<unsigned long,InputInfoValidator::PointerState>::_Insert_or_assign<unsigned long const &,InputInfoValidator::PointerState &>(
      &v20,
      (__int64)v19,
      (unsigned __int8 *)&v23,
      &v22);
  }
  v12 = (const unsigned __int8 **)*((_QWORD *)this + 3);
  for ( j = *v12; j != (const unsigned __int8 *)v12; j = *(const unsigned __int8 **)j )
  {
    v14 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::count(
            (__int64)&v20,
            j + 20);
    if ( (j[24] & 2) != 0 && !v14 )
      goto LABEL_6;
  }
  std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::clear((char *)this + 16);
  v15 = v21;
  for ( k = (__int64 *)*v21; k != v15; k = (__int64 *)*k )
  {
    v17 = k[2];
    v18 = *((_DWORD *)k + 6);
    std::unordered_map<unsigned long,InputInfoValidator::PointerState>::_Insert_or_assign<unsigned long const &,InputInfoValidator::PointerState &>(
      (_QWORD *)this + 2,
      (__int64)v19,
      (unsigned __int8 *)&v17 + 4,
      (__int64 *)((char *)&v17 + 4));
  }
LABEL_7:
  std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>(&v20);
  return v5;
}
