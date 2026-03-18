/*
 * XREFs of _anonymous_namespace_::SealCurrentFrameSequence @ 0x180032404
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x180031DA0 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::__Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___ @ 0x18018D868 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--Animat.c)
 *     ??1?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x18018D8D4 (--1-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ.c)
 *     _anonymous_namespace_::FrameSequenceInfo::operator_ @ 0x18018D904 (_anonymous_namespace_--FrameSequenceInfo--operator_.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180199E68 (McTemplateU0xq_EventWriteTransfer.c)
 *     std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______ @ 0x1801AD824 (std--_Tree_node_std--pair__anonymous_namespace_--AnimationId_const__unsigned_int__void___--_Buyh.c)
 *     memcmp_0 @ 0x1802215A8 (memcmp_0.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

_UNKNOWN **anonymous_namespace_::SealCurrentFrameSequence()
{
  _UNKNOWN **result; // rax
  LARGE_INTEGER v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // ecx
  unsigned int v7; // edx
  unsigned __int64 v8; // r9
  _OWORD v9[5]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+78h] [rbp-90h]
  _BYTE v11[408]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v12[2]; // [rsp+220h] [rbp+118h] BYREF
  _QWORD v13[2]; // [rsp+230h] [rbp+128h] BYREF
  _BYTE v14[8]; // [rsp+240h] [rbp+138h] BYREF
  __int64 v15; // [rsp+248h] [rbp+140h]
  __int64 v16; // [rsp+250h] [rbp+148h]
  __int128 v17; // [rsp+258h] [rbp+150h]
  _UNKNOWN *retaddr; // [rsp+270h] [rbp+168h] BYREF

  result = &retaddr;
  if ( dword_1803DE388 )
  {
    memset_0(v9, 0, 0x58uLL);
    v1 = g_qpcFrequency;
    v2 = *((_QWORD *)&xmmword_1803DE4D0 + 1);
    v3 = xmmword_1803DE4D0;
    xmmword_1803DE980 = v9[0];
    xmmword_1803DE990 = v9[1];
    xmmword_1803DE9A0 = v9[2];
    xmmword_1803DE9B0 = v9[3];
    xmmword_1803DE9C0 = v9[4];
    qword_1803DE9D0 = v10;
    dword_1803DE3A0 = 1000
                    * ((*((_QWORD *)&xmmword_1803DE4D0 + 1) - (_QWORD)xmmword_1803DE4D0)
                     / g_qpcFrequency.QuadPart)
                    + (unsigned __int64)(1000
                                       * ((*((_QWORD *)&xmmword_1803DE4D0 + 1) - (_QWORD)xmmword_1803DE4D0)
                                        % g_qpcFrequency.QuadPart))
                    / g_qpcFrequency.QuadPart;
    if ( !memcmp_0(&xmmword_1803DE940, &GUID_NULL, 0x10uLL) )
    {
      v6 = dword_1803DE390;
      if ( (unsigned int)dword_1803DE390 > 0x37
        && (dword_1803DE384 & 0x100000) != 0
        && (Microsoft_Windows_Dwm_CoreEnableBits & 0x400000) != 0 )
      {
        McTemplateU0xq_EventWriteTransfer((unsigned int)dword_1803DE390, &EVTDESC_DIAGTRACK_TRIGGER, 16525050LL, 0LL);
        v6 = dword_1803DE390;
        v2 = *((_QWORD *)&xmmword_1803DE4D0 + 1);
        v3 = xmmword_1803DE4D0;
        v1 = g_qpcFrequency;
      }
      v7 = v6 + dword_1803DE9D8;
      dword_1803DE9D8 += v6;
      if ( qword_1803DE758 )
      {
        if ( v7 >= 0x30570 )
        {
          v8 = (unsigned __int64)(v2 - qword_1803DE758) / v1.QuadPart;
          if ( v8 + (unsigned __int64)(v2 - qword_1803DE758) % v1.QuadPart / v1.QuadPart < 0xE10
            && (Microsoft_Windows_Dwm_CoreEnableBits & 0x400000) != 0 )
          {
            McTemplateU0xq_EventWriteTransfer(v1.QuadPart * v8, &EVTDESC_DIAGTRACK_TRIGGER, 16525050LL, 1LL);
          }
        }
      }
      else
      {
        qword_1803DE758 = v3;
      }
    }
    else
    {
      dword_1803DE9D8 = 0;
      qword_1803DE758 = 0LL;
    }
    v17 = 0LL;
    memset_0(v11, 0, sizeof(v11));
    v12[1] = 0LL;
    v4 = std::_Allocate<16,std::_Default_allocate_traits>(0x28uLL);
    *(_QWORD *)v4 = v4;
    *(_QWORD *)(v4 + 8) = v4;
    *(_QWORD *)(v4 + 16) = v4;
    *(_WORD *)(v4 + 24) = 257;
    v12[0] = v4;
    v13[1] = 0LL;
    v5 = std::_Allocate<16,std::_Default_allocate_traits>(0x28uLL);
    *(_QWORD *)v5 = v5;
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)(v5 + 16) = v5;
    *(_WORD *)(v5 + 24) = 257;
    v13[0] = v5;
    v16 = 0LL;
    v15 = std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______();
    anonymous_namespace_::FrameSequenceInfo::operator_(&unk_1803DE300, v11);
    std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::__Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___(v14);
    std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::~_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>(v13);
    return (_UNKNOWN **)std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::~_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>(v12);
  }
  return result;
}
