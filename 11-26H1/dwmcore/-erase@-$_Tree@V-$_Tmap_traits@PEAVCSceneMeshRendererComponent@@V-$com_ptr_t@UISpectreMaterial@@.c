/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAVCSceneMeshRendererComponent@@@Z @ 0x1802809C4
 * Callers:
 *     ?SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z @ 0x18020E800 (-SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z.c)
 *     ??1CSceneMeshRendererComponent@@MEAA@XZ @ 0x18027FE0C (--1CSceneMeshRendererComponent@@MEAA@XZ.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCSceneMeshRendererComponent@@@std@@V?$allocator@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCSceneMeshRendererComponent@@V?$com_ptr_t@UISpectreMaterial@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x180280904 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAVCSceneMeshRendererComponent@@V-$com_ptr_t@UISpectreMaterial@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::erase(
        __int64 a1,
        unsigned __int64 *a2)
{
  __int64 *v2; // r10
  __int64 *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(__int64 **)a1;
  v4 = *(__int64 **)a1;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v6 = v5;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *(_QWORD *)(v6 + 32) >= v7 )
      {
        if ( *((_BYTE *)v4 + 25) && v7 < *(_QWORD *)(v6 + 32) )
          v4 = (__int64 *)v6;
        v2 = (__int64 *)v6;
      }
      else
      {
        v6 += 16LL;
      }
      v6 = *(_QWORD *)v6;
    }
    while ( !*(_BYTE *)(v6 + 25) );
  }
  if ( !*((_BYTE *)v4 + 25) )
    v5 = *v4;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v8 = *a2;
    do
    {
      v9 = v5;
      if ( v8 >= *(_QWORD *)(v5 + 32) )
        v9 = (__int64)v4;
      v4 = (__int64 *)v9;
      if ( v8 >= *(_QWORD *)(v5 + 32) )
        v5 += 16LL;
      v5 = *(_QWORD *)v5;
    }
    while ( !*(_BYTE *)(v5 + 25) );
  }
  v11[0] = v2;
  v11[1] = v4;
  return std::_Tree<std::_Tmap_traits<CSceneMeshRendererComponent *,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>,std::less<CSceneMeshRendererComponent *>,std::allocator<std::pair<CSceneMeshRendererComponent * const,wil::com_ptr_t<ISpectreMaterial,wil::err_returncode_policy>>>,0>>::_Erase(
           a1,
           v11);
}
